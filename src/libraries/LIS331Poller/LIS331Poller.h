/* Copyright 2011 David Irvine
 * 
 * This file is part of Loguino
 *
 * Loguino is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Loguino is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 
 * You should have received a copy of the GNU General Public License
 * along with Loguino.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * $Rev$:   
 * $Author$: 
 * $Date$:  
 
 */
#ifndef LIS331POLLER_H
#define LIS331POLLER_H

#include <Arduino.h>
#include <config.h>
#ifdef ENABLE_LIS331_POLLER

#include <message.h>
#include <logger.h>
#include <LIS331.h>

#ifndef LIS_BUS_ADDRESS
#error LIS_BUS_ADDRESS must be set to the address of the LIS331 device
#endif
class LIS331Poller{
	public:
		static void begin();
		static void poll();
	private:
		static LIS331 lis;
};




#endif
#endif
