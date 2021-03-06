/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.TooManyListenersException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_TOOMANYLISTENERSEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_TOOMANYLISTENERSEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace util {

	class TooManyListenersException;
	class TooManyListenersException
		: public object<TooManyListenersException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit TooManyListenersException(jobject jobj)
		: object<TooManyListenersException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Object>() const;


		TooManyListenersException();
		TooManyListenersException(local_ref< java::lang::String > const&);
	}; //class TooManyListenersException

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_TOOMANYLISTENERSEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_TOOMANYLISTENERSEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_TOOMANYLISTENERSEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::TooManyListenersException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::TooManyListenersException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::util::TooManyListenersException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::util::TooManyListenersException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::util::TooManyListenersException::TooManyListenersException()
: object<java::util::TooManyListenersException>(
	call_new_object<
		java::util::TooManyListenersException::J2CPP_CLASS_NAME,
		java::util::TooManyListenersException::J2CPP_METHOD_NAME(0),
		java::util::TooManyListenersException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::util::TooManyListenersException::TooManyListenersException(local_ref< java::lang::String > const &a0)
: object<java::util::TooManyListenersException>(
	call_new_object<
		java::util::TooManyListenersException::J2CPP_CLASS_NAME,
		java::util::TooManyListenersException::J2CPP_METHOD_NAME(1),
		java::util::TooManyListenersException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::util::TooManyListenersException,"java/util/TooManyListenersException")
J2CPP_DEFINE_METHOD(java::util::TooManyListenersException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::TooManyListenersException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_TOOMANYLISTENERSEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
