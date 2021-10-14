all:
	g++ main.cpp library_example.cpp tests_example.cpp -o run_tests.exe
	./run_tests.exe