/**********************************************************************
 * 
 * MQMprob.h
 *
 * copyright (c) 2009 Danny Arends
 * last modified Feb, 2009
 * first written Feb, 2009
 *
 *     This program is free software; you can redistribute it and/or
 *     modify it under the terms of the GNU General Public License,
 *     version 3, as published by the Free Software Foundation.
 * 
 *     This program is distributed in the hope that it will be useful,
 *     but without any warranty; without even the implied warranty of
 *     merchantability or fitness for a particular purpose.  See the GNU
 *     General Public License, version 3, for more details.
 * 
 *     A copy of the GNU General Public License, version 3, is available
 *     at http://www.r-project.org/Licenses/GPL-3
 *
 * C external functions used by the MQM algorithm
 * Contains (stabile): prob, start_prob, probright
 * Contains (unstabile): create_lookup_table, probnew
 *
 **********************************************************************/

void create_lookup_table(double ***MendelM,int Nmark,vector r,char crosstype);

double probnew(double ***MendelM,cmatrix loci, vector r, int i, int j,char c,char crosstype,int JorC,int ADJ,int start);

double probright(char c, int jloc, cvector imarker, vector r, cvector position,char crosstype);

double prob(cmatrix loci, vector r,int i,int j,char c,char crosstype,int JorC,int ADJ,int start);

double start_prob(char crosstype,char c);

/* end of MQMprob.h */
