/*
 * Copyright (c) [2004-2011] Novell, Inc.
 *
 * All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, contact Novell, Inc.
 *
 * To contact Novell about this file by physical or electronic mail, you may
 * find current contact information at www.novell.com.
 */


#ifndef SNAPPER_DEFINES_H
#define SNAPPER_DEFINES_H


#define SYSCONFIGFILE "/etc/sysconfig/snapper"

#define CONFIGSDIR "/etc/snapper/configs"
#define CONFIGTEMPLATEDIR "/etc/snapper/config-templates"

#define FILTERSDIR "/etc/snapper/filters"

#define SNAPSHOTDIR "/snapshot"
#define SNAPSHOTSDIR "/.snapshots"

#define EXT4DEVBIN "/sbin/snapshot.ext4dev"

#define COMPAREDIRSBIN "/usr/lib/snapper/bin/compare-dirs"

#define NICEBIN "/usr/bin/nice"
#define IONICEBIN "/usr/bin/ionice"

#define CPBIN "/bin/cp"

#define DIFFBIN "/usr/bin/diff"

#define MKDIRBIN "/bin/mkdir"

#define RMDIRBIN "/bin/rmdir"

#endif
