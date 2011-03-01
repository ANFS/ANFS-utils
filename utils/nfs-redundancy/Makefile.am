## Process this file with automake to produce Makefile.in

#man5_MANS	= exports.man
#man7_MANS	= nfsd.man
#man8_MANS	= exportfs.man

#EXTRA_DIST	= $(man5_MANS) $(man7_MANS) $(man8_MANS)
sbin_PROGRAMS	= nfs-redundancy
exportfs_SOURCES = nfs-redundancy.c
exportfs_LDADD = ../../support/redundancy/libnfs_redundancy.a \
		 $(LIBWRAP) $(LIBNSL)

MAINTAINERCLEANFILES = Makefile.in
