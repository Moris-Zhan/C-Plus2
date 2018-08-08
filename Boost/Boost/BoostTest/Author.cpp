// Fig. 23.11: Author.cpp
// Member function definitions for class Author.
#include "stdafx.h"
#include <iostream>
#include <string>
#include <boost/shared_ptr.hpp>
#include <boost/weak_ptr.hpp>
#include "Author.h"
#include "Book.h"
using namespace std;

Author::Author( const string &authorName ) : name( authorName )
{
}

Author::~Author()
{
   cout << "Destroying Author: " << name << endl;
} // end of destructor

// print the title of the Book this Author wrote
void Author::printBookTitle()
{
   // �p�G weakBookPtr.lock() �^�Ǥ@�ӫD�Ū�shared_ptr
   if ( boost::shared_ptr< Book > bookPtr = weakBookPtr.lock() )
   {
      // �h�Q�θ�shared_ptr<Book>���title��use_count
      cout << "Reference count for Book " << bookPtr->title
         << " is " << bookPtr.use_count() << "." << endl;
      cout << "Author " << name << " wrote the book " << bookPtr->title 
         << "\n" << endl;
   } // end if
   else // �^�Ǥ@�ӪŪ�shared_ptr
      cout << "This Author has no Book." << endl;
} // end of printBookTitle

/**************************************************************************
 * (C) Copyright 1992-2011 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/