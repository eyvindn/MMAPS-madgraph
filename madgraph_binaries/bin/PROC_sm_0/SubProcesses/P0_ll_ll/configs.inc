C     Diagram 1
      DATA MAPCONFIG(1)/1/
      DATA (IFOREST(I,-1,1),I=1,2)/4,3/
      DATA (SPROP(I,-1,1),I=1,1)/22/
      DATA TPRID(-1,1)/0/
C     Diagram 2
      DATA MAPCONFIG(2)/2/
      DATA (IFOREST(I,-1,2),I=1,2)/4,3/
      DATA (SPROP(I,-1,2),I=1,1)/23/
      DATA TPRID(-1,2)/0/
C     Diagram 3
      DATA MAPCONFIG(3)/3/
      DATA (IFOREST(I,-1,3),I=1,2)/1,3/
      DATA TPRID(-1,3)/22/
      DATA (SPROP(I,-1,3),I=1,1)/0/
      DATA (IFOREST(I,-2,3),I=1,2)/-1,4/
C     Diagram 4
      DATA MAPCONFIG(4)/4/
      DATA (IFOREST(I,-1,4),I=1,2)/1,3/
      DATA TPRID(-1,4)/23/
      DATA (SPROP(I,-1,4),I=1,1)/0/
      DATA (IFOREST(I,-2,4),I=1,2)/-1,4/
C     Number of configs
      DATA MAPCONFIG(0)/4/
