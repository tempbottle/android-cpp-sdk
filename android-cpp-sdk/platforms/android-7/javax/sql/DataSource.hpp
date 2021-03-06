/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.sql.DataSource
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_DATASOURCE_HPP_DECL
#define J2CPP_JAVAX_SQL_DATASOURCE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class PrintWriter; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace sql { class Connection; } } }


#include <java/io/PrintWriter.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/sql/Connection.hpp>


namespace j2cpp {

namespace javax { namespace sql {

	class DataSource;
	class DataSource
		: public object<DataSource>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit DataSource(jobject jobj)
		: object<DataSource>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::sql::Connection > getConnection();
		local_ref< java::sql::Connection > getConnection(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		jint getLoginTimeout();
		local_ref< java::io::PrintWriter > getLogWriter();
		void setLoginTimeout(jint);
		void setLogWriter(local_ref< java::io::PrintWriter >  const&);
	}; //class DataSource

} //namespace sql
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_DATASOURCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_DATASOURCE_HPP_IMPL
#define J2CPP_JAVAX_SQL_DATASOURCE_HPP_IMPL

namespace j2cpp {



javax::sql::DataSource::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::sql::Connection > javax::sql::DataSource::getConnection()
{
	return call_method<
		javax::sql::DataSource::J2CPP_CLASS_NAME,
		javax::sql::DataSource::J2CPP_METHOD_NAME(0),
		javax::sql::DataSource::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::sql::Connection >
	>(get_jobject());
}

local_ref< java::sql::Connection > javax::sql::DataSource::getConnection(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		javax::sql::DataSource::J2CPP_CLASS_NAME,
		javax::sql::DataSource::J2CPP_METHOD_NAME(1),
		javax::sql::DataSource::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::sql::Connection >
	>(get_jobject(), a0, a1);
}

jint javax::sql::DataSource::getLoginTimeout()
{
	return call_method<
		javax::sql::DataSource::J2CPP_CLASS_NAME,
		javax::sql::DataSource::J2CPP_METHOD_NAME(2),
		javax::sql::DataSource::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

local_ref< java::io::PrintWriter > javax::sql::DataSource::getLogWriter()
{
	return call_method<
		javax::sql::DataSource::J2CPP_CLASS_NAME,
		javax::sql::DataSource::J2CPP_METHOD_NAME(3),
		javax::sql::DataSource::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::io::PrintWriter >
	>(get_jobject());
}

void javax::sql::DataSource::setLoginTimeout(jint a0)
{
	return call_method<
		javax::sql::DataSource::J2CPP_CLASS_NAME,
		javax::sql::DataSource::J2CPP_METHOD_NAME(4),
		javax::sql::DataSource::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void javax::sql::DataSource::setLogWriter(local_ref< java::io::PrintWriter > const &a0)
{
	return call_method<
		javax::sql::DataSource::J2CPP_CLASS_NAME,
		javax::sql::DataSource::J2CPP_METHOD_NAME(5),
		javax::sql::DataSource::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(javax::sql::DataSource,"javax/sql/DataSource")
J2CPP_DEFINE_METHOD(javax::sql::DataSource,0,"getConnection","()Ljava/sql/Connection;")
J2CPP_DEFINE_METHOD(javax::sql::DataSource,1,"getConnection","(Ljava/lang/String;Ljava/lang/String;)Ljava/sql/Connection;")
J2CPP_DEFINE_METHOD(javax::sql::DataSource,2,"getLoginTimeout","()I")
J2CPP_DEFINE_METHOD(javax::sql::DataSource,3,"getLogWriter","()Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(javax::sql::DataSource,4,"setLoginTimeout","(I)V")
J2CPP_DEFINE_METHOD(javax::sql::DataSource,5,"setLogWriter","(Ljava/io/PrintWriter;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_DATASOURCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
