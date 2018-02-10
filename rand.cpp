/* file: rand.cpp
 *
 * This file implements the linear congruence method to generate pseudorandom integers.
 *
 * Andrew Nguyen
 * COEN 79 Friday Lab
 * 01/23/2018
 */

#include <cassert>
#include <iostream>
#include "random.h"

using namespace std;
using namespace coen79_lab2;

namespace coen79_lab2{	
	void rand_gen::set_seed(int newSeed){
                assert(modulus != 0);
                newSeed = (multiplier * seed + increment) % modulus;
                seed = newSeed;
        }

	int rand_gen::next(){
                assert(modulus != 0);
                int temp;
		temp = (multiplier * seed + increment) % modulus;
		seed = temp;
	        return seed;
        }

	void rand_gen::print_info(){
		cout << "Seed: " << seed << endl;
		cout << "Multiplier: " << multiplier << endl;
		cout << "Incremement: " << increment << endl;
		cout << "Modulus: " << modulus << endl;
		return;
	}
}
