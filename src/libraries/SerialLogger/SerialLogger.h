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
// Always use an include guard.
#ifndef SERIALOUT_H
#define SERIALOUT_H

// Include Arduino.h and config.h first.
#include <Arduino.h>
#include <config.h>
// Use another ifdef to insure code is only compiled if it is activated.
#ifdef ENABLE_SERIAL_OUTPUT
#include <message.h>

// Use doxygen to document all code.
/**
 * Logs messages to the specified serial device.  
 */
class SerialLogger{
	public:
		static void log();
		static void begin();
		static void flush();
};

#endif
#endif
