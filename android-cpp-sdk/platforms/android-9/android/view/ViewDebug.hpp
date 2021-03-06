/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.ViewDebug
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_VIEWDEBUG_HPP_DECL
#define J2CPP_ANDROID_VIEW_VIEWDEBUG_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewDebug_ { class HierarchyTraceType; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewDebug_ { class IntToString; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewDebug_ { class FlagToString; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewDebug_ { class RecyclerTraceType; } } } }


#include <android/view/View.hpp>
#include <android/view/ViewDebug.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/annotation/Annotation.hpp>


namespace j2cpp {

namespace android { namespace view {

	class ViewDebug;
	namespace ViewDebug_ {

		class HierarchyTraceType;
		class HierarchyTraceType
			: public object<HierarchyTraceType>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)
			J2CPP_DECLARE_FIELD(6)
			J2CPP_DECLARE_FIELD(7)
			J2CPP_DECLARE_FIELD(8)

			explicit HierarchyTraceType(jobject jobj)
			: object<HierarchyTraceType>(jobj)
			{
			}

			operator local_ref<java::lang::Comparable>() const;
			operator local_ref<java::lang::Enum>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::io::Serializable>() const;


			static local_ref< array< local_ref< android::view::ViewDebug_::HierarchyTraceType >, 1> > values();
			static local_ref< android::view::ViewDebug_::HierarchyTraceType > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::view::ViewDebug_::HierarchyTraceType > > BUILD_CACHE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::view::ViewDebug_::HierarchyTraceType > > DRAW;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::view::ViewDebug_::HierarchyTraceType > > INVALIDATE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::view::ViewDebug_::HierarchyTraceType > > INVALIDATE_CHILD;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::view::ViewDebug_::HierarchyTraceType > > INVALIDATE_CHILD_IN_PARENT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< android::view::ViewDebug_::HierarchyTraceType > > ON_LAYOUT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< android::view::ViewDebug_::HierarchyTraceType > > ON_MEASURE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< android::view::ViewDebug_::HierarchyTraceType > > REQUEST_LAYOUT;
		}; //class HierarchyTraceType

		class CapturedViewProperty;
		class CapturedViewProperty
			: public object<CapturedViewProperty>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit CapturedViewProperty(jobject jobj)
			: object<CapturedViewProperty>(jobj)
			{
			}

			operator local_ref<java::lang::annotation::Annotation>() const;
			operator local_ref<java::lang::Object>() const;


			jboolean retrieveReturn();
		}; //class CapturedViewProperty

		class IntToString;
		class IntToString
			: public object<IntToString>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit IntToString(jobject jobj)
			: object<IntToString>(jobj)
			{
			}

			operator local_ref<java::lang::annotation::Annotation>() const;
			operator local_ref<java::lang::Object>() const;


			jint from();
			local_ref< java::lang::String > to();
		}; //class IntToString

		class FlagToString;
		class FlagToString
			: public object<FlagToString>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)

			explicit FlagToString(jobject jobj)
			: object<FlagToString>(jobj)
			{
			}

			operator local_ref<java::lang::annotation::Annotation>() const;
			operator local_ref<java::lang::Object>() const;


			jint mask();
			jint equals();
			local_ref< java::lang::String > name();
			jboolean outputIf();
		}; //class FlagToString

		class RecyclerTraceType;
		class RecyclerTraceType
			: public object<RecyclerTraceType>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)
			J2CPP_DECLARE_FIELD(6)

			explicit RecyclerTraceType(jobject jobj)
			: object<RecyclerTraceType>(jobj)
			{
			}

			operator local_ref<java::lang::Comparable>() const;
			operator local_ref<java::lang::Enum>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::io::Serializable>() const;


			static local_ref< array< local_ref< android::view::ViewDebug_::RecyclerTraceType >, 1> > values();
			static local_ref< android::view::ViewDebug_::RecyclerTraceType > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::view::ViewDebug_::RecyclerTraceType > > BIND_VIEW;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::view::ViewDebug_::RecyclerTraceType > > MOVE_FROM_ACTIVE_TO_SCRAP_HEAP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::view::ViewDebug_::RecyclerTraceType > > MOVE_TO_SCRAP_HEAP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::view::ViewDebug_::RecyclerTraceType > > NEW_VIEW;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::view::ViewDebug_::RecyclerTraceType > > RECYCLE_FROM_ACTIVE_HEAP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< android::view::ViewDebug_::RecyclerTraceType > > RECYCLE_FROM_SCRAP_HEAP;
		}; //class RecyclerTraceType

		class ExportedProperty;
		class ExportedProperty
			: public object<ExportedProperty>
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

			explicit ExportedProperty(jobject jobj)
			: object<ExportedProperty>(jobj)
			{
			}

			operator local_ref<java::lang::annotation::Annotation>() const;
			operator local_ref<java::lang::Object>() const;


			jboolean resolveId();
			local_ref< array< local_ref< android::view::ViewDebug_::IntToString >, 1> > mapping();
			local_ref< array< local_ref< android::view::ViewDebug_::IntToString >, 1> > indexMapping();
			local_ref< array< local_ref< android::view::ViewDebug_::FlagToString >, 1> > flagMapping();
			jboolean deepExport();
			local_ref< java::lang::String > prefix();
			local_ref< java::lang::String > category();
		}; //class ExportedProperty

	} //namespace ViewDebug_

	class ViewDebug
		: public object<ViewDebug>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		typedef ViewDebug_::HierarchyTraceType HierarchyTraceType;
		typedef ViewDebug_::CapturedViewProperty CapturedViewProperty;
		typedef ViewDebug_::IntToString IntToString;
		typedef ViewDebug_::FlagToString FlagToString;
		typedef ViewDebug_::RecyclerTraceType RecyclerTraceType;
		typedef ViewDebug_::ExportedProperty ExportedProperty;

		explicit ViewDebug(jobject jobj)
		: object<ViewDebug>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ViewDebug();
		static void trace(local_ref< android::view::View >  const&, local_ref< android::view::ViewDebug_::RecyclerTraceType >  const&, local_ref< array<jint,1> >  const&);
		static void startRecyclerTracing(local_ref< java::lang::String >  const&, local_ref< android::view::View >  const&);
		static void stopRecyclerTracing();
		static void trace(local_ref< android::view::View >  const&, local_ref< android::view::ViewDebug_::HierarchyTraceType >  const&);
		static void startHierarchyTracing(local_ref< java::lang::String >  const&, local_ref< android::view::View >  const&);
		static void stopHierarchyTracing();
		static void dumpCapturedView(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jboolean > TRACE_HIERARCHY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jboolean > TRACE_RECYCLER;
	}; //class ViewDebug

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_VIEWDEBUG_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_VIEWDEBUG_HPP_IMPL
#define J2CPP_ANDROID_VIEW_VIEWDEBUG_HPP_IMPL

namespace j2cpp {




android::view::ViewDebug_::HierarchyTraceType::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

android::view::ViewDebug_::HierarchyTraceType::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

android::view::ViewDebug_::HierarchyTraceType::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::view::ViewDebug_::HierarchyTraceType::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

local_ref< array< local_ref< android::view::ViewDebug_::HierarchyTraceType >, 1> > android::view::ViewDebug_::HierarchyTraceType::values()
{
	return call_static_method<
		android::view::ViewDebug_::HierarchyTraceType::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::HierarchyTraceType::J2CPP_METHOD_NAME(0),
		android::view::ViewDebug_::HierarchyTraceType::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::view::ViewDebug_::HierarchyTraceType >, 1> >
	>();
}

local_ref< android::view::ViewDebug_::HierarchyTraceType > android::view::ViewDebug_::HierarchyTraceType::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::view::ViewDebug_::HierarchyTraceType::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::HierarchyTraceType::J2CPP_METHOD_NAME(1),
		android::view::ViewDebug_::HierarchyTraceType::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::view::ViewDebug_::HierarchyTraceType >
	>(a0);
}




static_field<
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_CLASS_NAME,
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_NAME(0),
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::view::ViewDebug_::HierarchyTraceType >
> android::view::ViewDebug_::HierarchyTraceType::BUILD_CACHE;

static_field<
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_CLASS_NAME,
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_NAME(1),
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::view::ViewDebug_::HierarchyTraceType >
> android::view::ViewDebug_::HierarchyTraceType::DRAW;

static_field<
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_CLASS_NAME,
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_NAME(2),
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::view::ViewDebug_::HierarchyTraceType >
> android::view::ViewDebug_::HierarchyTraceType::INVALIDATE;

static_field<
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_CLASS_NAME,
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_NAME(3),
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::view::ViewDebug_::HierarchyTraceType >
> android::view::ViewDebug_::HierarchyTraceType::INVALIDATE_CHILD;

static_field<
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_CLASS_NAME,
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_NAME(4),
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::view::ViewDebug_::HierarchyTraceType >
> android::view::ViewDebug_::HierarchyTraceType::INVALIDATE_CHILD_IN_PARENT;

static_field<
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_CLASS_NAME,
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_NAME(5),
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_SIGNATURE(5),
	local_ref< android::view::ViewDebug_::HierarchyTraceType >
> android::view::ViewDebug_::HierarchyTraceType::ON_LAYOUT;

static_field<
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_CLASS_NAME,
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_NAME(6),
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_SIGNATURE(6),
	local_ref< android::view::ViewDebug_::HierarchyTraceType >
> android::view::ViewDebug_::HierarchyTraceType::ON_MEASURE;

static_field<
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_CLASS_NAME,
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_NAME(7),
	android::view::ViewDebug_::HierarchyTraceType::J2CPP_FIELD_SIGNATURE(7),
	local_ref< android::view::ViewDebug_::HierarchyTraceType >
> android::view::ViewDebug_::HierarchyTraceType::REQUEST_LAYOUT;


J2CPP_DEFINE_CLASS(android::view::ViewDebug_::HierarchyTraceType,"android/view/ViewDebug$HierarchyTraceType")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::HierarchyTraceType,0,"values","()[android.view.ViewDebug.HierarchyTraceType")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::HierarchyTraceType,1,"valueOf","(Ljava/lang/String;)Landroid/view/ViewDebug$HierarchyTraceType;")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::HierarchyTraceType,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::HierarchyTraceType,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::HierarchyTraceType,0,"BUILD_CACHE","Landroid/view/ViewDebug$HierarchyTraceType;")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::HierarchyTraceType,1,"DRAW","Landroid/view/ViewDebug$HierarchyTraceType;")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::HierarchyTraceType,2,"INVALIDATE","Landroid/view/ViewDebug$HierarchyTraceType;")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::HierarchyTraceType,3,"INVALIDATE_CHILD","Landroid/view/ViewDebug$HierarchyTraceType;")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::HierarchyTraceType,4,"INVALIDATE_CHILD_IN_PARENT","Landroid/view/ViewDebug$HierarchyTraceType;")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::HierarchyTraceType,5,"ON_LAYOUT","Landroid/view/ViewDebug$HierarchyTraceType;")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::HierarchyTraceType,6,"ON_MEASURE","Landroid/view/ViewDebug$HierarchyTraceType;")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::HierarchyTraceType,7,"REQUEST_LAYOUT","Landroid/view/ViewDebug$HierarchyTraceType;")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::HierarchyTraceType,8,"$VALUES","[android.view.ViewDebug.HierarchyTraceType")


android::view::ViewDebug_::CapturedViewProperty::operator local_ref<java::lang::annotation::Annotation>() const
{
	return local_ref<java::lang::annotation::Annotation>(get_jobject());
}

android::view::ViewDebug_::CapturedViewProperty::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::view::ViewDebug_::CapturedViewProperty::retrieveReturn()
{
	return call_method<
		android::view::ViewDebug_::CapturedViewProperty::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::CapturedViewProperty::J2CPP_METHOD_NAME(0),
		android::view::ViewDebug_::CapturedViewProperty::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::view::ViewDebug_::CapturedViewProperty,"android/view/ViewDebug$CapturedViewProperty")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::CapturedViewProperty,0,"retrieveReturn","()Z")


android::view::ViewDebug_::IntToString::operator local_ref<java::lang::annotation::Annotation>() const
{
	return local_ref<java::lang::annotation::Annotation>(get_jobject());
}

android::view::ViewDebug_::IntToString::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jint android::view::ViewDebug_::IntToString::from()
{
	return call_method<
		android::view::ViewDebug_::IntToString::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::IntToString::J2CPP_METHOD_NAME(0),
		android::view::ViewDebug_::IntToString::J2CPP_METHOD_SIGNATURE(0), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > android::view::ViewDebug_::IntToString::to()
{
	return call_method<
		android::view::ViewDebug_::IntToString::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::IntToString::J2CPP_METHOD_NAME(1),
		android::view::ViewDebug_::IntToString::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::view::ViewDebug_::IntToString,"android/view/ViewDebug$IntToString")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::IntToString,0,"from","()I")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::IntToString,1,"to","()Ljava/lang/String;")


android::view::ViewDebug_::FlagToString::operator local_ref<java::lang::annotation::Annotation>() const
{
	return local_ref<java::lang::annotation::Annotation>(get_jobject());
}

android::view::ViewDebug_::FlagToString::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jint android::view::ViewDebug_::FlagToString::mask()
{
	return call_method<
		android::view::ViewDebug_::FlagToString::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::FlagToString::J2CPP_METHOD_NAME(0),
		android::view::ViewDebug_::FlagToString::J2CPP_METHOD_SIGNATURE(0), 
		jint
	>(get_jobject());
}

jint android::view::ViewDebug_::FlagToString::equals()
{
	return call_method<
		android::view::ViewDebug_::FlagToString::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::FlagToString::J2CPP_METHOD_NAME(1),
		android::view::ViewDebug_::FlagToString::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > android::view::ViewDebug_::FlagToString::name()
{
	return call_method<
		android::view::ViewDebug_::FlagToString::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::FlagToString::J2CPP_METHOD_NAME(2),
		android::view::ViewDebug_::FlagToString::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean android::view::ViewDebug_::FlagToString::outputIf()
{
	return call_method<
		android::view::ViewDebug_::FlagToString::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::FlagToString::J2CPP_METHOD_NAME(3),
		android::view::ViewDebug_::FlagToString::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::view::ViewDebug_::FlagToString,"android/view/ViewDebug$FlagToString")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::FlagToString,0,"mask","()I")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::FlagToString,1,"equals","()I")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::FlagToString,2,"name","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::FlagToString,3,"outputIf","()Z")


android::view::ViewDebug_::RecyclerTraceType::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

android::view::ViewDebug_::RecyclerTraceType::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

android::view::ViewDebug_::RecyclerTraceType::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::view::ViewDebug_::RecyclerTraceType::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

local_ref< array< local_ref< android::view::ViewDebug_::RecyclerTraceType >, 1> > android::view::ViewDebug_::RecyclerTraceType::values()
{
	return call_static_method<
		android::view::ViewDebug_::RecyclerTraceType::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::RecyclerTraceType::J2CPP_METHOD_NAME(0),
		android::view::ViewDebug_::RecyclerTraceType::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::view::ViewDebug_::RecyclerTraceType >, 1> >
	>();
}

local_ref< android::view::ViewDebug_::RecyclerTraceType > android::view::ViewDebug_::RecyclerTraceType::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::view::ViewDebug_::RecyclerTraceType::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::RecyclerTraceType::J2CPP_METHOD_NAME(1),
		android::view::ViewDebug_::RecyclerTraceType::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::view::ViewDebug_::RecyclerTraceType >
	>(a0);
}




static_field<
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_CLASS_NAME,
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_FIELD_NAME(0),
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::view::ViewDebug_::RecyclerTraceType >
> android::view::ViewDebug_::RecyclerTraceType::BIND_VIEW;

static_field<
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_CLASS_NAME,
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_FIELD_NAME(1),
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::view::ViewDebug_::RecyclerTraceType >
> android::view::ViewDebug_::RecyclerTraceType::MOVE_FROM_ACTIVE_TO_SCRAP_HEAP;

static_field<
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_CLASS_NAME,
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_FIELD_NAME(2),
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::view::ViewDebug_::RecyclerTraceType >
> android::view::ViewDebug_::RecyclerTraceType::MOVE_TO_SCRAP_HEAP;

static_field<
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_CLASS_NAME,
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_FIELD_NAME(3),
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::view::ViewDebug_::RecyclerTraceType >
> android::view::ViewDebug_::RecyclerTraceType::NEW_VIEW;

static_field<
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_CLASS_NAME,
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_FIELD_NAME(4),
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::view::ViewDebug_::RecyclerTraceType >
> android::view::ViewDebug_::RecyclerTraceType::RECYCLE_FROM_ACTIVE_HEAP;

static_field<
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_CLASS_NAME,
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_FIELD_NAME(5),
	android::view::ViewDebug_::RecyclerTraceType::J2CPP_FIELD_SIGNATURE(5),
	local_ref< android::view::ViewDebug_::RecyclerTraceType >
> android::view::ViewDebug_::RecyclerTraceType::RECYCLE_FROM_SCRAP_HEAP;


J2CPP_DEFINE_CLASS(android::view::ViewDebug_::RecyclerTraceType,"android/view/ViewDebug$RecyclerTraceType")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::RecyclerTraceType,0,"values","()[android.view.ViewDebug.RecyclerTraceType")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::RecyclerTraceType,1,"valueOf","(Ljava/lang/String;)Landroid/view/ViewDebug$RecyclerTraceType;")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::RecyclerTraceType,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::RecyclerTraceType,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::RecyclerTraceType,0,"BIND_VIEW","Landroid/view/ViewDebug$RecyclerTraceType;")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::RecyclerTraceType,1,"MOVE_FROM_ACTIVE_TO_SCRAP_HEAP","Landroid/view/ViewDebug$RecyclerTraceType;")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::RecyclerTraceType,2,"MOVE_TO_SCRAP_HEAP","Landroid/view/ViewDebug$RecyclerTraceType;")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::RecyclerTraceType,3,"NEW_VIEW","Landroid/view/ViewDebug$RecyclerTraceType;")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::RecyclerTraceType,4,"RECYCLE_FROM_ACTIVE_HEAP","Landroid/view/ViewDebug$RecyclerTraceType;")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::RecyclerTraceType,5,"RECYCLE_FROM_SCRAP_HEAP","Landroid/view/ViewDebug$RecyclerTraceType;")
J2CPP_DEFINE_FIELD(android::view::ViewDebug_::RecyclerTraceType,6,"$VALUES","[android.view.ViewDebug.RecyclerTraceType")


android::view::ViewDebug_::ExportedProperty::operator local_ref<java::lang::annotation::Annotation>() const
{
	return local_ref<java::lang::annotation::Annotation>(get_jobject());
}

android::view::ViewDebug_::ExportedProperty::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::view::ViewDebug_::ExportedProperty::resolveId()
{
	return call_method<
		android::view::ViewDebug_::ExportedProperty::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::ExportedProperty::J2CPP_METHOD_NAME(0),
		android::view::ViewDebug_::ExportedProperty::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject());
}

local_ref< array< local_ref< android::view::ViewDebug_::IntToString >, 1> > android::view::ViewDebug_::ExportedProperty::mapping()
{
	return call_method<
		android::view::ViewDebug_::ExportedProperty::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::ExportedProperty::J2CPP_METHOD_NAME(1),
		android::view::ViewDebug_::ExportedProperty::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array< local_ref< android::view::ViewDebug_::IntToString >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< android::view::ViewDebug_::IntToString >, 1> > android::view::ViewDebug_::ExportedProperty::indexMapping()
{
	return call_method<
		android::view::ViewDebug_::ExportedProperty::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::ExportedProperty::J2CPP_METHOD_NAME(2),
		android::view::ViewDebug_::ExportedProperty::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array< local_ref< android::view::ViewDebug_::IntToString >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< android::view::ViewDebug_::FlagToString >, 1> > android::view::ViewDebug_::ExportedProperty::flagMapping()
{
	return call_method<
		android::view::ViewDebug_::ExportedProperty::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::ExportedProperty::J2CPP_METHOD_NAME(3),
		android::view::ViewDebug_::ExportedProperty::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array< local_ref< android::view::ViewDebug_::FlagToString >, 1> >
	>(get_jobject());
}

jboolean android::view::ViewDebug_::ExportedProperty::deepExport()
{
	return call_method<
		android::view::ViewDebug_::ExportedProperty::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::ExportedProperty::J2CPP_METHOD_NAME(4),
		android::view::ViewDebug_::ExportedProperty::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::String > android::view::ViewDebug_::ExportedProperty::prefix()
{
	return call_method<
		android::view::ViewDebug_::ExportedProperty::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::ExportedProperty::J2CPP_METHOD_NAME(5),
		android::view::ViewDebug_::ExportedProperty::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::view::ViewDebug_::ExportedProperty::category()
{
	return call_method<
		android::view::ViewDebug_::ExportedProperty::J2CPP_CLASS_NAME,
		android::view::ViewDebug_::ExportedProperty::J2CPP_METHOD_NAME(6),
		android::view::ViewDebug_::ExportedProperty::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::view::ViewDebug_::ExportedProperty,"android/view/ViewDebug$ExportedProperty")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::ExportedProperty,0,"resolveId","()Z")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::ExportedProperty,1,"mapping","()[android.view.ViewDebug.IntToString")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::ExportedProperty,2,"indexMapping","()[android.view.ViewDebug.IntToString")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::ExportedProperty,3,"flagMapping","()[android.view.ViewDebug.FlagToString")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::ExportedProperty,4,"deepExport","()Z")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::ExportedProperty,5,"prefix","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::view::ViewDebug_::ExportedProperty,6,"category","()Ljava/lang/String;")



android::view::ViewDebug::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::view::ViewDebug::ViewDebug()
: object<android::view::ViewDebug>(
	call_new_object<
		android::view::ViewDebug::J2CPP_CLASS_NAME,
		android::view::ViewDebug::J2CPP_METHOD_NAME(0),
		android::view::ViewDebug::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::view::ViewDebug::trace(local_ref< android::view::View > const &a0, local_ref< android::view::ViewDebug_::RecyclerTraceType > const &a1, local_ref< array<jint,1> > const &a2)
{
	return call_static_method<
		android::view::ViewDebug::J2CPP_CLASS_NAME,
		android::view::ViewDebug::J2CPP_METHOD_NAME(1),
		android::view::ViewDebug::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(a0, a1, a2);
}

void android::view::ViewDebug::startRecyclerTracing(local_ref< java::lang::String > const &a0, local_ref< android::view::View > const &a1)
{
	return call_static_method<
		android::view::ViewDebug::J2CPP_CLASS_NAME,
		android::view::ViewDebug::J2CPP_METHOD_NAME(2),
		android::view::ViewDebug::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(a0, a1);
}

void android::view::ViewDebug::stopRecyclerTracing()
{
	return call_static_method<
		android::view::ViewDebug::J2CPP_CLASS_NAME,
		android::view::ViewDebug::J2CPP_METHOD_NAME(3),
		android::view::ViewDebug::J2CPP_METHOD_SIGNATURE(3), 
		void
	>();
}

void android::view::ViewDebug::trace(local_ref< android::view::View > const &a0, local_ref< android::view::ViewDebug_::HierarchyTraceType > const &a1)
{
	return call_static_method<
		android::view::ViewDebug::J2CPP_CLASS_NAME,
		android::view::ViewDebug::J2CPP_METHOD_NAME(4),
		android::view::ViewDebug::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(a0, a1);
}

void android::view::ViewDebug::startHierarchyTracing(local_ref< java::lang::String > const &a0, local_ref< android::view::View > const &a1)
{
	return call_static_method<
		android::view::ViewDebug::J2CPP_CLASS_NAME,
		android::view::ViewDebug::J2CPP_METHOD_NAME(5),
		android::view::ViewDebug::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(a0, a1);
}

void android::view::ViewDebug::stopHierarchyTracing()
{
	return call_static_method<
		android::view::ViewDebug::J2CPP_CLASS_NAME,
		android::view::ViewDebug::J2CPP_METHOD_NAME(6),
		android::view::ViewDebug::J2CPP_METHOD_SIGNATURE(6), 
		void
	>();
}

void android::view::ViewDebug::dumpCapturedView(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_static_method<
		android::view::ViewDebug::J2CPP_CLASS_NAME,
		android::view::ViewDebug::J2CPP_METHOD_NAME(7),
		android::view::ViewDebug::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(a0, a1);
}


static_field<
	android::view::ViewDebug::J2CPP_CLASS_NAME,
	android::view::ViewDebug::J2CPP_FIELD_NAME(0),
	android::view::ViewDebug::J2CPP_FIELD_SIGNATURE(0),
	jboolean
> android::view::ViewDebug::TRACE_HIERARCHY;

static_field<
	android::view::ViewDebug::J2CPP_CLASS_NAME,
	android::view::ViewDebug::J2CPP_FIELD_NAME(1),
	android::view::ViewDebug::J2CPP_FIELD_SIGNATURE(1),
	jboolean
> android::view::ViewDebug::TRACE_RECYCLER;


J2CPP_DEFINE_CLASS(android::view::ViewDebug,"android/view/ViewDebug")
J2CPP_DEFINE_METHOD(android::view::ViewDebug,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::ViewDebug,1,"trace","(Landroid/view/View;Landroid/view/ViewDebug$RecyclerTraceType;[I)V")
J2CPP_DEFINE_METHOD(android::view::ViewDebug,2,"startRecyclerTracing","(Ljava/lang/String;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::view::ViewDebug,3,"stopRecyclerTracing","()V")
J2CPP_DEFINE_METHOD(android::view::ViewDebug,4,"trace","(Landroid/view/View;Landroid/view/ViewDebug$HierarchyTraceType;)V")
J2CPP_DEFINE_METHOD(android::view::ViewDebug,5,"startHierarchyTracing","(Ljava/lang/String;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::view::ViewDebug,6,"stopHierarchyTracing","()V")
J2CPP_DEFINE_METHOD(android::view::ViewDebug,7,"dumpCapturedView","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_FIELD(android::view::ViewDebug,0,"TRACE_HIERARCHY","Z")
J2CPP_DEFINE_FIELD(android::view::ViewDebug,1,"TRACE_RECYCLER","Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_VIEWDEBUG_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
