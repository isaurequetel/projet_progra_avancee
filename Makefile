#########################################
# Directory where to put the object files
OBJDIR = .

#########################################
# Directory where to locate source files
SRCDIR = .

#########################################
# Compiler
CC=c++

######################
# All the object files      
OBJFILES = $(OBJDIR)/main.o $(OBJDIR)/projet.o

###############
# All the flagss
DEBUGFLAGS = -std=c++17 `pkg-config /usr/local/include/gtkmm-3.0/ --cflags`
STFLAGS    =  `pkg-config /usr/local/include/gtkmm-3.0/ --libs`

projet: $(OBJFILES)
	$(CC) $^ $(STFLAGS) -o $(OBJDIR)/$@

# How to make the object files:
$(OBJDIR)/%.o: $(SRCDIR)/%.cc
	$(CC) $(DEBUGFLAGS) -c $? -o $@

# Cleaning target (only works with fileutils):
clean:
	/bin/rm -f $(OBJFILES) projet
