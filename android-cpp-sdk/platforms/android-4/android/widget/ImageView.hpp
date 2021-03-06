/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.ImageView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_IMAGEVIEW_HPP_DECL
#define J2CPP_ANDROID_WIDGET_IMAGEVIEW_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace graphics { class Matrix; } } }
namespace j2cpp { namespace android { namespace graphics { namespace PorterDuff_ { class Mode; } } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace widget { namespace ImageView_ { class ScaleType; } } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }
namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }


#include <android/content/Context.hpp>
#include <android/graphics/Bitmap.hpp>
#include <android/graphics/ColorFilter.hpp>
#include <android/graphics/Matrix.hpp>
#include <android/graphics/PorterDuff.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/net/Uri.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/ImageView.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ImageView;
	namespace ImageView_ {

		class ScaleType;
		class ScaleType
			: public object<ScaleType>
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

			explicit ScaleType(jobject jobj)
			: object<ScaleType>(jobj)
			{
			}

			operator local_ref<java::io::Serializable>() const;
			operator local_ref<java::lang::Comparable>() const;
			operator local_ref<java::lang::Enum>() const;
			operator local_ref<java::lang::Object>() const;


			static local_ref< array< local_ref< android::widget::ImageView_::ScaleType >, 1> > values();
			static local_ref< android::widget::ImageView_::ScaleType > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::widget::ImageView_::ScaleType > > CENTER;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::widget::ImageView_::ScaleType > > CENTER_CROP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::widget::ImageView_::ScaleType > > CENTER_INSIDE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::widget::ImageView_::ScaleType > > FIT_CENTER;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::widget::ImageView_::ScaleType > > FIT_END;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< android::widget::ImageView_::ScaleType > > FIT_START;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< android::widget::ImageView_::ScaleType > > FIT_XY;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< android::widget::ImageView_::ScaleType > > MATRIX;
		}; //class ScaleType

	} //namespace ImageView_

	class ImageView
		: public object<ImageView>
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

		typedef ImageView_::ScaleType ScaleType;

		explicit ImageView(jobject jobj)
		: object<ImageView>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<java::lang::Object>() const;


		ImageView(local_ref< android::content::Context > const&);
		ImageView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		ImageView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		void invalidateDrawable(local_ref< android::graphics::drawable::Drawable >  const&);
		void setAdjustViewBounds(jboolean);
		void setMaxWidth(jint);
		void setMaxHeight(jint);
		local_ref< android::graphics::drawable::Drawable > getDrawable();
		void setImageResource(jint);
		void setImageURI(local_ref< android::net::Uri >  const&);
		void setImageDrawable(local_ref< android::graphics::drawable::Drawable >  const&);
		void setImageBitmap(local_ref< android::graphics::Bitmap >  const&);
		void setImageState(local_ref< array<jint,1> >  const&, jboolean);
		void setSelected(jboolean);
		void setImageLevel(jint);
		void setScaleType(local_ref< android::widget::ImageView_::ScaleType >  const&);
		local_ref< android::widget::ImageView_::ScaleType > getScaleType();
		local_ref< android::graphics::Matrix > getImageMatrix();
		void setImageMatrix(local_ref< android::graphics::Matrix >  const&);
		local_ref< array<jint,1> > onCreateDrawableState(jint);
		jint getBaseline();
		void setColorFilter(jint, local_ref< android::graphics::PorterDuff_::Mode >  const&);
		void clearColorFilter();
		void setColorFilter(local_ref< android::graphics::ColorFilter >  const&);
		void setAlpha(jint);
	}; //class ImageView

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_IMAGEVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_IMAGEVIEW_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_IMAGEVIEW_HPP_IMPL

namespace j2cpp {




android::widget::ImageView_::ScaleType::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::widget::ImageView_::ScaleType::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

android::widget::ImageView_::ScaleType::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

android::widget::ImageView_::ScaleType::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< array< local_ref< android::widget::ImageView_::ScaleType >, 1> > android::widget::ImageView_::ScaleType::values()
{
	return call_static_method<
		android::widget::ImageView_::ScaleType::J2CPP_CLASS_NAME,
		android::widget::ImageView_::ScaleType::J2CPP_METHOD_NAME(0),
		android::widget::ImageView_::ScaleType::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::widget::ImageView_::ScaleType >, 1> >
	>();
}

local_ref< android::widget::ImageView_::ScaleType > android::widget::ImageView_::ScaleType::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::widget::ImageView_::ScaleType::J2CPP_CLASS_NAME,
		android::widget::ImageView_::ScaleType::J2CPP_METHOD_NAME(1),
		android::widget::ImageView_::ScaleType::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::widget::ImageView_::ScaleType >
	>(a0);
}




static_field<
	android::widget::ImageView_::ScaleType::J2CPP_CLASS_NAME,
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_NAME(0),
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::widget::ImageView_::ScaleType >
> android::widget::ImageView_::ScaleType::CENTER;

static_field<
	android::widget::ImageView_::ScaleType::J2CPP_CLASS_NAME,
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_NAME(1),
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::widget::ImageView_::ScaleType >
> android::widget::ImageView_::ScaleType::CENTER_CROP;

static_field<
	android::widget::ImageView_::ScaleType::J2CPP_CLASS_NAME,
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_NAME(2),
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::widget::ImageView_::ScaleType >
> android::widget::ImageView_::ScaleType::CENTER_INSIDE;

static_field<
	android::widget::ImageView_::ScaleType::J2CPP_CLASS_NAME,
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_NAME(3),
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::widget::ImageView_::ScaleType >
> android::widget::ImageView_::ScaleType::FIT_CENTER;

static_field<
	android::widget::ImageView_::ScaleType::J2CPP_CLASS_NAME,
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_NAME(4),
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::widget::ImageView_::ScaleType >
> android::widget::ImageView_::ScaleType::FIT_END;

static_field<
	android::widget::ImageView_::ScaleType::J2CPP_CLASS_NAME,
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_NAME(5),
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_SIGNATURE(5),
	local_ref< android::widget::ImageView_::ScaleType >
> android::widget::ImageView_::ScaleType::FIT_START;

static_field<
	android::widget::ImageView_::ScaleType::J2CPP_CLASS_NAME,
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_NAME(6),
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_SIGNATURE(6),
	local_ref< android::widget::ImageView_::ScaleType >
> android::widget::ImageView_::ScaleType::FIT_XY;

static_field<
	android::widget::ImageView_::ScaleType::J2CPP_CLASS_NAME,
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_NAME(7),
	android::widget::ImageView_::ScaleType::J2CPP_FIELD_SIGNATURE(7),
	local_ref< android::widget::ImageView_::ScaleType >
> android::widget::ImageView_::ScaleType::MATRIX;


J2CPP_DEFINE_CLASS(android::widget::ImageView_::ScaleType,"android/widget/ImageView$ScaleType")
J2CPP_DEFINE_METHOD(android::widget::ImageView_::ScaleType,0,"values","()[android.widget.ImageView.ScaleType")
J2CPP_DEFINE_METHOD(android::widget::ImageView_::ScaleType,1,"valueOf","(Ljava/lang/String;)Landroid/widget/ImageView$ScaleType;")
J2CPP_DEFINE_METHOD(android::widget::ImageView_::ScaleType,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView_::ScaleType,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::widget::ImageView_::ScaleType,0,"CENTER","Landroid/widget/ImageView$ScaleType;")
J2CPP_DEFINE_FIELD(android::widget::ImageView_::ScaleType,1,"CENTER_CROP","Landroid/widget/ImageView$ScaleType;")
J2CPP_DEFINE_FIELD(android::widget::ImageView_::ScaleType,2,"CENTER_INSIDE","Landroid/widget/ImageView$ScaleType;")
J2CPP_DEFINE_FIELD(android::widget::ImageView_::ScaleType,3,"FIT_CENTER","Landroid/widget/ImageView$ScaleType;")
J2CPP_DEFINE_FIELD(android::widget::ImageView_::ScaleType,4,"FIT_END","Landroid/widget/ImageView$ScaleType;")
J2CPP_DEFINE_FIELD(android::widget::ImageView_::ScaleType,5,"FIT_START","Landroid/widget/ImageView$ScaleType;")
J2CPP_DEFINE_FIELD(android::widget::ImageView_::ScaleType,6,"FIT_XY","Landroid/widget/ImageView$ScaleType;")
J2CPP_DEFINE_FIELD(android::widget::ImageView_::ScaleType,7,"MATRIX","Landroid/widget/ImageView$ScaleType;")
J2CPP_DEFINE_FIELD(android::widget::ImageView_::ScaleType,8,"$VALUES","[android.widget.ImageView.ScaleType")



android::widget::ImageView::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::ImageView::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::ImageView::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::ImageView::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::ImageView::ImageView(local_ref< android::content::Context > const &a0)
: object<android::widget::ImageView>(
	call_new_object<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(0),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::ImageView::ImageView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::ImageView>(
	call_new_object<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(1),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::widget::ImageView::ImageView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::ImageView>(
	call_new_object<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(2),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}



void android::widget::ImageView::invalidateDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(4),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}


void android::widget::ImageView::setAdjustViewBounds(jboolean a0)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(6),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void android::widget::ImageView::setMaxWidth(jint a0)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(7),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void android::widget::ImageView::setMaxHeight(jint a0)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(8),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

local_ref< android::graphics::drawable::Drawable > android::widget::ImageView::getDrawable()
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(9),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::graphics::drawable::Drawable >
	>(get_jobject());
}

void android::widget::ImageView::setImageResource(jint a0)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(10),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

void android::widget::ImageView::setImageURI(local_ref< android::net::Uri > const &a0)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(11),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

void android::widget::ImageView::setImageDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(12),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

void android::widget::ImageView::setImageBitmap(local_ref< android::graphics::Bitmap > const &a0)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(13),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

void android::widget::ImageView::setImageState(local_ref< array<jint,1> > const &a0, jboolean a1)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(14),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0, a1);
}

void android::widget::ImageView::setSelected(jboolean a0)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(15),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

void android::widget::ImageView::setImageLevel(jint a0)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(16),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0);
}

void android::widget::ImageView::setScaleType(local_ref< android::widget::ImageView_::ScaleType > const &a0)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(17),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0);
}

local_ref< android::widget::ImageView_::ScaleType > android::widget::ImageView::getScaleType()
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(18),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< android::widget::ImageView_::ScaleType >
	>(get_jobject());
}

local_ref< android::graphics::Matrix > android::widget::ImageView::getImageMatrix()
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(19),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< android::graphics::Matrix >
	>(get_jobject());
}

void android::widget::ImageView::setImageMatrix(local_ref< android::graphics::Matrix > const &a0)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(20),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0);
}

local_ref< array<jint,1> > android::widget::ImageView::onCreateDrawableState(jint a0)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(21),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< array<jint,1> >
	>(get_jobject(), a0);
}





jint android::widget::ImageView::getBaseline()
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(26),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(26), 
		jint
	>(get_jobject());
}

void android::widget::ImageView::setColorFilter(jint a0, local_ref< android::graphics::PorterDuff_::Mode > const &a1)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(27),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(27), 
		void
	>(get_jobject(), a0, a1);
}

void android::widget::ImageView::clearColorFilter()
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(28),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(28), 
		void
	>(get_jobject());
}

void android::widget::ImageView::setColorFilter(local_ref< android::graphics::ColorFilter > const &a0)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(29),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(29), 
		void
	>(get_jobject(), a0);
}

void android::widget::ImageView::setAlpha(jint a0)
{
	return call_method<
		android::widget::ImageView::J2CPP_CLASS_NAME,
		android::widget::ImageView::J2CPP_METHOD_NAME(30),
		android::widget::ImageView::J2CPP_METHOD_SIGNATURE(30), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::widget::ImageView,"android/widget/ImageView")
J2CPP_DEFINE_METHOD(android::widget::ImageView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,3,"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z")
J2CPP_DEFINE_METHOD(android::widget::ImageView,4,"invalidateDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,5,"onSetAlpha","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::ImageView,6,"setAdjustViewBounds","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,7,"setMaxWidth","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,8,"setMaxHeight","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,9,"getDrawable","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::widget::ImageView,10,"setImageResource","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,11,"setImageURI","(Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,12,"setImageDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,13,"setImageBitmap","(Landroid/graphics/Bitmap;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,14,"setImageState","([IZ)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,15,"setSelected","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,16,"setImageLevel","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,17,"setScaleType","(Landroid/widget/ImageView$ScaleType;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,18,"getScaleType","()Landroid/widget/ImageView$ScaleType;")
J2CPP_DEFINE_METHOD(android::widget::ImageView,19,"getImageMatrix","()Landroid/graphics/Matrix;")
J2CPP_DEFINE_METHOD(android::widget::ImageView,20,"setImageMatrix","(Landroid/graphics/Matrix;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,21,"onCreateDrawableState","(I)[I")
J2CPP_DEFINE_METHOD(android::widget::ImageView,22,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,23,"setFrame","(IIII)Z")
J2CPP_DEFINE_METHOD(android::widget::ImageView,24,"drawableStateChanged","()V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,25,"onDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,26,"getBaseline","()I")
J2CPP_DEFINE_METHOD(android::widget::ImageView,27,"setColorFilter","(ILandroid/graphics/PorterDuff$Mode;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,28,"clearColorFilter","()V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,29,"setColorFilter","(Landroid/graphics/ColorFilter;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageView,30,"setAlpha","(I)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_IMAGEVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
