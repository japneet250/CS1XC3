CC = gcc 
CFLAGS = -Wall
BUILD_DIR = build
SRC_DIR = src

library.o : $(SRC_DIR)/library.c
	./helper.sh
	$(CC) $(CFLAGS) -c -o $(BUILD_DIR)/$@ $<

multiply :$(SRC_DIR)/multiply.c
	./helper.sh
	$(CC) $(SRC_DIR)/library.c $< -o $(BUILD_DIR)/$@

max : $(SRC_DIR)/max.c
	./helper.sh
	$(CC) $(SRC_DIR)/library.c $< -o $(BUILD_DIR)/$@

square : $(SRC_DIR)/square.c
	./helper.sh
	$(CC) $(SRC_DIR)/library.c $<  -o $(BUILD_DIR)/$@

all : library.o multiply max square 

clean : 
	rm -f -r build
	rm -f -r test 


test : all 
	./testhelp.sh
	./build/square inches < test_data/square_input.txt > test/square_output.txt
	 diff test_data/square_expected.txt test/square_output.txt
	./build/multiply 2 < test_data/multiply_input.txt > test/multiply_output.txt	 
	diff test_data/multiply_expected.txt test/multiply_output.txt
	./build/max 4 3 2 1 5 7 8 10 6 > test/max_output.txt
	 diff test_data/max_expected.txt test/max_output.txt
	echo "HURRAH! TESTS PASSED!!  19/19"
	rm -f -r test 
