# Makefile para compilar el programa

# Compilador
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -g

# Archivos fuente
SOURCES = main.cpp staff.cpp professor.cpp student.cpp subject.cpp university.cpp person.cpp

# Archivo ejecutable
EXECUTABLE = programa

# Regla por defecto
all: $(EXECUTABLE)

# Regla para compilar el ejecutable
$(EXECUTABLE): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla para limpiar archivos generados
clean:
	rm -f $(EXECUTABLE)
