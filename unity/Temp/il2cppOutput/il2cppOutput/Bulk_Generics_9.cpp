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
struct StringU5BU5D_t1391895324;
// System.Char[]
struct CharU5BU5D_t73669325;
// System.Void
struct Void_t770194896;

extern RuntimeClass* StringU5BU5D_t1391895324_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1718293222;
extern Il2CppCodeGenString* _stringLiteral547844225;
extern Il2CppCodeGenString* _stringLiteral1084304205;
extern const uint32_t KeyValuePair_2_ToString_m2228232650_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3117697158_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1422349167_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2934559805_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m353206135_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2034790603_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m4271086242_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1578675595_MetadataUsageId;

struct StringU5BU5D_t1391895324;


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
	CharU5BU5D_t73669325* ___WhiteChars_3;

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
	inline CharU5BU5D_t73669325* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t73669325** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t73669325* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T1504169065_H
#define VALUETYPE_T1504169065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1504169065  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1504169065_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1504169065_marshaled_com
{
};
#endif // VALUETYPE_T1504169065_H
#ifndef DEMODATA_T861272331_H
#define DEMODATA_T861272331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoHubManager/DemoData
struct  DemoData_t861272331 
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
	inline static int32_t get_offset_of_Title_0() { return static_cast<int32_t>(offsetof(DemoData_t861272331, ___Title_0)); }
	inline String_t* get_Title_0() const { return ___Title_0; }
	inline String_t** get_address_of_Title_0() { return &___Title_0; }
	inline void set_Title_0(String_t* value)
	{
		___Title_0 = value;
		Il2CppCodeGenWriteBarrier((&___Title_0), value);
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(DemoData_t861272331, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier((&___Description_1), value);
	}

	inline static int32_t get_offset_of_Scene_2() { return static_cast<int32_t>(offsetof(DemoData_t861272331, ___Scene_2)); }
	inline String_t* get_Scene_2() const { return ___Scene_2; }
	inline String_t** get_address_of_Scene_2() { return &___Scene_2; }
	inline void set_Scene_2(String_t* value)
	{
		___Scene_2 = value;
		Il2CppCodeGenWriteBarrier((&___Scene_2), value);
	}

	inline static int32_t get_offset_of_TutorialLink_3() { return static_cast<int32_t>(offsetof(DemoData_t861272331, ___TutorialLink_3)); }
	inline String_t* get_TutorialLink_3() const { return ___TutorialLink_3; }
	inline String_t** get_address_of_TutorialLink_3() { return &___TutorialLink_3; }
	inline void set_TutorialLink_3(String_t* value)
	{
		___TutorialLink_3 = value;
		Il2CppCodeGenWriteBarrier((&___TutorialLink_3), value);
	}

	inline static int32_t get_offset_of_DocLink_4() { return static_cast<int32_t>(offsetof(DemoData_t861272331, ___DocLink_4)); }
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
struct DemoData_t861272331_marshaled_pinvoke
{
	char* ___Title_0;
	char* ___Description_1;
	char* ___Scene_2;
	char* ___TutorialLink_3;
	char* ___DocLink_4;
};
// Native definition for COM marshalling of ExitGames.Demos.DemoHubManager/DemoData
struct DemoData_t861272331_marshaled_com
{
	Il2CppChar* ___Title_0;
	Il2CppChar* ___Description_1;
	Il2CppChar* ___Scene_2;
	Il2CppChar* ___TutorialLink_3;
	Il2CppChar* ___DocLink_4;
};
#endif // DEMODATA_T861272331_H
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
#ifndef KEYVALUEPAIR_2_T1019902582_H
#define KEYVALUEPAIR_2_T1019902582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t1019902582 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1019902582, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1019902582, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1019902582_H
#ifndef KEYVALUEPAIR_2_T2585388465_H
#define KEYVALUEPAIR_2_T2585388465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct  KeyValuePair_2_t2585388465 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2585388465, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2585388465, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2585388465_H
#ifndef BYTE_T2872624093_H
#define BYTE_T2872624093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t2872624093 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t2872624093, ___m_value_2)); }
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
#endif // BYTE_T2872624093_H
#ifndef KEYVALUEPAIR_2_T2288775618_H
#define KEYVALUEPAIR_2_T2288775618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
struct  KeyValuePair_2_t2288775618 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2288775618, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2288775618, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2288775618_H
#ifndef ENUM_T2929675009_H
#define ENUM_T2929675009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2929675009  : public ValueType_t1504169065
{
public:

public:
};

struct Enum_t2929675009_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t73669325* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2929675009_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t73669325* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t73669325** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t73669325* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2929675009_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2929675009_marshaled_com
{
};
#endif // ENUM_T2929675009_H
#ifndef INT32_T3002034745_H
#define INT32_T3002034745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3002034745 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t3002034745, ___m_value_2)); }
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
#endif // INT32_T3002034745_H
#ifndef VOID_T770194896_H
#define VOID_T770194896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t770194896 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T770194896_H
#ifndef KEYVALUEPAIR_2_T1458518915_H
#define KEYVALUEPAIR_2_T1458518915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t1458518915 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	IntPtr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1458518915, ___key_0)); }
	inline IntPtr_t get_key_0() const { return ___key_0; }
	inline IntPtr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(IntPtr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1458518915, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1458518915_H
#ifndef CONNECTIONPROTOCOL_T2863504979_H
#define CONNECTIONPROTOCOL_T2863504979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t2863504979 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t2863504979, ___value___1)); }
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
#endif // CONNECTIONPROTOCOL_T2863504979_H
#ifndef KEYVALUEPAIR_2_T3658900234_H
#define KEYVALUEPAIR_2_T3658900234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>
struct  KeyValuePair_2_t3658900234 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	DemoData_t861272331  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3658900234, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3658900234, ___value_1)); }
	inline DemoData_t861272331  get_value_1() const { return ___value_1; }
	inline DemoData_t861272331 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(DemoData_t861272331  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3658900234_H
#ifndef TEAM_T351861919_H
#define TEAM_T351861919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PunTeams/Team
struct  Team_t351861919 
{
public:
	// System.Byte PunTeams/Team::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Team_t351861919, ___value___1)); }
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
#endif // TEAM_T351861919_H
#ifndef KEYVALUEPAIR_2_T1121812660_H
#define KEYVALUEPAIR_2_T1121812660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>
struct  KeyValuePair_2_t1121812660 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1121812660, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1121812660, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1121812660_H
#ifndef KEYVALUEPAIR_2_T2687298543_H
#define KEYVALUEPAIR_2_T2687298543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct  KeyValuePair_2_t2687298543 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2687298543, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2687298543, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2687298543_H
#ifndef KEYVALUEPAIR_2_T1228620728_H
#define KEYVALUEPAIR_2_T1228620728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>
struct  KeyValuePair_2_t1228620728 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1228620728, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1228620728, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1228620728_H
// System.String[]
struct StringU5BU5D_t1391895324  : public RuntimeArray
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
extern "C"  void KeyValuePair_2_set_Key_m2155937158_gshared (KeyValuePair_2_t2687298543 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2354385316_gshared (KeyValuePair_2_t2687298543 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1874510305_gshared (KeyValuePair_2_t2687298543 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m312474535_gshared (KeyValuePair_2_t2687298543 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1294176695_gshared (KeyValuePair_2_t2687298543 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2228232650_gshared (KeyValuePair_2_t2687298543 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2718637809_gshared (KeyValuePair_2_t1121812660 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2096580700_gshared (KeyValuePair_2_t1121812660 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4142981785_gshared (KeyValuePair_2_t1121812660 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m854445872_gshared (KeyValuePair_2_t1121812660 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2667338160_gshared (KeyValuePair_2_t1121812660 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3117697158_gshared (KeyValuePair_2_t1121812660 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m4105199558_gshared (KeyValuePair_2_t1228620728 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2002253923_gshared (KeyValuePair_2_t1228620728 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2256140473_gshared (KeyValuePair_2_t1228620728 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m397622404_gshared (KeyValuePair_2_t1228620728 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m373725459_gshared (KeyValuePair_2_t1228620728 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1422349167_gshared (KeyValuePair_2_t1228620728 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m865062003_gshared (KeyValuePair_2_t2288775618 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m179804376_gshared (KeyValuePair_2_t2288775618 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m490498936_gshared (KeyValuePair_2_t2288775618 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m3818827795_gshared (KeyValuePair_2_t2288775618 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3911148313_gshared (KeyValuePair_2_t2288775618 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2934559805_gshared (KeyValuePair_2_t2288775618 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2781145741_gshared (KeyValuePair_2_t2585388465 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2378500345_gshared (KeyValuePair_2_t2585388465 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3805152489_gshared (KeyValuePair_2_t2585388465 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3257192147_gshared (KeyValuePair_2_t2585388465 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m4234854805_gshared (KeyValuePair_2_t2585388465 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m353206135_gshared (KeyValuePair_2_t2585388465 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2663541262_gshared (KeyValuePair_2_t1019902582 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2741000988_gshared (KeyValuePair_2_t1019902582 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3265422131_gshared (KeyValuePair_2_t1019902582 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m434230947_gshared (KeyValuePair_2_t1019902582 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m660615700_gshared (KeyValuePair_2_t1019902582 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2034790603_gshared (KeyValuePair_2_t1019902582 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2546101794_gshared (KeyValuePair_2_t1458518915 * __this, IntPtr_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1481563428_gshared (KeyValuePair_2_t1458518915 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3251449738_gshared (KeyValuePair_2_t1458518915 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m3001071307_gshared (KeyValuePair_2_t1458518915 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2078573478_gshared (KeyValuePair_2_t1458518915 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4271086242_gshared (KeyValuePair_2_t1458518915 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m395615963_gshared (KeyValuePair_2_t3658900234 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1287179879_gshared (KeyValuePair_2_t3658900234 * __this, DemoData_t861272331  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m990584525_gshared (KeyValuePair_2_t3658900234 * __this, RuntimeObject * ___key0, DemoData_t861272331  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3085073101_gshared (KeyValuePair_2_t3658900234 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Value()
extern "C"  DemoData_t861272331  KeyValuePair_2_get_Value_m2637395509_gshared (KeyValuePair_2_t3658900234 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1578675595_gshared (KeyValuePair_2_t3658900234 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2155937158(__this, p0, method) ((  void (*) (KeyValuePair_2_t2687298543 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2155937158_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2354385316(__this, p0, method) ((  void (*) (KeyValuePair_2_t2687298543 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m2354385316_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1874510305(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2687298543 *, uint8_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m1874510305_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m312474535(__this, method) ((  uint8_t (*) (KeyValuePair_2_t2687298543 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m312474535_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m1294176695(__this, method) ((  int32_t (*) (KeyValuePair_2_t2687298543 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1294176695_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m2357385562 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m98806085 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1391895324* ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m2228232650(__this, method) ((  String_t* (*) (KeyValuePair_2_t2687298543 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2228232650_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2718637809(__this, p0, method) ((  void (*) (KeyValuePair_2_t1121812660 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2718637809_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2096580700(__this, p0, method) ((  void (*) (KeyValuePair_2_t1121812660 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m2096580700_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m4142981785(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1121812660 *, uint8_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m4142981785_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m854445872(__this, method) ((  uint8_t (*) (KeyValuePair_2_t1121812660 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m854445872_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2667338160(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1121812660 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2667338160_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::ToString()
#define KeyValuePair_2_ToString_m3117697158(__this, method) ((  String_t* (*) (KeyValuePair_2_t1121812660 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3117697158_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m4105199558(__this, p0, method) ((  void (*) (KeyValuePair_2_t1228620728 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m4105199558_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2002253923(__this, p0, method) ((  void (*) (KeyValuePair_2_t1228620728 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m2002253923_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2256140473(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1228620728 *, uint8_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m2256140473_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m397622404(__this, method) ((  uint8_t (*) (KeyValuePair_2_t1228620728 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m397622404_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m373725459(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1228620728 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m373725459_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1422349167(__this, method) ((  String_t* (*) (KeyValuePair_2_t1228620728 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1422349167_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m865062003(__this, p0, method) ((  void (*) (KeyValuePair_2_t2288775618 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m865062003_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m179804376(__this, p0, method) ((  void (*) (KeyValuePair_2_t2288775618 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m179804376_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m490498936(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2288775618 *, uint8_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m490498936_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m3818827795(__this, method) ((  uint8_t (*) (KeyValuePair_2_t2288775618 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3818827795_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m3911148313(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2288775618 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3911148313_gshared)(__this, method)
// System.String System.Byte::ToString()
extern "C"  String_t* Byte_ToString_m3666368970 (uint8_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2934559805(__this, method) ((  String_t* (*) (KeyValuePair_2_t2288775618 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2934559805_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2781145741(__this, p0, method) ((  void (*) (KeyValuePair_2_t2585388465 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2781145741_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2378500345(__this, p0, method) ((  void (*) (KeyValuePair_2_t2585388465 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m2378500345_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3805152489(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2585388465 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m3805152489_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m3257192147(__this, method) ((  int32_t (*) (KeyValuePair_2_t2585388465 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3257192147_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m4234854805(__this, method) ((  int32_t (*) (KeyValuePair_2_t2585388465 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m4234854805_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m353206135(__this, method) ((  String_t* (*) (KeyValuePair_2_t2585388465 *, const RuntimeMethod*))KeyValuePair_2_ToString_m353206135_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2663541262(__this, p0, method) ((  void (*) (KeyValuePair_2_t1019902582 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2663541262_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2741000988(__this, p0, method) ((  void (*) (KeyValuePair_2_t1019902582 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m2741000988_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3265422131(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1019902582 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m3265422131_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m434230947(__this, method) ((  int32_t (*) (KeyValuePair_2_t1019902582 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m434230947_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m660615700(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1019902582 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m660615700_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2034790603(__this, method) ((  String_t* (*) (KeyValuePair_2_t1019902582 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2034790603_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2546101794(__this, p0, method) ((  void (*) (KeyValuePair_2_t1458518915 *, IntPtr_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2546101794_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1481563428(__this, p0, method) ((  void (*) (KeyValuePair_2_t1458518915 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m1481563428_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3251449738(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1458518915 *, IntPtr_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m3251449738_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m3001071307(__this, method) ((  IntPtr_t (*) (KeyValuePair_2_t1458518915 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3001071307_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2078573478(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1458518915 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2078573478_gshared)(__this, method)
// System.String System.IntPtr::ToString()
extern "C"  String_t* IntPtr_ToString_m10068873 (IntPtr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
#define KeyValuePair_2_ToString_m4271086242(__this, method) ((  String_t* (*) (KeyValuePair_2_t1458518915 *, const RuntimeMethod*))KeyValuePair_2_ToString_m4271086242_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m395615963(__this, p0, method) ((  void (*) (KeyValuePair_2_t3658900234 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m395615963_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1287179879(__this, p0, method) ((  void (*) (KeyValuePair_2_t3658900234 *, DemoData_t861272331 , const RuntimeMethod*))KeyValuePair_2_set_Value_m1287179879_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m990584525(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3658900234 *, RuntimeObject *, DemoData_t861272331 , const RuntimeMethod*))KeyValuePair_2__ctor_m990584525_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Key()
#define KeyValuePair_2_get_Key_m3085073101(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3658900234 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3085073101_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Value()
#define KeyValuePair_2_get_Value_m2637395509(__this, method) ((  DemoData_t861272331  (*) (KeyValuePair_2_t3658900234 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2637395509_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::ToString()
#define KeyValuePair_2_ToString_m1578675595(__this, method) ((  String_t* (*) (KeyValuePair_2_t3658900234 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1578675595_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1874510305_gshared (KeyValuePair_2_t2687298543 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2155937158((KeyValuePair_2_t2687298543 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m2354385316((KeyValuePair_2_t2687298543 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1874510305_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2687298543 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2687298543 *>(__this + 1);
	KeyValuePair_2__ctor_m1874510305(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m312474535_gshared (KeyValuePair_2_t2687298543 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m312474535_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2687298543 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2687298543 *>(__this + 1);
	return KeyValuePair_2_get_Key_m312474535(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2155937158_gshared (KeyValuePair_2_t2687298543 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2155937158_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2687298543 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2687298543 *>(__this + 1);
	KeyValuePair_2_set_Key_m2155937158(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1294176695_gshared (KeyValuePair_2_t2687298543 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m1294176695_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2687298543 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2687298543 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1294176695(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2354385316_gshared (KeyValuePair_2_t2687298543 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2354385316_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2687298543 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2687298543 *>(__this + 1);
	KeyValuePair_2_set_Value_m2354385316(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2228232650_gshared (KeyValuePair_2_t2687298543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2228232650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1391895324* G_B2_1 = NULL;
	StringU5BU5D_t1391895324* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1391895324* G_B1_1 = NULL;
	StringU5BU5D_t1391895324* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1391895324* G_B3_2 = NULL;
	StringU5BU5D_t1391895324* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1391895324* G_B5_1 = NULL;
	StringU5BU5D_t1391895324* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1391895324* G_B4_1 = NULL;
	StringU5BU5D_t1391895324* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1391895324* G_B6_2 = NULL;
	StringU5BU5D_t1391895324* G_B6_3 = NULL;
	{
		StringU5BU5D_t1391895324* L_0 = (StringU5BU5D_t1391895324*)((StringU5BU5D_t1391895324*)SZArrayNew(StringU5BU5D_t1391895324_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1718293222);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1718293222);
		StringU5BU5D_t1391895324* L_1 = (StringU5BU5D_t1391895324*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m312474535((KeyValuePair_2_t2687298543 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m312474535((KeyValuePair_2_t2687298543 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t1391895324* L_7 = (StringU5BU5D_t1391895324*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral547844225);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral547844225);
		StringU5BU5D_t1391895324* L_8 = (StringU5BU5D_t1391895324*)L_7;
		int32_t L_9 = KeyValuePair_2_get_Value_m1294176695((KeyValuePair_2_t2687298543 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
	}
	{
		int32_t L_10 = KeyValuePair_2_get_Value_m1294176695((KeyValuePair_2_t2687298543 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_10;
		String_t* L_11 = Int32_ToString_m2357385562((int32_t*)(&V_1), /*hidden argument*/NULL);
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
		StringU5BU5D_t1391895324* L_13 = (StringU5BU5D_t1391895324*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1084304205);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1084304205);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m98806085(NULL /*static, unused*/, (StringU5BU5D_t1391895324*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2228232650_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2687298543 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2687298543 *>(__this + 1);
	return KeyValuePair_2_ToString_m2228232650(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4142981785_gshared (KeyValuePair_2_t1121812660 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2718637809((KeyValuePair_2_t1121812660 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m2096580700((KeyValuePair_2_t1121812660 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m4142981785_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1121812660 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1121812660 *>(__this + 1);
	KeyValuePair_2__ctor_m4142981785(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m854445872_gshared (KeyValuePair_2_t1121812660 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m854445872_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1121812660 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1121812660 *>(__this + 1);
	return KeyValuePair_2_get_Key_m854445872(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2718637809_gshared (KeyValuePair_2_t1121812660 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2718637809_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1121812660 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1121812660 *>(__this + 1);
	KeyValuePair_2_set_Key_m2718637809(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2667338160_gshared (KeyValuePair_2_t1121812660 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2667338160_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1121812660 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1121812660 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2667338160(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2096580700_gshared (KeyValuePair_2_t1121812660 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2096580700_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1121812660 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1121812660 *>(__this + 1);
	KeyValuePair_2_set_Value_m2096580700(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3117697158_gshared (KeyValuePair_2_t1121812660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3117697158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1391895324* G_B2_1 = NULL;
	StringU5BU5D_t1391895324* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1391895324* G_B1_1 = NULL;
	StringU5BU5D_t1391895324* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1391895324* G_B3_2 = NULL;
	StringU5BU5D_t1391895324* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1391895324* G_B5_1 = NULL;
	StringU5BU5D_t1391895324* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1391895324* G_B4_1 = NULL;
	StringU5BU5D_t1391895324* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1391895324* G_B6_2 = NULL;
	StringU5BU5D_t1391895324* G_B6_3 = NULL;
	{
		StringU5BU5D_t1391895324* L_0 = (StringU5BU5D_t1391895324*)((StringU5BU5D_t1391895324*)SZArrayNew(StringU5BU5D_t1391895324_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1718293222);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1718293222);
		StringU5BU5D_t1391895324* L_1 = (StringU5BU5D_t1391895324*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m854445872((KeyValuePair_2_t1121812660 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m854445872((KeyValuePair_2_t1121812660 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t1391895324* L_7 = (StringU5BU5D_t1391895324*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral547844225);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral547844225);
		StringU5BU5D_t1391895324* L_8 = (StringU5BU5D_t1391895324*)L_7;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m2667338160((KeyValuePair_2_t1121812660 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m2667338160((KeyValuePair_2_t1121812660 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t1391895324* L_13 = (StringU5BU5D_t1391895324*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1084304205);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1084304205);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m98806085(NULL /*static, unused*/, (StringU5BU5D_t1391895324*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3117697158_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1121812660 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1121812660 *>(__this + 1);
	return KeyValuePair_2_ToString_m3117697158(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2256140473_gshared (KeyValuePair_2_t1228620728 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m4105199558((KeyValuePair_2_t1228620728 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m2002253923((KeyValuePair_2_t1228620728 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2256140473_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1228620728 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1228620728 *>(__this + 1);
	KeyValuePair_2__ctor_m2256140473(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m397622404_gshared (KeyValuePair_2_t1228620728 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m397622404_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1228620728 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1228620728 *>(__this + 1);
	return KeyValuePair_2_get_Key_m397622404(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m4105199558_gshared (KeyValuePair_2_t1228620728 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m4105199558_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1228620728 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1228620728 *>(__this + 1);
	KeyValuePair_2_set_Key_m4105199558(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m373725459_gshared (KeyValuePair_2_t1228620728 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m373725459_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1228620728 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1228620728 *>(__this + 1);
	return KeyValuePair_2_get_Value_m373725459(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2002253923_gshared (KeyValuePair_2_t1228620728 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2002253923_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1228620728 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1228620728 *>(__this + 1);
	KeyValuePair_2_set_Value_m2002253923(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1422349167_gshared (KeyValuePair_2_t1228620728 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1422349167_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1391895324* G_B2_1 = NULL;
	StringU5BU5D_t1391895324* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1391895324* G_B1_1 = NULL;
	StringU5BU5D_t1391895324* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1391895324* G_B3_2 = NULL;
	StringU5BU5D_t1391895324* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1391895324* G_B5_1 = NULL;
	StringU5BU5D_t1391895324* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1391895324* G_B4_1 = NULL;
	StringU5BU5D_t1391895324* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1391895324* G_B6_2 = NULL;
	StringU5BU5D_t1391895324* G_B6_3 = NULL;
	{
		StringU5BU5D_t1391895324* L_0 = (StringU5BU5D_t1391895324*)((StringU5BU5D_t1391895324*)SZArrayNew(StringU5BU5D_t1391895324_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1718293222);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1718293222);
		StringU5BU5D_t1391895324* L_1 = (StringU5BU5D_t1391895324*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m397622404((KeyValuePair_2_t1228620728 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m397622404((KeyValuePair_2_t1228620728 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t1391895324* L_7 = (StringU5BU5D_t1391895324*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral547844225);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral547844225);
		StringU5BU5D_t1391895324* L_8 = (StringU5BU5D_t1391895324*)L_7;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m373725459((KeyValuePair_2_t1228620728 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m373725459((KeyValuePair_2_t1228620728 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t1391895324* L_13 = (StringU5BU5D_t1391895324*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1084304205);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1084304205);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m98806085(NULL /*static, unused*/, (StringU5BU5D_t1391895324*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1422349167_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1228620728 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1228620728 *>(__this + 1);
	return KeyValuePair_2_ToString_m1422349167(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m490498936_gshared (KeyValuePair_2_t2288775618 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m865062003((KeyValuePair_2_t2288775618 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m179804376((KeyValuePair_2_t2288775618 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m490498936_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2288775618 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2288775618 *>(__this + 1);
	KeyValuePair_2__ctor_m490498936(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m3818827795_gshared (KeyValuePair_2_t2288775618 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m3818827795_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2288775618 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2288775618 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3818827795(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m865062003_gshared (KeyValuePair_2_t2288775618 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m865062003_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2288775618 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2288775618 *>(__this + 1);
	KeyValuePair_2_set_Key_m865062003(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3911148313_gshared (KeyValuePair_2_t2288775618 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3911148313_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2288775618 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2288775618 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3911148313(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m179804376_gshared (KeyValuePair_2_t2288775618 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m179804376_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2288775618 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2288775618 *>(__this + 1);
	KeyValuePair_2_set_Value_m179804376(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2934559805_gshared (KeyValuePair_2_t2288775618 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2934559805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1391895324* G_B2_1 = NULL;
	StringU5BU5D_t1391895324* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1391895324* G_B1_1 = NULL;
	StringU5BU5D_t1391895324* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1391895324* G_B3_2 = NULL;
	StringU5BU5D_t1391895324* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1391895324* G_B5_1 = NULL;
	StringU5BU5D_t1391895324* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1391895324* G_B4_1 = NULL;
	StringU5BU5D_t1391895324* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1391895324* G_B6_2 = NULL;
	StringU5BU5D_t1391895324* G_B6_3 = NULL;
	{
		StringU5BU5D_t1391895324* L_0 = (StringU5BU5D_t1391895324*)((StringU5BU5D_t1391895324*)SZArrayNew(StringU5BU5D_t1391895324_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1718293222);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1718293222);
		StringU5BU5D_t1391895324* L_1 = (StringU5BU5D_t1391895324*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m3818827795((KeyValuePair_2_t2288775618 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m3818827795((KeyValuePair_2_t2288775618 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (uint8_t)L_3;
		String_t* L_4 = Byte_ToString_m3666368970((uint8_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t1391895324* L_6 = (StringU5BU5D_t1391895324*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral547844225);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral547844225);
		StringU5BU5D_t1391895324* L_7 = (StringU5BU5D_t1391895324*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m3911148313((KeyValuePair_2_t2288775618 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m3911148313((KeyValuePair_2_t2288775618 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t1391895324* L_12 = (StringU5BU5D_t1391895324*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1084304205);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1084304205);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m98806085(NULL /*static, unused*/, (StringU5BU5D_t1391895324*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2934559805_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2288775618 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2288775618 *>(__this + 1);
	return KeyValuePair_2_ToString_m2934559805(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3805152489_gshared (KeyValuePair_2_t2585388465 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2781145741((KeyValuePair_2_t2585388465 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m2378500345((KeyValuePair_2_t2585388465 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3805152489_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2585388465 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2585388465 *>(__this + 1);
	KeyValuePair_2__ctor_m3805152489(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3257192147_gshared (KeyValuePair_2_t2585388465 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m3257192147_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2585388465 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2585388465 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3257192147(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2781145741_gshared (KeyValuePair_2_t2585388465 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2781145741_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2585388465 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2585388465 *>(__this + 1);
	KeyValuePair_2_set_Key_m2781145741(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m4234854805_gshared (KeyValuePair_2_t2585388465 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m4234854805_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2585388465 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2585388465 *>(__this + 1);
	return KeyValuePair_2_get_Value_m4234854805(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2378500345_gshared (KeyValuePair_2_t2585388465 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2378500345_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2585388465 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2585388465 *>(__this + 1);
	KeyValuePair_2_set_Value_m2378500345(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m353206135_gshared (KeyValuePair_2_t2585388465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m353206135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1391895324* G_B2_1 = NULL;
	StringU5BU5D_t1391895324* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1391895324* G_B1_1 = NULL;
	StringU5BU5D_t1391895324* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1391895324* G_B3_2 = NULL;
	StringU5BU5D_t1391895324* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1391895324* G_B5_1 = NULL;
	StringU5BU5D_t1391895324* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1391895324* G_B4_1 = NULL;
	StringU5BU5D_t1391895324* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1391895324* G_B6_2 = NULL;
	StringU5BU5D_t1391895324* G_B6_3 = NULL;
	{
		StringU5BU5D_t1391895324* L_0 = (StringU5BU5D_t1391895324*)((StringU5BU5D_t1391895324*)SZArrayNew(StringU5BU5D_t1391895324_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1718293222);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1718293222);
		StringU5BU5D_t1391895324* L_1 = (StringU5BU5D_t1391895324*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m3257192147((KeyValuePair_2_t2585388465 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m3257192147((KeyValuePair_2_t2585388465 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m2357385562((int32_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t1391895324* L_6 = (StringU5BU5D_t1391895324*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral547844225);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral547844225);
		StringU5BU5D_t1391895324* L_7 = (StringU5BU5D_t1391895324*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m4234854805((KeyValuePair_2_t2585388465 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m4234854805((KeyValuePair_2_t2585388465 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m2357385562((int32_t*)(&V_1), /*hidden argument*/NULL);
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
		StringU5BU5D_t1391895324* L_12 = (StringU5BU5D_t1391895324*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1084304205);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1084304205);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m98806085(NULL /*static, unused*/, (StringU5BU5D_t1391895324*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m353206135_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2585388465 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2585388465 *>(__this + 1);
	return KeyValuePair_2_ToString_m353206135(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3265422131_gshared (KeyValuePair_2_t1019902582 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2663541262((KeyValuePair_2_t1019902582 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m2741000988((KeyValuePair_2_t1019902582 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3265422131_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1019902582 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1019902582 *>(__this + 1);
	KeyValuePair_2__ctor_m3265422131(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m434230947_gshared (KeyValuePair_2_t1019902582 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m434230947_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1019902582 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1019902582 *>(__this + 1);
	return KeyValuePair_2_get_Key_m434230947(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2663541262_gshared (KeyValuePair_2_t1019902582 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2663541262_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1019902582 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1019902582 *>(__this + 1);
	KeyValuePair_2_set_Key_m2663541262(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m660615700_gshared (KeyValuePair_2_t1019902582 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m660615700_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1019902582 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1019902582 *>(__this + 1);
	return KeyValuePair_2_get_Value_m660615700(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2741000988_gshared (KeyValuePair_2_t1019902582 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2741000988_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1019902582 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1019902582 *>(__this + 1);
	KeyValuePair_2_set_Value_m2741000988(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2034790603_gshared (KeyValuePair_2_t1019902582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2034790603_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1391895324* G_B2_1 = NULL;
	StringU5BU5D_t1391895324* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1391895324* G_B1_1 = NULL;
	StringU5BU5D_t1391895324* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1391895324* G_B3_2 = NULL;
	StringU5BU5D_t1391895324* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1391895324* G_B5_1 = NULL;
	StringU5BU5D_t1391895324* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1391895324* G_B4_1 = NULL;
	StringU5BU5D_t1391895324* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1391895324* G_B6_2 = NULL;
	StringU5BU5D_t1391895324* G_B6_3 = NULL;
	{
		StringU5BU5D_t1391895324* L_0 = (StringU5BU5D_t1391895324*)((StringU5BU5D_t1391895324*)SZArrayNew(StringU5BU5D_t1391895324_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1718293222);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1718293222);
		StringU5BU5D_t1391895324* L_1 = (StringU5BU5D_t1391895324*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m434230947((KeyValuePair_2_t1019902582 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m434230947((KeyValuePair_2_t1019902582 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m2357385562((int32_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t1391895324* L_6 = (StringU5BU5D_t1391895324*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral547844225);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral547844225);
		StringU5BU5D_t1391895324* L_7 = (StringU5BU5D_t1391895324*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m660615700((KeyValuePair_2_t1019902582 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m660615700((KeyValuePair_2_t1019902582 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t1391895324* L_12 = (StringU5BU5D_t1391895324*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1084304205);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1084304205);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m98806085(NULL /*static, unused*/, (StringU5BU5D_t1391895324*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2034790603_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1019902582 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1019902582 *>(__this + 1);
	return KeyValuePair_2_ToString_m2034790603(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3251449738_gshared (KeyValuePair_2_t1458518915 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2546101794((KeyValuePair_2_t1458518915 *)__this, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m1481563428((KeyValuePair_2_t1458518915 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3251449738_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1458518915 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1458518915 *>(__this + 1);
	KeyValuePair_2__ctor_m3251449738(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m3001071307_gshared (KeyValuePair_2_t1458518915 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = (IntPtr_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m3001071307_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1458518915 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1458518915 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3001071307(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2546101794_gshared (KeyValuePair_2_t1458518915 * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2546101794_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1458518915 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1458518915 *>(__this + 1);
	KeyValuePair_2_set_Key_m2546101794(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2078573478_gshared (KeyValuePair_2_t1458518915 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2078573478_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1458518915 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1458518915 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2078573478(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1481563428_gshared (KeyValuePair_2_t1458518915 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1481563428_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1458518915 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1458518915 *>(__this + 1);
	KeyValuePair_2_set_Value_m1481563428(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4271086242_gshared (KeyValuePair_2_t1458518915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m4271086242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1391895324* G_B2_1 = NULL;
	StringU5BU5D_t1391895324* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1391895324* G_B1_1 = NULL;
	StringU5BU5D_t1391895324* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1391895324* G_B3_2 = NULL;
	StringU5BU5D_t1391895324* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1391895324* G_B5_1 = NULL;
	StringU5BU5D_t1391895324* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1391895324* G_B4_1 = NULL;
	StringU5BU5D_t1391895324* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1391895324* G_B6_2 = NULL;
	StringU5BU5D_t1391895324* G_B6_3 = NULL;
	{
		StringU5BU5D_t1391895324* L_0 = (StringU5BU5D_t1391895324*)((StringU5BU5D_t1391895324*)SZArrayNew(StringU5BU5D_t1391895324_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1718293222);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1718293222);
		StringU5BU5D_t1391895324* L_1 = (StringU5BU5D_t1391895324*)L_0;
		IntPtr_t L_2 = KeyValuePair_2_get_Key_m3001071307((KeyValuePair_2_t1458518915 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		IntPtr_t L_3 = KeyValuePair_2_get_Key_m3001071307((KeyValuePair_2_t1458518915 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (IntPtr_t)L_3;
		String_t* L_4 = IntPtr_ToString_m10068873((IntPtr_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t1391895324* L_6 = (StringU5BU5D_t1391895324*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral547844225);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral547844225);
		StringU5BU5D_t1391895324* L_7 = (StringU5BU5D_t1391895324*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m2078573478((KeyValuePair_2_t1458518915 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m2078573478((KeyValuePair_2_t1458518915 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t1391895324* L_12 = (StringU5BU5D_t1391895324*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1084304205);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1084304205);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m98806085(NULL /*static, unused*/, (StringU5BU5D_t1391895324*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m4271086242_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1458518915 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1458518915 *>(__this + 1);
	return KeyValuePair_2_ToString_m4271086242(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m990584525_gshared (KeyValuePair_2_t3658900234 * __this, RuntimeObject * ___key0, DemoData_t861272331  ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m395615963((KeyValuePair_2_t3658900234 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		DemoData_t861272331  L_1 = ___value1;
		KeyValuePair_2_set_Value_m1287179879((KeyValuePair_2_t3658900234 *)__this, (DemoData_t861272331 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m990584525_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, DemoData_t861272331  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3658900234 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3658900234 *>(__this + 1);
	KeyValuePair_2__ctor_m990584525(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3085073101_gshared (KeyValuePair_2_t3658900234 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3085073101_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3658900234 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3658900234 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3085073101(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m395615963_gshared (KeyValuePair_2_t3658900234 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m395615963_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3658900234 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3658900234 *>(__this + 1);
	KeyValuePair_2_set_Key_m395615963(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Value()
extern "C"  DemoData_t861272331  KeyValuePair_2_get_Value_m2637395509_gshared (KeyValuePair_2_t3658900234 * __this, const RuntimeMethod* method)
{
	{
		DemoData_t861272331  L_0 = (DemoData_t861272331 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  DemoData_t861272331  KeyValuePair_2_get_Value_m2637395509_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3658900234 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3658900234 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2637395509(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1287179879_gshared (KeyValuePair_2_t3658900234 * __this, DemoData_t861272331  ___value0, const RuntimeMethod* method)
{
	{
		DemoData_t861272331  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1287179879_AdjustorThunk (RuntimeObject * __this, DemoData_t861272331  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3658900234 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3658900234 *>(__this + 1);
	KeyValuePair_2_set_Value_m1287179879(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1578675595_gshared (KeyValuePair_2_t3658900234 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1578675595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	DemoData_t861272331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1391895324* G_B2_1 = NULL;
	StringU5BU5D_t1391895324* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1391895324* G_B1_1 = NULL;
	StringU5BU5D_t1391895324* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1391895324* G_B3_2 = NULL;
	StringU5BU5D_t1391895324* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1391895324* G_B5_1 = NULL;
	StringU5BU5D_t1391895324* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1391895324* G_B4_1 = NULL;
	StringU5BU5D_t1391895324* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1391895324* G_B6_2 = NULL;
	StringU5BU5D_t1391895324* G_B6_3 = NULL;
	{
		StringU5BU5D_t1391895324* L_0 = (StringU5BU5D_t1391895324*)((StringU5BU5D_t1391895324*)SZArrayNew(StringU5BU5D_t1391895324_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1718293222);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1718293222);
		StringU5BU5D_t1391895324* L_1 = (StringU5BU5D_t1391895324*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m3085073101((KeyValuePair_2_t3658900234 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m3085073101((KeyValuePair_2_t3658900234 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t1391895324* L_6 = (StringU5BU5D_t1391895324*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral547844225);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral547844225);
		StringU5BU5D_t1391895324* L_7 = (StringU5BU5D_t1391895324*)L_6;
		DemoData_t861272331  L_8 = KeyValuePair_2_get_Value_m2637395509((KeyValuePair_2_t3658900234 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		DemoData_t861272331  L_9 = KeyValuePair_2_get_Value_m2637395509((KeyValuePair_2_t3658900234 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (DemoData_t861272331 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(DemoData_t861272331 *)UnBox(L_10);
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
		StringU5BU5D_t1391895324* L_13 = (StringU5BU5D_t1391895324*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1084304205);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1084304205);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m98806085(NULL /*static, unused*/, (StringU5BU5D_t1391895324*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1578675595_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3658900234 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3658900234 *>(__this + 1);
	return KeyValuePair_2_ToString_m1578675595(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
