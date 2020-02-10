#ifndef RAND_INT_H
#define RAND_INT_H

#include <random>

// type of distribution


	class Rand_int
	{
	
	private:	
		default_random_engine re;
		uniform_int_distribution<> dist;
	public:
		Rand_int(int low, int high) :dist{low,high}{}
		~Rand_int();

	    int operator()() { return dist(re); }
		void seed(int s) { re.seed(s); }

	};


/* Operators */
/*
std::ostream& operator<<(std::ostream& os, const Rand_int& ri);
*/

#endif