# to use floats instead of doubles, insert -DUSE_FLOATS here.
#CFLAGS = -g -I/usr/local/include/
#CFLAGS = -32 -O -I/usr/local/include/
CFLAGS =  -O -I/usr/local/include/

DOS_OBJS = fit_dos.o genutil.o
COOP_OBJS = fit_coop.o genutil.o
WALSH_OBJS = fit_walsh.o genutil.o
DUMB_WALSH_OBJS = dumb_walsh.o genutil.o
SUB_OBJS = sub_dos.o genutil.o
ADD_OBJS = add_dos.o genutil.o
MAT_OBJS = matrix_view.o genutil.o
GROW_OBJS = grow_xtal.o
PERCH_OBJS = perch.o genutil.o
MOM_OBJS = moments.o genutil.o
COOPER_OBJS = cooperate.o genutil.o
FCO_OBJS = fit_FCO.o genutil.o

PROGS = fit_dos fit_coop fit_walsh sub_dos matrix_view add_dos cooperate fit_FCO dumb_walsh

all: $(PROGS)

install: $(PROGS)
	cp $(PROGS) ../../bin

fit_dos: $(DOS_OBJS)
	cc -o fit_dos $(CFLAGS) $(DOS_OBJS) -lm

moments: $(MOM_OBJS)
	cc -o moments $(CFLAGS) $(MOM_OBJS) -lm

sub_dos: $(SUB_OBJS)
	cc -o sub_dos $(CFLAGS) $(SUB_OBJS) -lm

add_dos: $(ADD_OBJS)
	cc -o add_dos $(CFLAGS) $(ADD_OBJS) -lm

fit_coop: $(COOP_OBJS)
	cc -o fit_coop $(CFLAGS) $(COOP_OBJS) -lm

fit_walsh: $(WALSH_OBJS)
	cc -o fit_walsh $(CFLAGS) $(WALSH_OBJS) -lm

dumb_walsh: $(DUMB_WALSH_OBJS)
	cc -o dumb_walsh $(CFLAGS) $(DUMB_WALSH_OBJS) -lm

matrix_view: $(MAT_OBJS)
	cc -o matrix_view $(CFLAGS) $(MAT_OBJS) -lm	

perch: $(PERCH_OBJS)
	cc -o perch $(CFLAGS) $(PERCH_OBJS) -lm

cooperate: $(COOPER_OBJS)
	cc -o cooperate $(CFLAGS) $(COOPER_OBJS) -lm


grow_xtal: $(GROW_OBJS)
	cc -o grow_xtal $(CFLAGS) $(GROW_OBJS) -lm	

fit_FCO: $(FCO_OBJS)
	cc -o fit_FCO $(CFLAGS) $(FCO_OBJS) -lm	


.c.o: fit_props.h
	cc $(CFLAGS) -c $*.c


clean: 
	rm -f *.o


