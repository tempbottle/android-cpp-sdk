/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.ExecutorService
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_EXECUTORSERVICE_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_EXECUTORSERVICE_HPP_DECL


namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class Future; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class Executor; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class Callable; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/util/Collection.hpp>
#include <java/util/List.hpp>
#include <java/util/concurrent/Callable.hpp>
#include <java/util/concurrent/Executor.hpp>
#include <java/util/concurrent/Future.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class ExecutorService;
	class ExecutorService
		: public object<ExecutorService>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)

		explicit ExecutorService(jobject jobj)
		: object<ExecutorService>(jobj)
		{
		}

		operator local_ref<java::util::concurrent::Executor>() const;
		operator local_ref<java::lang::Object>() const;


		void shutdown();
		local_ref< java::util::List > shutdownNow();
		jboolean isShutdown();
		jboolean isTerminated();
		jboolean awaitTermination(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::util::concurrent::Future > submit(local_ref< java::util::concurrent::Callable >  const&);
		local_ref< java::util::concurrent::Future > submit(local_ref< java::lang::Runnable >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::util::concurrent::Future > submit(local_ref< java::lang::Runnable >  const&);
		local_ref< java::util::List > invokeAll(local_ref< java::util::Collection >  const&);
		local_ref< java::util::List > invokeAll(local_ref< java::util::Collection >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::lang::Object > invokeAny(local_ref< java::util::Collection >  const&);
		local_ref< java::lang::Object > invokeAny(local_ref< java::util::Collection >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
	}; //class ExecutorService

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_EXECUTORSERVICE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_EXECUTORSERVICE_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_EXECUTORSERVICE_HPP_IMPL

namespace j2cpp {



java::util::concurrent::ExecutorService::operator local_ref<java::util::concurrent::Executor>() const
{
	return local_ref<java::util::concurrent::Executor>(get_jobject());
}

java::util::concurrent::ExecutorService::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void java::util::concurrent::ExecutorService::shutdown()
{
	return call_method<
		java::util::concurrent::ExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ExecutorService::J2CPP_METHOD_NAME(0),
		java::util::concurrent::ExecutorService::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}

local_ref< java::util::List > java::util::concurrent::ExecutorService::shutdownNow()
{
	return call_method<
		java::util::concurrent::ExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ExecutorService::J2CPP_METHOD_NAME(1),
		java::util::concurrent::ExecutorService::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::List >
	>(get_jobject());
}

jboolean java::util::concurrent::ExecutorService::isShutdown()
{
	return call_method<
		java::util::concurrent::ExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ExecutorService::J2CPP_METHOD_NAME(2),
		java::util::concurrent::ExecutorService::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::ExecutorService::isTerminated()
{
	return call_method<
		java::util::concurrent::ExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ExecutorService::J2CPP_METHOD_NAME(3),
		java::util::concurrent::ExecutorService::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::ExecutorService::awaitTermination(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		java::util::concurrent::ExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ExecutorService::J2CPP_METHOD_NAME(4),
		java::util::concurrent::ExecutorService::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0, a1);
}

local_ref< java::util::concurrent::Future > java::util::concurrent::ExecutorService::submit(local_ref< java::util::concurrent::Callable > const &a0)
{
	return call_method<
		java::util::concurrent::ExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ExecutorService::J2CPP_METHOD_NAME(5),
		java::util::concurrent::ExecutorService::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::concurrent::Future >
	>(get_jobject(), a0);
}

local_ref< java::util::concurrent::Future > java::util::concurrent::ExecutorService::submit(local_ref< java::lang::Runnable > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::concurrent::ExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ExecutorService::J2CPP_METHOD_NAME(6),
		java::util::concurrent::ExecutorService::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::concurrent::Future >
	>(get_jobject(), a0, a1);
}

local_ref< java::util::concurrent::Future > java::util::concurrent::ExecutorService::submit(local_ref< java::lang::Runnable > const &a0)
{
	return call_method<
		java::util::concurrent::ExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ExecutorService::J2CPP_METHOD_NAME(7),
		java::util::concurrent::ExecutorService::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::util::concurrent::Future >
	>(get_jobject(), a0);
}

local_ref< java::util::List > java::util::concurrent::ExecutorService::invokeAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::ExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ExecutorService::J2CPP_METHOD_NAME(8),
		java::util::concurrent::ExecutorService::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::util::List >
	>(get_jobject(), a0);
}

local_ref< java::util::List > java::util::concurrent::ExecutorService::invokeAll(local_ref< java::util::Collection > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::ExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ExecutorService::J2CPP_METHOD_NAME(9),
		java::util::concurrent::ExecutorService::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::List >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Object > java::util::concurrent::ExecutorService::invokeAny(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::ExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ExecutorService::J2CPP_METHOD_NAME(10),
		java::util::concurrent::ExecutorService::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::concurrent::ExecutorService::invokeAny(local_ref< java::util::Collection > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::ExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ExecutorService::J2CPP_METHOD_NAME(11),
		java::util::concurrent::ExecutorService::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::ExecutorService,"java/util/concurrent/ExecutorService")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,0,"shutdown","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,1,"shutdownNow","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,2,"isShutdown","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,3,"isTerminated","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,4,"awaitTermination","(JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,5,"submit","(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,6,"submit","(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,7,"submit","(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,8,"invokeAll","(Ljava/util/Collection;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,9,"invokeAll","(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,10,"invokeAny","(Ljava/util/Collection;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,11,"invokeAny","(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_EXECUTORSERVICE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
