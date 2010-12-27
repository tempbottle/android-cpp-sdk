/*================================================================================
  code generated by: java2cpp
  class: java.io.FileNotFoundException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILENOTFOUNDEXCEPTION_HPP_DECL
#define J2CPP_JAVA_IO_FILENOTFOUNDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class FileNotFoundException;
	class FileNotFoundException
		: public cpp_object<FileNotFoundException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		FileNotFoundException(jobject jobj)
		: cpp_object<FileNotFoundException>(jobj)
		{
		}

	}; //class FileNotFoundException

} //namespace io
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILENOTFOUNDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILENOTFOUNDEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_IO_FILENOTFOUNDEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::io::FileNotFoundException > create< java::io::FileNotFoundException>()
{
	return local_ref< java::io::FileNotFoundException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::FileNotFoundException::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::FileNotFoundException::J2CPP_CLASS_NAME, java::io::FileNotFoundException::J2CPP_METHOD_NAME(0), java::io::FileNotFoundException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::io::FileNotFoundException > create< java::io::FileNotFoundException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::io::FileNotFoundException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::FileNotFoundException::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::FileNotFoundException::J2CPP_CLASS_NAME, java::io::FileNotFoundException::J2CPP_METHOD_NAME(1), java::io::FileNotFoundException::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::io::FileNotFoundException,"java/io/FileNotFoundException")
J2CPP_DEFINE_METHOD(java::io::FileNotFoundException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::FileNotFoundException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILENOTFOUNDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION