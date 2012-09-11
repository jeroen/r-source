/*
 *  R : A Computer Language for Statistical Data Analysis
 *  Copyright (C) 2012  The R Core Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, a copy is available at
 *  http://www.r-project.org/Licenses/
 */

#ifdef ENABLE_NLS
#include <libintl.h>
#define _(String) dgettext ("stats", String)
#else
#define _(String) (String)
#endif

SEXP objectSize(SEXP s);
SEXP unzip(SEXP args);
SEXP Rprof(SEXP args);
SEXP Rprofmem(SEXP args);

SEXP countfields(SEXP args);
SEXP typecvt(SEXP call, SEXP op, SEXP args, SEXP env);
SEXP menu(SEXP args);
SEXP readtablehead(SEXP args);
SEXP writetable(SEXP call, SEXP op, SEXP args, SEXP env);

SEXP crc64(SEXP in);
SEXP nsl(SEXP hostname);

SEXP sockconnect(SEXP sport, SEXP shost);
SEXP sockread(SEXP sport, SEXP smaxlen);
SEXP sockclose(SEXP sport);
SEXP sockopen(SEXP sport);
SEXP socklisten(SEXP sport);
SEXP sockwrite(SEXP sport, SEXP sstring);

SEXP addhistory(SEXP call, SEXP op, SEXP args, SEXP rho);
SEXP loadhistory(SEXP call, SEXP op, SEXP args, SEXP rho);
SEXP savehistory(SEXP call, SEXP op, SEXP args, SEXP rho);
