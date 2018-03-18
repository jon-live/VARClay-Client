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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1824645579;
// System.Char[]
struct CharU5BU5D_t913677958;
// System.Void
struct Void_t779120870;

extern RuntimeClass* StringU5BU5D_t1824645579_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1772786226;
extern Il2CppCodeGenString* _stringLiteral3508037172;
extern Il2CppCodeGenString* _stringLiteral3913181618;
extern const uint32_t KeyValuePair_2_ToString_m750513728_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m25434266_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m323427006_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m390288141_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3648837690_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3897805614_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3863848217_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1775392930_MetadataUsageId;

struct StringU5BU5D_t1824645579;


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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t913677958* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t913677958* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t913677958** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t913677958* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3976768441_H
#define VALUETYPE_T3976768441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3976768441  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3976768441_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3976768441_marshaled_com
{
};
#endif // VALUETYPE_T3976768441_H
#ifndef DEMODATA_T3936676967_H
#define DEMODATA_T3936676967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoHubManager/DemoData
struct  DemoData_t3936676967 
{
public:
	// System.String ExitGames.Demos.DemoHubManager/DemoData::Title
	String_t* ___Title_0;
	// System.String ExitGames.Demos.DemoHubManager/DemoData::Description
	String_t* ___Description_1;
	// System.String ExitGames.Demos.DemoHubManager/DemoData::Scene
	String_t* ___Scene_2;
	// System.String ExitGames.Demos.DemoHubManager/DemoData::TutorialLink
	String_t* ___TutorialLink_3;
	// System.String ExitGames.Demos.DemoHubManager/DemoData::DocLink
	String_t* ___DocLink_4;

public:
	inline static int32_t get_offset_of_Title_0() { return static_cast<int32_t>(offsetof(DemoData_t3936676967, ___Title_0)); }
	inline String_t* get_Title_0() const { return ___Title_0; }
	inline String_t** get_address_of_Title_0() { return &___Title_0; }
	inline void set_Title_0(String_t* value)
	{
		___Title_0 = value;
		Il2CppCodeGenWriteBarrier((&___Title_0), value);
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(DemoData_t3936676967, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier((&___Description_1), value);
	}

	inline static int32_t get_offset_of_Scene_2() { return static_cast<int32_t>(offsetof(DemoData_t3936676967, ___Scene_2)); }
	inline String_t* get_Scene_2() const { return ___Scene_2; }
	inline String_t** get_address_of_Scene_2() { return &___Scene_2; }
	inline void set_Scene_2(String_t* value)
	{
		___Scene_2 = value;
		Il2CppCodeGenWriteBarrier((&___Scene_2), value);
	}

	inline static int32_t get_offset_of_TutorialLink_3() { return static_cast<int32_t>(offsetof(DemoData_t3936676967, ___TutorialLink_3)); }
	inline String_t* get_TutorialLink_3() const { return ___TutorialLink_3; }
	inline String_t** get_address_of_TutorialLink_3() { return &___TutorialLink_3; }
	inline void set_TutorialLink_3(String_t* value)
	{
		___TutorialLink_3 = value;
		Il2CppCodeGenWriteBarrier((&___TutorialLink_3), value);
	}

	inline static int32_t get_offset_of_DocLink_4() { return static_cast<int32_t>(offsetof(DemoData_t3936676967, ___DocLink_4)); }
	inline String_t* get_DocLink_4() const { return ___DocLink_4; }
	inline String_t** get_address_of_DocLink_4() { return &___DocLink_4; }
	inline void set_DocLink_4(String_t* value)
	{
		___DocLink_4 = value;
		Il2CppCodeGenWriteBarrier((&___DocLink_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ExitGames.Demos.DemoHubManager/DemoData
struct DemoData_t3936676967_marshaled_pinvoke
{
	char* ___Title_0;
	char* ___Description_1;
	char* ___Scene_2;
	char* ___TutorialLink_3;
	char* ___DocLink_4;
};
// Native definition for COM marshalling of ExitGames.Demos.DemoHubManager/DemoData
struct DemoData_t3936676967_marshaled_com
{
	Il2CppChar* ___Title_0;
	Il2CppChar* ___Description_1;
	Il2CppChar* ___Scene_2;
	Il2CppChar* ___TutorialLink_3;
	Il2CppChar* ___DocLink_4;
};
#endif // DEMODATA_T3936676967_H
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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef KEYVALUEPAIR_2_T3714781166_H
#define KEYVALUEPAIR_2_T3714781166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t3714781166 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3714781166, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3714781166, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3714781166_H
#ifndef KEYVALUEPAIR_2_T1529881672_H
#define KEYVALUEPAIR_2_T1529881672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct  KeyValuePair_2_t1529881672 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1529881672, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1529881672, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1529881672_H
#ifndef BYTE_T1726385682_H
#define BYTE_T1726385682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1726385682 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1726385682, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1726385682_H
#ifndef KEYVALUEPAIR_2_T612881928_H
#define KEYVALUEPAIR_2_T612881928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
struct  KeyValuePair_2_t612881928 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t612881928, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t612881928, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T612881928_H
#ifndef ENUM_T1811238764_H
#define ENUM_T1811238764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1811238764  : public ValueType_t3976768441
{
public:

public:
};

struct Enum_t1811238764_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t913677958* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1811238764_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t913677958* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t913677958** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t913677958* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1811238764_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1811238764_marshaled_com
{
};
#endif // ENUM_T1811238764_H
#ifndef INT32_T2618976676_H
#define INT32_T2618976676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2618976676 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2618976676, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2618976676_H
#ifndef VOID_T779120870_H
#define VOID_T779120870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t779120870 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T779120870_H
#ifndef KEYVALUEPAIR_2_T625945161_H
#define KEYVALUEPAIR_2_T625945161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t625945161 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	IntPtr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t625945161, ___key_0)); }
	inline IntPtr_t get_key_0() const { return ___key_0; }
	inline IntPtr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(IntPtr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t625945161, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T625945161_H
#ifndef CONNECTIONPROTOCOL_T4262326276_H
#define CONNECTIONPROTOCOL_T4262326276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t4262326276 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t4262326276, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONPROTOCOL_T4262326276_H
#ifndef KEYVALUEPAIR_2_T2740800013_H
#define KEYVALUEPAIR_2_T2740800013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>
struct  KeyValuePair_2_t2740800013 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	DemoData_t3936676967  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2740800013, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2740800013, ___value_1)); }
	inline DemoData_t3936676967  get_value_1() const { return ___value_1; }
	inline DemoData_t3936676967 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(DemoData_t3936676967  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2740800013_H
#ifndef TEAM_T775169351_H
#define TEAM_T775169351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PunTeams/Team
struct  Team_t775169351 
{
public:
	// System.Byte PunTeams/Team::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Team_t775169351, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEAM_T775169351_H
#ifndef KEYVALUEPAIR_2_T2106049550_H
#define KEYVALUEPAIR_2_T2106049550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>
struct  KeyValuePair_2_t2106049550 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2106049550, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2106049550, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2106049550_H
#ifndef KEYVALUEPAIR_2_T4216117352_H
#define KEYVALUEPAIR_2_T4216117352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct  KeyValuePair_2_t4216117352 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4216117352, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4216117352, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4216117352_H
#ifndef KEYVALUEPAIR_2_T861518431_H
#define KEYVALUEPAIR_2_T861518431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>
struct  KeyValuePair_2_t861518431 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t861518431, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t861518431, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T861518431_H
// System.String[]
struct StringU5BU5D_t1824645579  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3100102135_gshared (KeyValuePair_2_t4216117352 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2470893649_gshared (KeyValuePair_2_t4216117352 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4060265097_gshared (KeyValuePair_2_t4216117352 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m1135556240_gshared (KeyValuePair_2_t4216117352 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1758203375_gshared (KeyValuePair_2_t4216117352 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m750513728_gshared (KeyValuePair_2_t4216117352 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m313099368_gshared (KeyValuePair_2_t2106049550 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4185272211_gshared (KeyValuePair_2_t2106049550 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m547746775_gshared (KeyValuePair_2_t2106049550 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m2206263181_gshared (KeyValuePair_2_t2106049550 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1174860551_gshared (KeyValuePair_2_t2106049550 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m25434266_gshared (KeyValuePair_2_t2106049550 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m4156394588_gshared (KeyValuePair_2_t861518431 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m319544231_gshared (KeyValuePair_2_t861518431 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m904913313_gshared (KeyValuePair_2_t861518431 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m1755334505_gshared (KeyValuePair_2_t861518431 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m29615362_gshared (KeyValuePair_2_t861518431 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m323427006_gshared (KeyValuePair_2_t861518431 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2038647251_gshared (KeyValuePair_2_t612881928 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m205892275_gshared (KeyValuePair_2_t612881928 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2369915242_gshared (KeyValuePair_2_t612881928 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m3896343887_gshared (KeyValuePair_2_t612881928 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m207341082_gshared (KeyValuePair_2_t612881928 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m390288141_gshared (KeyValuePair_2_t612881928 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1634610582_gshared (KeyValuePair_2_t1529881672 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m960596605_gshared (KeyValuePair_2_t1529881672 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2019941582_gshared (KeyValuePair_2_t1529881672 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m345007843_gshared (KeyValuePair_2_t1529881672 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m400910494_gshared (KeyValuePair_2_t1529881672 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3648837690_gshared (KeyValuePair_2_t1529881672 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2295719879_gshared (KeyValuePair_2_t3714781166 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4010892228_gshared (KeyValuePair_2_t3714781166 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1106396721_gshared (KeyValuePair_2_t3714781166 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3332856479_gshared (KeyValuePair_2_t3714781166 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2026466119_gshared (KeyValuePair_2_t3714781166 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3897805614_gshared (KeyValuePair_2_t3714781166 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m4028521673_gshared (KeyValuePair_2_t625945161 * __this, IntPtr_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m671430654_gshared (KeyValuePair_2_t625945161 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4142447110_gshared (KeyValuePair_2_t625945161 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m4041193567_gshared (KeyValuePair_2_t625945161 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3121003905_gshared (KeyValuePair_2_t625945161 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3863848217_gshared (KeyValuePair_2_t625945161 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3169860087_gshared (KeyValuePair_2_t2740800013 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2493946851_gshared (KeyValuePair_2_t2740800013 * __this, DemoData_t3936676967  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3886646281_gshared (KeyValuePair_2_t2740800013 * __this, RuntimeObject * ___key0, DemoData_t3936676967  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3432231004_gshared (KeyValuePair_2_t2740800013 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Value()
extern "C"  DemoData_t3936676967  KeyValuePair_2_get_Value_m298523107_gshared (KeyValuePair_2_t2740800013 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1775392930_gshared (KeyValuePair_2_t2740800013 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3100102135(__this, p0, method) ((  void (*) (KeyValuePair_2_t4216117352 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3100102135_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2470893649(__this, p0, method) ((  void (*) (KeyValuePair_2_t4216117352 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m2470893649_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m4060265097(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t4216117352 *, uint8_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m4060265097_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m1135556240(__this, method) ((  uint8_t (*) (KeyValuePair_2_t4216117352 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1135556240_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m1758203375(__this, method) ((  int32_t (*) (KeyValuePair_2_t4216117352 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1758203375_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m1538311165 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m3425719910 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1824645579* ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m750513728(__this, method) ((  String_t* (*) (KeyValuePair_2_t4216117352 *, const RuntimeMethod*))KeyValuePair_2_ToString_m750513728_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m313099368(__this, p0, method) ((  void (*) (KeyValuePair_2_t2106049550 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m313099368_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m4185272211(__this, p0, method) ((  void (*) (KeyValuePair_2_t2106049550 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m4185272211_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m547746775(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2106049550 *, uint8_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m547746775_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2206263181(__this, method) ((  uint8_t (*) (KeyValuePair_2_t2106049550 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2206263181_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m1174860551(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2106049550 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1174860551_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::ToString()
#define KeyValuePair_2_ToString_m25434266(__this, method) ((  String_t* (*) (KeyValuePair_2_t2106049550 *, const RuntimeMethod*))KeyValuePair_2_ToString_m25434266_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m4156394588(__this, p0, method) ((  void (*) (KeyValuePair_2_t861518431 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m4156394588_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m319544231(__this, p0, method) ((  void (*) (KeyValuePair_2_t861518431 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m319544231_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m904913313(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t861518431 *, uint8_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m904913313_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1755334505(__this, method) ((  uint8_t (*) (KeyValuePair_2_t861518431 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1755334505_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m29615362(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t861518431 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m29615362_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::ToString()
#define KeyValuePair_2_ToString_m323427006(__this, method) ((  String_t* (*) (KeyValuePair_2_t861518431 *, const RuntimeMethod*))KeyValuePair_2_ToString_m323427006_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2038647251(__this, p0, method) ((  void (*) (KeyValuePair_2_t612881928 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2038647251_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m205892275(__this, p0, method) ((  void (*) (KeyValuePair_2_t612881928 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m205892275_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2369915242(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t612881928 *, uint8_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m2369915242_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m3896343887(__this, method) ((  uint8_t (*) (KeyValuePair_2_t612881928 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3896343887_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m207341082(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t612881928 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m207341082_gshared)(__this, method)
// System.String System.Byte::ToString()
extern "C"  String_t* Byte_ToString_m617137663 (uint8_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::ToString()
#define KeyValuePair_2_ToString_m390288141(__this, method) ((  String_t* (*) (KeyValuePair_2_t612881928 *, const RuntimeMethod*))KeyValuePair_2_ToString_m390288141_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1634610582(__this, p0, method) ((  void (*) (KeyValuePair_2_t1529881672 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1634610582_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m960596605(__this, p0, method) ((  void (*) (KeyValuePair_2_t1529881672 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m960596605_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2019941582(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1529881672 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m2019941582_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m345007843(__this, method) ((  int32_t (*) (KeyValuePair_2_t1529881672 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m345007843_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m400910494(__this, method) ((  int32_t (*) (KeyValuePair_2_t1529881672 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m400910494_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m3648837690(__this, method) ((  String_t* (*) (KeyValuePair_2_t1529881672 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3648837690_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2295719879(__this, p0, method) ((  void (*) (KeyValuePair_2_t3714781166 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2295719879_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m4010892228(__this, p0, method) ((  void (*) (KeyValuePair_2_t3714781166 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m4010892228_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1106396721(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3714781166 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m1106396721_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m3332856479(__this, method) ((  int32_t (*) (KeyValuePair_2_t3714781166 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3332856479_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2026466119(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3714781166 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2026466119_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m3897805614(__this, method) ((  String_t* (*) (KeyValuePair_2_t3714781166 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3897805614_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m4028521673(__this, p0, method) ((  void (*) (KeyValuePair_2_t625945161 *, IntPtr_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m4028521673_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m671430654(__this, p0, method) ((  void (*) (KeyValuePair_2_t625945161 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m671430654_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m4142447110(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t625945161 *, IntPtr_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m4142447110_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m4041193567(__this, method) ((  IntPtr_t (*) (KeyValuePair_2_t625945161 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4041193567_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m3121003905(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t625945161 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3121003905_gshared)(__this, method)
// System.String System.IntPtr::ToString()
extern "C"  String_t* IntPtr_ToString_m2797602807 (IntPtr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
#define KeyValuePair_2_ToString_m3863848217(__this, method) ((  String_t* (*) (KeyValuePair_2_t625945161 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3863848217_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3169860087(__this, p0, method) ((  void (*) (KeyValuePair_2_t2740800013 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m3169860087_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2493946851(__this, p0, method) ((  void (*) (KeyValuePair_2_t2740800013 *, DemoData_t3936676967 , const RuntimeMethod*))KeyValuePair_2_set_Value_m2493946851_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3886646281(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2740800013 *, RuntimeObject *, DemoData_t3936676967 , const RuntimeMethod*))KeyValuePair_2__ctor_m3886646281_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Key()
#define KeyValuePair_2_get_Key_m3432231004(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2740800013 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3432231004_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Value()
#define KeyValuePair_2_get_Value_m298523107(__this, method) ((  DemoData_t3936676967  (*) (KeyValuePair_2_t2740800013 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m298523107_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::ToString()
#define KeyValuePair_2_ToString_m1775392930(__this, method) ((  String_t* (*) (KeyValuePair_2_t2740800013 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1775392930_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4060265097_gshared (KeyValuePair_2_t4216117352 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3100102135((KeyValuePair_2_t4216117352 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m2470893649((KeyValuePair_2_t4216117352 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m4060265097_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t4216117352 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4216117352 *>(__this + 1);
	KeyValuePair_2__ctor_m4060265097(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m1135556240_gshared (KeyValuePair_2_t4216117352 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m1135556240_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4216117352 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4216117352 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1135556240(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3100102135_gshared (KeyValuePair_2_t4216117352 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3100102135_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t4216117352 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4216117352 *>(__this + 1);
	KeyValuePair_2_set_Key_m3100102135(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1758203375_gshared (KeyValuePair_2_t4216117352 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m1758203375_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4216117352 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4216117352 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1758203375(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2470893649_gshared (KeyValuePair_2_t4216117352 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2470893649_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t4216117352 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4216117352 *>(__this + 1);
	KeyValuePair_2_set_Value_m2470893649(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m750513728_gshared (KeyValuePair_2_t4216117352 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m750513728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1824645579* G_B2_1 = NULL;
	StringU5BU5D_t1824645579* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1824645579* G_B1_1 = NULL;
	StringU5BU5D_t1824645579* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1824645579* G_B3_2 = NULL;
	StringU5BU5D_t1824645579* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1824645579* G_B5_1 = NULL;
	StringU5BU5D_t1824645579* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1824645579* G_B4_1 = NULL;
	StringU5BU5D_t1824645579* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1824645579* G_B6_2 = NULL;
	StringU5BU5D_t1824645579* G_B6_3 = NULL;
	{
		StringU5BU5D_t1824645579* L_0 = (StringU5BU5D_t1824645579*)((StringU5BU5D_t1824645579*)SZArrayNew(StringU5BU5D_t1824645579_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1772786226);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1772786226);
		StringU5BU5D_t1824645579* L_1 = (StringU5BU5D_t1824645579*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m1135556240((KeyValuePair_2_t4216117352 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m1135556240((KeyValuePair_2_t4216117352 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (uint8_t)L_3;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0));
		NullCheck((RuntimeObject *)L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_4);
		*(&V_0) = *(uint8_t*)UnBox(L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1824645579* L_7 = (StringU5BU5D_t1824645579*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral3508037172);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3508037172);
		StringU5BU5D_t1824645579* L_8 = (StringU5BU5D_t1824645579*)L_7;
		int32_t L_9 = KeyValuePair_2_get_Value_m1758203375((KeyValuePair_2_t4216117352 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
	}
	{
		int32_t L_10 = KeyValuePair_2_get_Value_m1758203375((KeyValuePair_2_t4216117352 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_10;
		String_t* L_11 = Int32_ToString_m1538311165((int32_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1824645579* L_13 = (StringU5BU5D_t1824645579*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3913181618);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3913181618);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3425719910(NULL /*static, unused*/, (StringU5BU5D_t1824645579*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m750513728_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4216117352 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4216117352 *>(__this + 1);
	return KeyValuePair_2_ToString_m750513728(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m547746775_gshared (KeyValuePair_2_t2106049550 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m313099368((KeyValuePair_2_t2106049550 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m4185272211((KeyValuePair_2_t2106049550 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m547746775_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2106049550 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2106049550 *>(__this + 1);
	KeyValuePair_2__ctor_m547746775(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m2206263181_gshared (KeyValuePair_2_t2106049550 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m2206263181_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2106049550 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2106049550 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2206263181(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m313099368_gshared (KeyValuePair_2_t2106049550 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m313099368_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2106049550 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2106049550 *>(__this + 1);
	KeyValuePair_2_set_Key_m313099368(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1174860551_gshared (KeyValuePair_2_t2106049550 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1174860551_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2106049550 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2106049550 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1174860551(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4185272211_gshared (KeyValuePair_2_t2106049550 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m4185272211_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2106049550 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2106049550 *>(__this + 1);
	KeyValuePair_2_set_Value_m4185272211(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m25434266_gshared (KeyValuePair_2_t2106049550 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m25434266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1824645579* G_B2_1 = NULL;
	StringU5BU5D_t1824645579* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1824645579* G_B1_1 = NULL;
	StringU5BU5D_t1824645579* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1824645579* G_B3_2 = NULL;
	StringU5BU5D_t1824645579* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1824645579* G_B5_1 = NULL;
	StringU5BU5D_t1824645579* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1824645579* G_B4_1 = NULL;
	StringU5BU5D_t1824645579* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1824645579* G_B6_2 = NULL;
	StringU5BU5D_t1824645579* G_B6_3 = NULL;
	{
		StringU5BU5D_t1824645579* L_0 = (StringU5BU5D_t1824645579*)((StringU5BU5D_t1824645579*)SZArrayNew(StringU5BU5D_t1824645579_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1772786226);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1772786226);
		StringU5BU5D_t1824645579* L_1 = (StringU5BU5D_t1824645579*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m2206263181((KeyValuePair_2_t2106049550 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m2206263181((KeyValuePair_2_t2106049550 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (uint8_t)L_3;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0));
		NullCheck((RuntimeObject *)L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_4);
		*(&V_0) = *(uint8_t*)UnBox(L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1824645579* L_7 = (StringU5BU5D_t1824645579*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral3508037172);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3508037172);
		StringU5BU5D_t1824645579* L_8 = (StringU5BU5D_t1824645579*)L_7;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m1174860551((KeyValuePair_2_t2106049550 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_9)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m1174860551((KeyValuePair_2_t2106049550 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_10;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1824645579* L_13 = (StringU5BU5D_t1824645579*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3913181618);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3913181618);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3425719910(NULL /*static, unused*/, (StringU5BU5D_t1824645579*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m25434266_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2106049550 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2106049550 *>(__this + 1);
	return KeyValuePair_2_ToString_m25434266(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m904913313_gshared (KeyValuePair_2_t861518431 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m4156394588((KeyValuePair_2_t861518431 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m319544231((KeyValuePair_2_t861518431 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m904913313_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t861518431 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t861518431 *>(__this + 1);
	KeyValuePair_2__ctor_m904913313(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m1755334505_gshared (KeyValuePair_2_t861518431 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m1755334505_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t861518431 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t861518431 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1755334505(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m4156394588_gshared (KeyValuePair_2_t861518431 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m4156394588_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t861518431 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t861518431 *>(__this + 1);
	KeyValuePair_2_set_Key_m4156394588(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m29615362_gshared (KeyValuePair_2_t861518431 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m29615362_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t861518431 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t861518431 *>(__this + 1);
	return KeyValuePair_2_get_Value_m29615362(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m319544231_gshared (KeyValuePair_2_t861518431 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m319544231_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t861518431 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t861518431 *>(__this + 1);
	KeyValuePair_2_set_Value_m319544231(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m323427006_gshared (KeyValuePair_2_t861518431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m323427006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1824645579* G_B2_1 = NULL;
	StringU5BU5D_t1824645579* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1824645579* G_B1_1 = NULL;
	StringU5BU5D_t1824645579* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1824645579* G_B3_2 = NULL;
	StringU5BU5D_t1824645579* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1824645579* G_B5_1 = NULL;
	StringU5BU5D_t1824645579* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1824645579* G_B4_1 = NULL;
	StringU5BU5D_t1824645579* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1824645579* G_B6_2 = NULL;
	StringU5BU5D_t1824645579* G_B6_3 = NULL;
	{
		StringU5BU5D_t1824645579* L_0 = (StringU5BU5D_t1824645579*)((StringU5BU5D_t1824645579*)SZArrayNew(StringU5BU5D_t1824645579_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1772786226);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1772786226);
		StringU5BU5D_t1824645579* L_1 = (StringU5BU5D_t1824645579*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m1755334505((KeyValuePair_2_t861518431 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m1755334505((KeyValuePair_2_t861518431 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (uint8_t)L_3;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0));
		NullCheck((RuntimeObject *)L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_4);
		*(&V_0) = *(uint8_t*)UnBox(L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1824645579* L_7 = (StringU5BU5D_t1824645579*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral3508037172);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3508037172);
		StringU5BU5D_t1824645579* L_8 = (StringU5BU5D_t1824645579*)L_7;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m29615362((KeyValuePair_2_t861518431 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_9)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m29615362((KeyValuePair_2_t861518431 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_10;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1824645579* L_13 = (StringU5BU5D_t1824645579*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3913181618);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3913181618);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3425719910(NULL /*static, unused*/, (StringU5BU5D_t1824645579*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m323427006_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t861518431 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t861518431 *>(__this + 1);
	return KeyValuePair_2_ToString_m323427006(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2369915242_gshared (KeyValuePair_2_t612881928 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2038647251((KeyValuePair_2_t612881928 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m205892275((KeyValuePair_2_t612881928 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2369915242_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t612881928 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t612881928 *>(__this + 1);
	KeyValuePair_2__ctor_m2369915242(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m3896343887_gshared (KeyValuePair_2_t612881928 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m3896343887_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t612881928 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t612881928 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3896343887(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2038647251_gshared (KeyValuePair_2_t612881928 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2038647251_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t612881928 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t612881928 *>(__this + 1);
	KeyValuePair_2_set_Key_m2038647251(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m207341082_gshared (KeyValuePair_2_t612881928 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m207341082_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t612881928 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t612881928 *>(__this + 1);
	return KeyValuePair_2_get_Value_m207341082(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m205892275_gshared (KeyValuePair_2_t612881928 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m205892275_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t612881928 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t612881928 *>(__this + 1);
	KeyValuePair_2_set_Value_m205892275(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m390288141_gshared (KeyValuePair_2_t612881928 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m390288141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1824645579* G_B2_1 = NULL;
	StringU5BU5D_t1824645579* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1824645579* G_B1_1 = NULL;
	StringU5BU5D_t1824645579* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1824645579* G_B3_2 = NULL;
	StringU5BU5D_t1824645579* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1824645579* G_B5_1 = NULL;
	StringU5BU5D_t1824645579* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1824645579* G_B4_1 = NULL;
	StringU5BU5D_t1824645579* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1824645579* G_B6_2 = NULL;
	StringU5BU5D_t1824645579* G_B6_3 = NULL;
	{
		StringU5BU5D_t1824645579* L_0 = (StringU5BU5D_t1824645579*)((StringU5BU5D_t1824645579*)SZArrayNew(StringU5BU5D_t1824645579_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1772786226);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1772786226);
		StringU5BU5D_t1824645579* L_1 = (StringU5BU5D_t1824645579*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m3896343887((KeyValuePair_2_t612881928 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m3896343887((KeyValuePair_2_t612881928 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (uint8_t)L_3;
		String_t* L_4 = Byte_ToString_m617137663((uint8_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1824645579* L_6 = (StringU5BU5D_t1824645579*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3508037172);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3508037172);
		StringU5BU5D_t1824645579* L_7 = (StringU5BU5D_t1824645579*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m207341082((KeyValuePair_2_t612881928 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m207341082((KeyValuePair_2_t612881928 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1824645579* L_12 = (StringU5BU5D_t1824645579*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3913181618);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3913181618);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3425719910(NULL /*static, unused*/, (StringU5BU5D_t1824645579*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m390288141_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t612881928 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t612881928 *>(__this + 1);
	return KeyValuePair_2_ToString_m390288141(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2019941582_gshared (KeyValuePair_2_t1529881672 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1634610582((KeyValuePair_2_t1529881672 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m960596605((KeyValuePair_2_t1529881672 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2019941582_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1529881672 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1529881672 *>(__this + 1);
	KeyValuePair_2__ctor_m2019941582(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m345007843_gshared (KeyValuePair_2_t1529881672 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m345007843_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1529881672 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1529881672 *>(__this + 1);
	return KeyValuePair_2_get_Key_m345007843(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1634610582_gshared (KeyValuePair_2_t1529881672 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1634610582_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1529881672 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1529881672 *>(__this + 1);
	KeyValuePair_2_set_Key_m1634610582(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m400910494_gshared (KeyValuePair_2_t1529881672 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m400910494_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1529881672 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1529881672 *>(__this + 1);
	return KeyValuePair_2_get_Value_m400910494(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m960596605_gshared (KeyValuePair_2_t1529881672 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m960596605_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1529881672 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1529881672 *>(__this + 1);
	KeyValuePair_2_set_Value_m960596605(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3648837690_gshared (KeyValuePair_2_t1529881672 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3648837690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1824645579* G_B2_1 = NULL;
	StringU5BU5D_t1824645579* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1824645579* G_B1_1 = NULL;
	StringU5BU5D_t1824645579* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1824645579* G_B3_2 = NULL;
	StringU5BU5D_t1824645579* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1824645579* G_B5_1 = NULL;
	StringU5BU5D_t1824645579* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1824645579* G_B4_1 = NULL;
	StringU5BU5D_t1824645579* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1824645579* G_B6_2 = NULL;
	StringU5BU5D_t1824645579* G_B6_3 = NULL;
	{
		StringU5BU5D_t1824645579* L_0 = (StringU5BU5D_t1824645579*)((StringU5BU5D_t1824645579*)SZArrayNew(StringU5BU5D_t1824645579_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1772786226);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1772786226);
		StringU5BU5D_t1824645579* L_1 = (StringU5BU5D_t1824645579*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m345007843((KeyValuePair_2_t1529881672 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m345007843((KeyValuePair_2_t1529881672 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m1538311165((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1824645579* L_6 = (StringU5BU5D_t1824645579*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3508037172);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3508037172);
		StringU5BU5D_t1824645579* L_7 = (StringU5BU5D_t1824645579*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m400910494((KeyValuePair_2_t1529881672 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m400910494((KeyValuePair_2_t1529881672 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m1538311165((int32_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1824645579* L_12 = (StringU5BU5D_t1824645579*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3913181618);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3913181618);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3425719910(NULL /*static, unused*/, (StringU5BU5D_t1824645579*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3648837690_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1529881672 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1529881672 *>(__this + 1);
	return KeyValuePair_2_ToString_m3648837690(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1106396721_gshared (KeyValuePair_2_t3714781166 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2295719879((KeyValuePair_2_t3714781166 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m4010892228((KeyValuePair_2_t3714781166 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1106396721_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3714781166 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3714781166 *>(__this + 1);
	KeyValuePair_2__ctor_m1106396721(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3332856479_gshared (KeyValuePair_2_t3714781166 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m3332856479_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3714781166 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3714781166 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3332856479(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2295719879_gshared (KeyValuePair_2_t3714781166 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2295719879_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3714781166 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3714781166 *>(__this + 1);
	KeyValuePair_2_set_Key_m2295719879(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2026466119_gshared (KeyValuePair_2_t3714781166 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2026466119_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3714781166 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3714781166 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2026466119(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4010892228_gshared (KeyValuePair_2_t3714781166 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m4010892228_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3714781166 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3714781166 *>(__this + 1);
	KeyValuePair_2_set_Value_m4010892228(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3897805614_gshared (KeyValuePair_2_t3714781166 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3897805614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1824645579* G_B2_1 = NULL;
	StringU5BU5D_t1824645579* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1824645579* G_B1_1 = NULL;
	StringU5BU5D_t1824645579* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1824645579* G_B3_2 = NULL;
	StringU5BU5D_t1824645579* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1824645579* G_B5_1 = NULL;
	StringU5BU5D_t1824645579* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1824645579* G_B4_1 = NULL;
	StringU5BU5D_t1824645579* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1824645579* G_B6_2 = NULL;
	StringU5BU5D_t1824645579* G_B6_3 = NULL;
	{
		StringU5BU5D_t1824645579* L_0 = (StringU5BU5D_t1824645579*)((StringU5BU5D_t1824645579*)SZArrayNew(StringU5BU5D_t1824645579_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1772786226);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1772786226);
		StringU5BU5D_t1824645579* L_1 = (StringU5BU5D_t1824645579*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m3332856479((KeyValuePair_2_t3714781166 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m3332856479((KeyValuePair_2_t3714781166 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m1538311165((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1824645579* L_6 = (StringU5BU5D_t1824645579*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3508037172);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3508037172);
		StringU5BU5D_t1824645579* L_7 = (StringU5BU5D_t1824645579*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m2026466119((KeyValuePair_2_t3714781166 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m2026466119((KeyValuePair_2_t3714781166 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1824645579* L_12 = (StringU5BU5D_t1824645579*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3913181618);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3913181618);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3425719910(NULL /*static, unused*/, (StringU5BU5D_t1824645579*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3897805614_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3714781166 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3714781166 *>(__this + 1);
	return KeyValuePair_2_ToString_m3897805614(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4142447110_gshared (KeyValuePair_2_t625945161 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m4028521673((KeyValuePair_2_t625945161 *)__this, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m671430654((KeyValuePair_2_t625945161 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m4142447110_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t625945161 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t625945161 *>(__this + 1);
	KeyValuePair_2__ctor_m4142447110(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m4041193567_gshared (KeyValuePair_2_t625945161 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = (IntPtr_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m4041193567_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t625945161 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t625945161 *>(__this + 1);
	return KeyValuePair_2_get_Key_m4041193567(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m4028521673_gshared (KeyValuePair_2_t625945161 * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m4028521673_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t625945161 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t625945161 *>(__this + 1);
	KeyValuePair_2_set_Key_m4028521673(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3121003905_gshared (KeyValuePair_2_t625945161 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3121003905_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t625945161 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t625945161 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3121003905(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m671430654_gshared (KeyValuePair_2_t625945161 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m671430654_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t625945161 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t625945161 *>(__this + 1);
	KeyValuePair_2_set_Value_m671430654(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3863848217_gshared (KeyValuePair_2_t625945161 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3863848217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1824645579* G_B2_1 = NULL;
	StringU5BU5D_t1824645579* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1824645579* G_B1_1 = NULL;
	StringU5BU5D_t1824645579* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1824645579* G_B3_2 = NULL;
	StringU5BU5D_t1824645579* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1824645579* G_B5_1 = NULL;
	StringU5BU5D_t1824645579* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1824645579* G_B4_1 = NULL;
	StringU5BU5D_t1824645579* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1824645579* G_B6_2 = NULL;
	StringU5BU5D_t1824645579* G_B6_3 = NULL;
	{
		StringU5BU5D_t1824645579* L_0 = (StringU5BU5D_t1824645579*)((StringU5BU5D_t1824645579*)SZArrayNew(StringU5BU5D_t1824645579_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1772786226);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1772786226);
		StringU5BU5D_t1824645579* L_1 = (StringU5BU5D_t1824645579*)L_0;
		IntPtr_t L_2 = KeyValuePair_2_get_Key_m4041193567((KeyValuePair_2_t625945161 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		IntPtr_t L_3 = KeyValuePair_2_get_Key_m4041193567((KeyValuePair_2_t625945161 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (IntPtr_t)L_3;
		String_t* L_4 = IntPtr_ToString_m2797602807((IntPtr_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1824645579* L_6 = (StringU5BU5D_t1824645579*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3508037172);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3508037172);
		StringU5BU5D_t1824645579* L_7 = (StringU5BU5D_t1824645579*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m3121003905((KeyValuePair_2_t625945161 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m3121003905((KeyValuePair_2_t625945161 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1824645579* L_12 = (StringU5BU5D_t1824645579*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3913181618);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3913181618);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3425719910(NULL /*static, unused*/, (StringU5BU5D_t1824645579*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3863848217_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t625945161 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t625945161 *>(__this + 1);
	return KeyValuePair_2_ToString_m3863848217(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3886646281_gshared (KeyValuePair_2_t2740800013 * __this, RuntimeObject * ___key0, DemoData_t3936676967  ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m3169860087((KeyValuePair_2_t2740800013 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		DemoData_t3936676967  L_1 = ___value1;
		KeyValuePair_2_set_Value_m2493946851((KeyValuePair_2_t2740800013 *)__this, (DemoData_t3936676967 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3886646281_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, DemoData_t3936676967  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2740800013 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2740800013 *>(__this + 1);
	KeyValuePair_2__ctor_m3886646281(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3432231004_gshared (KeyValuePair_2_t2740800013 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3432231004_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2740800013 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2740800013 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3432231004(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3169860087_gshared (KeyValuePair_2_t2740800013 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3169860087_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2740800013 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2740800013 *>(__this + 1);
	KeyValuePair_2_set_Key_m3169860087(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Value()
extern "C"  DemoData_t3936676967  KeyValuePair_2_get_Value_m298523107_gshared (KeyValuePair_2_t2740800013 * __this, const RuntimeMethod* method)
{
	{
		DemoData_t3936676967  L_0 = (DemoData_t3936676967 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  DemoData_t3936676967  KeyValuePair_2_get_Value_m298523107_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2740800013 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2740800013 *>(__this + 1);
	return KeyValuePair_2_get_Value_m298523107(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2493946851_gshared (KeyValuePair_2_t2740800013 * __this, DemoData_t3936676967  ___value0, const RuntimeMethod* method)
{
	{
		DemoData_t3936676967  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2493946851_AdjustorThunk (RuntimeObject * __this, DemoData_t3936676967  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2740800013 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2740800013 *>(__this + 1);
	KeyValuePair_2_set_Value_m2493946851(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1775392930_gshared (KeyValuePair_2_t2740800013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1775392930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	DemoData_t3936676967  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1824645579* G_B2_1 = NULL;
	StringU5BU5D_t1824645579* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1824645579* G_B1_1 = NULL;
	StringU5BU5D_t1824645579* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1824645579* G_B3_2 = NULL;
	StringU5BU5D_t1824645579* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1824645579* G_B5_1 = NULL;
	StringU5BU5D_t1824645579* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1824645579* G_B4_1 = NULL;
	StringU5BU5D_t1824645579* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1824645579* G_B6_2 = NULL;
	StringU5BU5D_t1824645579* G_B6_3 = NULL;
	{
		StringU5BU5D_t1824645579* L_0 = (StringU5BU5D_t1824645579*)((StringU5BU5D_t1824645579*)SZArrayNew(StringU5BU5D_t1824645579_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1772786226);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1772786226);
		StringU5BU5D_t1824645579* L_1 = (StringU5BU5D_t1824645579*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m3432231004((KeyValuePair_2_t2740800013 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m3432231004((KeyValuePair_2_t2740800013 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1824645579* L_6 = (StringU5BU5D_t1824645579*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3508037172);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3508037172);
		StringU5BU5D_t1824645579* L_7 = (StringU5BU5D_t1824645579*)L_6;
		DemoData_t3936676967  L_8 = KeyValuePair_2_get_Value_m298523107((KeyValuePair_2_t2740800013 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		DemoData_t3936676967  L_9 = KeyValuePair_2_get_Value_m298523107((KeyValuePair_2_t2740800013 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (DemoData_t3936676967 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(DemoData_t3936676967 *)UnBox(L_10);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1824645579* L_13 = (StringU5BU5D_t1824645579*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3913181618);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3913181618);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3425719910(NULL /*static, unused*/, (StringU5BU5D_t1824645579*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1775392930_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2740800013 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2740800013 *>(__this + 1);
	return KeyValuePair_2_ToString_m1775392930(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
