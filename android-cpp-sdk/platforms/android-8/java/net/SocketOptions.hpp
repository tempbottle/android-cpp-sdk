/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.SocketOptions
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_SOCKETOPTIONS_HPP_DECL
#define J2CPP_JAVA_NET_SOCKETOPTIONS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace net {

	class SocketOptions;
	class SocketOptions
		: public object<SocketOptions>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)

		explicit SocketOptions(jobject jobj)
		: object<SocketOptions>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::Object > getOption(jint);
		void setOption(jint, local_ref< java::lang::Object >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > SO_LINGER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > SO_TIMEOUT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > TCP_NODELAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > IP_MULTICAST_IF;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > SO_BINDADDR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > SO_REUSEADDR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > SO_SNDBUF;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > SO_RCVBUF;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > SO_KEEPALIVE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > IP_TOS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > IP_MULTICAST_LOOP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > SO_BROADCAST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > SO_OOBINLINE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > IP_MULTICAST_IF2;
	}; //class SocketOptions

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_SOCKETOPTIONS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_SOCKETOPTIONS_HPP_IMPL
#define J2CPP_JAVA_NET_SOCKETOPTIONS_HPP_IMPL

namespace j2cpp {



java::net::SocketOptions::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::Object > java::net::SocketOptions::getOption(jint a0)
{
	return call_method<
		java::net::SocketOptions::J2CPP_CLASS_NAME,
		java::net::SocketOptions::J2CPP_METHOD_NAME(0),
		java::net::SocketOptions::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

void java::net::SocketOptions::setOption(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::net::SocketOptions::J2CPP_CLASS_NAME,
		java::net::SocketOptions::J2CPP_METHOD_NAME(1),
		java::net::SocketOptions::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}


static_field<
	java::net::SocketOptions::J2CPP_CLASS_NAME,
	java::net::SocketOptions::J2CPP_FIELD_NAME(0),
	java::net::SocketOptions::J2CPP_FIELD_SIGNATURE(0),
	jint
> java::net::SocketOptions::SO_LINGER;

static_field<
	java::net::SocketOptions::J2CPP_CLASS_NAME,
	java::net::SocketOptions::J2CPP_FIELD_NAME(1),
	java::net::SocketOptions::J2CPP_FIELD_SIGNATURE(1),
	jint
> java::net::SocketOptions::SO_TIMEOUT;

static_field<
	java::net::SocketOptions::J2CPP_CLASS_NAME,
	java::net::SocketOptions::J2CPP_FIELD_NAME(2),
	java::net::SocketOptions::J2CPP_FIELD_SIGNATURE(2),
	jint
> java::net::SocketOptions::TCP_NODELAY;

static_field<
	java::net::SocketOptions::J2CPP_CLASS_NAME,
	java::net::SocketOptions::J2CPP_FIELD_NAME(3),
	java::net::SocketOptions::J2CPP_FIELD_SIGNATURE(3),
	jint
> java::net::SocketOptions::IP_MULTICAST_IF;

static_field<
	java::net::SocketOptions::J2CPP_CLASS_NAME,
	java::net::SocketOptions::J2CPP_FIELD_NAME(4),
	java::net::SocketOptions::J2CPP_FIELD_SIGNATURE(4),
	jint
> java::net::SocketOptions::SO_BINDADDR;

static_field<
	java::net::SocketOptions::J2CPP_CLASS_NAME,
	java::net::SocketOptions::J2CPP_FIELD_NAME(5),
	java::net::SocketOptions::J2CPP_FIELD_SIGNATURE(5),
	jint
> java::net::SocketOptions::SO_REUSEADDR;

static_field<
	java::net::SocketOptions::J2CPP_CLASS_NAME,
	java::net::SocketOptions::J2CPP_FIELD_NAME(6),
	java::net::SocketOptions::J2CPP_FIELD_SIGNATURE(6),
	jint
> java::net::SocketOptions::SO_SNDBUF;

static_field<
	java::net::SocketOptions::J2CPP_CLASS_NAME,
	java::net::SocketOptions::J2CPP_FIELD_NAME(7),
	java::net::SocketOptions::J2CPP_FIELD_SIGNATURE(7),
	jint
> java::net::SocketOptions::SO_RCVBUF;

static_field<
	java::net::SocketOptions::J2CPP_CLASS_NAME,
	java::net::SocketOptions::J2CPP_FIELD_NAME(8),
	java::net::SocketOptions::J2CPP_FIELD_SIGNATURE(8),
	jint
> java::net::SocketOptions::SO_KEEPALIVE;

static_field<
	java::net::SocketOptions::J2CPP_CLASS_NAME,
	java::net::SocketOptions::J2CPP_FIELD_NAME(9),
	java::net::SocketOptions::J2CPP_FIELD_SIGNATURE(9),
	jint
> java::net::SocketOptions::IP_TOS;

static_field<
	java::net::SocketOptions::J2CPP_CLASS_NAME,
	java::net::SocketOptions::J2CPP_FIELD_NAME(10),
	java::net::SocketOptions::J2CPP_FIELD_SIGNATURE(10),
	jint
> java::net::SocketOptions::IP_MULTICAST_LOOP;

static_field<
	java::net::SocketOptions::J2CPP_CLASS_NAME,
	java::net::SocketOptions::J2CPP_FIELD_NAME(11),
	java::net::SocketOptions::J2CPP_FIELD_SIGNATURE(11),
	jint
> java::net::SocketOptions::SO_BROADCAST;

static_field<
	java::net::SocketOptions::J2CPP_CLASS_NAME,
	java::net::SocketOptions::J2CPP_FIELD_NAME(12),
	java::net::SocketOptions::J2CPP_FIELD_SIGNATURE(12),
	jint
> java::net::SocketOptions::SO_OOBINLINE;

static_field<
	java::net::SocketOptions::J2CPP_CLASS_NAME,
	java::net::SocketOptions::J2CPP_FIELD_NAME(13),
	java::net::SocketOptions::J2CPP_FIELD_SIGNATURE(13),
	jint
> java::net::SocketOptions::IP_MULTICAST_IF2;


J2CPP_DEFINE_CLASS(java::net::SocketOptions,"java/net/SocketOptions")
J2CPP_DEFINE_METHOD(java::net::SocketOptions,0,"getOption","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::net::SocketOptions,1,"setOption","(ILjava/lang/Object;)V")
J2CPP_DEFINE_FIELD(java::net::SocketOptions,0,"SO_LINGER","I")
J2CPP_DEFINE_FIELD(java::net::SocketOptions,1,"SO_TIMEOUT","I")
J2CPP_DEFINE_FIELD(java::net::SocketOptions,2,"TCP_NODELAY","I")
J2CPP_DEFINE_FIELD(java::net::SocketOptions,3,"IP_MULTICAST_IF","I")
J2CPP_DEFINE_FIELD(java::net::SocketOptions,4,"SO_BINDADDR","I")
J2CPP_DEFINE_FIELD(java::net::SocketOptions,5,"SO_REUSEADDR","I")
J2CPP_DEFINE_FIELD(java::net::SocketOptions,6,"SO_SNDBUF","I")
J2CPP_DEFINE_FIELD(java::net::SocketOptions,7,"SO_RCVBUF","I")
J2CPP_DEFINE_FIELD(java::net::SocketOptions,8,"SO_KEEPALIVE","I")
J2CPP_DEFINE_FIELD(java::net::SocketOptions,9,"IP_TOS","I")
J2CPP_DEFINE_FIELD(java::net::SocketOptions,10,"IP_MULTICAST_LOOP","I")
J2CPP_DEFINE_FIELD(java::net::SocketOptions,11,"SO_BROADCAST","I")
J2CPP_DEFINE_FIELD(java::net::SocketOptions,12,"SO_OOBINLINE","I")
J2CPP_DEFINE_FIELD(java::net::SocketOptions,13,"IP_MULTICAST_IF2","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_SOCKETOPTIONS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
