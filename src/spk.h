/*
This file is part of UFO2000 (http://ufo2000.sourceforge.net)

Copyright (C) 2000-2001  Alexander Ivanov aka Sanami
Copyright (C) 2002       ufo2000 development team

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
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/
#ifndef SPK_H
#define SPK_H

class SPK
{
private:
	unsigned char *m_dat;
	int m_datlen;

	BITMAP *spk2bmp(int _pal);

public:
	SPK();
	SPK(const char *fname);
	~SPK();

	void load(const char *fname);
	void show(BITMAP *_dest, int _x, int _y);
	void show_pal2(BITMAP *_dest, int _x, int _y);
	void show_strech(BITMAP *_dest, int _x, int _y, int _w, int _h);

	void show_pck(BITMAP *_dest, int _x, int _y);
};

#endif
