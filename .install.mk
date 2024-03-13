################################################################################
# 42 Installer
################################################################################
ifneq ($(includedir),)
NAME						:= $(wildcard *.a)
HEADER						:= $(wildcard *.h)

MKDIR_P						:=	mkdir -p
RM							:=	rm -f

INSTALL						:= install
INSTALL_PROGRAM				:= $(INSTALL) -m 755
INSTALL_DATA				:= $(INSTALL) -m 644



installdirs:
	$(MKDIR_P) $(includedir)
	$(MKDIR_P) $(libdir)
X:
	echo $(NAME)

install: installdirs $(HEADER) $(NAME)
	$(INSTALL_DATA)	$(HEADER)	$(includedir)
	$(INSTALL_DATA) $(NAME)		$(libdir)

endif
