/*
 * Filelist.h
 *
 *  Created on: 19.01.2015
 *      Author: fnolden
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <assert.h>
#include <vector>

#include <common/serialization/serializable.h>

#ifndef SRC_GUI_FILELIST_H_
#define SRC_GUI_FILELIST_H_

namespace kitti {

class String_list: public Serializable {
public:
	String_list();
	virtual ~String_list();
	std::string path;
	std::vector<std::string> list;
	void get_fullname(std::string &filepath, int index);
	bool load( std::istream &stream);
	std::string to_string();
};

} /* namespace kitti */

#endif /* SRC_GUI_FILELIST_H_ */
