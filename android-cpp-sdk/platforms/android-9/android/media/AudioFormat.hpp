/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.media.AudioFormat
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_AUDIOFORMAT_HPP_DECL
#define J2CPP_ANDROID_MEDIA_AUDIOFORMAT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace media {

	class AudioFormat;
	class AudioFormat
		: public object<AudioFormat>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
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
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)
		J2CPP_DECLARE_FIELD(23)
		J2CPP_DECLARE_FIELD(24)
		J2CPP_DECLARE_FIELD(25)
		J2CPP_DECLARE_FIELD(26)
		J2CPP_DECLARE_FIELD(27)
		J2CPP_DECLARE_FIELD(28)
		J2CPP_DECLARE_FIELD(29)
		J2CPP_DECLARE_FIELD(30)
		J2CPP_DECLARE_FIELD(31)
		J2CPP_DECLARE_FIELD(32)
		J2CPP_DECLARE_FIELD(33)
		J2CPP_DECLARE_FIELD(34)
		J2CPP_DECLARE_FIELD(35)
		J2CPP_DECLARE_FIELD(36)
		J2CPP_DECLARE_FIELD(37)
		J2CPP_DECLARE_FIELD(38)
		J2CPP_DECLARE_FIELD(39)
		J2CPP_DECLARE_FIELD(40)
		J2CPP_DECLARE_FIELD(41)

		explicit AudioFormat(jobject jobj)
		: object<AudioFormat>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AudioFormat();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > ENCODING_INVALID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > ENCODING_DEFAULT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > ENCODING_PCM_16BIT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > ENCODING_PCM_8BIT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > CHANNEL_CONFIGURATION_INVALID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > CHANNEL_CONFIGURATION_DEFAULT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > CHANNEL_CONFIGURATION_MONO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > CHANNEL_CONFIGURATION_STEREO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > CHANNEL_INVALID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > CHANNEL_OUT_DEFAULT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > CHANNEL_OUT_FRONT_LEFT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > CHANNEL_OUT_FRONT_RIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > CHANNEL_OUT_FRONT_CENTER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > CHANNEL_OUT_LOW_FREQUENCY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > CHANNEL_OUT_BACK_LEFT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > CHANNEL_OUT_BACK_RIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > CHANNEL_OUT_FRONT_LEFT_OF_CENTER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > CHANNEL_OUT_FRONT_RIGHT_OF_CENTER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jint > CHANNEL_OUT_BACK_CENTER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), jint > CHANNEL_OUT_MONO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), jint > CHANNEL_OUT_STEREO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), jint > CHANNEL_OUT_QUAD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), jint > CHANNEL_OUT_SURROUND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), jint > CHANNEL_OUT_5POINT1;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), jint > CHANNEL_OUT_7POINT1;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), jint > CHANNEL_IN_DEFAULT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), jint > CHANNEL_IN_LEFT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(27), J2CPP_FIELD_SIGNATURE(27), jint > CHANNEL_IN_RIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(28), J2CPP_FIELD_SIGNATURE(28), jint > CHANNEL_IN_FRONT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(29), J2CPP_FIELD_SIGNATURE(29), jint > CHANNEL_IN_BACK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(30), J2CPP_FIELD_SIGNATURE(30), jint > CHANNEL_IN_LEFT_PROCESSED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(31), J2CPP_FIELD_SIGNATURE(31), jint > CHANNEL_IN_RIGHT_PROCESSED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(32), J2CPP_FIELD_SIGNATURE(32), jint > CHANNEL_IN_FRONT_PROCESSED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(33), J2CPP_FIELD_SIGNATURE(33), jint > CHANNEL_IN_BACK_PROCESSED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(34), J2CPP_FIELD_SIGNATURE(34), jint > CHANNEL_IN_PRESSURE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(35), J2CPP_FIELD_SIGNATURE(35), jint > CHANNEL_IN_X_AXIS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(36), J2CPP_FIELD_SIGNATURE(36), jint > CHANNEL_IN_Y_AXIS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(37), J2CPP_FIELD_SIGNATURE(37), jint > CHANNEL_IN_Z_AXIS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(38), J2CPP_FIELD_SIGNATURE(38), jint > CHANNEL_IN_VOICE_UPLINK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(39), J2CPP_FIELD_SIGNATURE(39), jint > CHANNEL_IN_VOICE_DNLINK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(40), J2CPP_FIELD_SIGNATURE(40), jint > CHANNEL_IN_MONO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(41), J2CPP_FIELD_SIGNATURE(41), jint > CHANNEL_IN_STEREO;
	}; //class AudioFormat

} //namespace media
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_AUDIOFORMAT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_AUDIOFORMAT_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_AUDIOFORMAT_HPP_IMPL

namespace j2cpp {



android::media::AudioFormat::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::media::AudioFormat::AudioFormat()
: object<android::media::AudioFormat>(
	call_new_object<
		android::media::AudioFormat::J2CPP_CLASS_NAME,
		android::media::AudioFormat::J2CPP_METHOD_NAME(0),
		android::media::AudioFormat::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(0),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::media::AudioFormat::ENCODING_INVALID;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(1),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::media::AudioFormat::ENCODING_DEFAULT;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(2),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::media::AudioFormat::ENCODING_PCM_16BIT;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(3),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::media::AudioFormat::ENCODING_PCM_8BIT;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(4),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::media::AudioFormat::CHANNEL_CONFIGURATION_INVALID;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(5),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::media::AudioFormat::CHANNEL_CONFIGURATION_DEFAULT;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(6),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::media::AudioFormat::CHANNEL_CONFIGURATION_MONO;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(7),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::media::AudioFormat::CHANNEL_CONFIGURATION_STEREO;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(8),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::media::AudioFormat::CHANNEL_INVALID;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(9),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::media::AudioFormat::CHANNEL_OUT_DEFAULT;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(10),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::media::AudioFormat::CHANNEL_OUT_FRONT_LEFT;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(11),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(11),
	jint
> android::media::AudioFormat::CHANNEL_OUT_FRONT_RIGHT;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(12),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(12),
	jint
> android::media::AudioFormat::CHANNEL_OUT_FRONT_CENTER;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(13),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(13),
	jint
> android::media::AudioFormat::CHANNEL_OUT_LOW_FREQUENCY;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(14),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(14),
	jint
> android::media::AudioFormat::CHANNEL_OUT_BACK_LEFT;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(15),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(15),
	jint
> android::media::AudioFormat::CHANNEL_OUT_BACK_RIGHT;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(16),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(16),
	jint
> android::media::AudioFormat::CHANNEL_OUT_FRONT_LEFT_OF_CENTER;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(17),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(17),
	jint
> android::media::AudioFormat::CHANNEL_OUT_FRONT_RIGHT_OF_CENTER;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(18),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(18),
	jint
> android::media::AudioFormat::CHANNEL_OUT_BACK_CENTER;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(19),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(19),
	jint
> android::media::AudioFormat::CHANNEL_OUT_MONO;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(20),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(20),
	jint
> android::media::AudioFormat::CHANNEL_OUT_STEREO;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(21),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(21),
	jint
> android::media::AudioFormat::CHANNEL_OUT_QUAD;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(22),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(22),
	jint
> android::media::AudioFormat::CHANNEL_OUT_SURROUND;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(23),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(23),
	jint
> android::media::AudioFormat::CHANNEL_OUT_5POINT1;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(24),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(24),
	jint
> android::media::AudioFormat::CHANNEL_OUT_7POINT1;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(25),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(25),
	jint
> android::media::AudioFormat::CHANNEL_IN_DEFAULT;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(26),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(26),
	jint
> android::media::AudioFormat::CHANNEL_IN_LEFT;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(27),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(27),
	jint
> android::media::AudioFormat::CHANNEL_IN_RIGHT;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(28),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(28),
	jint
> android::media::AudioFormat::CHANNEL_IN_FRONT;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(29),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(29),
	jint
> android::media::AudioFormat::CHANNEL_IN_BACK;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(30),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(30),
	jint
> android::media::AudioFormat::CHANNEL_IN_LEFT_PROCESSED;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(31),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(31),
	jint
> android::media::AudioFormat::CHANNEL_IN_RIGHT_PROCESSED;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(32),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(32),
	jint
> android::media::AudioFormat::CHANNEL_IN_FRONT_PROCESSED;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(33),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(33),
	jint
> android::media::AudioFormat::CHANNEL_IN_BACK_PROCESSED;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(34),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(34),
	jint
> android::media::AudioFormat::CHANNEL_IN_PRESSURE;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(35),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(35),
	jint
> android::media::AudioFormat::CHANNEL_IN_X_AXIS;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(36),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(36),
	jint
> android::media::AudioFormat::CHANNEL_IN_Y_AXIS;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(37),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(37),
	jint
> android::media::AudioFormat::CHANNEL_IN_Z_AXIS;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(38),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(38),
	jint
> android::media::AudioFormat::CHANNEL_IN_VOICE_UPLINK;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(39),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(39),
	jint
> android::media::AudioFormat::CHANNEL_IN_VOICE_DNLINK;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(40),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(40),
	jint
> android::media::AudioFormat::CHANNEL_IN_MONO;

static_field<
	android::media::AudioFormat::J2CPP_CLASS_NAME,
	android::media::AudioFormat::J2CPP_FIELD_NAME(41),
	android::media::AudioFormat::J2CPP_FIELD_SIGNATURE(41),
	jint
> android::media::AudioFormat::CHANNEL_IN_STEREO;


J2CPP_DEFINE_CLASS(android::media::AudioFormat,"android/media/AudioFormat")
J2CPP_DEFINE_METHOD(android::media::AudioFormat,0,"<init>","()V")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,0,"ENCODING_INVALID","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,1,"ENCODING_DEFAULT","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,2,"ENCODING_PCM_16BIT","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,3,"ENCODING_PCM_8BIT","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,4,"CHANNEL_CONFIGURATION_INVALID","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,5,"CHANNEL_CONFIGURATION_DEFAULT","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,6,"CHANNEL_CONFIGURATION_MONO","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,7,"CHANNEL_CONFIGURATION_STEREO","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,8,"CHANNEL_INVALID","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,9,"CHANNEL_OUT_DEFAULT","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,10,"CHANNEL_OUT_FRONT_LEFT","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,11,"CHANNEL_OUT_FRONT_RIGHT","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,12,"CHANNEL_OUT_FRONT_CENTER","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,13,"CHANNEL_OUT_LOW_FREQUENCY","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,14,"CHANNEL_OUT_BACK_LEFT","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,15,"CHANNEL_OUT_BACK_RIGHT","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,16,"CHANNEL_OUT_FRONT_LEFT_OF_CENTER","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,17,"CHANNEL_OUT_FRONT_RIGHT_OF_CENTER","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,18,"CHANNEL_OUT_BACK_CENTER","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,19,"CHANNEL_OUT_MONO","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,20,"CHANNEL_OUT_STEREO","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,21,"CHANNEL_OUT_QUAD","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,22,"CHANNEL_OUT_SURROUND","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,23,"CHANNEL_OUT_5POINT1","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,24,"CHANNEL_OUT_7POINT1","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,25,"CHANNEL_IN_DEFAULT","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,26,"CHANNEL_IN_LEFT","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,27,"CHANNEL_IN_RIGHT","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,28,"CHANNEL_IN_FRONT","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,29,"CHANNEL_IN_BACK","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,30,"CHANNEL_IN_LEFT_PROCESSED","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,31,"CHANNEL_IN_RIGHT_PROCESSED","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,32,"CHANNEL_IN_FRONT_PROCESSED","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,33,"CHANNEL_IN_BACK_PROCESSED","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,34,"CHANNEL_IN_PRESSURE","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,35,"CHANNEL_IN_X_AXIS","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,36,"CHANNEL_IN_Y_AXIS","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,37,"CHANNEL_IN_Z_AXIS","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,38,"CHANNEL_IN_VOICE_UPLINK","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,39,"CHANNEL_IN_VOICE_DNLINK","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,40,"CHANNEL_IN_MONO","I")
J2CPP_DEFINE_FIELD(android::media::AudioFormat,41,"CHANNEL_IN_STEREO","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_AUDIOFORMAT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
