index: index.o readKeyWords.o tally.o getWord.o myGetChar.o displayResults.o
	gcc -o index index.o readKeyWords.o getWord.o tally.o myGetChar.o displayResults.o
testReadKeyWords: readKeyWords.c testReadKeyWords.c index.h
	gcc -o testreadkeywords testReadKeyWords.c readKeyWords.c
testGetWord: testGetWord.c getWord.c myGetChar.c index.h
	gcc -o testGetWord testGetWord.c getWord.c myGetChar.c
testMyGetChar: testMyGetChar.c myGetChar.c index.h
	gcc -o testMyGetChar testMyGetChar.c myGetChar.c
testTally: testTally.c tally.c index.h
	gcc -o testTally testTally.c tally.c
index.o: index.c index.h
	gcc -c index.c
readKeyWords.o: readKeyWords.c index.h
	gcc -c readKeyWords.c
tally.o: tally.c index.h
	gcc -c tally.c
getWord.o: getWord.c  index.h
	gcc -c getWord.c
myGetChar.o: myGetChar.c index.h
	gcc -c myGetChar.c
displayResults.o: displayResults.c index.h
	gcc -c displayResults.c
clean:
	rm index index.o tally.o readKeyWords.o getWord.o myGetChar.o displayResults.o testReadKeyWords.o
save:
	git add .;git commit;git push origin master
