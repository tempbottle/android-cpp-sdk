/*================================================================================
  code generated by: java2cpp
  class: android.content.SharedPreferences
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_SHAREDPREFERENCES_HPP_DECL
#define J2CPP_ANDROID_CONTENT_SHAREDPREFERENCES_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace android { namespace content { namespace SharedPreferences_ { class OnSharedPreferenceChangeListener; } } } }
namespace j2cpp { namespace android { namespace content { namespace SharedPreferences_ { class Editor; } } } }


#include <android/content/SharedPreferences.hpp>
#include <java/lang/String.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace android { namespace content {

	class SharedPreferences;
	namespace SharedPreferences_ {

		class OnSharedPreferenceChangeListener;
		class OnSharedPreferenceChangeListener
			: public cpp_object<OnSharedPreferenceChangeListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnSharedPreferenceChangeListener(jobject jobj)
			: cpp_object<OnSharedPreferenceChangeListener>(jobj)
			{
			}

			void onSharedPreferenceChanged(local_ref< android::content::SharedPreferences > const&, local_ref< java::lang::String > const&);
		}; //class OnSharedPreferenceChangeListener

		class Editor;
		class Editor
			: public cpp_object<Editor>
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

			Editor(jobject jobj)
			: cpp_object<Editor>(jobj)
			{
			}

			local_ref< android::content::SharedPreferences_::Editor > putString(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
			local_ref< android::content::SharedPreferences_::Editor > putInt(local_ref< java::lang::String > const&, cpp_int const&);
			local_ref< android::content::SharedPreferences_::Editor > putLong(local_ref< java::lang::String > const&, cpp_long const&);
			local_ref< android::content::SharedPreferences_::Editor > putFloat(local_ref< java::lang::String > const&, cpp_float const&);
			local_ref< android::content::SharedPreferences_::Editor > putBoolean(local_ref< java::lang::String > const&, cpp_boolean const&);
			local_ref< android::content::SharedPreferences_::Editor > remove(local_ref< java::lang::String > const&);
			local_ref< android::content::SharedPreferences_::Editor > clear();
			cpp_boolean commit();
		}; //class Editor

	} //namespace SharedPreferences_

	class SharedPreferences
		: public cpp_object<SharedPreferences>
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

		typedef SharedPreferences_::OnSharedPreferenceChangeListener OnSharedPreferenceChangeListener;
		typedef SharedPreferences_::Editor Editor;

		SharedPreferences(jobject jobj)
		: cpp_object<SharedPreferences>(jobj)
		{
		}

		local_ref< java::util::Map > getAll();
		local_ref< java::lang::String > getString(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		cpp_int getInt(local_ref< java::lang::String > const&, cpp_int const&);
		cpp_long getLong(local_ref< java::lang::String > const&, cpp_long const&);
		cpp_float getFloat(local_ref< java::lang::String > const&, cpp_float const&);
		cpp_boolean getBoolean(local_ref< java::lang::String > const&, cpp_boolean const&);
		cpp_boolean contains(local_ref< java::lang::String > const&);
		local_ref< android::content::SharedPreferences_::Editor > edit();
		void registerOnSharedPreferenceChangeListener(local_ref< android::content::SharedPreferences_::OnSharedPreferenceChangeListener > const&);
		void unregisterOnSharedPreferenceChangeListener(local_ref< android::content::SharedPreferences_::OnSharedPreferenceChangeListener > const&);
	}; //class SharedPreferences

} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_SHAREDPREFERENCES_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_SHAREDPREFERENCES_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_SHAREDPREFERENCES_HPP_IMPL

namespace j2cpp {



void android::content::SharedPreferences_::OnSharedPreferenceChangeListener::onSharedPreferenceChanged(local_ref< android::content::SharedPreferences > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::SharedPreferences_::OnSharedPreferenceChangeListener,"android/content/SharedPreferences$OnSharedPreferenceChangeListener")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences_::OnSharedPreferenceChangeListener,0,"onSharedPreferenceChanged","(Landroid/content/SharedPreferences;Ljava/lang/String;)V")

local_ref< android::content::SharedPreferences_::Editor > android::content::SharedPreferences_::Editor::putString(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< android::content::SharedPreferences_::Editor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::content::SharedPreferences_::Editor > android::content::SharedPreferences_::Editor::putInt(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< android::content::SharedPreferences_::Editor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::content::SharedPreferences_::Editor > android::content::SharedPreferences_::Editor::putLong(local_ref< java::lang::String > const &a0, cpp_long const &a1)
{
	return local_ref< android::content::SharedPreferences_::Editor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::content::SharedPreferences_::Editor > android::content::SharedPreferences_::Editor::putFloat(local_ref< java::lang::String > const &a0, cpp_float const &a1)
{
	return local_ref< android::content::SharedPreferences_::Editor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::content::SharedPreferences_::Editor > android::content::SharedPreferences_::Editor::putBoolean(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return local_ref< android::content::SharedPreferences_::Editor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::content::SharedPreferences_::Editor > android::content::SharedPreferences_::Editor::remove(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::content::SharedPreferences_::Editor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::SharedPreferences_::Editor > android::content::SharedPreferences_::Editor::clear()
{
	return local_ref< android::content::SharedPreferences_::Editor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean android::content::SharedPreferences_::Editor::commit()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::SharedPreferences_::Editor,"android/content/SharedPreferences$Editor")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences_::Editor,0,"putString","(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences_::Editor,1,"putInt","(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences_::Editor,2,"putLong","(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences_::Editor,3,"putFloat","(Ljava/lang/String;F)Landroid/content/SharedPreferences$Editor;")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences_::Editor,4,"putBoolean","(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences_::Editor,5,"remove","(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences_::Editor,6,"clear","()Landroid/content/SharedPreferences$Editor;")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences_::Editor,7,"commit","()Z")


local_ref< java::util::Map > android::content::SharedPreferences::getAll()
{
	return local_ref< java::util::Map >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::String > android::content::SharedPreferences::getString(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::content::SharedPreferences::getInt(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_long android::content::SharedPreferences::getLong(local_ref< java::lang::String > const &a0, cpp_long const &a1)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_float android::content::SharedPreferences::getFloat(local_ref< java::lang::String > const &a0, cpp_float const &a1)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::content::SharedPreferences::getBoolean(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::content::SharedPreferences::contains(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::SharedPreferences_::Editor > android::content::SharedPreferences::edit()
{
	return local_ref< android::content::SharedPreferences_::Editor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::content::SharedPreferences::registerOnSharedPreferenceChangeListener(local_ref< android::content::SharedPreferences_::OnSharedPreferenceChangeListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void android::content::SharedPreferences::unregisterOnSharedPreferenceChangeListener(local_ref< android::content::SharedPreferences_::OnSharedPreferenceChangeListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::SharedPreferences,"android/content/SharedPreferences")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences,0,"getAll","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences,1,"getString","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences,2,"getInt","(Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences,3,"getLong","(Ljava/lang/String;J)J")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences,4,"getFloat","(Ljava/lang/String;F)F")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences,5,"getBoolean","(Ljava/lang/String;Z)Z")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences,6,"contains","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences,7,"edit","()Landroid/content/SharedPreferences$Editor;")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences,8,"registerOnSharedPreferenceChangeListener","(Landroid/content/SharedPreferences$OnSharedPreferenceChangeListener;)V")
J2CPP_DEFINE_METHOD(android::content::SharedPreferences,9,"unregisterOnSharedPreferenceChangeListener","(Landroid/content/SharedPreferences$OnSharedPreferenceChangeListener;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_SHAREDPREFERENCES_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION