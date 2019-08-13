#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;




#ifndef U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#define U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ENCODING_T7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_H
#define ENCODING_T7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_10), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_13), value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_14), value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef __STATICARRAYINITTYPESIZEU3D512_TCE4FD05C5BB82E5338C0EAC025786FEF13300221_H
#define __STATICARRAYINITTYPESIZEU3D512_TCE4FD05C5BB82E5338C0EAC025786FEF13300221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512
struct  __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221__padding[512];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D512_TCE4FD05C5BB82E5338C0EAC025786FEF13300221_H
#ifndef MONOENCODING_T83DA312059635696C969C69DB9F6DE2A8AC34E21_H
#define MONOENCODING_T83DA312059635696C969C69DB9F6DE2A8AC34E21_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.MonoEncoding
struct  MonoEncoding_t83DA312059635696C969C69DB9F6DE2A8AC34E21  : public Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4
{
public:
	// System.Int32 I18N.Common.MonoEncoding::win_code_page
	int32_t ___win_code_page_16;

public:
	inline static int32_t get_offset_of_win_code_page_16() { return static_cast<int32_t>(offsetof(MonoEncoding_t83DA312059635696C969C69DB9F6DE2A8AC34E21, ___win_code_page_16)); }
	inline int32_t get_win_code_page_16() const { return ___win_code_page_16; }
	inline int32_t* get_address_of_win_code_page_16() { return &___win_code_page_16; }
	inline void set_win_code_page_16(int32_t value)
	{
		___win_code_page_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOENCODING_T83DA312059635696C969C69DB9F6DE2A8AC34E21_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#define LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3210D12B854299F242D8BFEC48103B12CA3F7AAF_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3210D12B854299F242D8BFEC48103B12CA3F7AAF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::05C64B887A4D766EEB5842345D6B609A0E3A91C9
	__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  ___05C64B887A4D766EEB5842345D6B609A0E3A91C9_0;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::148F346330E294B4157ED412259A7E7F373E26A8
	__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  ___148F346330E294B4157ED412259A7E7F373E26A8_1;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::1F867F0E96DB3A56943B8CB2662D1DA624023FCD
	__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  ___1F867F0E96DB3A56943B8CB2662D1DA624023FCD_2;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::3220DE2BE9769737429E0DE2C6D837CB7C5A02AD
	__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  ___3220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::356CE585046545CD2D0B109FF8A85DB88EE29074
	__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  ___356CE585046545CD2D0B109FF8A85DB88EE29074_4;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::4FEA2A6324C0192B29C90830F5D578051A4B1B16
	__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  ___4FEA2A6324C0192B29C90830F5D578051A4B1B16_5;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::598D9433A53523A59D462896B803E416AB0B1901
	__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  ___598D9433A53523A59D462896B803E416AB0B1901_6;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::6E6F169B075CACDE575F1FEA42B1376D31D5A7E5
	__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  ___6E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::7089F9820A6F9CC830909BCD1FAF2EF0A540F348
	__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  ___7089F9820A6F9CC830909BCD1FAF2EF0A540F348_8;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D
	__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  ___9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8
	__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  ___A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED
	__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  ___B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::D5DB24A984219B0001B4B86CDE1E0DF54572D83A
	__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  ___D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::E11338F644FF140C0E23D8B7526DB4D2D73FC3F7
	__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  ___E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4
	__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  ___FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14;

public:
	inline static int32_t get_offset_of_U305C64B887A4D766EEB5842345D6B609A0E3A91C9_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields, ___05C64B887A4D766EEB5842345D6B609A0E3A91C9_0)); }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  get_U305C64B887A4D766EEB5842345D6B609A0E3A91C9_0() const { return ___05C64B887A4D766EEB5842345D6B609A0E3A91C9_0; }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 * get_address_of_U305C64B887A4D766EEB5842345D6B609A0E3A91C9_0() { return &___05C64B887A4D766EEB5842345D6B609A0E3A91C9_0; }
	inline void set_U305C64B887A4D766EEB5842345D6B609A0E3A91C9_0(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  value)
	{
		___05C64B887A4D766EEB5842345D6B609A0E3A91C9_0 = value;
	}

	inline static int32_t get_offset_of_U3148F346330E294B4157ED412259A7E7F373E26A8_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields, ___148F346330E294B4157ED412259A7E7F373E26A8_1)); }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  get_U3148F346330E294B4157ED412259A7E7F373E26A8_1() const { return ___148F346330E294B4157ED412259A7E7F373E26A8_1; }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 * get_address_of_U3148F346330E294B4157ED412259A7E7F373E26A8_1() { return &___148F346330E294B4157ED412259A7E7F373E26A8_1; }
	inline void set_U3148F346330E294B4157ED412259A7E7F373E26A8_1(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  value)
	{
		___148F346330E294B4157ED412259A7E7F373E26A8_1 = value;
	}

	inline static int32_t get_offset_of_U31F867F0E96DB3A56943B8CB2662D1DA624023FCD_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields, ___1F867F0E96DB3A56943B8CB2662D1DA624023FCD_2)); }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  get_U31F867F0E96DB3A56943B8CB2662D1DA624023FCD_2() const { return ___1F867F0E96DB3A56943B8CB2662D1DA624023FCD_2; }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 * get_address_of_U31F867F0E96DB3A56943B8CB2662D1DA624023FCD_2() { return &___1F867F0E96DB3A56943B8CB2662D1DA624023FCD_2; }
	inline void set_U31F867F0E96DB3A56943B8CB2662D1DA624023FCD_2(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  value)
	{
		___1F867F0E96DB3A56943B8CB2662D1DA624023FCD_2 = value;
	}

	inline static int32_t get_offset_of_U33220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields, ___3220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3)); }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  get_U33220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3() const { return ___3220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3; }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 * get_address_of_U33220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3() { return &___3220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3; }
	inline void set_U33220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  value)
	{
		___3220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3 = value;
	}

	inline static int32_t get_offset_of_U3356CE585046545CD2D0B109FF8A85DB88EE29074_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields, ___356CE585046545CD2D0B109FF8A85DB88EE29074_4)); }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  get_U3356CE585046545CD2D0B109FF8A85DB88EE29074_4() const { return ___356CE585046545CD2D0B109FF8A85DB88EE29074_4; }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 * get_address_of_U3356CE585046545CD2D0B109FF8A85DB88EE29074_4() { return &___356CE585046545CD2D0B109FF8A85DB88EE29074_4; }
	inline void set_U3356CE585046545CD2D0B109FF8A85DB88EE29074_4(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  value)
	{
		___356CE585046545CD2D0B109FF8A85DB88EE29074_4 = value;
	}

	inline static int32_t get_offset_of_U34FEA2A6324C0192B29C90830F5D578051A4B1B16_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields, ___4FEA2A6324C0192B29C90830F5D578051A4B1B16_5)); }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  get_U34FEA2A6324C0192B29C90830F5D578051A4B1B16_5() const { return ___4FEA2A6324C0192B29C90830F5D578051A4B1B16_5; }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 * get_address_of_U34FEA2A6324C0192B29C90830F5D578051A4B1B16_5() { return &___4FEA2A6324C0192B29C90830F5D578051A4B1B16_5; }
	inline void set_U34FEA2A6324C0192B29C90830F5D578051A4B1B16_5(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  value)
	{
		___4FEA2A6324C0192B29C90830F5D578051A4B1B16_5 = value;
	}

	inline static int32_t get_offset_of_U3598D9433A53523A59D462896B803E416AB0B1901_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields, ___598D9433A53523A59D462896B803E416AB0B1901_6)); }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  get_U3598D9433A53523A59D462896B803E416AB0B1901_6() const { return ___598D9433A53523A59D462896B803E416AB0B1901_6; }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 * get_address_of_U3598D9433A53523A59D462896B803E416AB0B1901_6() { return &___598D9433A53523A59D462896B803E416AB0B1901_6; }
	inline void set_U3598D9433A53523A59D462896B803E416AB0B1901_6(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  value)
	{
		___598D9433A53523A59D462896B803E416AB0B1901_6 = value;
	}

	inline static int32_t get_offset_of_U36E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields, ___6E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7)); }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  get_U36E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7() const { return ___6E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7; }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 * get_address_of_U36E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7() { return &___6E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7; }
	inline void set_U36E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  value)
	{
		___6E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7 = value;
	}

	inline static int32_t get_offset_of_U37089F9820A6F9CC830909BCD1FAF2EF0A540F348_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields, ___7089F9820A6F9CC830909BCD1FAF2EF0A540F348_8)); }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  get_U37089F9820A6F9CC830909BCD1FAF2EF0A540F348_8() const { return ___7089F9820A6F9CC830909BCD1FAF2EF0A540F348_8; }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 * get_address_of_U37089F9820A6F9CC830909BCD1FAF2EF0A540F348_8() { return &___7089F9820A6F9CC830909BCD1FAF2EF0A540F348_8; }
	inline void set_U37089F9820A6F9CC830909BCD1FAF2EF0A540F348_8(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  value)
	{
		___7089F9820A6F9CC830909BCD1FAF2EF0A540F348_8 = value;
	}

	inline static int32_t get_offset_of_U39ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields, ___9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9)); }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  get_U39ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9() const { return ___9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9; }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 * get_address_of_U39ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9() { return &___9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9; }
	inline void set_U39ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  value)
	{
		___9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9 = value;
	}

	inline static int32_t get_offset_of_A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields, ___A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10)); }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  get_A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10() const { return ___A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10; }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 * get_address_of_A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10() { return &___A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10; }
	inline void set_A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  value)
	{
		___A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10 = value;
	}

	inline static int32_t get_offset_of_B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields, ___B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11)); }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  get_B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11() const { return ___B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11; }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 * get_address_of_B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11() { return &___B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11; }
	inline void set_B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  value)
	{
		___B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11 = value;
	}

	inline static int32_t get_offset_of_D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields, ___D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12)); }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  get_D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12() const { return ___D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12; }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 * get_address_of_D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12() { return &___D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12; }
	inline void set_D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  value)
	{
		___D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12 = value;
	}

	inline static int32_t get_offset_of_E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields, ___E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13)); }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  get_E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13() const { return ___E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13; }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 * get_address_of_E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13() { return &___E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13; }
	inline void set_E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  value)
	{
		___E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13 = value;
	}

	inline static int32_t get_offset_of_FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields, ___FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14)); }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  get_FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14() const { return ___FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14; }
	inline __StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 * get_address_of_FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14() { return &___FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14; }
	inline void set_FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221  value)
	{
		___FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3210D12B854299F242D8BFEC48103B12CA3F7AAF_H
#ifndef BYTEENCODING_T3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5_H
#define BYTEENCODING_T3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.ByteEncoding
struct  ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5  : public MonoEncoding_t83DA312059635696C969C69DB9F6DE2A8AC34E21
{
public:
	// System.Char[] I18N.Common.ByteEncoding::toChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___toChars_17;
	// System.String I18N.Common.ByteEncoding::encodingName
	String_t* ___encodingName_18;
	// System.String I18N.Common.ByteEncoding::bodyName
	String_t* ___bodyName_19;
	// System.String I18N.Common.ByteEncoding::headerName
	String_t* ___headerName_20;
	// System.String I18N.Common.ByteEncoding::webName
	String_t* ___webName_21;
	// System.Boolean I18N.Common.ByteEncoding::isBrowserDisplay
	bool ___isBrowserDisplay_22;
	// System.Boolean I18N.Common.ByteEncoding::isBrowserSave
	bool ___isBrowserSave_23;
	// System.Boolean I18N.Common.ByteEncoding::isMailNewsDisplay
	bool ___isMailNewsDisplay_24;
	// System.Boolean I18N.Common.ByteEncoding::isMailNewsSave
	bool ___isMailNewsSave_25;
	// System.Int32 I18N.Common.ByteEncoding::windowsCodePage
	int32_t ___windowsCodePage_26;

public:
	inline static int32_t get_offset_of_toChars_17() { return static_cast<int32_t>(offsetof(ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5, ___toChars_17)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_toChars_17() const { return ___toChars_17; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_toChars_17() { return &___toChars_17; }
	inline void set_toChars_17(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___toChars_17 = value;
		Il2CppCodeGenWriteBarrier((&___toChars_17), value);
	}

	inline static int32_t get_offset_of_encodingName_18() { return static_cast<int32_t>(offsetof(ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5, ___encodingName_18)); }
	inline String_t* get_encodingName_18() const { return ___encodingName_18; }
	inline String_t** get_address_of_encodingName_18() { return &___encodingName_18; }
	inline void set_encodingName_18(String_t* value)
	{
		___encodingName_18 = value;
		Il2CppCodeGenWriteBarrier((&___encodingName_18), value);
	}

	inline static int32_t get_offset_of_bodyName_19() { return static_cast<int32_t>(offsetof(ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5, ___bodyName_19)); }
	inline String_t* get_bodyName_19() const { return ___bodyName_19; }
	inline String_t** get_address_of_bodyName_19() { return &___bodyName_19; }
	inline void set_bodyName_19(String_t* value)
	{
		___bodyName_19 = value;
		Il2CppCodeGenWriteBarrier((&___bodyName_19), value);
	}

	inline static int32_t get_offset_of_headerName_20() { return static_cast<int32_t>(offsetof(ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5, ___headerName_20)); }
	inline String_t* get_headerName_20() const { return ___headerName_20; }
	inline String_t** get_address_of_headerName_20() { return &___headerName_20; }
	inline void set_headerName_20(String_t* value)
	{
		___headerName_20 = value;
		Il2CppCodeGenWriteBarrier((&___headerName_20), value);
	}

	inline static int32_t get_offset_of_webName_21() { return static_cast<int32_t>(offsetof(ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5, ___webName_21)); }
	inline String_t* get_webName_21() const { return ___webName_21; }
	inline String_t** get_address_of_webName_21() { return &___webName_21; }
	inline void set_webName_21(String_t* value)
	{
		___webName_21 = value;
		Il2CppCodeGenWriteBarrier((&___webName_21), value);
	}

	inline static int32_t get_offset_of_isBrowserDisplay_22() { return static_cast<int32_t>(offsetof(ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5, ___isBrowserDisplay_22)); }
	inline bool get_isBrowserDisplay_22() const { return ___isBrowserDisplay_22; }
	inline bool* get_address_of_isBrowserDisplay_22() { return &___isBrowserDisplay_22; }
	inline void set_isBrowserDisplay_22(bool value)
	{
		___isBrowserDisplay_22 = value;
	}

	inline static int32_t get_offset_of_isBrowserSave_23() { return static_cast<int32_t>(offsetof(ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5, ___isBrowserSave_23)); }
	inline bool get_isBrowserSave_23() const { return ___isBrowserSave_23; }
	inline bool* get_address_of_isBrowserSave_23() { return &___isBrowserSave_23; }
	inline void set_isBrowserSave_23(bool value)
	{
		___isBrowserSave_23 = value;
	}

	inline static int32_t get_offset_of_isMailNewsDisplay_24() { return static_cast<int32_t>(offsetof(ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5, ___isMailNewsDisplay_24)); }
	inline bool get_isMailNewsDisplay_24() const { return ___isMailNewsDisplay_24; }
	inline bool* get_address_of_isMailNewsDisplay_24() { return &___isMailNewsDisplay_24; }
	inline void set_isMailNewsDisplay_24(bool value)
	{
		___isMailNewsDisplay_24 = value;
	}

	inline static int32_t get_offset_of_isMailNewsSave_25() { return static_cast<int32_t>(offsetof(ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5, ___isMailNewsSave_25)); }
	inline bool get_isMailNewsSave_25() const { return ___isMailNewsSave_25; }
	inline bool* get_address_of_isMailNewsSave_25() { return &___isMailNewsSave_25; }
	inline void set_isMailNewsSave_25(bool value)
	{
		___isMailNewsSave_25 = value;
	}

	inline static int32_t get_offset_of_windowsCodePage_26() { return static_cast<int32_t>(offsetof(ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5, ___windowsCodePage_26)); }
	inline int32_t get_windowsCodePage_26() const { return ___windowsCodePage_26; }
	inline int32_t* get_address_of_windowsCodePage_26() { return &___windowsCodePage_26; }
	inline void set_windowsCodePage_26(int32_t value)
	{
		___windowsCodePage_26 = value;
	}
};

struct ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5_StaticFields
{
public:
	// System.Byte[] I18N.Common.ByteEncoding::isNormalized
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___isNormalized_27;
	// System.Byte[] I18N.Common.ByteEncoding::isNormalizedComputed
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___isNormalizedComputed_28;
	// System.Byte[] I18N.Common.ByteEncoding::normalization_bytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___normalization_bytes_29;

public:
	inline static int32_t get_offset_of_isNormalized_27() { return static_cast<int32_t>(offsetof(ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5_StaticFields, ___isNormalized_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_isNormalized_27() const { return ___isNormalized_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_isNormalized_27() { return &___isNormalized_27; }
	inline void set_isNormalized_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___isNormalized_27 = value;
		Il2CppCodeGenWriteBarrier((&___isNormalized_27), value);
	}

	inline static int32_t get_offset_of_isNormalizedComputed_28() { return static_cast<int32_t>(offsetof(ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5_StaticFields, ___isNormalizedComputed_28)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_isNormalizedComputed_28() const { return ___isNormalizedComputed_28; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_isNormalizedComputed_28() { return &___isNormalizedComputed_28; }
	inline void set_isNormalizedComputed_28(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___isNormalizedComputed_28 = value;
		Il2CppCodeGenWriteBarrier((&___isNormalizedComputed_28), value);
	}

	inline static int32_t get_offset_of_normalization_bytes_29() { return static_cast<int32_t>(offsetof(ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5_StaticFields, ___normalization_bytes_29)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_normalization_bytes_29() const { return ___normalization_bytes_29; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_normalization_bytes_29() { return &___normalization_bytes_29; }
	inline void set_normalization_bytes_29(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___normalization_bytes_29 = value;
		Il2CppCodeGenWriteBarrier((&___normalization_bytes_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEENCODING_T3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef CP850_TF83950BF2F91727B9ACD6E156F6FB6FE3E8C8D73_H
#define CP850_TF83950BF2F91727B9ACD6E156F6FB6FE3E8C8D73_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP850
struct  CP850_tF83950BF2F91727B9ACD6E156F6FB6FE3E8C8D73  : public ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5
{
public:

public:
};

struct CP850_tF83950BF2F91727B9ACD6E156F6FB6FE3E8C8D73_StaticFields
{
public:
	// System.Char[] I18N.West.CP850::ToChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP850_tF83950BF2F91727B9ACD6E156F6FB6FE3E8C8D73_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP850_TF83950BF2F91727B9ACD6E156F6FB6FE3E8C8D73_H
#ifndef CP860_T7D3CBFE9515820689BC52C8CFDA86E5D0A698BFC_H
#define CP860_T7D3CBFE9515820689BC52C8CFDA86E5D0A698BFC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP860
struct  CP860_t7D3CBFE9515820689BC52C8CFDA86E5D0A698BFC  : public ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5
{
public:

public:
};

struct CP860_t7D3CBFE9515820689BC52C8CFDA86E5D0A698BFC_StaticFields
{
public:
	// System.Char[] I18N.West.CP860::ToChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP860_t7D3CBFE9515820689BC52C8CFDA86E5D0A698BFC_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP860_T7D3CBFE9515820689BC52C8CFDA86E5D0A698BFC_H
#ifndef CP861_T48824F963B6D5F788F25B1493C06B8BDF7C51977_H
#define CP861_T48824F963B6D5F788F25B1493C06B8BDF7C51977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP861
struct  CP861_t48824F963B6D5F788F25B1493C06B8BDF7C51977  : public ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5
{
public:

public:
};

struct CP861_t48824F963B6D5F788F25B1493C06B8BDF7C51977_StaticFields
{
public:
	// System.Char[] I18N.West.CP861::ToChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP861_t48824F963B6D5F788F25B1493C06B8BDF7C51977_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP861_T48824F963B6D5F788F25B1493C06B8BDF7C51977_H
#ifndef CP863_T7C418F90764F2DE96DE4C09779E556AE7328A9D0_H
#define CP863_T7C418F90764F2DE96DE4C09779E556AE7328A9D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP863
struct  CP863_t7C418F90764F2DE96DE4C09779E556AE7328A9D0  : public ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5
{
public:

public:
};

struct CP863_t7C418F90764F2DE96DE4C09779E556AE7328A9D0_StaticFields
{
public:
	// System.Char[] I18N.West.CP863::ToChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP863_t7C418F90764F2DE96DE4C09779E556AE7328A9D0_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP863_T7C418F90764F2DE96DE4C09779E556AE7328A9D0_H
#ifndef CP865_TE9A59E5C1BA4F1E21BD31CA3E6C1DD643ED42033_H
#define CP865_TE9A59E5C1BA4F1E21BD31CA3E6C1DD643ED42033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP865
struct  CP865_tE9A59E5C1BA4F1E21BD31CA3E6C1DD643ED42033  : public ByteEncoding_t3554D09C5BC5C2EF41E5BB2A7978CFF846507BF5
{
public:

public:
};

struct CP865_tE9A59E5C1BA4F1E21BD31CA3E6C1DD643ED42033_StaticFields
{
public:
	// System.Char[] I18N.West.CP865::ToChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP865_tE9A59E5C1BA4F1E21BD31CA3E6C1DD643ED42033_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP865_TE9A59E5C1BA4F1E21BD31CA3E6C1DD643ED42033_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef ENCIBM850_T1AEE3E87AC7B44EDABF088D5D2946043792C3B63_H
#define ENCIBM850_T1AEE3E87AC7B44EDABF088D5D2946043792C3B63_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm850
struct  ENCibm850_t1AEE3E87AC7B44EDABF088D5D2946043792C3B63  : public CP850_tF83950BF2F91727B9ACD6E156F6FB6FE3E8C8D73
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM850_T1AEE3E87AC7B44EDABF088D5D2946043792C3B63_H
#ifndef ENCIBM860_TA640EAB9FE1B6FD8392069B7BF96D951390A5508_H
#define ENCIBM860_TA640EAB9FE1B6FD8392069B7BF96D951390A5508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm860
struct  ENCibm860_tA640EAB9FE1B6FD8392069B7BF96D951390A5508  : public CP860_t7D3CBFE9515820689BC52C8CFDA86E5D0A698BFC
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM860_TA640EAB9FE1B6FD8392069B7BF96D951390A5508_H
#ifndef ENCIBM861_T125EA123E984D62B58E0BA2D81CBD5C21171AE8A_H
#define ENCIBM861_T125EA123E984D62B58E0BA2D81CBD5C21171AE8A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm861
struct  ENCibm861_t125EA123E984D62B58E0BA2D81CBD5C21171AE8A  : public CP861_t48824F963B6D5F788F25B1493C06B8BDF7C51977
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM861_T125EA123E984D62B58E0BA2D81CBD5C21171AE8A_H
#ifndef ENCIBM863_TB19FA3169863930D220788A4B1509EE2717C0C59_H
#define ENCIBM863_TB19FA3169863930D220788A4B1509EE2717C0C59_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm863
struct  ENCibm863_tB19FA3169863930D220788A4B1509EE2717C0C59  : public CP863_t7C418F90764F2DE96DE4C09779E556AE7328A9D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM863_TB19FA3169863930D220788A4B1509EE2717C0C59_H
#ifndef ENCIBM865_T60ADE73C1A1DA25D0818910555EFEC24F897F1FF_H
#define ENCIBM865_T60ADE73C1A1DA25D0818910555EFEC24F897F1FF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm865
struct  ENCibm865_t60ADE73C1A1DA25D0818910555EFEC24F897F1FF  : public CP865_tE9A59E5C1BA4F1E21BD31CA3E6C1DD643ED42033
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM865_T60ADE73C1A1DA25D0818910555EFEC24F897F1FF_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef CAMERACONTROLLER_TC58777A506A1D4F1F1794E5D666E619C1DA073BB_H
#define CAMERACONTROLLER_TC58777A506A1D4F1F1794E5D666E619C1DA073BB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform CameraController::Player
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___Player_4;
	// System.Single CameraController::zoomMinimo
	float ___zoomMinimo_5;
	// System.Single CameraController::zoomMaximo
	float ___zoomMaximo_6;
	// System.Single CameraController::intervalo
	float ___intervalo_7;
	// UnityEngine.Camera CameraController::minhaCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___minhaCamera_8;
	// System.Single CameraController::velocidadeZoom
	float ___velocidadeZoom_9;
	// UnityEngine.Vector3 CameraController::velocidadeMovimento
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocidadeMovimento_10;

public:
	inline static int32_t get_offset_of_Player_4() { return static_cast<int32_t>(offsetof(CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB, ___Player_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_Player_4() const { return ___Player_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_Player_4() { return &___Player_4; }
	inline void set_Player_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___Player_4 = value;
		Il2CppCodeGenWriteBarrier((&___Player_4), value);
	}

	inline static int32_t get_offset_of_zoomMinimo_5() { return static_cast<int32_t>(offsetof(CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB, ___zoomMinimo_5)); }
	inline float get_zoomMinimo_5() const { return ___zoomMinimo_5; }
	inline float* get_address_of_zoomMinimo_5() { return &___zoomMinimo_5; }
	inline void set_zoomMinimo_5(float value)
	{
		___zoomMinimo_5 = value;
	}

	inline static int32_t get_offset_of_zoomMaximo_6() { return static_cast<int32_t>(offsetof(CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB, ___zoomMaximo_6)); }
	inline float get_zoomMaximo_6() const { return ___zoomMaximo_6; }
	inline float* get_address_of_zoomMaximo_6() { return &___zoomMaximo_6; }
	inline void set_zoomMaximo_6(float value)
	{
		___zoomMaximo_6 = value;
	}

	inline static int32_t get_offset_of_intervalo_7() { return static_cast<int32_t>(offsetof(CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB, ___intervalo_7)); }
	inline float get_intervalo_7() const { return ___intervalo_7; }
	inline float* get_address_of_intervalo_7() { return &___intervalo_7; }
	inline void set_intervalo_7(float value)
	{
		___intervalo_7 = value;
	}

	inline static int32_t get_offset_of_minhaCamera_8() { return static_cast<int32_t>(offsetof(CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB, ___minhaCamera_8)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_minhaCamera_8() const { return ___minhaCamera_8; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_minhaCamera_8() { return &___minhaCamera_8; }
	inline void set_minhaCamera_8(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___minhaCamera_8 = value;
		Il2CppCodeGenWriteBarrier((&___minhaCamera_8), value);
	}

	inline static int32_t get_offset_of_velocidadeZoom_9() { return static_cast<int32_t>(offsetof(CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB, ___velocidadeZoom_9)); }
	inline float get_velocidadeZoom_9() const { return ___velocidadeZoom_9; }
	inline float* get_address_of_velocidadeZoom_9() { return &___velocidadeZoom_9; }
	inline void set_velocidadeZoom_9(float value)
	{
		___velocidadeZoom_9 = value;
	}

	inline static int32_t get_offset_of_velocidadeMovimento_10() { return static_cast<int32_t>(offsetof(CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB, ___velocidadeMovimento_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_velocidadeMovimento_10() const { return ___velocidadeMovimento_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_velocidadeMovimento_10() { return &___velocidadeMovimento_10; }
	inline void set_velocidadeMovimento_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___velocidadeMovimento_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACONTROLLER_TC58777A506A1D4F1F1794E5D666E619C1DA073BB_H
#ifndef EXPLOSAO_T3DAF3B367DEB733EE888B994F589D65767686BF9_H
#define EXPLOSAO_T3DAF3B367DEB733EE888B994F589D65767686BF9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Explosao
struct  Explosao_t3DAF3B367DEB733EE888B994F589D65767686BF9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPLOSAO_T3DAF3B367DEB733EE888B994F589D65767686BF9_H
#ifndef GAMECONTROLLER_T8BB0D3CE8992C95BED5FB508588730F0A74009A3_H
#define GAMECONTROLLER_T8BB0D3CE8992C95BED5FB508588730F0A74009A3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject GameController::gameHUD
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameHUD_4;
	// UnityEngine.GameObject GameController::MenuPause
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___MenuPause_5;
	// UnityEngine.GameObject GameController::MenuGameOver
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___MenuGameOver_6;
	// UnityEngine.GameObject GameController::MenuGameWin
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___MenuGameWin_7;
	// System.Boolean GameController::isPause
	bool ___isPause_8;

public:
	inline static int32_t get_offset_of_gameHUD_4() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___gameHUD_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameHUD_4() const { return ___gameHUD_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameHUD_4() { return &___gameHUD_4; }
	inline void set_gameHUD_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameHUD_4 = value;
		Il2CppCodeGenWriteBarrier((&___gameHUD_4), value);
	}

	inline static int32_t get_offset_of_MenuPause_5() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___MenuPause_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_MenuPause_5() const { return ___MenuPause_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_MenuPause_5() { return &___MenuPause_5; }
	inline void set_MenuPause_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___MenuPause_5 = value;
		Il2CppCodeGenWriteBarrier((&___MenuPause_5), value);
	}

	inline static int32_t get_offset_of_MenuGameOver_6() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___MenuGameOver_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_MenuGameOver_6() const { return ___MenuGameOver_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_MenuGameOver_6() { return &___MenuGameOver_6; }
	inline void set_MenuGameOver_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___MenuGameOver_6 = value;
		Il2CppCodeGenWriteBarrier((&___MenuGameOver_6), value);
	}

	inline static int32_t get_offset_of_MenuGameWin_7() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___MenuGameWin_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_MenuGameWin_7() const { return ___MenuGameWin_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_MenuGameWin_7() { return &___MenuGameWin_7; }
	inline void set_MenuGameWin_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___MenuGameWin_7 = value;
		Il2CppCodeGenWriteBarrier((&___MenuGameWin_7), value);
	}

	inline static int32_t get_offset_of_isPause_8() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___isPause_8)); }
	inline bool get_isPause_8() const { return ___isPause_8; }
	inline bool* get_address_of_isPause_8() { return &___isPause_8; }
	inline void set_isPause_8(bool value)
	{
		___isPause_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECONTROLLER_T8BB0D3CE8992C95BED5FB508588730F0A74009A3_H
#ifndef PLAYERCONTROLLER_T4CE339054014370D89B89922EDC0EA2766589C85_H
#define PLAYERCONTROLLER_T4CE339054014370D89B89922EDC0EA2766589C85_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single PlayerController::velocidade
	float ___velocidade_4;
	// System.Single PlayerController::combustivel
	float ___combustivel_5;
	// System.Single PlayerController::consumoCombustivel
	float ___consumoCombustivel_6;
	// System.Single PlayerController::velocidadeLimitePouso
	float ___velocidadeLimitePouso_7;
	// UnityEngine.LayerMask PlayerController::raycastLayerMask
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___raycastLayerMask_8;
	// UnityEngine.SpriteRenderer PlayerController::propulsorFX
	SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * ___propulsorFX_9;
	// UnityEngine.GameObject PlayerController::explosao
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___explosao_10;
	// UnityEngine.UI.Text PlayerController::hudAltitude
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___hudAltitude_11;
	// UnityEngine.UI.Text PlayerController::hudCombustivel
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___hudCombustivel_12;
	// UnityEngine.UI.Text PlayerController::hudVelocidadeVertical
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___hudVelocidadeVertical_13;
	// UnityEngine.UI.Text PlayerController::hudVelocidadeHorizontal
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___hudVelocidadeHorizontal_14;
	// UnityEngine.Rigidbody2D PlayerController::rb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb_15;
	// System.Single PlayerController::velocidadeVertical
	float ___velocidadeVertical_16;
	// System.Single PlayerController::velocidadeHorizontal
	float ___velocidadeHorizontal_17;
	// System.Single PlayerController::altitude
	float ___altitude_18;
	// System.String PlayerController::setaEsquerda
	String_t* ___setaEsquerda_19;
	// System.String PlayerController::setaDireita
	String_t* ___setaDireita_20;
	// System.String PlayerController::setaCima
	String_t* ___setaCima_21;
	// System.String PlayerController::setaBaixo
	String_t* ___setaBaixo_22;

public:
	inline static int32_t get_offset_of_velocidade_4() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___velocidade_4)); }
	inline float get_velocidade_4() const { return ___velocidade_4; }
	inline float* get_address_of_velocidade_4() { return &___velocidade_4; }
	inline void set_velocidade_4(float value)
	{
		___velocidade_4 = value;
	}

	inline static int32_t get_offset_of_combustivel_5() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___combustivel_5)); }
	inline float get_combustivel_5() const { return ___combustivel_5; }
	inline float* get_address_of_combustivel_5() { return &___combustivel_5; }
	inline void set_combustivel_5(float value)
	{
		___combustivel_5 = value;
	}

	inline static int32_t get_offset_of_consumoCombustivel_6() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___consumoCombustivel_6)); }
	inline float get_consumoCombustivel_6() const { return ___consumoCombustivel_6; }
	inline float* get_address_of_consumoCombustivel_6() { return &___consumoCombustivel_6; }
	inline void set_consumoCombustivel_6(float value)
	{
		___consumoCombustivel_6 = value;
	}

	inline static int32_t get_offset_of_velocidadeLimitePouso_7() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___velocidadeLimitePouso_7)); }
	inline float get_velocidadeLimitePouso_7() const { return ___velocidadeLimitePouso_7; }
	inline float* get_address_of_velocidadeLimitePouso_7() { return &___velocidadeLimitePouso_7; }
	inline void set_velocidadeLimitePouso_7(float value)
	{
		___velocidadeLimitePouso_7 = value;
	}

	inline static int32_t get_offset_of_raycastLayerMask_8() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___raycastLayerMask_8)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_raycastLayerMask_8() const { return ___raycastLayerMask_8; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_raycastLayerMask_8() { return &___raycastLayerMask_8; }
	inline void set_raycastLayerMask_8(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___raycastLayerMask_8 = value;
	}

	inline static int32_t get_offset_of_propulsorFX_9() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___propulsorFX_9)); }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * get_propulsorFX_9() const { return ___propulsorFX_9; }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F ** get_address_of_propulsorFX_9() { return &___propulsorFX_9; }
	inline void set_propulsorFX_9(SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * value)
	{
		___propulsorFX_9 = value;
		Il2CppCodeGenWriteBarrier((&___propulsorFX_9), value);
	}

	inline static int32_t get_offset_of_explosao_10() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___explosao_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_explosao_10() const { return ___explosao_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_explosao_10() { return &___explosao_10; }
	inline void set_explosao_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___explosao_10 = value;
		Il2CppCodeGenWriteBarrier((&___explosao_10), value);
	}

	inline static int32_t get_offset_of_hudAltitude_11() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___hudAltitude_11)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_hudAltitude_11() const { return ___hudAltitude_11; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_hudAltitude_11() { return &___hudAltitude_11; }
	inline void set_hudAltitude_11(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___hudAltitude_11 = value;
		Il2CppCodeGenWriteBarrier((&___hudAltitude_11), value);
	}

	inline static int32_t get_offset_of_hudCombustivel_12() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___hudCombustivel_12)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_hudCombustivel_12() const { return ___hudCombustivel_12; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_hudCombustivel_12() { return &___hudCombustivel_12; }
	inline void set_hudCombustivel_12(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___hudCombustivel_12 = value;
		Il2CppCodeGenWriteBarrier((&___hudCombustivel_12), value);
	}

	inline static int32_t get_offset_of_hudVelocidadeVertical_13() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___hudVelocidadeVertical_13)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_hudVelocidadeVertical_13() const { return ___hudVelocidadeVertical_13; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_hudVelocidadeVertical_13() { return &___hudVelocidadeVertical_13; }
	inline void set_hudVelocidadeVertical_13(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___hudVelocidadeVertical_13 = value;
		Il2CppCodeGenWriteBarrier((&___hudVelocidadeVertical_13), value);
	}

	inline static int32_t get_offset_of_hudVelocidadeHorizontal_14() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___hudVelocidadeHorizontal_14)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_hudVelocidadeHorizontal_14() const { return ___hudVelocidadeHorizontal_14; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_hudVelocidadeHorizontal_14() { return &___hudVelocidadeHorizontal_14; }
	inline void set_hudVelocidadeHorizontal_14(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___hudVelocidadeHorizontal_14 = value;
		Il2CppCodeGenWriteBarrier((&___hudVelocidadeHorizontal_14), value);
	}

	inline static int32_t get_offset_of_rb_15() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___rb_15)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb_15() const { return ___rb_15; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb_15() { return &___rb_15; }
	inline void set_rb_15(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb_15 = value;
		Il2CppCodeGenWriteBarrier((&___rb_15), value);
	}

	inline static int32_t get_offset_of_velocidadeVertical_16() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___velocidadeVertical_16)); }
	inline float get_velocidadeVertical_16() const { return ___velocidadeVertical_16; }
	inline float* get_address_of_velocidadeVertical_16() { return &___velocidadeVertical_16; }
	inline void set_velocidadeVertical_16(float value)
	{
		___velocidadeVertical_16 = value;
	}

	inline static int32_t get_offset_of_velocidadeHorizontal_17() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___velocidadeHorizontal_17)); }
	inline float get_velocidadeHorizontal_17() const { return ___velocidadeHorizontal_17; }
	inline float* get_address_of_velocidadeHorizontal_17() { return &___velocidadeHorizontal_17; }
	inline void set_velocidadeHorizontal_17(float value)
	{
		___velocidadeHorizontal_17 = value;
	}

	inline static int32_t get_offset_of_altitude_18() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___altitude_18)); }
	inline float get_altitude_18() const { return ___altitude_18; }
	inline float* get_address_of_altitude_18() { return &___altitude_18; }
	inline void set_altitude_18(float value)
	{
		___altitude_18 = value;
	}

	inline static int32_t get_offset_of_setaEsquerda_19() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___setaEsquerda_19)); }
	inline String_t* get_setaEsquerda_19() const { return ___setaEsquerda_19; }
	inline String_t** get_address_of_setaEsquerda_19() { return &___setaEsquerda_19; }
	inline void set_setaEsquerda_19(String_t* value)
	{
		___setaEsquerda_19 = value;
		Il2CppCodeGenWriteBarrier((&___setaEsquerda_19), value);
	}

	inline static int32_t get_offset_of_setaDireita_20() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___setaDireita_20)); }
	inline String_t* get_setaDireita_20() const { return ___setaDireita_20; }
	inline String_t** get_address_of_setaDireita_20() { return &___setaDireita_20; }
	inline void set_setaDireita_20(String_t* value)
	{
		___setaDireita_20 = value;
		Il2CppCodeGenWriteBarrier((&___setaDireita_20), value);
	}

	inline static int32_t get_offset_of_setaCima_21() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___setaCima_21)); }
	inline String_t* get_setaCima_21() const { return ___setaCima_21; }
	inline String_t** get_address_of_setaCima_21() { return &___setaCima_21; }
	inline void set_setaCima_21(String_t* value)
	{
		___setaCima_21 = value;
		Il2CppCodeGenWriteBarrier((&___setaCima_21), value);
	}

	inline static int32_t get_offset_of_setaBaixo_22() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___setaBaixo_22)); }
	inline String_t* get_setaBaixo_22() const { return ___setaBaixo_22; }
	inline String_t** get_address_of_setaBaixo_22() { return &___setaBaixo_22; }
	inline void set_setaBaixo_22(String_t* value)
	{
		___setaBaixo_22 = value;
		Il2CppCodeGenWriteBarrier((&___setaBaixo_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T4CE339054014370D89B89922EDC0EA2766589C85_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2900 = { sizeof (CP850_tF83950BF2F91727B9ACD6E156F6FB6FE3E8C8D73), -1, sizeof(CP850_tF83950BF2F91727B9ACD6E156F6FB6FE3E8C8D73_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2900[1] = 
{
	CP850_tF83950BF2F91727B9ACD6E156F6FB6FE3E8C8D73_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2901 = { sizeof (ENCibm850_t1AEE3E87AC7B44EDABF088D5D2946043792C3B63), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2902 = { sizeof (CP860_t7D3CBFE9515820689BC52C8CFDA86E5D0A698BFC), -1, sizeof(CP860_t7D3CBFE9515820689BC52C8CFDA86E5D0A698BFC_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2902[1] = 
{
	CP860_t7D3CBFE9515820689BC52C8CFDA86E5D0A698BFC_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2903 = { sizeof (ENCibm860_tA640EAB9FE1B6FD8392069B7BF96D951390A5508), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2904 = { sizeof (CP861_t48824F963B6D5F788F25B1493C06B8BDF7C51977), -1, sizeof(CP861_t48824F963B6D5F788F25B1493C06B8BDF7C51977_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2904[1] = 
{
	CP861_t48824F963B6D5F788F25B1493C06B8BDF7C51977_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2905 = { sizeof (ENCibm861_t125EA123E984D62B58E0BA2D81CBD5C21171AE8A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2906 = { sizeof (CP863_t7C418F90764F2DE96DE4C09779E556AE7328A9D0), -1, sizeof(CP863_t7C418F90764F2DE96DE4C09779E556AE7328A9D0_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2906[1] = 
{
	CP863_t7C418F90764F2DE96DE4C09779E556AE7328A9D0_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2907 = { sizeof (ENCibm863_tB19FA3169863930D220788A4B1509EE2717C0C59), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2908 = { sizeof (CP865_tE9A59E5C1BA4F1E21BD31CA3E6C1DD643ED42033), -1, sizeof(CP865_tE9A59E5C1BA4F1E21BD31CA3E6C1DD643ED42033_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2908[1] = 
{
	CP865_tE9A59E5C1BA4F1E21BD31CA3E6C1DD643ED42033_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2909 = { sizeof (ENCibm865_t60ADE73C1A1DA25D0818910555EFEC24F897F1FF), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2910 = { sizeof (U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2910[15] = 
{
	U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields::get_offset_of_U305C64B887A4D766EEB5842345D6B609A0E3A91C9_0(),
	U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields::get_offset_of_U3148F346330E294B4157ED412259A7E7F373E26A8_1(),
	U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields::get_offset_of_U31F867F0E96DB3A56943B8CB2662D1DA624023FCD_2(),
	U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields::get_offset_of_U33220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3(),
	U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields::get_offset_of_U3356CE585046545CD2D0B109FF8A85DB88EE29074_4(),
	U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields::get_offset_of_U34FEA2A6324C0192B29C90830F5D578051A4B1B16_5(),
	U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields::get_offset_of_U3598D9433A53523A59D462896B803E416AB0B1901_6(),
	U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields::get_offset_of_U36E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7(),
	U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields::get_offset_of_U37089F9820A6F9CC830909BCD1FAF2EF0A540F348_8(),
	U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields::get_offset_of_U39ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9(),
	U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields::get_offset_of_A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10(),
	U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields::get_offset_of_B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11(),
	U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields::get_offset_of_D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12(),
	U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields::get_offset_of_E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13(),
	U3CPrivateImplementationDetailsU3E_t3210D12B854299F242D8BFEC48103B12CA3F7AAF_StaticFields::get_offset_of_FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2911 = { sizeof (__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D512_tCE4FD05C5BB82E5338C0EAC025786FEF13300221 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2912 = { sizeof (U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2913 = { sizeof (CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2913[7] = 
{
	CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB::get_offset_of_Player_4(),
	CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB::get_offset_of_zoomMinimo_5(),
	CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB::get_offset_of_zoomMaximo_6(),
	CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB::get_offset_of_intervalo_7(),
	CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB::get_offset_of_minhaCamera_8(),
	CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB::get_offset_of_velocidadeZoom_9(),
	CameraController_tC58777A506A1D4F1F1794E5D666E619C1DA073BB::get_offset_of_velocidadeMovimento_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2914 = { sizeof (Explosao_t3DAF3B367DEB733EE888B994F589D65767686BF9), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2915 = { sizeof (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2915[5] = 
{
	GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3::get_offset_of_gameHUD_4(),
	GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3::get_offset_of_MenuPause_5(),
	GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3::get_offset_of_MenuGameOver_6(),
	GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3::get_offset_of_MenuGameWin_7(),
	GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3::get_offset_of_isPause_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2916 = { sizeof (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2916[19] = 
{
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_velocidade_4(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_combustivel_5(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_consumoCombustivel_6(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_velocidadeLimitePouso_7(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_raycastLayerMask_8(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_propulsorFX_9(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_explosao_10(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_hudAltitude_11(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_hudCombustivel_12(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_hudVelocidadeVertical_13(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_hudVelocidadeHorizontal_14(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_rb_15(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_velocidadeVertical_16(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_velocidadeHorizontal_17(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_altitude_18(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_setaEsquerda_19(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_setaDireita_20(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_setaCima_21(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_setaBaixo_22(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
