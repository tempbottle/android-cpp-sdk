/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.conn.tsccm.WaitingThread
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREAD_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREAD_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class RouteSpecificPool; } } } } } } }
namespace j2cpp { namespace java { namespace lang { class Thread; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { namespace locks { class Condition; } } } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }


#include <java/lang/Thread.hpp>
#include <java/util/Date.hpp>
#include <java/util/concurrent/locks/Condition.hpp>
#include <org/apache/http/impl/conn/tsccm/RouteSpecificPool.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm {

	class WaitingThread;
	class WaitingThread
		: public cpp_object<WaitingThread>
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

		WaitingThread(jobject jobj)
		: cpp_object<WaitingThread>(jobj)
		{
		}

		local_ref< java::util::concurrent::locks::Condition > getCondition();
		local_ref< org::apache::http::impl::conn::tsccm::RouteSpecificPool > getPool();
		local_ref< java::lang::Thread > getThread();
		cpp_boolean await(local_ref< java::util::Date > const&);
		void wakeup();
		void interrupt();
	}; //class WaitingThread

} //namespace tsccm
} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREAD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREAD_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREAD_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::conn::tsccm::WaitingThread > create< org::apache::http::impl::conn::tsccm::WaitingThread>(local_ref< java::util::concurrent::locks::Condition > const &a0, local_ref< org::apache::http::impl::conn::tsccm::RouteSpecificPool > const &a1)
{
	return local_ref< org::apache::http::impl::conn::tsccm::WaitingThread >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_CLASS_NAME, org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_NAME(0), org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::concurrent::locks::Condition > org::apache::http::impl::conn::tsccm::WaitingThread::getCondition()
{
	return local_ref< java::util::concurrent::locks::Condition >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< org::apache::http::impl::conn::tsccm::RouteSpecificPool > org::apache::http::impl::conn::tsccm::WaitingThread::getPool()
{
	return local_ref< org::apache::http::impl::conn::tsccm::RouteSpecificPool >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::Thread > org::apache::http::impl::conn::tsccm::WaitingThread::getThread()
{
	return local_ref< java::lang::Thread >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean org::apache::http::impl::conn::tsccm::WaitingThread::await(local_ref< java::util::Date > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::impl::conn::tsccm::WaitingThread::wakeup()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void org::apache::http::impl::conn::tsccm::WaitingThread::interrupt()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::tsccm::WaitingThread,"org/apache/http/impl/conn/tsccm/WaitingThread")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThread,0,"<init>","(Ljava/util/concurrent/locks/Condition;Lorg/apache/http/impl/conn/tsccm/RouteSpecificPool;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThread,1,"getCondition","()Ljava/util/concurrent/locks/Condition;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThread,2,"getPool","()Lorg/apache/http/impl/conn/tsccm/RouteSpecificPool;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThread,3,"getThread","()Ljava/lang/Thread;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThread,4,"await","(Ljava/util/Date;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThread,5,"wakeup","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThread,6,"interrupt","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREAD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION