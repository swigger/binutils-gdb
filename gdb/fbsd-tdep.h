/* Target-dependent code for FreeBSD, architecture independent.

   Copyright (C) 2009-2018 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef FBSD_TDEP_H
#define FBSD_TDEP_H

extern void fbsd_init_abi (struct gdbarch_info info, struct gdbarch *gdbarch);

/* Helper function to generate mappings flags for a single VM map
   entry in 'info proc mappings'.  The KVE_FLAGS and KVE_PROTECTION
   parameters should contain the values of the corresponding fields in
   a 'struct kinfo_vmentry'.  */

extern const char *fbsd_vm_map_entry_flags (int kve_flags, int kve_protection);

#endif /* fbsd-tdep.h */
