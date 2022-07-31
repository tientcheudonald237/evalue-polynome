eval_polynome:main.c eval_polynome.c eval_polynome.h
	gcc -o eval_polynome main.c eval_polynome.c 
run:
	./eval_polynome
clean:
	rm eval_polynome


