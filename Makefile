CPP = clang++ -std=c++2a

OBJDIR = obj
SRCDIR = src

CPPFILES = $(wildcard src/*.cc)
OBJFILES = $(patsubst $(SRCDIR)/%.cc,$(SRCDIR)/$(OBJDIR)/%.o,$(CPPFILES))
HEADERFILES = $(wildcard src/*.h)


$(SRCDIR)/$(OBJDIR)/%.o: $(SRCDIR)/%.cc $(HEADERFILES)
	$(CPP) -c -o $@ $<

jpegxldec: $(OBJFILES)
	$(CPP) -o $@ $^

clean:
	rm jpegxldec
	rm $(SRCDIR)/$(OBJDIR)/*