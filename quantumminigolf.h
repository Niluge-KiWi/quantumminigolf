/*	Quantum Minigolf, a computer game illustrating quantum mechanics
	Copyright (C) 2007 Friedemann Reinhard <friedemann.reinhard@gmail.com>

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/


#include <stdlib.h>
#include <math.h>

// in windows, math.h does not define pi. Great !
// Copied from /usr/include/math.h
#ifndef M_PI
#define M_PI		3.14159265358979323846  /* pi */
#endif

#define QMG_WIN 0
#define QMG_LOSE 1

#ifndef QDATADIR
#define QDATADIR "."
#endif

#ifndef TRACKSDIR
#define TRACKSDIR QDATADIR "/tracks"
#endif

#ifndef GFXDIR
#define GFXDIR QDATADIR "/gfx"
#endif

#ifndef FONTSDIR
#define FONTSDIR QDATADIR "/fonts"
#endif
