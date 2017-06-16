
all: prova1.cxx 
	g++ prova1.cxx -o prova1_cxx -I $(shell lhapdf-config --incdir) -L $(shell lhapdf-config --libdir) -lLHAPDF 
	
clean:
	rm prova1_cxx 
