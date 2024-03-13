# **************************************************************************** #
#                                                                              #
#                                                                              #
#    Makefile                                                4 2               #
#                                                         (@)-=-(@)            #
#    By: fwhite42 <FUCK THE NORM>                          (  o  )             #
#                                                        _/'-----'\_           #
#    Created: 2024/02/24 17:22:09 by fwhite42          \\ \\     // //         #
#    Updated: 2024/02/28 14:24:17 by fwhite42           _)/_\---/_\(_          #
#                                                                              #
# **************************************************************************** #

prefix			:= $(CURDIR)
exec_prefix		:= $(prefix)
includedir		:= $(prefix)/include
libdir			:= $(exec_prefix)/lib

srcdir			:= $(CURDIR)/src
DESTDIR			:=

INSTALL			:= install -C
INSTALL_DATA	:= $(INSTALL) -m 644

NAME			:= $(notdir $(CURDIR))
PROGRAM			:= $(NAME)
HEADER			:= $(NAME).h
ARCHIVE			:= $(NAME).a

CC				:= cc
CFLAGS			:= -Wall -Werror -Wextra
CPPFLAGS		:= -I$(includedir) -I$(srcdir) 
vpath %.c		$(srcdir)

AR				:= ar
ARFLAGS			:= -rcs
vpath %.a		$(libdir)

MKDIR_P			:= mkdir -p

.PHONY:	all clean fclean install re

all: $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) -r $(libdir)
	$(RM) -r $(includedir)


install: installdirs $(ARCHIVE) $(HEADER)
	$(INSTALL_DATA)		$(ARCHIVE)	$(DESTDIR)$(libdir)/
	$(INSTALL_DATA) 	$(HEADER)	$(DESTDIR)$(includedir)/

installdirs:
	$(MKDIR_P) $(DESTDIR)$(libdir)
	$(MKDIR_P) $(DESTDIR)$(includedir)

re:	fclean all


$(srcdir)/%/Makefile: | $(srcdir)/Makefile
	cp $(srcdir)/Makefile $(srcdir)/$*/Makefile

$(libdir)/%.a: $(srcdir)/%/Makefile
	$(MAKE) -C $(srcdir)/$*
	$(MAKE) -f $(srcdir)/Makefile -C $(srcdir)/$* libdir=$(libdir) includedir=$(includedir) installdirs
	$(MAKE) -f $(srcdir)/Makefile -C $(srcdir)/$* libdir=$(libdir) includedir=$(includedir) install

LIBS	:= $(patsubst $(srcdir)/%, $(libdir)/%.a, $(wildcard $(srcdir)/lib*))

$(PROGRAM): $(PROGRAM).c $(LIBS)
