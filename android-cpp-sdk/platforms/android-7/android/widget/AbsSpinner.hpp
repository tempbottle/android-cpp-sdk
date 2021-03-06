/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.AbsSpinner
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_ABSSPINNER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_ABSSPINNER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace view { class ViewManager; } } }
namespace j2cpp { namespace android { namespace view { class ViewParent; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace widget { class AdapterView; } } }
namespace j2cpp { namespace android { namespace widget { class SpinnerAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class Adapter; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Parcelable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/view/ViewManager.hpp>
#include <android/view/ViewParent.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/Adapter.hpp>
#include <android/widget/AdapterView.hpp>
#include <android/widget/SpinnerAdapter.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class AbsSpinner;
	class AbsSpinner
		: public object<AbsSpinner>
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

		explicit AbsSpinner(jobject jobj)
		: object<AbsSpinner>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::ViewGroup>() const;
		operator local_ref<android::view::ViewManager>() const;
		operator local_ref<android::view::ViewParent>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::widget::AdapterView>() const;


		AbsSpinner(local_ref< android::content::Context > const&);
		AbsSpinner(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		AbsSpinner(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		void setAdapter(local_ref< android::widget::SpinnerAdapter >  const&);
		void setSelection(jint, jboolean);
		void setSelection(jint);
		local_ref< android::view::View > getSelectedView();
		void requestLayout();
		local_ref< android::widget::SpinnerAdapter > getAdapter();
		jint getCount();
		jint pointToPosition(jint, jint);
		local_ref< android::os::Parcelable > onSaveInstanceState();
		void onRestoreInstanceState(local_ref< android::os::Parcelable >  const&);
		void setAdapter(local_ref< android::widget::Adapter >  const&);
		local_ref< android::widget::Adapter > getAdapter_1();
	}; //class AbsSpinner

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_ABSSPINNER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_ABSSPINNER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_ABSSPINNER_HPP_IMPL

namespace j2cpp {



android::widget::AbsSpinner::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::widget::AbsSpinner::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::AbsSpinner::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::AbsSpinner::operator local_ref<android::view::ViewGroup>() const
{
	return local_ref<android::view::ViewGroup>(get_jobject());
}

android::widget::AbsSpinner::operator local_ref<android::view::ViewManager>() const
{
	return local_ref<android::view::ViewManager>(get_jobject());
}

android::widget::AbsSpinner::operator local_ref<android::view::ViewParent>() const
{
	return local_ref<android::view::ViewParent>(get_jobject());
}

android::widget::AbsSpinner::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::AbsSpinner::operator local_ref<android::widget::AdapterView>() const
{
	return local_ref<android::widget::AdapterView>(get_jobject());
}


android::widget::AbsSpinner::AbsSpinner(local_ref< android::content::Context > const &a0)
: object<android::widget::AbsSpinner>(
	call_new_object<
		android::widget::AbsSpinner::J2CPP_CLASS_NAME,
		android::widget::AbsSpinner::J2CPP_METHOD_NAME(0),
		android::widget::AbsSpinner::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::AbsSpinner::AbsSpinner(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::AbsSpinner>(
	call_new_object<
		android::widget::AbsSpinner::J2CPP_CLASS_NAME,
		android::widget::AbsSpinner::J2CPP_METHOD_NAME(1),
		android::widget::AbsSpinner::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::widget::AbsSpinner::AbsSpinner(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::AbsSpinner>(
	call_new_object<
		android::widget::AbsSpinner::J2CPP_CLASS_NAME,
		android::widget::AbsSpinner::J2CPP_METHOD_NAME(2),
		android::widget::AbsSpinner::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}


void android::widget::AbsSpinner::setAdapter(local_ref< android::widget::SpinnerAdapter > const &a0)
{
	return call_method<
		android::widget::AbsSpinner::J2CPP_CLASS_NAME,
		android::widget::AbsSpinner::J2CPP_METHOD_NAME(3),
		android::widget::AbsSpinner::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}



void android::widget::AbsSpinner::setSelection(jint a0, jboolean a1)
{
	return call_method<
		android::widget::AbsSpinner::J2CPP_CLASS_NAME,
		android::widget::AbsSpinner::J2CPP_METHOD_NAME(6),
		android::widget::AbsSpinner::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1);
}

void android::widget::AbsSpinner::setSelection(jint a0)
{
	return call_method<
		android::widget::AbsSpinner::J2CPP_CLASS_NAME,
		android::widget::AbsSpinner::J2CPP_METHOD_NAME(7),
		android::widget::AbsSpinner::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

local_ref< android::view::View > android::widget::AbsSpinner::getSelectedView()
{
	return call_method<
		android::widget::AbsSpinner::J2CPP_CLASS_NAME,
		android::widget::AbsSpinner::J2CPP_METHOD_NAME(8),
		android::widget::AbsSpinner::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::view::View >
	>(get_jobject());
}

void android::widget::AbsSpinner::requestLayout()
{
	return call_method<
		android::widget::AbsSpinner::J2CPP_CLASS_NAME,
		android::widget::AbsSpinner::J2CPP_METHOD_NAME(9),
		android::widget::AbsSpinner::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject());
}

local_ref< android::widget::SpinnerAdapter > android::widget::AbsSpinner::getAdapter()
{
	return call_method<
		android::widget::AbsSpinner::J2CPP_CLASS_NAME,
		android::widget::AbsSpinner::J2CPP_METHOD_NAME(10),
		android::widget::AbsSpinner::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::widget::SpinnerAdapter >
	>(get_jobject());
}

jint android::widget::AbsSpinner::getCount()
{
	return call_method<
		android::widget::AbsSpinner::J2CPP_CLASS_NAME,
		android::widget::AbsSpinner::J2CPP_METHOD_NAME(11),
		android::widget::AbsSpinner::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject());
}

jint android::widget::AbsSpinner::pointToPosition(jint a0, jint a1)
{
	return call_method<
		android::widget::AbsSpinner::J2CPP_CLASS_NAME,
		android::widget::AbsSpinner::J2CPP_METHOD_NAME(12),
		android::widget::AbsSpinner::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject(), a0, a1);
}

local_ref< android::os::Parcelable > android::widget::AbsSpinner::onSaveInstanceState()
{
	return call_method<
		android::widget::AbsSpinner::J2CPP_CLASS_NAME,
		android::widget::AbsSpinner::J2CPP_METHOD_NAME(13),
		android::widget::AbsSpinner::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< android::os::Parcelable >
	>(get_jobject());
}

void android::widget::AbsSpinner::onRestoreInstanceState(local_ref< android::os::Parcelable > const &a0)
{
	return call_method<
		android::widget::AbsSpinner::J2CPP_CLASS_NAME,
		android::widget::AbsSpinner::J2CPP_METHOD_NAME(14),
		android::widget::AbsSpinner::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

void android::widget::AbsSpinner::setAdapter(local_ref< android::widget::Adapter > const &a0)
{
	return call_method<
		android::widget::AbsSpinner::J2CPP_CLASS_NAME,
		android::widget::AbsSpinner::J2CPP_METHOD_NAME(15),
		android::widget::AbsSpinner::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

local_ref< android::widget::Adapter > android::widget::AbsSpinner::getAdapter_1()
{
	return call_method<
		android::widget::AbsSpinner::J2CPP_CLASS_NAME,
		android::widget::AbsSpinner::J2CPP_METHOD_NAME(16),
		android::widget::AbsSpinner::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< android::widget::Adapter >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::AbsSpinner,"android/widget/AbsSpinner")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,3,"setAdapter","(Landroid/widget/SpinnerAdapter;)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,4,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,5,"generateDefaultLayoutParams","()Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,6,"setSelection","(IZ)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,7,"setSelection","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,8,"getSelectedView","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,9,"requestLayout","()V")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,10,"getAdapter","()Landroid/widget/SpinnerAdapter;")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,11,"getCount","()I")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,12,"pointToPosition","(II)I")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,13,"onSaveInstanceState","()Landroid/os/Parcelable;")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,14,"onRestoreInstanceState","(Landroid/os/Parcelable;)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,15,"setAdapter","(Landroid/widget/Adapter;)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSpinner,16,"getAdapter","()Landroid/widget/Adapter;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_ABSSPINNER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
