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
struct StringU5BU5D_t513271263;
// System.Char[]
struct CharU5BU5D_t2518678323;
// System.Void
struct Void_t1084091345;

extern RuntimeClass* StringU5BU5D_t513271263_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2208968581;
extern Il2CppCodeGenString* _stringLiteral2353777539;
extern Il2CppCodeGenString* _stringLiteral1307697658;
extern const uint32_t KeyValuePair_2_ToString_m1707733194_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1435728644_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2695072408_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2589276058_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m4246119608_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2558774409_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m500290777_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1593584278_MetadataUsageId;

struct StringU5BU5D_t513271263;


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
	CharU5BU5D_t2518678323* ___WhiteChars_3;

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
	inline CharU5BU5D_t2518678323* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t2518678323** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t2518678323* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T2248337686_H
#define VALUETYPE_T2248337686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2248337686  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2248337686_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2248337686_marshaled_com
{
};
#endif // VALUETYPE_T2248337686_H
#ifndef DEMODATA_T2176410490_H
#define DEMODATA_T2176410490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoHubManager/DemoData
struct  DemoData_t2176410490 
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
	inline static int32_t get_offset_of_Title_0() { return static_cast<int32_t>(offsetof(DemoData_t2176410490, ___Title_0)); }
	inline String_t* get_Title_0() const { return ___Title_0; }
	inline String_t** get_address_of_Title_0() { return &___Title_0; }
	inline void set_Title_0(String_t* value)
	{
		___Title_0 = value;
		Il2CppCodeGenWriteBarrier((&___Title_0), value);
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(DemoData_t2176410490, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier((&___Description_1), value);
	}

	inline static int32_t get_offset_of_Scene_2() { return static_cast<int32_t>(offsetof(DemoData_t2176410490, ___Scene_2)); }
	inline String_t* get_Scene_2() const { return ___Scene_2; }
	inline String_t** get_address_of_Scene_2() { return &___Scene_2; }
	inline void set_Scene_2(String_t* value)
	{
		___Scene_2 = value;
		Il2CppCodeGenWriteBarrier((&___Scene_2), value);
	}

	inline static int32_t get_offset_of_TutorialLink_3() { return static_cast<int32_t>(offsetof(DemoData_t2176410490, ___TutorialLink_3)); }
	inline String_t* get_TutorialLink_3() const { return ___TutorialLink_3; }
	inline String_t** get_address_of_TutorialLink_3() { return &___TutorialLink_3; }
	inline void set_TutorialLink_3(String_t* value)
	{
		___TutorialLink_3 = value;
		Il2CppCodeGenWriteBarrier((&___TutorialLink_3), value);
	}

	inline static int32_t get_offset_of_DocLink_4() { return static_cast<int32_t>(offsetof(DemoData_t2176410490, ___DocLink_4)); }
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
struct DemoData_t2176410490_marshaled_pinvoke
{
	char* ___Title_0;
	char* ___Description_1;
	char* ___Scene_2;
	char* ___TutorialLink_3;
	char* ___DocLink_4;
};
// Native definition for COM marshalling of ExitGames.Demos.DemoHubManager/DemoData
struct DemoData_t2176410490_marshaled_com
{
	Il2CppChar* ___Title_0;
	Il2CppChar* ___Description_1;
	Il2CppChar* ___Scene_2;
	Il2CppChar* ___TutorialLink_3;
	Il2CppChar* ___DocLink_4;
};
#endif // DEMODATA_T2176410490_H
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
#ifndef KEYVALUEPAIR_2_T4020327759_H
#define KEYVALUEPAIR_2_T4020327759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t4020327759 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4020327759, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4020327759, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T4020327759_H
#ifndef KEYVALUEPAIR_2_T2255070463_H
#define KEYVALUEPAIR_2_T2255070463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct  KeyValuePair_2_t2255070463 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2255070463, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2255070463, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2255070463_H
#ifndef BYTE_T88324224_H
#define BYTE_T88324224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t88324224 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t88324224, ___m_value_2)); }
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
#endif // BYTE_T88324224_H
#ifndef KEYVALUEPAIR_2_T1716171859_H
#define KEYVALUEPAIR_2_T1716171859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
struct  KeyValuePair_2_t1716171859 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1716171859, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1716171859, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1716171859_H
#ifndef ENUM_T2717613252_H
#define ENUM_T2717613252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2717613252  : public ValueType_t2248337686
{
public:

public:
};

struct Enum_t2717613252_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2518678323* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2717613252_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2518678323* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2518678323** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2518678323* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2717613252_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2717613252_marshaled_com
{
};
#endif // ENUM_T2717613252_H
#ifndef INT32_T66635316_H
#define INT32_T66635316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t66635316 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t66635316, ___m_value_2)); }
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
#endif // INT32_T66635316_H
#ifndef VOID_T1084091345_H
#define VOID_T1084091345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1084091345 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1084091345_H
#ifndef KEYVALUEPAIR_2_T1630156978_H
#define KEYVALUEPAIR_2_T1630156978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t1630156978 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	IntPtr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1630156978, ___key_0)); }
	inline IntPtr_t get_key_0() const { return ___key_0; }
	inline IntPtr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(IntPtr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1630156978, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1630156978_H
#ifndef CONNECTIONPROTOCOL_T3592754047_H
#define CONNECTIONPROTOCOL_T3592754047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t3592754047 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t3592754047, ___value___1)); }
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
#endif // CONNECTIONPROTOCOL_T3592754047_H
#ifndef KEYVALUEPAIR_2_T847296181_H
#define KEYVALUEPAIR_2_T847296181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>
struct  KeyValuePair_2_t847296181 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	DemoData_t2176410490  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t847296181, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t847296181, ___value_1)); }
	inline DemoData_t2176410490  get_value_1() const { return ___value_1; }
	inline DemoData_t2176410490 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(DemoData_t2176410490  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T847296181_H
#ifndef TEAM_T3525797411_H
#define TEAM_T3525797411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PunTeams/Team
struct  Team_t3525797411 
{
public:
	// System.Byte PunTeams/Team::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Team_t3525797411, ___value___1)); }
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
#endif // TEAM_T3525797411_H
#ifndef KEYVALUEPAIR_2_T1940843128_H
#define KEYVALUEPAIR_2_T1940843128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>
struct  KeyValuePair_2_t1940843128 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1940843128, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1940843128, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1940843128_H
#ifndef KEYVALUEPAIR_2_T175585832_H
#define KEYVALUEPAIR_2_T175585832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct  KeyValuePair_2_t175585832 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t175585832, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t175585832, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T175585832_H
#ifndef KEYVALUEPAIR_2_T639591620_H
#define KEYVALUEPAIR_2_T639591620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>
struct  KeyValuePair_2_t639591620 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t639591620, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t639591620, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T639591620_H
// System.String[]
struct StringU5BU5D_t513271263  : public RuntimeArray
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
extern "C"  void KeyValuePair_2_set_Key_m2809227691_gshared (KeyValuePair_2_t175585832 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1541705894_gshared (KeyValuePair_2_t175585832 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m353877009_gshared (KeyValuePair_2_t175585832 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m896393095_gshared (KeyValuePair_2_t175585832 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m4041907221_gshared (KeyValuePair_2_t175585832 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1707733194_gshared (KeyValuePair_2_t175585832 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3121826704_gshared (KeyValuePair_2_t1940843128 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m561057919_gshared (KeyValuePair_2_t1940843128 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m667344579_gshared (KeyValuePair_2_t1940843128 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m3250028406_gshared (KeyValuePair_2_t1940843128 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2754187613_gshared (KeyValuePair_2_t1940843128 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1435728644_gshared (KeyValuePair_2_t1940843128 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3636173743_gshared (KeyValuePair_2_t639591620 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m720592989_gshared (KeyValuePair_2_t639591620 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m32999434_gshared (KeyValuePair_2_t639591620 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m1071532665_gshared (KeyValuePair_2_t639591620 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2979424115_gshared (KeyValuePair_2_t639591620 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2695072408_gshared (KeyValuePair_2_t639591620 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1319205475_gshared (KeyValuePair_2_t1716171859 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2941314716_gshared (KeyValuePair_2_t1716171859 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m53474369_gshared (KeyValuePair_2_t1716171859 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m1650757339_gshared (KeyValuePair_2_t1716171859 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2257238694_gshared (KeyValuePair_2_t1716171859 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2589276058_gshared (KeyValuePair_2_t1716171859 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3078091123_gshared (KeyValuePair_2_t2255070463 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1046329307_gshared (KeyValuePair_2_t2255070463 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m687331538_gshared (KeyValuePair_2_t2255070463 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m812735628_gshared (KeyValuePair_2_t2255070463 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1336050190_gshared (KeyValuePair_2_t2255070463 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4246119608_gshared (KeyValuePair_2_t2255070463 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2578644293_gshared (KeyValuePair_2_t4020327759 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3424570408_gshared (KeyValuePair_2_t4020327759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m386514013_gshared (KeyValuePair_2_t4020327759 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3697641475_gshared (KeyValuePair_2_t4020327759 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4093358889_gshared (KeyValuePair_2_t4020327759 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2558774409_gshared (KeyValuePair_2_t4020327759 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m58682083_gshared (KeyValuePair_2_t1630156978 * __this, IntPtr_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1406556084_gshared (KeyValuePair_2_t1630156978 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1855403203_gshared (KeyValuePair_2_t1630156978 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m2483103097_gshared (KeyValuePair_2_t1630156978 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1916532183_gshared (KeyValuePair_2_t1630156978 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m500290777_gshared (KeyValuePair_2_t1630156978 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m281943703_gshared (KeyValuePair_2_t847296181 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2397488811_gshared (KeyValuePair_2_t847296181 * __this, DemoData_t2176410490  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1777687594_gshared (KeyValuePair_2_t847296181 * __this, RuntimeObject * ___key0, DemoData_t2176410490  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m87767945_gshared (KeyValuePair_2_t847296181 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Value()
extern "C"  DemoData_t2176410490  KeyValuePair_2_get_Value_m2172598758_gshared (KeyValuePair_2_t847296181 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1593584278_gshared (KeyValuePair_2_t847296181 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2809227691(__this, p0, method) ((  void (*) (KeyValuePair_2_t175585832 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2809227691_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1541705894(__this, p0, method) ((  void (*) (KeyValuePair_2_t175585832 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m1541705894_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m353877009(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t175585832 *, uint8_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m353877009_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m896393095(__this, method) ((  uint8_t (*) (KeyValuePair_2_t175585832 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m896393095_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m4041907221(__this, method) ((  int32_t (*) (KeyValuePair_2_t175585832 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m4041907221_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m3346063438 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m605635495 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t513271263* ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m1707733194(__this, method) ((  String_t* (*) (KeyValuePair_2_t175585832 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1707733194_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3121826704(__this, p0, method) ((  void (*) (KeyValuePair_2_t1940843128 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3121826704_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m561057919(__this, p0, method) ((  void (*) (KeyValuePair_2_t1940843128 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m561057919_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m667344579(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1940843128 *, uint8_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m667344579_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m3250028406(__this, method) ((  uint8_t (*) (KeyValuePair_2_t1940843128 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3250028406_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2754187613(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1940843128 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2754187613_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1435728644(__this, method) ((  String_t* (*) (KeyValuePair_2_t1940843128 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1435728644_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3636173743(__this, p0, method) ((  void (*) (KeyValuePair_2_t639591620 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3636173743_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m720592989(__this, p0, method) ((  void (*) (KeyValuePair_2_t639591620 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m720592989_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m32999434(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t639591620 *, uint8_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m32999434_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1071532665(__this, method) ((  uint8_t (*) (KeyValuePair_2_t639591620 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1071532665_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2979424115(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t639591620 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2979424115_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2695072408(__this, method) ((  String_t* (*) (KeyValuePair_2_t639591620 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2695072408_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1319205475(__this, p0, method) ((  void (*) (KeyValuePair_2_t1716171859 *, uint8_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1319205475_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2941314716(__this, p0, method) ((  void (*) (KeyValuePair_2_t1716171859 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m2941314716_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m53474369(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1716171859 *, uint8_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m53474369_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1650757339(__this, method) ((  uint8_t (*) (KeyValuePair_2_t1716171859 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1650757339_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2257238694(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1716171859 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2257238694_gshared)(__this, method)
// System.String System.Byte::ToString()
extern "C"  String_t* Byte_ToString_m1527856378 (uint8_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2589276058(__this, method) ((  String_t* (*) (KeyValuePair_2_t1716171859 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2589276058_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3078091123(__this, p0, method) ((  void (*) (KeyValuePair_2_t2255070463 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3078091123_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1046329307(__this, p0, method) ((  void (*) (KeyValuePair_2_t2255070463 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m1046329307_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m687331538(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2255070463 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m687331538_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m812735628(__this, method) ((  int32_t (*) (KeyValuePair_2_t2255070463 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m812735628_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m1336050190(__this, method) ((  int32_t (*) (KeyValuePair_2_t2255070463 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1336050190_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m4246119608(__this, method) ((  String_t* (*) (KeyValuePair_2_t2255070463 *, const RuntimeMethod*))KeyValuePair_2_ToString_m4246119608_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2578644293(__this, p0, method) ((  void (*) (KeyValuePair_2_t4020327759 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2578644293_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3424570408(__this, p0, method) ((  void (*) (KeyValuePair_2_t4020327759 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m3424570408_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m386514013(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t4020327759 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m386514013_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m3697641475(__this, method) ((  int32_t (*) (KeyValuePair_2_t4020327759 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3697641475_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m4093358889(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t4020327759 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m4093358889_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2558774409(__this, method) ((  String_t* (*) (KeyValuePair_2_t4020327759 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2558774409_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m58682083(__this, p0, method) ((  void (*) (KeyValuePair_2_t1630156978 *, IntPtr_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m58682083_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1406556084(__this, p0, method) ((  void (*) (KeyValuePair_2_t1630156978 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m1406556084_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1855403203(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1630156978 *, IntPtr_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m1855403203_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2483103097(__this, method) ((  IntPtr_t (*) (KeyValuePair_2_t1630156978 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2483103097_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m1916532183(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1630156978 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1916532183_gshared)(__this, method)
// System.String System.IntPtr::ToString()
extern "C"  String_t* IntPtr_ToString_m2197386627 (IntPtr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
#define KeyValuePair_2_ToString_m500290777(__this, method) ((  String_t* (*) (KeyValuePair_2_t1630156978 *, const RuntimeMethod*))KeyValuePair_2_ToString_m500290777_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m281943703(__this, p0, method) ((  void (*) (KeyValuePair_2_t847296181 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m281943703_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2397488811(__this, p0, method) ((  void (*) (KeyValuePair_2_t847296181 *, DemoData_t2176410490 , const RuntimeMethod*))KeyValuePair_2_set_Value_m2397488811_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1777687594(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t847296181 *, RuntimeObject *, DemoData_t2176410490 , const RuntimeMethod*))KeyValuePair_2__ctor_m1777687594_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Key()
#define KeyValuePair_2_get_Key_m87767945(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t847296181 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m87767945_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Value()
#define KeyValuePair_2_get_Value_m2172598758(__this, method) ((  DemoData_t2176410490  (*) (KeyValuePair_2_t847296181 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2172598758_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::ToString()
#define KeyValuePair_2_ToString_m1593584278(__this, method) ((  String_t* (*) (KeyValuePair_2_t847296181 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1593584278_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m353877009_gshared (KeyValuePair_2_t175585832 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2809227691((KeyValuePair_2_t175585832 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m1541705894((KeyValuePair_2_t175585832 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m353877009_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t175585832 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t175585832 *>(__this + 1);
	KeyValuePair_2__ctor_m353877009(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m896393095_gshared (KeyValuePair_2_t175585832 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m896393095_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t175585832 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t175585832 *>(__this + 1);
	return KeyValuePair_2_get_Key_m896393095(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2809227691_gshared (KeyValuePair_2_t175585832 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2809227691_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t175585832 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t175585832 *>(__this + 1);
	KeyValuePair_2_set_Key_m2809227691(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m4041907221_gshared (KeyValuePair_2_t175585832 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m4041907221_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t175585832 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t175585832 *>(__this + 1);
	return KeyValuePair_2_get_Value_m4041907221(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1541705894_gshared (KeyValuePair_2_t175585832 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1541705894_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t175585832 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t175585832 *>(__this + 1);
	KeyValuePair_2_set_Value_m1541705894(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1707733194_gshared (KeyValuePair_2_t175585832 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1707733194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t513271263* G_B2_1 = NULL;
	StringU5BU5D_t513271263* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t513271263* G_B1_1 = NULL;
	StringU5BU5D_t513271263* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t513271263* G_B3_2 = NULL;
	StringU5BU5D_t513271263* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t513271263* G_B5_1 = NULL;
	StringU5BU5D_t513271263* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t513271263* G_B4_1 = NULL;
	StringU5BU5D_t513271263* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t513271263* G_B6_2 = NULL;
	StringU5BU5D_t513271263* G_B6_3 = NULL;
	{
		StringU5BU5D_t513271263* L_0 = (StringU5BU5D_t513271263*)((StringU5BU5D_t513271263*)SZArrayNew(StringU5BU5D_t513271263_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2208968581);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2208968581);
		StringU5BU5D_t513271263* L_1 = (StringU5BU5D_t513271263*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m896393095((KeyValuePair_2_t175585832 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m896393095((KeyValuePair_2_t175585832 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t513271263* L_7 = (StringU5BU5D_t513271263*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral2353777539);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2353777539);
		StringU5BU5D_t513271263* L_8 = (StringU5BU5D_t513271263*)L_7;
		int32_t L_9 = KeyValuePair_2_get_Value_m4041907221((KeyValuePair_2_t175585832 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
	}
	{
		int32_t L_10 = KeyValuePair_2_get_Value_m4041907221((KeyValuePair_2_t175585832 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_10;
		String_t* L_11 = Int32_ToString_m3346063438((int32_t*)(&V_1), /*hidden argument*/NULL);
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
		StringU5BU5D_t513271263* L_13 = (StringU5BU5D_t513271263*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1307697658);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1307697658);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m605635495(NULL /*static, unused*/, (StringU5BU5D_t513271263*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1707733194_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t175585832 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t175585832 *>(__this + 1);
	return KeyValuePair_2_ToString_m1707733194(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m667344579_gshared (KeyValuePair_2_t1940843128 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3121826704((KeyValuePair_2_t1940843128 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m561057919((KeyValuePair_2_t1940843128 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m667344579_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1940843128 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1940843128 *>(__this + 1);
	KeyValuePair_2__ctor_m667344579(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m3250028406_gshared (KeyValuePair_2_t1940843128 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m3250028406_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1940843128 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1940843128 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3250028406(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3121826704_gshared (KeyValuePair_2_t1940843128 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3121826704_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1940843128 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1940843128 *>(__this + 1);
	KeyValuePair_2_set_Key_m3121826704(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2754187613_gshared (KeyValuePair_2_t1940843128 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2754187613_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1940843128 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1940843128 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2754187613(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m561057919_gshared (KeyValuePair_2_t1940843128 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m561057919_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1940843128 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1940843128 *>(__this + 1);
	KeyValuePair_2_set_Value_m561057919(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1435728644_gshared (KeyValuePair_2_t1940843128 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1435728644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t513271263* G_B2_1 = NULL;
	StringU5BU5D_t513271263* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t513271263* G_B1_1 = NULL;
	StringU5BU5D_t513271263* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t513271263* G_B3_2 = NULL;
	StringU5BU5D_t513271263* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t513271263* G_B5_1 = NULL;
	StringU5BU5D_t513271263* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t513271263* G_B4_1 = NULL;
	StringU5BU5D_t513271263* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t513271263* G_B6_2 = NULL;
	StringU5BU5D_t513271263* G_B6_3 = NULL;
	{
		StringU5BU5D_t513271263* L_0 = (StringU5BU5D_t513271263*)((StringU5BU5D_t513271263*)SZArrayNew(StringU5BU5D_t513271263_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2208968581);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2208968581);
		StringU5BU5D_t513271263* L_1 = (StringU5BU5D_t513271263*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m3250028406((KeyValuePair_2_t1940843128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m3250028406((KeyValuePair_2_t1940843128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t513271263* L_7 = (StringU5BU5D_t513271263*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral2353777539);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2353777539);
		StringU5BU5D_t513271263* L_8 = (StringU5BU5D_t513271263*)L_7;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m2754187613((KeyValuePair_2_t1940843128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m2754187613((KeyValuePair_2_t1940843128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t513271263* L_13 = (StringU5BU5D_t513271263*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1307697658);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1307697658);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m605635495(NULL /*static, unused*/, (StringU5BU5D_t513271263*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1435728644_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1940843128 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1940843128 *>(__this + 1);
	return KeyValuePair_2_ToString_m1435728644(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m32999434_gshared (KeyValuePair_2_t639591620 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3636173743((KeyValuePair_2_t639591620 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m720592989((KeyValuePair_2_t639591620 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m32999434_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t639591620 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t639591620 *>(__this + 1);
	KeyValuePair_2__ctor_m32999434(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m1071532665_gshared (KeyValuePair_2_t639591620 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m1071532665_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t639591620 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t639591620 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1071532665(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3636173743_gshared (KeyValuePair_2_t639591620 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3636173743_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t639591620 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t639591620 *>(__this + 1);
	KeyValuePair_2_set_Key_m3636173743(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2979424115_gshared (KeyValuePair_2_t639591620 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2979424115_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t639591620 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t639591620 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2979424115(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m720592989_gshared (KeyValuePair_2_t639591620 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m720592989_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t639591620 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t639591620 *>(__this + 1);
	KeyValuePair_2_set_Value_m720592989(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2695072408_gshared (KeyValuePair_2_t639591620 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2695072408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t513271263* G_B2_1 = NULL;
	StringU5BU5D_t513271263* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t513271263* G_B1_1 = NULL;
	StringU5BU5D_t513271263* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t513271263* G_B3_2 = NULL;
	StringU5BU5D_t513271263* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t513271263* G_B5_1 = NULL;
	StringU5BU5D_t513271263* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t513271263* G_B4_1 = NULL;
	StringU5BU5D_t513271263* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t513271263* G_B6_2 = NULL;
	StringU5BU5D_t513271263* G_B6_3 = NULL;
	{
		StringU5BU5D_t513271263* L_0 = (StringU5BU5D_t513271263*)((StringU5BU5D_t513271263*)SZArrayNew(StringU5BU5D_t513271263_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2208968581);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2208968581);
		StringU5BU5D_t513271263* L_1 = (StringU5BU5D_t513271263*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m1071532665((KeyValuePair_2_t639591620 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m1071532665((KeyValuePair_2_t639591620 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t513271263* L_7 = (StringU5BU5D_t513271263*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral2353777539);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2353777539);
		StringU5BU5D_t513271263* L_8 = (StringU5BU5D_t513271263*)L_7;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m2979424115((KeyValuePair_2_t639591620 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m2979424115((KeyValuePair_2_t639591620 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t513271263* L_13 = (StringU5BU5D_t513271263*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1307697658);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1307697658);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m605635495(NULL /*static, unused*/, (StringU5BU5D_t513271263*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2695072408_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t639591620 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t639591620 *>(__this + 1);
	return KeyValuePair_2_ToString_m2695072408(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m53474369_gshared (KeyValuePair_2_t1716171859 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1319205475((KeyValuePair_2_t1716171859 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m2941314716((KeyValuePair_2_t1716171859 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m53474369_AdjustorThunk (RuntimeObject * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1716171859 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1716171859 *>(__this + 1);
	KeyValuePair_2__ctor_m53474369(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
extern "C"  uint8_t KeyValuePair_2_get_Key_m1650757339_gshared (KeyValuePair_2_t1716171859 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  uint8_t KeyValuePair_2_get_Key_m1650757339_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1716171859 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1716171859 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1650757339(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1319205475_gshared (KeyValuePair_2_t1716171859 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1319205475_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1716171859 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1716171859 *>(__this + 1);
	KeyValuePair_2_set_Key_m1319205475(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2257238694_gshared (KeyValuePair_2_t1716171859 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2257238694_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1716171859 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1716171859 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2257238694(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2941314716_gshared (KeyValuePair_2_t1716171859 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2941314716_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1716171859 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1716171859 *>(__this + 1);
	KeyValuePair_2_set_Value_m2941314716(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2589276058_gshared (KeyValuePair_2_t1716171859 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2589276058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t513271263* G_B2_1 = NULL;
	StringU5BU5D_t513271263* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t513271263* G_B1_1 = NULL;
	StringU5BU5D_t513271263* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t513271263* G_B3_2 = NULL;
	StringU5BU5D_t513271263* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t513271263* G_B5_1 = NULL;
	StringU5BU5D_t513271263* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t513271263* G_B4_1 = NULL;
	StringU5BU5D_t513271263* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t513271263* G_B6_2 = NULL;
	StringU5BU5D_t513271263* G_B6_3 = NULL;
	{
		StringU5BU5D_t513271263* L_0 = (StringU5BU5D_t513271263*)((StringU5BU5D_t513271263*)SZArrayNew(StringU5BU5D_t513271263_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2208968581);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2208968581);
		StringU5BU5D_t513271263* L_1 = (StringU5BU5D_t513271263*)L_0;
		uint8_t L_2 = KeyValuePair_2_get_Key_m1650757339((KeyValuePair_2_t1716171859 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		uint8_t L_3 = KeyValuePair_2_get_Key_m1650757339((KeyValuePair_2_t1716171859 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (uint8_t)L_3;
		String_t* L_4 = Byte_ToString_m1527856378((uint8_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t513271263* L_6 = (StringU5BU5D_t513271263*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral2353777539);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2353777539);
		StringU5BU5D_t513271263* L_7 = (StringU5BU5D_t513271263*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m2257238694((KeyValuePair_2_t1716171859 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m2257238694((KeyValuePair_2_t1716171859 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t513271263* L_12 = (StringU5BU5D_t513271263*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1307697658);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1307697658);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m605635495(NULL /*static, unused*/, (StringU5BU5D_t513271263*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2589276058_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1716171859 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1716171859 *>(__this + 1);
	return KeyValuePair_2_ToString_m2589276058(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m687331538_gshared (KeyValuePair_2_t2255070463 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3078091123((KeyValuePair_2_t2255070463 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m1046329307((KeyValuePair_2_t2255070463 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m687331538_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2255070463 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2255070463 *>(__this + 1);
	KeyValuePair_2__ctor_m687331538(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m812735628_gshared (KeyValuePair_2_t2255070463 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m812735628_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2255070463 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2255070463 *>(__this + 1);
	return KeyValuePair_2_get_Key_m812735628(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3078091123_gshared (KeyValuePair_2_t2255070463 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3078091123_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2255070463 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2255070463 *>(__this + 1);
	KeyValuePair_2_set_Key_m3078091123(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1336050190_gshared (KeyValuePair_2_t2255070463 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m1336050190_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2255070463 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2255070463 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1336050190(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1046329307_gshared (KeyValuePair_2_t2255070463 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1046329307_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2255070463 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2255070463 *>(__this + 1);
	KeyValuePair_2_set_Value_m1046329307(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4246119608_gshared (KeyValuePair_2_t2255070463 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m4246119608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t513271263* G_B2_1 = NULL;
	StringU5BU5D_t513271263* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t513271263* G_B1_1 = NULL;
	StringU5BU5D_t513271263* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t513271263* G_B3_2 = NULL;
	StringU5BU5D_t513271263* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t513271263* G_B5_1 = NULL;
	StringU5BU5D_t513271263* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t513271263* G_B4_1 = NULL;
	StringU5BU5D_t513271263* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t513271263* G_B6_2 = NULL;
	StringU5BU5D_t513271263* G_B6_3 = NULL;
	{
		StringU5BU5D_t513271263* L_0 = (StringU5BU5D_t513271263*)((StringU5BU5D_t513271263*)SZArrayNew(StringU5BU5D_t513271263_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2208968581);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2208968581);
		StringU5BU5D_t513271263* L_1 = (StringU5BU5D_t513271263*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m812735628((KeyValuePair_2_t2255070463 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m812735628((KeyValuePair_2_t2255070463 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m3346063438((int32_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t513271263* L_6 = (StringU5BU5D_t513271263*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral2353777539);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2353777539);
		StringU5BU5D_t513271263* L_7 = (StringU5BU5D_t513271263*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m1336050190((KeyValuePair_2_t2255070463 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m1336050190((KeyValuePair_2_t2255070463 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m3346063438((int32_t*)(&V_1), /*hidden argument*/NULL);
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
		StringU5BU5D_t513271263* L_12 = (StringU5BU5D_t513271263*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1307697658);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1307697658);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m605635495(NULL /*static, unused*/, (StringU5BU5D_t513271263*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m4246119608_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2255070463 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2255070463 *>(__this + 1);
	return KeyValuePair_2_ToString_m4246119608(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m386514013_gshared (KeyValuePair_2_t4020327759 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2578644293((KeyValuePair_2_t4020327759 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m3424570408((KeyValuePair_2_t4020327759 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m386514013_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t4020327759 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4020327759 *>(__this + 1);
	KeyValuePair_2__ctor_m386514013(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3697641475_gshared (KeyValuePair_2_t4020327759 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m3697641475_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4020327759 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4020327759 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3697641475(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2578644293_gshared (KeyValuePair_2_t4020327759 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2578644293_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t4020327759 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4020327759 *>(__this + 1);
	KeyValuePair_2_set_Key_m2578644293(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4093358889_gshared (KeyValuePair_2_t4020327759 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4093358889_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4020327759 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4020327759 *>(__this + 1);
	return KeyValuePair_2_get_Value_m4093358889(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3424570408_gshared (KeyValuePair_2_t4020327759 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3424570408_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t4020327759 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4020327759 *>(__this + 1);
	KeyValuePair_2_set_Value_m3424570408(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2558774409_gshared (KeyValuePair_2_t4020327759 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2558774409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t513271263* G_B2_1 = NULL;
	StringU5BU5D_t513271263* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t513271263* G_B1_1 = NULL;
	StringU5BU5D_t513271263* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t513271263* G_B3_2 = NULL;
	StringU5BU5D_t513271263* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t513271263* G_B5_1 = NULL;
	StringU5BU5D_t513271263* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t513271263* G_B4_1 = NULL;
	StringU5BU5D_t513271263* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t513271263* G_B6_2 = NULL;
	StringU5BU5D_t513271263* G_B6_3 = NULL;
	{
		StringU5BU5D_t513271263* L_0 = (StringU5BU5D_t513271263*)((StringU5BU5D_t513271263*)SZArrayNew(StringU5BU5D_t513271263_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2208968581);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2208968581);
		StringU5BU5D_t513271263* L_1 = (StringU5BU5D_t513271263*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m3697641475((KeyValuePair_2_t4020327759 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m3697641475((KeyValuePair_2_t4020327759 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m3346063438((int32_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t513271263* L_6 = (StringU5BU5D_t513271263*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral2353777539);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2353777539);
		StringU5BU5D_t513271263* L_7 = (StringU5BU5D_t513271263*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m4093358889((KeyValuePair_2_t4020327759 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m4093358889((KeyValuePair_2_t4020327759 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t513271263* L_12 = (StringU5BU5D_t513271263*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1307697658);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1307697658);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m605635495(NULL /*static, unused*/, (StringU5BU5D_t513271263*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2558774409_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4020327759 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4020327759 *>(__this + 1);
	return KeyValuePair_2_ToString_m2558774409(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1855403203_gshared (KeyValuePair_2_t1630156978 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m58682083((KeyValuePair_2_t1630156978 *)__this, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m1406556084((KeyValuePair_2_t1630156978 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1855403203_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1630156978 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1630156978 *>(__this + 1);
	KeyValuePair_2__ctor_m1855403203(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m2483103097_gshared (KeyValuePair_2_t1630156978 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = (IntPtr_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m2483103097_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1630156978 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1630156978 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2483103097(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m58682083_gshared (KeyValuePair_2_t1630156978 * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m58682083_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1630156978 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1630156978 *>(__this + 1);
	KeyValuePair_2_set_Key_m58682083(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1916532183_gshared (KeyValuePair_2_t1630156978 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1916532183_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1630156978 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1630156978 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1916532183(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1406556084_gshared (KeyValuePair_2_t1630156978 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1406556084_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1630156978 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1630156978 *>(__this + 1);
	KeyValuePair_2_set_Value_m1406556084(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m500290777_gshared (KeyValuePair_2_t1630156978 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m500290777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t513271263* G_B2_1 = NULL;
	StringU5BU5D_t513271263* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t513271263* G_B1_1 = NULL;
	StringU5BU5D_t513271263* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t513271263* G_B3_2 = NULL;
	StringU5BU5D_t513271263* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t513271263* G_B5_1 = NULL;
	StringU5BU5D_t513271263* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t513271263* G_B4_1 = NULL;
	StringU5BU5D_t513271263* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t513271263* G_B6_2 = NULL;
	StringU5BU5D_t513271263* G_B6_3 = NULL;
	{
		StringU5BU5D_t513271263* L_0 = (StringU5BU5D_t513271263*)((StringU5BU5D_t513271263*)SZArrayNew(StringU5BU5D_t513271263_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2208968581);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2208968581);
		StringU5BU5D_t513271263* L_1 = (StringU5BU5D_t513271263*)L_0;
		IntPtr_t L_2 = KeyValuePair_2_get_Key_m2483103097((KeyValuePair_2_t1630156978 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		IntPtr_t L_3 = KeyValuePair_2_get_Key_m2483103097((KeyValuePair_2_t1630156978 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (IntPtr_t)L_3;
		String_t* L_4 = IntPtr_ToString_m2197386627((IntPtr_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t513271263* L_6 = (StringU5BU5D_t513271263*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral2353777539);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2353777539);
		StringU5BU5D_t513271263* L_7 = (StringU5BU5D_t513271263*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m1916532183((KeyValuePair_2_t1630156978 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m1916532183((KeyValuePair_2_t1630156978 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t513271263* L_12 = (StringU5BU5D_t513271263*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1307697658);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1307697658);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m605635495(NULL /*static, unused*/, (StringU5BU5D_t513271263*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m500290777_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1630156978 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1630156978 *>(__this + 1);
	return KeyValuePair_2_ToString_m500290777(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1777687594_gshared (KeyValuePair_2_t847296181 * __this, RuntimeObject * ___key0, DemoData_t2176410490  ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m281943703((KeyValuePair_2_t847296181 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		DemoData_t2176410490  L_1 = ___value1;
		KeyValuePair_2_set_Value_m2397488811((KeyValuePair_2_t847296181 *)__this, (DemoData_t2176410490 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1777687594_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, DemoData_t2176410490  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t847296181 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t847296181 *>(__this + 1);
	KeyValuePair_2__ctor_m1777687594(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m87767945_gshared (KeyValuePair_2_t847296181 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m87767945_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t847296181 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t847296181 *>(__this + 1);
	return KeyValuePair_2_get_Key_m87767945(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m281943703_gshared (KeyValuePair_2_t847296181 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m281943703_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t847296181 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t847296181 *>(__this + 1);
	KeyValuePair_2_set_Key_m281943703(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::get_Value()
extern "C"  DemoData_t2176410490  KeyValuePair_2_get_Value_m2172598758_gshared (KeyValuePair_2_t847296181 * __this, const RuntimeMethod* method)
{
	{
		DemoData_t2176410490  L_0 = (DemoData_t2176410490 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  DemoData_t2176410490  KeyValuePair_2_get_Value_m2172598758_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t847296181 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t847296181 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2172598758(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2397488811_gshared (KeyValuePair_2_t847296181 * __this, DemoData_t2176410490  ___value0, const RuntimeMethod* method)
{
	{
		DemoData_t2176410490  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2397488811_AdjustorThunk (RuntimeObject * __this, DemoData_t2176410490  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t847296181 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t847296181 *>(__this + 1);
	KeyValuePair_2_set_Value_m2397488811(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,ExitGames.Demos.DemoHubManager/DemoData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1593584278_gshared (KeyValuePair_2_t847296181 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1593584278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	DemoData_t2176410490  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t513271263* G_B2_1 = NULL;
	StringU5BU5D_t513271263* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t513271263* G_B1_1 = NULL;
	StringU5BU5D_t513271263* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t513271263* G_B3_2 = NULL;
	StringU5BU5D_t513271263* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t513271263* G_B5_1 = NULL;
	StringU5BU5D_t513271263* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t513271263* G_B4_1 = NULL;
	StringU5BU5D_t513271263* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t513271263* G_B6_2 = NULL;
	StringU5BU5D_t513271263* G_B6_3 = NULL;
	{
		StringU5BU5D_t513271263* L_0 = (StringU5BU5D_t513271263*)((StringU5BU5D_t513271263*)SZArrayNew(StringU5BU5D_t513271263_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2208968581);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2208968581);
		StringU5BU5D_t513271263* L_1 = (StringU5BU5D_t513271263*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m87767945((KeyValuePair_2_t847296181 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m87767945((KeyValuePair_2_t847296181 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t513271263* L_6 = (StringU5BU5D_t513271263*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral2353777539);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2353777539);
		StringU5BU5D_t513271263* L_7 = (StringU5BU5D_t513271263*)L_6;
		DemoData_t2176410490  L_8 = KeyValuePair_2_get_Value_m2172598758((KeyValuePair_2_t847296181 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		DemoData_t2176410490  L_9 = KeyValuePair_2_get_Value_m2172598758((KeyValuePair_2_t847296181 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (DemoData_t2176410490 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(DemoData_t2176410490 *)UnBox(L_10);
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
		StringU5BU5D_t513271263* L_13 = (StringU5BU5D_t513271263*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1307697658);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1307697658);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m605635495(NULL /*static, unused*/, (StringU5BU5D_t513271263*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1593584278_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t847296181 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t847296181 *>(__this + 1);
	return KeyValuePair_2_ToString_m1593584278(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
