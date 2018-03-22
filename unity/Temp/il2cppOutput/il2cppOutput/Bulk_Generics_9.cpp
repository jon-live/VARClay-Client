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
struct StringU5BU5D_t3369969234;
// System.Char[]
struct CharU5BU5D_t2065237551;
// System.Void
struct Void_t770153315;

extern RuntimeClass* StringU5BU5D_t3369969234_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4064380180;
extern Il2CppCodeGenString* _stringLiteral1326029236;
extern Il2CppCodeGenString* _stringLiteral2392581203;
extern const uint32_t KeyValuePair_2_ToString_m1863714308_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3507392450_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2700305256_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m762419647_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m601601969_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1080750377_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2148250174_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3612420148_MetadataUsageId;

struct StringU5BU5D_t3369969234;


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
	CharU5BU5D_t2065237551* ___WhiteChars_3;

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
	inline CharU5BU5D_t2065237551* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t2065237551** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t2065237551* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3506966945_H
#define VALUETYPE_T3506966945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3506966945  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3506966945_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3506966945_marshaled_com
{
};
#endif // VALUETYPE_T3506966945_H
#ifndef DEMODATA_T189062580_H
#define DEMODATA_T189062580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoHubManager/DemoData
struct  DemoData_t189062580 
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
	inline static int32_t get_offset_of_Title_0() { return static_cast<int32_t>(offsetof(DemoData_t189062580, ___Title_0)); }
	inline String_t* get_Title_0() const { return ___Title_0; }
	inline String_t** get_address_of_Title_0() { return &___Title_0; }
	inline void set_Title_0(String_t* value)
	{
		___Title_0 = value;
		Il2CppCodeGenWriteBarrier((&___Title_0), value);
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(DemoData_t189062580, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier((&___Description_1), value);
	}

	inline static int32_t get_offset_of_Scene_2() { return static_cast<int32_t>(offsetof(DemoData_t189062580, ___Scene_2)); }
	inline String_t* get_Scene_2() const { return ___Scene_2; }
	inline String_t** get_address_of_Scene_2() { return &___Scene_2; }
	inline void set_Scene_2(String_t* value)
	{
		___Scene_2 = value;
		Il2CppCodeGenWriteBarrier((&___Scene_2), value);
	}

	inline static int32_t get_offset_of_TutorialLink_3() { return static_cast<int32_t>(offsetof(DemoData_t189062580, ___TutorialLink_3)); }
	inline String_t* get_TutorialLink_3() const { return ___TutorialLink_3; }
	inline String_t** get_address_of_TutorialLink_3() { return &___TutorialLink_3; }
	inline void set_TutorialLink_3(String_t* value)
	{
		___TutorialLink_3 = value;
		Il2CppCodeGenWriteBarrier((&___TutorialLink_3), value);
	}

	inline static int32_t get_offset_of_DocLink_4() { return static_cast<int32_t>(offsetof(DemoData_t189062580, ___DocLink_4)); }
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
struct DemoData_t189062580_marshaled_pinvoke
{
	char* ___Title_0;
	char* ___Description_1;
	char* ___Scene_2;
	char* ___TutorialLink_3;
	char* ___DocLink_4;
};
// Native definition for COM marshalling of ExitGames.Demos.DemoHubManager/DemoData
struct DemoData_t189062580_marshaled_com
{
	Il2CppChar* ___Title_0;
	Il2CppChar* ___Description_1;
	Il2CppChar* ___Scene_2;
	Il2CppChar* ___TutorialLink_3;
	Il2CppChar* ___DocLink_4;
};
#endif // DEMODATA_T189062580_H
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
#ifndef KEYVALUEPAIR_2_T3729837102_H
#define KEYVALUEPAIR_2_T3729837102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t3729837102 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3729837102, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3729837102, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T3729837102_H
#ifndef KEYVALUEPAIR_2_T3692713747_H
#define KEYVALUEPAIR_2_T3692713747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct  KeyValuePair_2_t3692713747 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3692713747, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3692713747, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T3692713747_H
#ifndef BYTE_T1156392443_H
#define BYTE_T1156392443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1156392443 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1156392443, ___m_value_2)); }
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
#endif // BYTE_T1156392443_H
#ifndef KEYVALUEPAIR_2_T3067040452_H
#define KEYVALUEPAIR_2_T3067040452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
struct  KeyValuePair_2_t3067040452 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3067040452, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3067040452, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T3067040452_H
#ifndef ENUM_T1406557854_H
#define ENUM_T1406557854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1406557854  : public ValueType_t3506966945
{
public:

public:
};

struct Enum_t1406557854_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2065237551* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1406557854_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2065237551* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2065237551** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2065237551* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1406557854_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1406557854_marshaled_com
{
};
#endif // ENUM_T1406557854_H
#ifndef INT32_T2096446809_H
#define INT32_T2096446809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2096446809 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2096446809, ___m_value_2)); }
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
#endif // INT32_T2096446809_H
#ifndef VOID_T770153315_H
#define VOID_T770153315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t770153315 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T770153315_H
#ifndef KEYVALUEPAIR_2_T4198510004_H
#define KEYVALUEPAIR_2_T4198510004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t4198510004 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	IntPtr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4198510004, ___key_0)); }
	inline IntPtr_t get_key_0() const { return ___key_0; }
	inline IntPtr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(IntPtr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4198510004, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T4198510004_H
#ifndef CONNECTIONPROTOCOL_T163747280_H
#define CONNECTIONPROTOCOL_T163747280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t163747280 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t163747280, ___value___1)); }
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
#endif // CONNECTIONPROTOCOL_T163747280_H
#ifndef KEYVALUEPAIR_2_T360266631_H
#define KEYVALUEPAIR_2_T360266631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>
struct  KeyValuePair_2_t360266631 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	DemoData_t189062580  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t360266631, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t360266631, ___value_1)); }
	inline DemoData_t189062580  get_value_1() const { return ___value_1; }
	inline DemoData_t189062580 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(DemoData_t189062580  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T360266631_H
#ifndef TEAM_T3971903905_H
#define TEAM_T3971903905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PunTeams/Team
struct  Team_t3971903905 
{
public:
	// System.Byte PunTeams/Team::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Team_t3971903905, ___value___1)); }
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
#endif // TEAM_T3971903905_H
#ifndef KEYVALUEPAIR_2_T2888615931_H
#define KEYVALUEPAIR_2_T2888615931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>
struct  KeyValuePair_2_t2888615931 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2888615931, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2888615931, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2888615931_H
#ifndef KEYVALUEPAIR_2_T2851492576_H
#define KEYVALUEPAIR_2_T2851492576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct  KeyValuePair_2_t2851492576 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2851492576, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2851492576, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2851492576_H
#ifndef KEYVALUEPAIR_2_T3235255750_H
#define KEYVALUEPAIR_2_T3235255750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>
struct  KeyValuePair_2_t3235255750 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3235255750, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3235255750, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T3235255750_H
// System.String[]
struct StringU5BU5D_t3369969234  : public RuntimeArray
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
extern "C"  void KeyValuePair_2_set_Key_m3621854734_gshared (KeyValuePair_2_t2851492576 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m178907278_gshared (KeyValuePair_2_t2851492576 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m256561835_gshared (KeyValuePair_2_t2851492576 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m3812313150_gshared (KeyValuePair_2_t2851492576 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1288221028_gshared (KeyValuePair_2_t2851492576 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1863714308_gshared (KeyValuePair_2_t2851492576 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1750794699_gshared (KeyValuePair_2_t2888615931 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3978870060_gshared (KeyValuePair_2_t2888615931 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2886431516_gshared (KeyValuePair_2_t2888615931 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m2636893649_gshared (KeyValuePair_2_t2888615931 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4128376150_gshared (KeyValuePair_2_t2888615931 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3507392450_gshared (KeyValuePair_2_t2888615931 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1063922660_gshared (KeyValuePair_2_t3235255750 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2569365550_gshared (KeyValuePair_2_t3235255750 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1882212083_gshared (KeyValuePair_2_t3235255750 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m869042422_gshared (KeyValuePair_2_t3235255750 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m150007309_gshared (KeyValuePair_2_t3235255750 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2700305256_gshared (KeyValuePair_2_t3235255750 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m814752341_gshared (KeyValuePair_2_t3067040452 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1371436796_gshared (KeyValuePair_2_t3067040452 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4175991303_gshared (KeyValuePair_2_t3067040452 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m1234713013_gshared (KeyValuePair_2_t3067040452 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m583101316_gshared (KeyValuePair_2_t3067040452 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m762419647_gshared (KeyValuePair_2_t3067040452 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2255205875_gshared (KeyValuePair_2_t3692713747 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3628881204_gshared (KeyValuePair_2_t3692713747 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3485346629_gshared (KeyValuePair_2_t3692713747 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1027497750_gshared (KeyValuePair_2_t3692713747 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m2360245021_gshared (KeyValuePair_2_t3692713747 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m601601969_gshared (KeyValuePair_2_t3692713747 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m294476482_gshared (KeyValuePair_2_t3729837102 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m302623838_gshared (KeyValuePair_2_t3729837102 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1375844974_gshared (KeyValuePair_2_t3729837102 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m4229527567_gshared (KeyValuePair_2_t3729837102 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1810103336_gshared (KeyValuePair_2_t3729837102 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1080750377_gshared (KeyValuePair_2_t3729837102 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2541251318_gshared (KeyValuePair_2_t4198510004 * __this, IntPtr_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3187572754_gshared (KeyValuePair_2_t4198510004 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3387898066_gshared (KeyValuePair_2_t4198510004 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m1605854077_gshared (KeyValuePair_2_t4198510004 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2322628427_gshared (KeyValuePair_2_t4198510004 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2148250174_gshared (KeyValuePair_2_t4198510004 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m933296819_gshared (KeyValuePair_2_t360266631 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3748225726_gshared (KeyValuePair_2_t360266631 * __this, DemoData_t189062580  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m770002541_gshared (KeyValuePair_2_t360266631 * __this, RuntimeObject * ___key0, DemoData_t189062580  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m641913205_gshared (KeyValuePair_2_t360266631 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Value()
extern "C"  DemoData_t189062580  KeyValuePair_2_get_Value_m1222446465_gshared (KeyValuePair_2_t360266631 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3612420148_gshared (KeyValuePair_2_t360266631 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3621854734(__this, p0, method) ((  void (*) (KeyValuePair_2_t2851492576 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3621854734_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m178907278(__this, p0, method) ((  void (*) (KeyValuePair_2_t2851492576 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m178907278_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m256561835(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2851492576 *, uint8_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m256561835_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m3812313150(__this, method) ((  uint8_t (*) (KeyValuePair_2_t2851492576 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3812313150_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m1288221028(__this, method) ((  int32_t (*) (KeyValuePair_2_t2851492576 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1288221028_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m424341400 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m2436525083 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t3369969234* ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m1863714308(__this, method) ((  String_t* (*) (KeyValuePair_2_t2851492576 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1863714308_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1750794699(__this, p0, method) ((  void (*) (KeyValuePair_2_t2888615931 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1750794699_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3978870060(__this, p0, method) ((  void (*) (KeyValuePair_2_t2888615931 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m3978870060_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2886431516(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2888615931 *, uint8_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m2886431516_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2636893649(__this, method) ((  uint8_t (*) (KeyValuePair_2_t2888615931 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2636893649_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m4128376150(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2888615931 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m4128376150_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::ToString()
#define KeyValuePair_2_ToString_m3507392450(__this, method) ((  String_t* (*) (KeyValuePair_2_t2888615931 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3507392450_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1063922660(__this, p0, method) ((  void (*) (KeyValuePair_2_t3235255750 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1063922660_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2569365550(__this, p0, method) ((  void (*) (KeyValuePair_2_t3235255750 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m2569365550_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1882212083(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3235255750 *, uint8_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m1882212083_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m869042422(__this, method) ((  uint8_t (*) (KeyValuePair_2_t3235255750 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m869042422_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m150007309(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3235255750 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m150007309_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2700305256(__this, method) ((  String_t* (*) (KeyValuePair_2_t3235255750 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2700305256_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m814752341(__this, p0, method) ((  void (*) (KeyValuePair_2_t3067040452 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m814752341_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1371436796(__this, p0, method) ((  void (*) (KeyValuePair_2_t3067040452 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m1371436796_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m4175991303(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3067040452 *, uint8_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m4175991303_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1234713013(__this, method) ((  uint8_t (*) (KeyValuePair_2_t3067040452 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1234713013_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m583101316(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3067040452 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m583101316_gshared)(__this, method)
// System.String System.Byte::ToString()
extern "C"  String_t* Byte_ToString_m591517740 (uint8_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::ToString()
#define KeyValuePair_2_ToString_m762419647(__this, method) ((  String_t* (*) (KeyValuePair_2_t3067040452 *, const RuntimeMethod*))KeyValuePair_2_ToString_m762419647_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2255205875(__this, p0, method) ((  void (*) (KeyValuePair_2_t3692713747 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2255205875_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3628881204(__this, p0, method) ((  void (*) (KeyValuePair_2_t3692713747 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m3628881204_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3485346629(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3692713747 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m3485346629_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m1027497750(__this, method) ((  int32_t (*) (KeyValuePair_2_t3692713747 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1027497750_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m2360245021(__this, method) ((  int32_t (*) (KeyValuePair_2_t3692713747 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2360245021_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m601601969(__this, method) ((  String_t* (*) (KeyValuePair_2_t3692713747 *, const RuntimeMethod*))KeyValuePair_2_ToString_m601601969_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m294476482(__this, p0, method) ((  void (*) (KeyValuePair_2_t3729837102 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m294476482_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m302623838(__this, p0, method) ((  void (*) (KeyValuePair_2_t3729837102 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m302623838_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1375844974(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3729837102 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m1375844974_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m4229527567(__this, method) ((  int32_t (*) (KeyValuePair_2_t3729837102 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4229527567_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m1810103336(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3729837102 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1810103336_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1080750377(__this, method) ((  String_t* (*) (KeyValuePair_2_t3729837102 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1080750377_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2541251318(__this, p0, method) ((  void (*) (KeyValuePair_2_t4198510004 *, IntPtr_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2541251318_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3187572754(__this, p0, method) ((  void (*) (KeyValuePair_2_t4198510004 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m3187572754_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3387898066(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t4198510004 *, IntPtr_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m3387898066_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1605854077(__this, method) ((  IntPtr_t (*) (KeyValuePair_2_t4198510004 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1605854077_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2322628427(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t4198510004 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2322628427_gshared)(__this, method)
// System.String System.IntPtr::ToString()
extern "C"  String_t* IntPtr_ToString_m3650725971 (IntPtr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2148250174(__this, method) ((  String_t* (*) (KeyValuePair_2_t4198510004 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2148250174_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m933296819(__this, p0, method) ((  void (*) (KeyValuePair_2_t360266631 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m933296819_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3748225726(__this, p0, method) ((  void (*) (KeyValuePair_2_t360266631 *, DemoData_t189062580 , const RuntimeMethod*))KeyValuePair_2_set_Value_m3748225726_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m770002541(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t360266631 *, RuntimeObject *, DemoData_t189062580 , const RuntimeMethod*))KeyValuePair_2__ctor_m770002541_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Key()
#define KeyValuePair_2_get_Key_m641913205(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t360266631 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m641913205_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Value()
#define KeyValuePair_2_get_Value_m1222446465(__this, method) ((  DemoData_t189062580  (*) (KeyValuePair_2_t360266631 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1222446465_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::ToString()
#define KeyValuePair_2_ToString_m3612420148(__this, method) ((  String_t* (*) (KeyValuePair_2_t360266631 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3612420148_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m256561835_gshared (KeyValuePair_2_t2851492576 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3621854734((KeyValuePair_2_t2851492576 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m178907278((KeyValuePair_2_t2851492576 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m256561835_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2851492576 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2851492576 *>(__this + 1);
	KeyValuePair_2__ctor_m256561835(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m3812313150_gshared (KeyValuePair_2_t2851492576 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m3812313150_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2851492576 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2851492576 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3812313150(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3621854734_gshared (KeyValuePair_2_t2851492576 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3621854734_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2851492576 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2851492576 *>(__this + 1);
	KeyValuePair_2_set_Key_m3621854734(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1288221028_gshared (KeyValuePair_2_t2851492576 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m1288221028_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2851492576 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2851492576 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1288221028(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m178907278_gshared (KeyValuePair_2_t2851492576 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m178907278_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2851492576 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2851492576 *>(__this + 1);
	KeyValuePair_2_set_Value_m178907278(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1863714308_gshared (KeyValuePair_2_t2851492576 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1863714308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3369969234* G_B2_1 = NULL;
	StringU5BU5D_t3369969234* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3369969234* G_B1_1 = NULL;
	StringU5BU5D_t3369969234* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3369969234* G_B3_2 = NULL;
	StringU5BU5D_t3369969234* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3369969234* G_B5_1 = NULL;
	StringU5BU5D_t3369969234* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3369969234* G_B4_1 = NULL;
	StringU5BU5D_t3369969234* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3369969234* G_B6_2 = NULL;
	StringU5BU5D_t3369969234* G_B6_3 = NULL;
	{
		StringU5BU5D_t3369969234* L_0 = (StringU5BU5D_t3369969234*)((StringU5BU5D_t3369969234*)SZArrayNew(StringU5BU5D_t3369969234_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4064380180);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4064380180);
		StringU5BU5D_t3369969234* L_1 = (StringU5BU5D_t3369969234*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m3812313150((KeyValuePair_2_t2851492576 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m3812313150((KeyValuePair_2_t2851492576 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t3369969234* L_7 = (StringU5BU5D_t3369969234*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral1326029236);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1326029236);
		StringU5BU5D_t3369969234* L_8 = (StringU5BU5D_t3369969234*)L_7;
		int32_t L_9 = KeyValuePair_2_get_Value_m1288221028((KeyValuePair_2_t2851492576 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
	}
	{
		int32_t L_10 = KeyValuePair_2_get_Value_m1288221028((KeyValuePair_2_t2851492576 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_10;
		String_t* L_11 = Int32_ToString_m424341400((int32_t*)(&V_1), /*hidden argument*/NULL);
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
		StringU5BU5D_t3369969234* L_13 = (StringU5BU5D_t3369969234*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral2392581203);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2392581203);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m2436525083(NULL /*static, unused*/, (StringU5BU5D_t3369969234*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1863714308_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2851492576 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2851492576 *>(__this + 1);
	return KeyValuePair_2_ToString_m1863714308(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2886431516_gshared (KeyValuePair_2_t2888615931 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1750794699((KeyValuePair_2_t2888615931 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m3978870060((KeyValuePair_2_t2888615931 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2886431516_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2888615931 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2888615931 *>(__this + 1);
	KeyValuePair_2__ctor_m2886431516(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m2636893649_gshared (KeyValuePair_2_t2888615931 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m2636893649_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2888615931 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2888615931 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2636893649(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1750794699_gshared (KeyValuePair_2_t2888615931 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1750794699_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2888615931 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2888615931 *>(__this + 1);
	KeyValuePair_2_set_Key_m1750794699(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4128376150_gshared (KeyValuePair_2_t2888615931 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4128376150_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2888615931 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2888615931 *>(__this + 1);
	return KeyValuePair_2_get_Value_m4128376150(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3978870060_gshared (KeyValuePair_2_t2888615931 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3978870060_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2888615931 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2888615931 *>(__this + 1);
	KeyValuePair_2_set_Value_m3978870060(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3507392450_gshared (KeyValuePair_2_t2888615931 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3507392450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3369969234* G_B2_1 = NULL;
	StringU5BU5D_t3369969234* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3369969234* G_B1_1 = NULL;
	StringU5BU5D_t3369969234* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3369969234* G_B3_2 = NULL;
	StringU5BU5D_t3369969234* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3369969234* G_B5_1 = NULL;
	StringU5BU5D_t3369969234* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3369969234* G_B4_1 = NULL;
	StringU5BU5D_t3369969234* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3369969234* G_B6_2 = NULL;
	StringU5BU5D_t3369969234* G_B6_3 = NULL;
	{
		StringU5BU5D_t3369969234* L_0 = (StringU5BU5D_t3369969234*)((StringU5BU5D_t3369969234*)SZArrayNew(StringU5BU5D_t3369969234_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4064380180);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4064380180);
		StringU5BU5D_t3369969234* L_1 = (StringU5BU5D_t3369969234*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m2636893649((KeyValuePair_2_t2888615931 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m2636893649((KeyValuePair_2_t2888615931 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t3369969234* L_7 = (StringU5BU5D_t3369969234*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral1326029236);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1326029236);
		StringU5BU5D_t3369969234* L_8 = (StringU5BU5D_t3369969234*)L_7;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m4128376150((KeyValuePair_2_t2888615931 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m4128376150((KeyValuePair_2_t2888615931 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t3369969234* L_13 = (StringU5BU5D_t3369969234*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral2392581203);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2392581203);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m2436525083(NULL /*static, unused*/, (StringU5BU5D_t3369969234*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3507392450_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2888615931 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2888615931 *>(__this + 1);
	return KeyValuePair_2_ToString_m3507392450(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1882212083_gshared (KeyValuePair_2_t3235255750 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1063922660((KeyValuePair_2_t3235255750 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m2569365550((KeyValuePair_2_t3235255750 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1882212083_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3235255750 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3235255750 *>(__this + 1);
	KeyValuePair_2__ctor_m1882212083(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m869042422_gshared (KeyValuePair_2_t3235255750 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m869042422_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3235255750 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3235255750 *>(__this + 1);
	return KeyValuePair_2_get_Key_m869042422(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1063922660_gshared (KeyValuePair_2_t3235255750 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1063922660_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3235255750 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3235255750 *>(__this + 1);
	KeyValuePair_2_set_Key_m1063922660(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m150007309_gshared (KeyValuePair_2_t3235255750 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m150007309_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3235255750 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3235255750 *>(__this + 1);
	return KeyValuePair_2_get_Value_m150007309(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2569365550_gshared (KeyValuePair_2_t3235255750 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2569365550_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3235255750 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3235255750 *>(__this + 1);
	KeyValuePair_2_set_Value_m2569365550(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2700305256_gshared (KeyValuePair_2_t3235255750 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2700305256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3369969234* G_B2_1 = NULL;
	StringU5BU5D_t3369969234* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3369969234* G_B1_1 = NULL;
	StringU5BU5D_t3369969234* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3369969234* G_B3_2 = NULL;
	StringU5BU5D_t3369969234* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3369969234* G_B5_1 = NULL;
	StringU5BU5D_t3369969234* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3369969234* G_B4_1 = NULL;
	StringU5BU5D_t3369969234* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3369969234* G_B6_2 = NULL;
	StringU5BU5D_t3369969234* G_B6_3 = NULL;
	{
		StringU5BU5D_t3369969234* L_0 = (StringU5BU5D_t3369969234*)((StringU5BU5D_t3369969234*)SZArrayNew(StringU5BU5D_t3369969234_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4064380180);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4064380180);
		StringU5BU5D_t3369969234* L_1 = (StringU5BU5D_t3369969234*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m869042422((KeyValuePair_2_t3235255750 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m869042422((KeyValuePair_2_t3235255750 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t3369969234* L_7 = (StringU5BU5D_t3369969234*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral1326029236);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1326029236);
		StringU5BU5D_t3369969234* L_8 = (StringU5BU5D_t3369969234*)L_7;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m150007309((KeyValuePair_2_t3235255750 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m150007309((KeyValuePair_2_t3235255750 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t3369969234* L_13 = (StringU5BU5D_t3369969234*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral2392581203);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2392581203);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m2436525083(NULL /*static, unused*/, (StringU5BU5D_t3369969234*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2700305256_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3235255750 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3235255750 *>(__this + 1);
	return KeyValuePair_2_ToString_m2700305256(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4175991303_gshared (KeyValuePair_2_t3067040452 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m814752341((KeyValuePair_2_t3067040452 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m1371436796((KeyValuePair_2_t3067040452 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m4175991303_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3067040452 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3067040452 *>(__this + 1);
	KeyValuePair_2__ctor_m4175991303(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m1234713013_gshared (KeyValuePair_2_t3067040452 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m1234713013_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3067040452 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3067040452 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1234713013(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m814752341_gshared (KeyValuePair_2_t3067040452 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m814752341_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3067040452 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3067040452 *>(__this + 1);
	KeyValuePair_2_set_Key_m814752341(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m583101316_gshared (KeyValuePair_2_t3067040452 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m583101316_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3067040452 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3067040452 *>(__this + 1);
	return KeyValuePair_2_get_Value_m583101316(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1371436796_gshared (KeyValuePair_2_t3067040452 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1371436796_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3067040452 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3067040452 *>(__this + 1);
	KeyValuePair_2_set_Value_m1371436796(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m762419647_gshared (KeyValuePair_2_t3067040452 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m762419647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3369969234* G_B2_1 = NULL;
	StringU5BU5D_t3369969234* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3369969234* G_B1_1 = NULL;
	StringU5BU5D_t3369969234* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3369969234* G_B3_2 = NULL;
	StringU5BU5D_t3369969234* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3369969234* G_B5_1 = NULL;
	StringU5BU5D_t3369969234* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3369969234* G_B4_1 = NULL;
	StringU5BU5D_t3369969234* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3369969234* G_B6_2 = NULL;
	StringU5BU5D_t3369969234* G_B6_3 = NULL;
	{
		StringU5BU5D_t3369969234* L_0 = (StringU5BU5D_t3369969234*)((StringU5BU5D_t3369969234*)SZArrayNew(StringU5BU5D_t3369969234_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4064380180);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4064380180);
		StringU5BU5D_t3369969234* L_1 = (StringU5BU5D_t3369969234*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m1234713013((KeyValuePair_2_t3067040452 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m1234713013((KeyValuePair_2_t3067040452 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (uint8_t)L_3;
		String_t* L_4 = Byte_ToString_m591517740((uint8_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t3369969234* L_6 = (StringU5BU5D_t3369969234*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1326029236);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1326029236);
		StringU5BU5D_t3369969234* L_7 = (StringU5BU5D_t3369969234*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m583101316((KeyValuePair_2_t3067040452 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m583101316((KeyValuePair_2_t3067040452 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t3369969234* L_12 = (StringU5BU5D_t3369969234*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2392581203);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2392581203);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2436525083(NULL /*static, unused*/, (StringU5BU5D_t3369969234*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m762419647_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3067040452 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3067040452 *>(__this + 1);
	return KeyValuePair_2_ToString_m762419647(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3485346629_gshared (KeyValuePair_2_t3692713747 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2255205875((KeyValuePair_2_t3692713747 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m3628881204((KeyValuePair_2_t3692713747 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3485346629_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3692713747 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3692713747 *>(__this + 1);
	KeyValuePair_2__ctor_m3485346629(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1027497750_gshared (KeyValuePair_2_t3692713747 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1027497750_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3692713747 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3692713747 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1027497750(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2255205875_gshared (KeyValuePair_2_t3692713747 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2255205875_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3692713747 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3692713747 *>(__this + 1);
	KeyValuePair_2_set_Key_m2255205875(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m2360245021_gshared (KeyValuePair_2_t3692713747 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m2360245021_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3692713747 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3692713747 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2360245021(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3628881204_gshared (KeyValuePair_2_t3692713747 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3628881204_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3692713747 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3692713747 *>(__this + 1);
	KeyValuePair_2_set_Value_m3628881204(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m601601969_gshared (KeyValuePair_2_t3692713747 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m601601969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3369969234* G_B2_1 = NULL;
	StringU5BU5D_t3369969234* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3369969234* G_B1_1 = NULL;
	StringU5BU5D_t3369969234* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3369969234* G_B3_2 = NULL;
	StringU5BU5D_t3369969234* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3369969234* G_B5_1 = NULL;
	StringU5BU5D_t3369969234* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3369969234* G_B4_1 = NULL;
	StringU5BU5D_t3369969234* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3369969234* G_B6_2 = NULL;
	StringU5BU5D_t3369969234* G_B6_3 = NULL;
	{
		StringU5BU5D_t3369969234* L_0 = (StringU5BU5D_t3369969234*)((StringU5BU5D_t3369969234*)SZArrayNew(StringU5BU5D_t3369969234_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4064380180);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4064380180);
		StringU5BU5D_t3369969234* L_1 = (StringU5BU5D_t3369969234*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1027497750((KeyValuePair_2_t3692713747 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1027497750((KeyValuePair_2_t3692713747 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m424341400((int32_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t3369969234* L_6 = (StringU5BU5D_t3369969234*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1326029236);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1326029236);
		StringU5BU5D_t3369969234* L_7 = (StringU5BU5D_t3369969234*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m2360245021((KeyValuePair_2_t3692713747 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m2360245021((KeyValuePair_2_t3692713747 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m424341400((int32_t*)(&V_1), /*hidden argument*/NULL);
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
		StringU5BU5D_t3369969234* L_12 = (StringU5BU5D_t3369969234*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2392581203);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2392581203);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2436525083(NULL /*static, unused*/, (StringU5BU5D_t3369969234*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m601601969_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3692713747 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3692713747 *>(__this + 1);
	return KeyValuePair_2_ToString_m601601969(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1375844974_gshared (KeyValuePair_2_t3729837102 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m294476482((KeyValuePair_2_t3729837102 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m302623838((KeyValuePair_2_t3729837102 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1375844974_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3729837102 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3729837102 *>(__this + 1);
	KeyValuePair_2__ctor_m1375844974(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m4229527567_gshared (KeyValuePair_2_t3729837102 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m4229527567_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3729837102 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3729837102 *>(__this + 1);
	return KeyValuePair_2_get_Key_m4229527567(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m294476482_gshared (KeyValuePair_2_t3729837102 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m294476482_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3729837102 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3729837102 *>(__this + 1);
	KeyValuePair_2_set_Key_m294476482(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1810103336_gshared (KeyValuePair_2_t3729837102 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1810103336_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3729837102 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3729837102 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1810103336(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m302623838_gshared (KeyValuePair_2_t3729837102 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m302623838_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3729837102 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3729837102 *>(__this + 1);
	KeyValuePair_2_set_Value_m302623838(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1080750377_gshared (KeyValuePair_2_t3729837102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1080750377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3369969234* G_B2_1 = NULL;
	StringU5BU5D_t3369969234* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3369969234* G_B1_1 = NULL;
	StringU5BU5D_t3369969234* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3369969234* G_B3_2 = NULL;
	StringU5BU5D_t3369969234* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3369969234* G_B5_1 = NULL;
	StringU5BU5D_t3369969234* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3369969234* G_B4_1 = NULL;
	StringU5BU5D_t3369969234* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3369969234* G_B6_2 = NULL;
	StringU5BU5D_t3369969234* G_B6_3 = NULL;
	{
		StringU5BU5D_t3369969234* L_0 = (StringU5BU5D_t3369969234*)((StringU5BU5D_t3369969234*)SZArrayNew(StringU5BU5D_t3369969234_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4064380180);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4064380180);
		StringU5BU5D_t3369969234* L_1 = (StringU5BU5D_t3369969234*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m4229527567((KeyValuePair_2_t3729837102 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m4229527567((KeyValuePair_2_t3729837102 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m424341400((int32_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t3369969234* L_6 = (StringU5BU5D_t3369969234*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1326029236);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1326029236);
		StringU5BU5D_t3369969234* L_7 = (StringU5BU5D_t3369969234*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m1810103336((KeyValuePair_2_t3729837102 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m1810103336((KeyValuePair_2_t3729837102 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t3369969234* L_12 = (StringU5BU5D_t3369969234*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2392581203);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2392581203);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2436525083(NULL /*static, unused*/, (StringU5BU5D_t3369969234*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1080750377_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3729837102 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3729837102 *>(__this + 1);
	return KeyValuePair_2_ToString_m1080750377(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3387898066_gshared (KeyValuePair_2_t4198510004 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2541251318((KeyValuePair_2_t4198510004 *)__this, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m3187572754((KeyValuePair_2_t4198510004 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3387898066_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t4198510004 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4198510004 *>(__this + 1);
	KeyValuePair_2__ctor_m3387898066(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m1605854077_gshared (KeyValuePair_2_t4198510004 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = (IntPtr_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m1605854077_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4198510004 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4198510004 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1605854077(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2541251318_gshared (KeyValuePair_2_t4198510004 * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2541251318_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t4198510004 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4198510004 *>(__this + 1);
	KeyValuePair_2_set_Key_m2541251318(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2322628427_gshared (KeyValuePair_2_t4198510004 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2322628427_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4198510004 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4198510004 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2322628427(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3187572754_gshared (KeyValuePair_2_t4198510004 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3187572754_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t4198510004 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4198510004 *>(__this + 1);
	KeyValuePair_2_set_Value_m3187572754(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2148250174_gshared (KeyValuePair_2_t4198510004 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2148250174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3369969234* G_B2_1 = NULL;
	StringU5BU5D_t3369969234* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3369969234* G_B1_1 = NULL;
	StringU5BU5D_t3369969234* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3369969234* G_B3_2 = NULL;
	StringU5BU5D_t3369969234* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3369969234* G_B5_1 = NULL;
	StringU5BU5D_t3369969234* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3369969234* G_B4_1 = NULL;
	StringU5BU5D_t3369969234* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3369969234* G_B6_2 = NULL;
	StringU5BU5D_t3369969234* G_B6_3 = NULL;
	{
		StringU5BU5D_t3369969234* L_0 = (StringU5BU5D_t3369969234*)((StringU5BU5D_t3369969234*)SZArrayNew(StringU5BU5D_t3369969234_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4064380180);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4064380180);
		StringU5BU5D_t3369969234* L_1 = (StringU5BU5D_t3369969234*)L_0;
		IntPtr_t L_2 = KeyValuePair_2_get_Key_m1605854077((KeyValuePair_2_t4198510004 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		IntPtr_t L_3 = KeyValuePair_2_get_Key_m1605854077((KeyValuePair_2_t4198510004 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (IntPtr_t)L_3;
		String_t* L_4 = IntPtr_ToString_m3650725971((IntPtr_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t3369969234* L_6 = (StringU5BU5D_t3369969234*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1326029236);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1326029236);
		StringU5BU5D_t3369969234* L_7 = (StringU5BU5D_t3369969234*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m2322628427((KeyValuePair_2_t4198510004 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m2322628427((KeyValuePair_2_t4198510004 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t3369969234* L_12 = (StringU5BU5D_t3369969234*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2392581203);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2392581203);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2436525083(NULL /*static, unused*/, (StringU5BU5D_t3369969234*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2148250174_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4198510004 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4198510004 *>(__this + 1);
	return KeyValuePair_2_ToString_m2148250174(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m770002541_gshared (KeyValuePair_2_t360266631 * __this, RuntimeObject * ___key0, DemoData_t189062580  ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m933296819((KeyValuePair_2_t360266631 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		DemoData_t189062580  L_1 = ___value1;
		KeyValuePair_2_set_Value_m3748225726((KeyValuePair_2_t360266631 *)__this, (DemoData_t189062580 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m770002541_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, DemoData_t189062580  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t360266631 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t360266631 *>(__this + 1);
	KeyValuePair_2__ctor_m770002541(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m641913205_gshared (KeyValuePair_2_t360266631 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m641913205_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t360266631 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t360266631 *>(__this + 1);
	return KeyValuePair_2_get_Key_m641913205(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m933296819_gshared (KeyValuePair_2_t360266631 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m933296819_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t360266631 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t360266631 *>(__this + 1);
	KeyValuePair_2_set_Key_m933296819(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Value()
extern "C"  DemoData_t189062580  KeyValuePair_2_get_Value_m1222446465_gshared (KeyValuePair_2_t360266631 * __this, const RuntimeMethod* method)
{
	{
		DemoData_t189062580  L_0 = (DemoData_t189062580 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  DemoData_t189062580  KeyValuePair_2_get_Value_m1222446465_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t360266631 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t360266631 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1222446465(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3748225726_gshared (KeyValuePair_2_t360266631 * __this, DemoData_t189062580  ___value0, const RuntimeMethod* method)
{
	{
		DemoData_t189062580  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3748225726_AdjustorThunk (RuntimeObject * __this, DemoData_t189062580  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t360266631 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t360266631 *>(__this + 1);
	KeyValuePair_2_set_Value_m3748225726(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3612420148_gshared (KeyValuePair_2_t360266631 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3612420148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	DemoData_t189062580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t3369969234* G_B2_1 = NULL;
	StringU5BU5D_t3369969234* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t3369969234* G_B1_1 = NULL;
	StringU5BU5D_t3369969234* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t3369969234* G_B3_2 = NULL;
	StringU5BU5D_t3369969234* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t3369969234* G_B5_1 = NULL;
	StringU5BU5D_t3369969234* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t3369969234* G_B4_1 = NULL;
	StringU5BU5D_t3369969234* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t3369969234* G_B6_2 = NULL;
	StringU5BU5D_t3369969234* G_B6_3 = NULL;
	{
		StringU5BU5D_t3369969234* L_0 = (StringU5BU5D_t3369969234*)((StringU5BU5D_t3369969234*)SZArrayNew(StringU5BU5D_t3369969234_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4064380180);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4064380180);
		StringU5BU5D_t3369969234* L_1 = (StringU5BU5D_t3369969234*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m641913205((KeyValuePair_2_t360266631 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m641913205((KeyValuePair_2_t360266631 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t3369969234* L_6 = (StringU5BU5D_t3369969234*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1326029236);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1326029236);
		StringU5BU5D_t3369969234* L_7 = (StringU5BU5D_t3369969234*)L_6;
		DemoData_t189062580  L_8 = KeyValuePair_2_get_Value_m1222446465((KeyValuePair_2_t360266631 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		DemoData_t189062580  L_9 = KeyValuePair_2_get_Value_m1222446465((KeyValuePair_2_t360266631 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (DemoData_t189062580 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(DemoData_t189062580 *)UnBox(L_10);
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
		StringU5BU5D_t3369969234* L_13 = (StringU5BU5D_t3369969234*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral2392581203);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2392581203);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m2436525083(NULL /*static, unused*/, (StringU5BU5D_t3369969234*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3612420148_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t360266631 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t360266631 *>(__this + 1);
	return KeyValuePair_2_ToString_m3612420148(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
