/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __GENERATED_cls_reflectionexception_h__
#define __GENERATED_cls_reflectionexception_h__

#include <cls/exception.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/reflection.php line 11 */
class c_reflectionexception : virtual public c_exception {
  BEGIN_CLASS_MAP(reflectionexception)
    PARENT_CLASS(exception)
  END_CLASS_MAP(reflectionexception)
  DECLARE_CLASS(reflectionexception, ReflectionException, exception)
  DECLARE_INVOKES_FROM_EVAL
  void init();
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_reflectionexception_h__
