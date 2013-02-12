/*
 * FastqWriter.h
 *
 *  Created on: Jan 29, 2013
 *      Author: philipp_
 */

#ifndef FASTQWRITER_H_
#define FASTQWRITER_H_

#include "Writer.h"

#include <iostream>

class FastqWriter: public Writer {
public:
	FastqWriter(char const * const fileName) :
			Writer(fileName) {

	}

	virtual void writeRead(MappedRead * read) {
		Print("@%s\n", read->name);
		Print("%s\n", read->Seq);
		Print("+\n");
		Print("%s\n", read->qlty);
		//data << "@" << read->name << std::endl << read->Seq << std::endl << "+" << std::endl << read->qlty << std::endl;
		Flush();
	}

	virtual ~FastqWriter() {

	}
};

#endif /* FASTQWRITER_H_ */
