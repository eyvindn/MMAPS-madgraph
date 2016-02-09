################################################################################
#  
#  Copyright (C) 2012-2013 Eric Conte, Benjamin Fuks
#  The MadAnalysis development team, email: <ma5team@iphc.cnrs.fr>
#  
#  This file is part of MadAnalysis 5.
#  Official website: <https://launchpad.net/madanalysis5>
#  
#  MadAnalysis 5 is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, either version 3 of the License, or
#  (at your option) any later version.
#  
#  MadAnalysis 5 is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with MadAnalysis 5. If not, see <http://www.gnu.org/licenses/>
#  
################################################################################


import madanalysis.IOinterface.text_file_writer as TextFileWriter
from madanalysis.enumeration.color_type import ColorType
from madanalysis.enumeration.font_type import FontType
from madanalysis.enumeration.script_type import ScriptType
from madanalysis.IOinterface.text_report import TextReport

import logging
import time
import os
import pwd

class LATEXReportWriter(TextFileWriter.TextFileWriter):
    """Generate LaTeX report"""

    def __init__(self,filename,stylepath,pdflatex=False):
        TextFileWriter.TextFileWriter.__init__(self,filename)
        self.pdflatex=pdflatex
        self.bullet=0
        self.table=0
        self.current_col=0
        self.number_col=0
        self.first_cell=True
        self.ext=''
        self.firstselection=True
        dirname = filename[:-8]

        if pdflatex==False:
            self.ext='.eps'
        else:
            self.ext='.png'

        if os.path.isfile(stylepath+'/jheppub.sty'):
            os.system('cp ' + stylepath + '/jheppub.sty ' + dirname)
        else:
            logging.error('jheppub.sty not found. Cannot generate a latex report.')


    @staticmethod    
    def CheckStructure(dirname):
        if not os.path.isdir(dirname):
            return False
        if not os.path.isfile(dirname+'/main.tex'):
            return False
        if not os.path.isfile(dirname+'/jheppub.sty'):
            return False
        if not os.path.isfile(dirname+'/logo.png') and \
           not os.path.isfile(dirname+'/logo.eps'):
            return False
        return True

    def WriteHeader(self):
        self.file.write('% '.ljust(79,'-')+'\n')
        self.file.write('% ' + 'HEADER'.center(78)+'\n')
        self.file.write('% '.ljust(79,'-')+'\n')
        self.file.write('\\documentclass[a4paper, 11pt]{article}\n')
        self.file.write('\\usepackage{jheppub}\n')
        self.file.write('\\usepackage[T1]{fontenc}\n')
        self.file.write("\\usepackage{colortbl}\n")
        self.file.write('\\definecolor{orange}{rgb}{1,0.5,0}\n')
        self.file.write('% '.ljust(79,'-')+'\n')
        self.file.write('% ' + 'COVER PAGE'.center(78)+'\n')
        self.file.write('% '.ljust(79,'-')+'\n')

    def WriteTitle(self,title):
        self.file.write('\\title{{\\includegraphics[scale=.4]{')
        self.file.write('logo'+self.ext+'}}\\ The LaTeX report}\n\n')
        try:
            mydate = str(time.strftime("%d %B %Y, %H:%M:%S"))
        except:
            mydate = 'date/hour not accessible'
        try:
            mylogin = pwd.getpwuid(os.getuid())[0]
        except:
            mylogin = 'unknown' 
        self.file.write('\\author{Generated by ' + mylogin + \
           ' on ' + mydate + '}\n\n')
        self.file.write('\\abstract{\n')
        self.file.write('  This report has been generated automatically\n')
        self.file.write('  by {\\sc MadAnalysis} 5.\\\\$~$\\\\ \n')
        self.file.write('  Please cite:\\\\ \n  \\begin{quote}\n')
        self.file.write('    \\textbf{E.~Conte, B.~Fuks and G.~Serret},\\\\ \n')
        self.file.write('    \\textit{MadAnalysis 5, A User-Friendly\n')
        self.file.write('    Framework for Collider Phenomenology},\\\\ \n')
        self.file.write('    Comput. Phys. Commun. {\\bf 184} (2013) 222-256,')
        self.file.write('\\\\\n')
        self.file.write('    arXiv:1206.1599 [hep-ph].\\\\ \n  \\end{quote}\n')
        self.file.write('  To contact us:\\\\ \n  \\begin{quote}\n')
        self.file.write('    \\textbf{http://madanalysis.irmp.ucl.ac.be}\\\\\n')
        self.file.write('    \\textbf{ma5team@iphc.cnrs.fr}\\\\\n')
        self.file.write('  \\end{quote}\n}\n\n')
        self.file.write('% '.ljust(79,'-')+'\n')
        self.file.write('% ' + 'BEGIN DOCUMENT'.center(78)+'\n')
        self.file.write('% '.ljust(79,'-')+'\n')
        self.file.write('\\begin{document}\n')
        self.file.write('\\maketitle\n')
        self.file.write('\\flushbottom\n\n')

    def WriteSpacor(self):
        self.file.write("\\newpage\n")

    def WriteVspace(self):
        self.file.write("\\vspace{1cm}\n")

    def WriteSubTitle(self,subtitle):
        self.file.write('% '.ljust(79,'-')+'\n')
        self.file.write('% ' + ('SECTION ' + subtitle).center(78)+'\n')
        self.file.write('% '.ljust(79,'-')+'\n')
        self.file.write('\\newpage\n')
        text=TextReport()
        text.Add(subtitle)
        self.file.write('\\section{')
        text.WriteLATEX(self.file)
        self.file.write('}\n\n')
        text.Reset()

    def WriteSubSubTitle(self,subsubtitle):
        if( subsubtitle.find('Histogram')!=-1 or subsubtitle.find('Cut')!=-1 ):
            if self.firstselection:
                self.firstselection=False
            else: 
                self.file.write('\\newpage\n')
        text=TextReport()
        text.Add(subsubtitle)
        self.file.write('\\subsection{')
        text.WriteLATEX(self.file)
        self.file.write('}\n\n')
        text.Reset()

    def WriteText(self,text):
         if self.bullet!=0:
            self.file.write("  \\item")
         text.WriteLATEX(self.file)
                  
    def OpenBullet(self):
        self.bullet=self.bullet+1
        self.file.write("\\begin{itemize}\n")

    def CloseBullet(self):
        self.bullet=self.bullet-1
        self.file.write("\n\\end{itemize}\n")

    def CreateTable(self,col,caption):
        self.table=self.table+1
        self.number_col=len(col)
        self.file.write("\\begin{table}[!h]\n  \\begin{center}\n")
        if caption.table != []:
            self.file.write("    \\caption{")
            self.WriteText(caption)
            self.file.write("}\n")
        self.file.write("    \\begin{tabular}{|")
        for item in col: 
            size = round(item/sum(col)*130,0)
            self.file.write("m{"+str(size)+"mm}|")
        self.file.write("}\n      \\hline\n")

    def NewCell(self,color=ColorType.WHITE):
        self.current_col=self.current_col+1

        if  self.current_col>self.number_col:
            logging.warning("The number of the current column is larger than the total number of declared columns.")
        if self.first_cell==True:
            self.file.write("      \\cellcolor{"+ColorType.convert2string(color)+"}")
            self.first_cell=False
        else:
            self.file.write("& \\cellcolor{"+ColorType.convert2string(color)+"}")
            
    def NewLine(self):
        self.current_col=0
        self.first_cell=True
        self.file.write("\\\\\n      \\hline\n")
        
    def EndLine(self):
        self.current_col=0
        self.first_cell=True
        self.file.write("\\\\\n")
        
    def EndTable(self):
        self.table=self.table-1
        self.file.write('\\hline\n    \\end{tabular}\n')
        self.file.write('  \\end{center}\n\\end{table}\n\n')


    def WriteFigure(self,caption,filename):
        thefile = os.path.normpath(filename)
        if os.path.isfile(thefile+self.ext):
            scale=0.60
            self.file.write('\\begin{figure}[!h]\n  \\begin{center}\n')
            self.file.write('    \\includegraphics[scale='+str(scale)+']{'+\
                  os.path.basename(filename)+self.ext+'}\\\\\n\\caption{')
            self.WriteText(caption)
            self.file.write("}\n  \\end{center}\n\\end{figure}\n")
            self.WriteSpacor()
        else:
            logging.warning(thefile+self.ext+" does not exist.")
        
    def WriteFoot(self):
        if self.bullet!=0:
            logging.warning("the number of 'OpenBullet()' and 'CloseBullet()' are different.")
        if self.table!=0:
            logging.warning("there is an open table. Please check for a missing 'EndTable()' tag.")
        self.file.write("\\end{document}\n")
