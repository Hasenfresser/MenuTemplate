/**
 *  @file       Entry.cpp
 *  @author     Hasenfresser
 *  @version    1.03
 *  @date       2016-12-28
 *
 *  @brief      Source file of subclass Entry.
 */

// include guard
#if !defined ENTRY_CPP
#define ENTRY_CPP

#include "MenuTemplate.hpp"
#include <iostream>

using std::cout;
using std::endl;

namespace MenuTemplate {

MenuTemplate::Entry::Entry(const string &Name, const string &Text) : Name(Name), Text(Text) { }

MenuTemplate::Entry::~Entry() { }

void MenuTemplate::Entry::setName(const string &Name) {
    this->Name = Name;
}

void MenuTemplate::Entry::setText(const string &Text) {
    this->Text = Text;
}

string MenuTemplate::Entry::getName() {
    return Name;
}

string MenuTemplate::Entry::getText() {
    return Text;
}
} // end namespace

#endif // !defined ENTRY_CPP

