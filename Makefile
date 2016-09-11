CC=g++
LDFLAGS=-L /usr/local/lib -lGL -lGLU -lGLEW -lglut -lm
CPPFLAGS= -std=c++11 -g

SRC=Launch.cpp World.cpp Camera.cpp
OBJ=Launch.o World.o Camera.o

StratEngine: $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o goon

clean:
	rm -f *.o *~ test

depend:
	makedepend $(SRC) >/dev/null 2>&1

# DO NOT DELETE

Launch.o: /usr/include/stdlib.h /usr/include/features.h
Launch.o: /usr/include/stdc-predef.h /usr/include/alloca.h
Launch.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
Launch.o: /usr/include/wchar.h /usr/include/xlocale.h /usr/include/GL/glut.h
Launch.o: /usr/include/GL/freeglut_std.h /usr/include/GL/gl.h
Launch.o: /usr/include/GL/glext.h /usr/include/inttypes.h
Launch.o: /usr/include/stdint.h /usr/include/GL/glu.h Launch.h Camera.h
Launch.o: World.h
World.o: /usr/include/stdlib.h /usr/include/features.h
World.o: /usr/include/stdc-predef.h /usr/include/alloca.h
World.o: /usr/include/GL/glut.h /usr/include/GL/freeglut_std.h
World.o: /usr/include/GL/gl.h /usr/include/GL/glext.h /usr/include/inttypes.h
World.o: /usr/include/stdint.h /usr/include/GL/glu.h World.h
Camera.o: /usr/include/stdlib.h /usr/include/features.h
Camera.o: /usr/include/stdc-predef.h /usr/include/alloca.h
Camera.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
Camera.o: /usr/include/wchar.h /usr/include/xlocale.h Camera.h
