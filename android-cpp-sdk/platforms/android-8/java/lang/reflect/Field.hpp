/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.reflect.Field
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_FIELD_HPP_DECL
#define J2CPP_JAVA_LANG_REFLECT_FIELD_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class AccessibleObject; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class Type; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class Member; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class AnnotatedElement; } } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <java/lang/reflect/AccessibleObject.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/Member.hpp>
#include <java/lang/reflect/Type.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace reflect {

	class Field;
	class Field
		: public object<Field>
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
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)

		explicit Field(jobject jobj)
		: object<Field>(jobj)
		{
		}

		operator local_ref<java::lang::reflect::AccessibleObject>() const;
		operator local_ref<java::lang::reflect::Member>() const;
		operator local_ref<java::lang::reflect::AnnotatedElement>() const;
		operator local_ref<java::lang::Object>() const;


		jboolean isSynthetic();
		local_ref< java::lang::String > toGenericString();
		jboolean isEnumConstant();
		local_ref< java::lang::reflect::Type > getGenericType();
		local_ref< array< local_ref< java::lang::annotation::Annotation >, 1> > getDeclaredAnnotations();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > get(local_ref< java::lang::Object >  const&);
		jboolean getBoolean(local_ref< java::lang::Object >  const&);
		jbyte getByte(local_ref< java::lang::Object >  const&);
		jchar getChar(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Class > getDeclaringClass();
		jdouble getDouble(local_ref< java::lang::Object >  const&);
		jfloat getFloat(local_ref< java::lang::Object >  const&);
		jint getInt(local_ref< java::lang::Object >  const&);
		jlong getLong(local_ref< java::lang::Object >  const&);
		jint getModifiers();
		local_ref< java::lang::String > getName();
		jshort getShort(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Class > getType();
		jint hashCode();
		void set(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		void setBoolean(local_ref< java::lang::Object >  const&, jboolean);
		void setByte(local_ref< java::lang::Object >  const&, jbyte);
		void setChar(local_ref< java::lang::Object >  const&, jchar);
		void setDouble(local_ref< java::lang::Object >  const&, jdouble);
		void setFloat(local_ref< java::lang::Object >  const&, jfloat);
		void setInt(local_ref< java::lang::Object >  const&, jint);
		void setLong(local_ref< java::lang::Object >  const&, jlong);
		void setShort(local_ref< java::lang::Object >  const&, jshort);
		local_ref< java::lang::String > toString();
	}; //class Field

} //namespace reflect
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_FIELD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_FIELD_HPP_IMPL
#define J2CPP_JAVA_LANG_REFLECT_FIELD_HPP_IMPL

namespace j2cpp {



java::lang::reflect::Field::operator local_ref<java::lang::reflect::AccessibleObject>() const
{
	return local_ref<java::lang::reflect::AccessibleObject>(get_jobject());
}

java::lang::reflect::Field::operator local_ref<java::lang::reflect::Member>() const
{
	return local_ref<java::lang::reflect::Member>(get_jobject());
}

java::lang::reflect::Field::operator local_ref<java::lang::reflect::AnnotatedElement>() const
{
	return local_ref<java::lang::reflect::AnnotatedElement>(get_jobject());
}

java::lang::reflect::Field::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jboolean java::lang::reflect::Field::isSynthetic()
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(1),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::String > java::lang::reflect::Field::toGenericString()
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(2),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean java::lang::reflect::Field::isEnumConstant()
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(3),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::reflect::Type > java::lang::reflect::Field::getGenericType()
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(4),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::reflect::Type >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::annotation::Annotation >, 1> > java::lang::reflect::Field::getDeclaredAnnotations()
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(5),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array< local_ref< java::lang::annotation::Annotation >, 1> >
	>(get_jobject());
}

jboolean java::lang::reflect::Field::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(6),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::lang::reflect::Field::get(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(7),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jboolean java::lang::reflect::Field::getBoolean(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(8),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}

jbyte java::lang::reflect::Field::getByte(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(9),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(9), 
		jbyte
	>(get_jobject(), a0);
}

jchar java::lang::reflect::Field::getChar(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(10),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(10), 
		jchar
	>(get_jobject(), a0);
}

local_ref< java::lang::Class > java::lang::reflect::Field::getDeclaringClass()
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(11),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Class >
	>(get_jobject());
}

jdouble java::lang::reflect::Field::getDouble(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(12),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(12), 
		jdouble
	>(get_jobject(), a0);
}

jfloat java::lang::reflect::Field::getFloat(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(13),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(13), 
		jfloat
	>(get_jobject(), a0);
}

jint java::lang::reflect::Field::getInt(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(14),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(14), 
		jint
	>(get_jobject(), a0);
}

jlong java::lang::reflect::Field::getLong(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(15),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(15), 
		jlong
	>(get_jobject(), a0);
}

jint java::lang::reflect::Field::getModifiers()
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(16),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(16), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::lang::reflect::Field::getName()
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(17),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jshort java::lang::reflect::Field::getShort(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(18),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(18), 
		jshort
	>(get_jobject(), a0);
}

local_ref< java::lang::Class > java::lang::reflect::Field::getType()
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(19),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::lang::Class >
	>(get_jobject());
}

jint java::lang::reflect::Field::hashCode()
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(20),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(20), 
		jint
	>(get_jobject());
}

void java::lang::reflect::Field::set(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(21),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject(), a0, a1);
}

void java::lang::reflect::Field::setBoolean(local_ref< java::lang::Object > const &a0, jboolean a1)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(22),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject(), a0, a1);
}

void java::lang::reflect::Field::setByte(local_ref< java::lang::Object > const &a0, jbyte a1)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(23),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject(), a0, a1);
}

void java::lang::reflect::Field::setChar(local_ref< java::lang::Object > const &a0, jchar a1)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(24),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(24), 
		void
	>(get_jobject(), a0, a1);
}

void java::lang::reflect::Field::setDouble(local_ref< java::lang::Object > const &a0, jdouble a1)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(25),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(25), 
		void
	>(get_jobject(), a0, a1);
}

void java::lang::reflect::Field::setFloat(local_ref< java::lang::Object > const &a0, jfloat a1)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(26),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(26), 
		void
	>(get_jobject(), a0, a1);
}

void java::lang::reflect::Field::setInt(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(27),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(27), 
		void
	>(get_jobject(), a0, a1);
}

void java::lang::reflect::Field::setLong(local_ref< java::lang::Object > const &a0, jlong a1)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(28),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(28), 
		void
	>(get_jobject(), a0, a1);
}

void java::lang::reflect::Field::setShort(local_ref< java::lang::Object > const &a0, jshort a1)
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(29),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(29), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > java::lang::reflect::Field::toString()
{
	return call_method<
		java::lang::reflect::Field::J2CPP_CLASS_NAME,
		java::lang::reflect::Field::J2CPP_METHOD_NAME(30),
		java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::lang::reflect::Field,"java/lang/reflect/Field")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,1,"isSynthetic","()Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,2,"toGenericString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,3,"isEnumConstant","()Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,4,"getGenericType","()Ljava/lang/reflect/Type;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,5,"getDeclaredAnnotations","()[java.lang.annotation.Annotation")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,6,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,7,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,8,"getBoolean","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,9,"getByte","(Ljava/lang/Object;)B")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,10,"getChar","(Ljava/lang/Object;)C")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,11,"getDeclaringClass","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,12,"getDouble","(Ljava/lang/Object;)D")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,13,"getFloat","(Ljava/lang/Object;)F")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,14,"getInt","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,15,"getLong","(Ljava/lang/Object;)J")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,16,"getModifiers","()I")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,17,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,18,"getShort","(Ljava/lang/Object;)S")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,19,"getType","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,20,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,21,"set","(Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,22,"setBoolean","(Ljava/lang/Object;Z)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,23,"setByte","(Ljava/lang/Object;B)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,24,"setChar","(Ljava/lang/Object;C)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,25,"setDouble","(Ljava/lang/Object;D)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,26,"setFloat","(Ljava/lang/Object;F)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,27,"setInt","(Ljava/lang/Object;I)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,28,"setLong","(Ljava/lang/Object;J)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,29,"setShort","(Ljava/lang/Object;S)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,30,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_FIELD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
