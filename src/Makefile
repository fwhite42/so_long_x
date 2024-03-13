# **************************************************************************** #
#                                                                              #
#                                                                              #
#    Makefile                                                4 2               #
#                                                         (@)-=-(@)            #
#    By: fwhite42 <FUCK THE NORM>                          (  o  )             #
#                                                        _/'-----'\_           #
#    Created: 2024/02/24 17:22:09 by fwhite42          \\ \\     // //         #
#    Updated: 2024/02/28 14:21:07 by fwhite42           _)/_\---/_\(_          #
#                                                                              #
# **************************************************************************** #

prefix			:= ../..
exec_prefix		:= $(prefix)
#bindir			:= $(exec_prefix)/bin
#sbindir		:= $(exec_prefix)/sbin
#libexecidr		:= $(exec_prefix)/libexec
#datarootdir 	:= $(prefix)/share
#sysconfdir		:= $(prefix)/etc
#sharedstatedir	:= $(prefix)/com
#localstatedir	:= $(prefix)/var
#runstatedir	:= $(localstatedir)/run
includedir		:= $(prefix)/include
libdir			:= $(exec_prefix)/lib

srcdir			:= $(CURDIR)
DESTDIR			:=

INSTALL			:= install -C
INSTALL_DATA	:= $(INSTALL) -m 644

NAME			:= $(notdir $(CURDIR))
HEADER			:= $(NAME).h
ARCHIVE			:= $(NAME).a
SOURCES			:= $(wildcard $(srcdir)/*.c)
TARGETS			:= $(SOURCES:$(srcdir)/%.c=%.o)

CC				:= cc
CFLAGS			:= -Wall -Werror -Wextra
CPPFLAGS		:= -I$(includedir) -I$(srcdir) 
vpath %.c		$(srcdir)

AR				:= ar
ARFLAGS			:= -rcs
vpath %.a		$(libdir)

MKDIR_P			:= mkdir -p

$(HEADER):
	cp $(patsubst lib%.h, %.h, $@) $@

.PHONY:	all clean fclean install installdirs re

all: $(ARCHIVE)

$(ARCHIVE): $(TARGETS) | $(ARCHIVE)($(TARGETS))

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

installdirs:
	$(MKDIR_P) $(DESTDIR)$(libdir)
	$(MKDIR_P) $(DESTDIR)$(includedir)

install: $(HEADER)
	$(INSTALL_DATA)		$(ARCHIVE)	$(DESTDIR)$(libdir)/
	$(INSTALL_DATA) 	$(HEADER)	$(DESTDIR)$(includedir)/

re:	fclean all


#$(libdir)/%.a $(includedir)/%.h: $(srcdir)/%/%.a $(srcdir)/%/%.h
#	$(MAKE) -C $< libdir=$(libdir) includedir=$(includedir) install
#
#
#$(srcdir)/%/%.a: $(srcdir)/%/%.h
#	$(MAKE) -C $*

#LIBS	:= $(patsubst $(srcdir)/%, $(libdir)/%.a, $(wildcard $(srcdir)/*))

#$(PROGRAM): $(PROGRAM).c $(LIBS)
