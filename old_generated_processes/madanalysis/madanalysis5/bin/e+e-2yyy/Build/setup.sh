#!/bin/sh

# Defining colours for shell
GREEN="\\033[1;32m"
RED="\\033[1;31m"
PINK="\\033[1;35m"
BLUE="\\033[1;34m"
YELLOW="\\033[1;33m"
CYAN="\\033[1;36m"
NORMAL="\\033[0;39m"

# Configuring MA5 environment variable
export MA5_BASE=/media/sf_darkphotons/madanalysis/madanalysis5

# Configuring PATH environment variable
if [ $PATH ]; then
export PATH=$PATH:/usr/local/root/5.34.09/bin
else
export PATH=/usr/local/root/5.34.09/bin
fi

# Configuring LD_LIBRARY_PATH environment variable
if [ $LD_LIBRARY_PATH ]; then
export LD_LIBRARY_PATH=$MA5_BASE/tools/SampleAnalyzer/Lib/:$LD_LIBRARY_PATH:/usr/local/root/5.34.09/lib/root:/usr/lib64
else
export LD_LIBRARY_PATH=$MA5_BASE/tools/SampleAnalyzer/Lib/:/usr/local/root/5.34.09/lib/root:/usr/lib64
fi

# Checking that all environment variables are defined
if [[ $MA5_BASE && $PATH && $LD_LIBRARY_PATH ]]; then
echo -e $YELLOW"--------------------------------------------------------"
echo -e "    Your environment is properly configured for MA5     "
echo -e "--------------------------------------------------------"$NORMAL
fi
