/*
 * Copyright (C) 2014 Freek van Tienen
 *
 * This file is part of paparazzi.
 *
 * paparazzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * paparazzi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with paparazzi; see the file COPYING.  If not, write to
 * the Free Software Foundation, 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

/** \file follow.h
 *  \brief Follow a certain AC id
 */

#ifndef FOLLOW_H
#define FOLLOW_H

extern void follow_init( void );
extern void follow_change_wp( unsigned char* buffer );

#define ParseRemoteGps() { \
  if (DL_REMOTE_GPS_ac_id(dl_buffer) == FOLLOW_AC_ID) { \
    follow_change_wp(dl_buffer); \
  } \
}

#endif // FOLLOW
