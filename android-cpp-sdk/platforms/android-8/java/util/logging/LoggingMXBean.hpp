/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.logging.LoggingMXBean
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_LOGGINGMXBEAN_HPP_DECL
#define J2CPP_JAVA_UTIL_LOGGING_LOGGINGMXBEAN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace java { namespace util { namespace logging {

	class LoggingMXBean;
	class LoggingMXBean
		: public object<LoggingMXBean>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit LoggingMXBean(jobject jobj)
		: object<LoggingMXBean>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getLoggerLevel(local_ref< java::lang::String >  const&);
		local_ref< java::util::List > getLoggerNames();
		local_ref< java::lang::String > getParentLoggerName(local_ref< java::lang::String >  const&);
		void setLoggerLevel(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
	}; //class LoggingMXBean

} //namespace logging
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_LOGGINGMXBEAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_LOGGINGMXBEAN_HPP_IMPL
#define J2CPP_JAVA_UTIL_LOGGING_LOGGINGMXBEAN_HPP_IMPL

namespace j2cpp {



java::util::logging::LoggingMXBean::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::String > java::util::logging::LoggingMXBean::getLoggerLevel(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::logging::LoggingMXBean::J2CPP_CLASS_NAME,
		java::util::logging::LoggingMXBean::J2CPP_METHOD_NAME(0),
		java::util::logging::LoggingMXBean::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::util::List > java::util::logging::LoggingMXBean::getLoggerNames()
{
	return call_method<
		java::util::logging::LoggingMXBean::J2CPP_CLASS_NAME,
		java::util::logging::LoggingMXBean::J2CPP_METHOD_NAME(1),
		java::util::logging::LoggingMXBean::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::List >
	>(get_jobject());
}

local_ref< java::lang::String > java::util::logging::LoggingMXBean::getParentLoggerName(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::logging::LoggingMXBean::J2CPP_CLASS_NAME,
		java::util::logging::LoggingMXBean::J2CPP_METHOD_NAME(2),
		java::util::logging::LoggingMXBean::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

void java::util::logging::LoggingMXBean::setLoggerLevel(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::util::logging::LoggingMXBean::J2CPP_CLASS_NAME,
		java::util::logging::LoggingMXBean::J2CPP_METHOD_NAME(3),
		java::util::logging::LoggingMXBean::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::util::logging::LoggingMXBean,"java/util/logging/LoggingMXBean")
J2CPP_DEFINE_METHOD(java::util::logging::LoggingMXBean,0,"getLoggerLevel","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::logging::LoggingMXBean,1,"getLoggerNames","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::logging::LoggingMXBean,2,"getParentLoggerName","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::logging::LoggingMXBean,3,"setLoggerLevel","(Ljava/lang/String;Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_LOGGINGMXBEAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
