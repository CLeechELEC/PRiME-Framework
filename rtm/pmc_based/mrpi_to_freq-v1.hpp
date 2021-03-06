/* This file is part of MRPI, an example RTM for the PRiME Framework.
 * 
 * MRPI is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * MRPI is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with MRPI.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright 2017, 2018 University of Southampton
 *		written by Karunakar Basireddy
 */

#ifndef CODEGEN_H
#define CODEGEN_H

namespace prime
{
namespace rtm_pmc //codegen
{
/*typedef int BOOL;
#define TRUE 1
#define FALSE 0
#define FREQ1  200
#define FREQ2  300
#define FREQ3  400
#define FREQ4  500
#define FREQ5  600
#define FREQ6  700
#define FREQ7  800
#define FREQ8  900
#define FREQ9  1000
#define FREQ10  1100
#define FREQ11  1200
#define FREQ12  1300
#define FREQ13  1400
#define FREQ14  1500
#define FREQ15  1600
#define FREQ16  1700
#define FREQ17  1800
#define FREQ18  1900
#define FREQ19  2000
#define ROW  400
#define N  19
#define SIGMA_DEFAULT  80
#define LEARNING_RATE  40
#define LENGTH  (250000)
#define SIGMA_MAX  245
#define COL  19
#define LAMBDA  60
#define RANDOM_MAX  255

#define min(a,b) (((int)(a)<=(int)(b))?(int)(a):(int)(b)) // MA
#define max(a,b) (((int)(a)>=(int)(b))?(int)(a):(int)(b)) // MA*/

class rtm_pmcf //qlearn_sc
{
public:
    rtm_pmcf(/*unsigned int frame_time*/);
    ~rtm_pmcf();
    void run(unsigned int& freq_return, double MRPI);

    /*private:
    	int e_dl_Env;
    	int e_actwl_Env;
    	int e_freq_Env;
    	unsigned int execute_cc;
    	unsigned int c_dl_Cnt;
    	unsigned int  c_actwl_Cnt;
    	unsigned int c_freq_Cnt;
    	unsigned int c_prdwl_Cnt;
    	unsigned int c_avgwl_Cnt;
    	int  c_qTable_Cnt [ROW][COL]; //MC
    	int  c_sigma_Cnt;
    	int  c_random_Cnt;
    	int  c_rowNum_Cnt;
    	int  c_reward_penalty_Cnt;
    	int  c_qTable_value_Cnt;
    	int priority_Cnt;

    	void random_max255(unsigned int *randomvar);
    	void random_max18(unsigned int *randomvar);
    	unsigned int Env_random_max255(void);
    	unsigned int Env_random_frequency(void);
    	void Cnt_init(void);
    	void cnt();
    	int MAXROW(int *a);*/
};
}
}
#endif
