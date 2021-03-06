/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.DatePicker
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_DATEPICKER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_DATEPICKER_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewManager; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace view { class ViewParent; } } }
namespace j2cpp { namespace android { namespace widget { class FrameLayout; } } }
namespace j2cpp { namespace android { namespace widget { namespace DatePicker_ { class OnDateChangedListener; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/view/ViewManager.hpp>
#include <android/view/ViewParent.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/DatePicker.hpp>
#include <android/widget/FrameLayout.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class DatePicker;
	namespace DatePicker_ {

		class OnDateChangedListener;
		class OnDateChangedListener
			: public object<OnDateChangedListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnDateChangedListener(jobject jobj)
			: object<OnDateChangedListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onDateChanged(local_ref< android::widget::DatePicker >  const&, jint, jint, jint);
		}; //class OnDateChangedListener

	} //namespace DatePicker_

	class DatePicker
		: public object<DatePicker>
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

		typedef DatePicker_::OnDateChangedListener OnDateChangedListener;

		explicit DatePicker(jobject jobj)
		: object<DatePicker>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::ViewManager>() const;
		operator local_ref<android::view::ViewGroup>() const;
		operator local_ref<android::view::ViewParent>() const;
		operator local_ref<android::widget::FrameLayout>() const;
		operator local_ref<java::lang::Object>() const;


		DatePicker(local_ref< android::content::Context > const&);
		DatePicker(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		DatePicker(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		void setEnabled(jboolean);
		void updateDate(jint, jint, jint);
		void init(jint, jint, jint, local_ref< android::widget::DatePicker_::OnDateChangedListener >  const&);
		jint getYear();
		jint getMonth();
		jint getDayOfMonth();
	}; //class DatePicker

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_DATEPICKER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_DATEPICKER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_DATEPICKER_HPP_IMPL

namespace j2cpp {




android::widget::DatePicker_::OnDateChangedListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::widget::DatePicker_::OnDateChangedListener::onDateChanged(local_ref< android::widget::DatePicker > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::widget::DatePicker_::OnDateChangedListener::J2CPP_CLASS_NAME,
		android::widget::DatePicker_::OnDateChangedListener::J2CPP_METHOD_NAME(0),
		android::widget::DatePicker_::OnDateChangedListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}


J2CPP_DEFINE_CLASS(android::widget::DatePicker_::OnDateChangedListener,"android/widget/DatePicker$OnDateChangedListener")
J2CPP_DEFINE_METHOD(android::widget::DatePicker_::OnDateChangedListener,0,"onDateChanged","(Landroid/widget/DatePicker;III)V")



android::widget::DatePicker::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::DatePicker::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::DatePicker::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::DatePicker::operator local_ref<android::view::ViewManager>() const
{
	return local_ref<android::view::ViewManager>(get_jobject());
}

android::widget::DatePicker::operator local_ref<android::view::ViewGroup>() const
{
	return local_ref<android::view::ViewGroup>(get_jobject());
}

android::widget::DatePicker::operator local_ref<android::view::ViewParent>() const
{
	return local_ref<android::view::ViewParent>(get_jobject());
}

android::widget::DatePicker::operator local_ref<android::widget::FrameLayout>() const
{
	return local_ref<android::widget::FrameLayout>(get_jobject());
}

android::widget::DatePicker::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::DatePicker::DatePicker(local_ref< android::content::Context > const &a0)
: object<android::widget::DatePicker>(
	call_new_object<
		android::widget::DatePicker::J2CPP_CLASS_NAME,
		android::widget::DatePicker::J2CPP_METHOD_NAME(0),
		android::widget::DatePicker::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::DatePicker::DatePicker(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::DatePicker>(
	call_new_object<
		android::widget::DatePicker::J2CPP_CLASS_NAME,
		android::widget::DatePicker::J2CPP_METHOD_NAME(1),
		android::widget::DatePicker::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::widget::DatePicker::DatePicker(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::DatePicker>(
	call_new_object<
		android::widget::DatePicker::J2CPP_CLASS_NAME,
		android::widget::DatePicker::J2CPP_METHOD_NAME(2),
		android::widget::DatePicker::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}


void android::widget::DatePicker::setEnabled(jboolean a0)
{
	return call_method<
		android::widget::DatePicker::J2CPP_CLASS_NAME,
		android::widget::DatePicker::J2CPP_METHOD_NAME(3),
		android::widget::DatePicker::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void android::widget::DatePicker::updateDate(jint a0, jint a1, jint a2)
{
	return call_method<
		android::widget::DatePicker::J2CPP_CLASS_NAME,
		android::widget::DatePicker::J2CPP_METHOD_NAME(4),
		android::widget::DatePicker::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2);
}




void android::widget::DatePicker::init(jint a0, jint a1, jint a2, local_ref< android::widget::DatePicker_::OnDateChangedListener > const &a3)
{
	return call_method<
		android::widget::DatePicker::J2CPP_CLASS_NAME,
		android::widget::DatePicker::J2CPP_METHOD_NAME(8),
		android::widget::DatePicker::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

jint android::widget::DatePicker::getYear()
{
	return call_method<
		android::widget::DatePicker::J2CPP_CLASS_NAME,
		android::widget::DatePicker::J2CPP_METHOD_NAME(9),
		android::widget::DatePicker::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject());
}

jint android::widget::DatePicker::getMonth()
{
	return call_method<
		android::widget::DatePicker::J2CPP_CLASS_NAME,
		android::widget::DatePicker::J2CPP_METHOD_NAME(10),
		android::widget::DatePicker::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject());
}

jint android::widget::DatePicker::getDayOfMonth()
{
	return call_method<
		android::widget::DatePicker::J2CPP_CLASS_NAME,
		android::widget::DatePicker::J2CPP_METHOD_NAME(11),
		android::widget::DatePicker::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::DatePicker,"android/widget/DatePicker")
J2CPP_DEFINE_METHOD(android::widget::DatePicker,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::DatePicker,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::DatePicker,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::DatePicker,3,"setEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::DatePicker,4,"updateDate","(III)V")
J2CPP_DEFINE_METHOD(android::widget::DatePicker,5,"dispatchRestoreInstanceState","(Landroid/util/SparseArray;)V")
J2CPP_DEFINE_METHOD(android::widget::DatePicker,6,"onSaveInstanceState","()Landroid/os/Parcelable;")
J2CPP_DEFINE_METHOD(android::widget::DatePicker,7,"onRestoreInstanceState","(Landroid/os/Parcelable;)V")
J2CPP_DEFINE_METHOD(android::widget::DatePicker,8,"init","(IIILandroid/widget/DatePicker$OnDateChangedListener;)V")
J2CPP_DEFINE_METHOD(android::widget::DatePicker,9,"getYear","()I")
J2CPP_DEFINE_METHOD(android::widget::DatePicker,10,"getMonth","()I")
J2CPP_DEFINE_METHOD(android::widget::DatePicker,11,"getDayOfMonth","()I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_DATEPICKER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
