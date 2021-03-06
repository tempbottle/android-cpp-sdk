/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.Comparator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_COMPARATOR_HPP_DECL
#define J2CPP_JAVA_UTIL_COMPARATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Comparator;
	class Comparator
		: public object<Comparator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit Comparator(jobject jobj)
		: object<Comparator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint compare(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
	}; //class Comparator

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_COMPARATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_COMPARATOR_HPP_IMPL
#define J2CPP_JAVA_UTIL_COMPARATOR_HPP_IMPL

namespace j2cpp {



java::util::Comparator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jint java::util::Comparator::compare(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::Comparator::J2CPP_CLASS_NAME,
		java::util::Comparator::J2CPP_METHOD_NAME(0),
		java::util::Comparator::J2CPP_METHOD_SIGNATURE(0), 
		jint
	>(get_jobject(), a0, a1);
}

jboolean java::util::Comparator::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Comparator::J2CPP_CLASS_NAME,
		java::util::Comparator::J2CPP_METHOD_NAME(1),
		java::util::Comparator::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::Comparator,"java/util/Comparator")
J2CPP_DEFINE_METHOD(java::util::Comparator,0,"compare","(Ljava/lang/Object;Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::Comparator,1,"equals","(Ljava/lang/Object;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_COMPARATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
