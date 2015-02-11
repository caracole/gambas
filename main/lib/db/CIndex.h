/***************************************************************************

  CIndex.h

  (c) 2000-2013 Benoît Minisini <gambas@users.sourceforge.net>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2, or (at your option)
  any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
  MA 02110-1301, USA.

***************************************************************************/

#ifndef __CINDEX_H
#define __CINDEX_H

#include "gambas.h"
#include "gb.db.h"
#include "CTable.h"

#ifndef __CINDEX_C
extern GB_DESC CTableIndexesDesc[];
extern GB_DESC CIndexDesc[];
#else

#define THIS ((CINDEX *)_object)

#endif

typedef
  struct {
    GB_BASE ob;
    DB_DRIVER *driver;
    CTABLE *table;
    char *name;
    DB_INDEX info;
    }
  CINDEX;

void *CINDEX_get(CTABLE *table, const char *name);
int CINDEX_exist(CTABLE *table, const char *name);
void CINDEX_list(CTABLE *table, char ***list);
void CINDEX_release(CTABLE *table, void *_object);

#endif

