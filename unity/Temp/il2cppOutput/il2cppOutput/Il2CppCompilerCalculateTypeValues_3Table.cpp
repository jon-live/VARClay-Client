﻿#include "il2cpp-config.h"

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

// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t3323659057;
// System.String[]
struct StringU5BU5D_t1824645579;
// System.Byte[]
struct ByteU5BU5D_t2729897319;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t2466900903;
// System.Reflection.Module
struct Module_t3517295286;
// System.Type
struct Type_t;
// System.Reflection.Emit.LocalBuilder[]
struct LocalBuilderU5BU5D_t1024799682;
// System.Reflection.Emit.ILTokenInfo[]
struct ILTokenInfoU5BU5D_t1721115594;
// System.Reflection.Emit.ILGenerator/LabelData[]
struct LabelDataU5BU5D_t3838831632;
// System.Reflection.Emit.ILGenerator/LabelFixup[]
struct LabelFixupU5BU5D_t1213067697;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t3814155614;
// System.Void
struct Void_t779120870;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3416953175;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t2531340774;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t2123088483;
// System.IntPtr[]
struct IntPtrU5BU5D_t2742960552;
// System.Collections.IDictionary
struct IDictionary_t2891060155;
// System.Boolean[]
struct BooleanU5BU5D_t3932380833;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3929519702;
// System.Char[]
struct CharU5BU5D_t913677958;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t145792988;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t4063697696;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t3681357886;
// System.Security.Policy.Evidence
struct Evidence_t417703073;
// System.Security.PermissionSet
struct PermissionSet_t1340974424;
// System.Reflection.Assembly
struct Assembly_t2577078533;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t3828721349;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t2760519975;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t1556783966;
// System.Type[]
struct TypeU5BU5D_t1627120059;
// System.Reflection.MemberFilter
struct MemberFilter_t1368463053;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t296063035;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t1648436935;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t1089499386;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2287781964;
// System.Globalization.CultureInfo
struct CultureInfo_t4283686187;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t1867757446;
// System.Version
struct Version_t2220740773;
// System.Object[]
struct ObjectU5BU5D_t1430047311;
// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Reflection.TypeFilter
struct TypeFilter_t3510508607;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t2513458312;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t4068674872;
// System.Reflection.Emit.PropertyBuilder[]
struct PropertyBuilderU5BU5D_t2412219556;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t2961880234;
// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t2036906590;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t4030410391;
// System.IAsyncResult
struct IAsyncResult_t479242646;
// System.AsyncCallback
struct AsyncCallback_t1859346098;
// System.Delegate
struct Delegate_t417437614;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t494911997;
// System.Collections.Hashtable
struct Hashtable_t313414306;
// System.Int32[]
struct Int32U5BU5D_t1536829261;
// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t75569071;
// System.Diagnostics.SymbolStore.ISymbolWriter
struct ISymbolWriter_t2322074866;




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
#ifndef MODULEBUILDERTOKENGENERATOR_T75569071_H
#define MODULEBUILDERTOKENGENERATOR_T75569071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct  ModuleBuilderTokenGenerator_t75569071  : public RuntimeObject
{
public:
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.ModuleBuilderTokenGenerator::mb
	ModuleBuilder_t3323659057 * ___mb_0;

public:
	inline static int32_t get_offset_of_mb_0() { return static_cast<int32_t>(offsetof(ModuleBuilderTokenGenerator_t75569071, ___mb_0)); }
	inline ModuleBuilder_t3323659057 * get_mb_0() const { return ___mb_0; }
	inline ModuleBuilder_t3323659057 ** get_address_of_mb_0() { return &___mb_0; }
	inline void set_mb_0(ModuleBuilder_t3323659057 * value)
	{
		___mb_0 = value;
		Il2CppCodeGenWriteBarrier((&___mb_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULEBUILDERTOKENGENERATOR_T75569071_H
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
#ifndef OPCODENAMES_T620212120_H
#define OPCODENAMES_T620212120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCodeNames
struct  OpCodeNames_t620212120  : public RuntimeObject
{
public:

public:
};

struct OpCodeNames_t620212120_StaticFields
{
public:
	// System.String[] System.Reflection.Emit.OpCodeNames::names
	StringU5BU5D_t1824645579* ___names_0;

public:
	inline static int32_t get_offset_of_names_0() { return static_cast<int32_t>(offsetof(OpCodeNames_t620212120_StaticFields, ___names_0)); }
	inline StringU5BU5D_t1824645579* get_names_0() const { return ___names_0; }
	inline StringU5BU5D_t1824645579** get_address_of_names_0() { return &___names_0; }
	inline void set_names_0(StringU5BU5D_t1824645579* value)
	{
		___names_0 = value;
		Il2CppCodeGenWriteBarrier((&___names_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODENAMES_T620212120_H
#ifndef STRONGNAMEKEYPAIR_T1867757446_H
#define STRONGNAMEKEYPAIR_T1867757446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.StrongNameKeyPair
struct  StrongNameKeyPair_t1867757446  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t2729897319* ____publicKey_0;
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
	ByteU5BU5D_t2729897319* ____keyPairArray_3;
	// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::_rsa
	RSA_t2466900903 * ____rsa_4;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t1867757446, ____publicKey_0)); }
	inline ByteU5BU5D_t2729897319* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t2729897319** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t2729897319* value)
	{
		____publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_0), value);
	}

	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t1867757446, ____keyPairContainer_1)); }
	inline String_t* get__keyPairContainer_1() const { return ____keyPairContainer_1; }
	inline String_t** get_address_of__keyPairContainer_1() { return &____keyPairContainer_1; }
	inline void set__keyPairContainer_1(String_t* value)
	{
		____keyPairContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairContainer_1), value);
	}

	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t1867757446, ____keyPairExported_2)); }
	inline bool get__keyPairExported_2() const { return ____keyPairExported_2; }
	inline bool* get_address_of__keyPairExported_2() { return &____keyPairExported_2; }
	inline void set__keyPairExported_2(bool value)
	{
		____keyPairExported_2 = value;
	}

	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t1867757446, ____keyPairArray_3)); }
	inline ByteU5BU5D_t2729897319* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t2729897319** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t2729897319* value)
	{
		____keyPairArray_3 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairArray_3), value);
	}

	inline static int32_t get_offset_of__rsa_4() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t1867757446, ____rsa_4)); }
	inline RSA_t2466900903 * get__rsa_4() const { return ____rsa_4; }
	inline RSA_t2466900903 ** get_address_of__rsa_4() { return &____rsa_4; }
	inline void set__rsa_4(RSA_t2466900903 * value)
	{
		____rsa_4 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEKEYPAIR_T1867757446_H
#ifndef RESOURCECLOSEHANDLER_T1603621906_H
#define RESOURCECLOSEHANDLER_T1603621906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResourceCloseHandler
struct  ResourceCloseHandler_t1603621906  : public RuntimeObject
{
public:
	// System.Reflection.Module System.Reflection.Assembly/ResourceCloseHandler::module
	Module_t3517295286 * ___module_0;

public:
	inline static int32_t get_offset_of_module_0() { return static_cast<int32_t>(offsetof(ResourceCloseHandler_t1603621906, ___module_0)); }
	inline Module_t3517295286 * get_module_0() const { return ___module_0; }
	inline Module_t3517295286 ** get_address_of_module_0() { return &___module_0; }
	inline void set_module_0(Module_t3517295286 * value)
	{
		___module_0 = value;
		Il2CppCodeGenWriteBarrier((&___module_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCECLOSEHANDLER_T1603621906_H
#ifndef ATTRIBUTE_T1543762533_H
#define ATTRIBUTE_T1543762533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1543762533  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1543762533_H
#ifndef LOCALVARIABLEINFO_T589738243_H
#define LOCALVARIABLEINFO_T589738243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.LocalVariableInfo
struct  LocalVariableInfo_t589738243  : public RuntimeObject
{
public:
	// System.Type System.Reflection.LocalVariableInfo::type
	Type_t * ___type_0;
	// System.Boolean System.Reflection.LocalVariableInfo::is_pinned
	bool ___is_pinned_1;
	// System.UInt16 System.Reflection.LocalVariableInfo::position
	uint16_t ___position_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t589738243, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_is_pinned_1() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t589738243, ___is_pinned_1)); }
	inline bool get_is_pinned_1() const { return ___is_pinned_1; }
	inline bool* get_address_of_is_pinned_1() { return &___is_pinned_1; }
	inline void set_is_pinned_1(bool value)
	{
		___is_pinned_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t589738243, ___position_2)); }
	inline uint16_t get_position_2() const { return ___position_2; }
	inline uint16_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(uint16_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALVARIABLEINFO_T589738243_H
#ifndef BINDER_T2916881575_H
#define BINDER_T2916881575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t2916881575  : public RuntimeObject
{
public:

public:
};

struct Binder_t2916881575_StaticFields
{
public:
	// System.Reflection.Binder System.Reflection.Binder::default_binder
	Binder_t2916881575 * ___default_binder_0;

public:
	inline static int32_t get_offset_of_default_binder_0() { return static_cast<int32_t>(offsetof(Binder_t2916881575_StaticFields, ___default_binder_0)); }
	inline Binder_t2916881575 * get_default_binder_0() const { return ___default_binder_0; }
	inline Binder_t2916881575 ** get_address_of_default_binder_0() { return &___default_binder_0; }
	inline void set_default_binder_0(Binder_t2916881575 * value)
	{
		___default_binder_0 = value;
		Il2CppCodeGenWriteBarrier((&___default_binder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T2916881575_H
#ifndef ILGENERATOR_T3929519702_H
#define ILGENERATOR_T3929519702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator
struct  ILGenerator_t3929519702  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.Emit.ILGenerator::code
	ByteU5BU5D_t2729897319* ___code_1;
	// System.Int32 System.Reflection.Emit.ILGenerator::code_len
	int32_t ___code_len_2;
	// System.Int32 System.Reflection.Emit.ILGenerator::max_stack
	int32_t ___max_stack_3;
	// System.Int32 System.Reflection.Emit.ILGenerator::cur_stack
	int32_t ___cur_stack_4;
	// System.Reflection.Emit.LocalBuilder[] System.Reflection.Emit.ILGenerator::locals
	LocalBuilderU5BU5D_t1024799682* ___locals_5;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_token_fixups
	int32_t ___num_token_fixups_6;
	// System.Reflection.Emit.ILTokenInfo[] System.Reflection.Emit.ILGenerator::token_fixups
	ILTokenInfoU5BU5D_t1721115594* ___token_fixups_7;
	// System.Reflection.Emit.ILGenerator/LabelData[] System.Reflection.Emit.ILGenerator::labels
	LabelDataU5BU5D_t3838831632* ___labels_8;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_labels
	int32_t ___num_labels_9;
	// System.Reflection.Emit.ILGenerator/LabelFixup[] System.Reflection.Emit.ILGenerator::fixups
	LabelFixupU5BU5D_t1213067697* ___fixups_10;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_fixups
	int32_t ___num_fixups_11;
	// System.Reflection.Module System.Reflection.Emit.ILGenerator::module
	Module_t3517295286 * ___module_12;
	// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ILGenerator::token_gen
	RuntimeObject* ___token_gen_13;

public:
	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(ILGenerator_t3929519702, ___code_1)); }
	inline ByteU5BU5D_t2729897319* get_code_1() const { return ___code_1; }
	inline ByteU5BU5D_t2729897319** get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(ByteU5BU5D_t2729897319* value)
	{
		___code_1 = value;
		Il2CppCodeGenWriteBarrier((&___code_1), value);
	}

	inline static int32_t get_offset_of_code_len_2() { return static_cast<int32_t>(offsetof(ILGenerator_t3929519702, ___code_len_2)); }
	inline int32_t get_code_len_2() const { return ___code_len_2; }
	inline int32_t* get_address_of_code_len_2() { return &___code_len_2; }
	inline void set_code_len_2(int32_t value)
	{
		___code_len_2 = value;
	}

	inline static int32_t get_offset_of_max_stack_3() { return static_cast<int32_t>(offsetof(ILGenerator_t3929519702, ___max_stack_3)); }
	inline int32_t get_max_stack_3() const { return ___max_stack_3; }
	inline int32_t* get_address_of_max_stack_3() { return &___max_stack_3; }
	inline void set_max_stack_3(int32_t value)
	{
		___max_stack_3 = value;
	}

	inline static int32_t get_offset_of_cur_stack_4() { return static_cast<int32_t>(offsetof(ILGenerator_t3929519702, ___cur_stack_4)); }
	inline int32_t get_cur_stack_4() const { return ___cur_stack_4; }
	inline int32_t* get_address_of_cur_stack_4() { return &___cur_stack_4; }
	inline void set_cur_stack_4(int32_t value)
	{
		___cur_stack_4 = value;
	}

	inline static int32_t get_offset_of_locals_5() { return static_cast<int32_t>(offsetof(ILGenerator_t3929519702, ___locals_5)); }
	inline LocalBuilderU5BU5D_t1024799682* get_locals_5() const { return ___locals_5; }
	inline LocalBuilderU5BU5D_t1024799682** get_address_of_locals_5() { return &___locals_5; }
	inline void set_locals_5(LocalBuilderU5BU5D_t1024799682* value)
	{
		___locals_5 = value;
		Il2CppCodeGenWriteBarrier((&___locals_5), value);
	}

	inline static int32_t get_offset_of_num_token_fixups_6() { return static_cast<int32_t>(offsetof(ILGenerator_t3929519702, ___num_token_fixups_6)); }
	inline int32_t get_num_token_fixups_6() const { return ___num_token_fixups_6; }
	inline int32_t* get_address_of_num_token_fixups_6() { return &___num_token_fixups_6; }
	inline void set_num_token_fixups_6(int32_t value)
	{
		___num_token_fixups_6 = value;
	}

	inline static int32_t get_offset_of_token_fixups_7() { return static_cast<int32_t>(offsetof(ILGenerator_t3929519702, ___token_fixups_7)); }
	inline ILTokenInfoU5BU5D_t1721115594* get_token_fixups_7() const { return ___token_fixups_7; }
	inline ILTokenInfoU5BU5D_t1721115594** get_address_of_token_fixups_7() { return &___token_fixups_7; }
	inline void set_token_fixups_7(ILTokenInfoU5BU5D_t1721115594* value)
	{
		___token_fixups_7 = value;
		Il2CppCodeGenWriteBarrier((&___token_fixups_7), value);
	}

	inline static int32_t get_offset_of_labels_8() { return static_cast<int32_t>(offsetof(ILGenerator_t3929519702, ___labels_8)); }
	inline LabelDataU5BU5D_t3838831632* get_labels_8() const { return ___labels_8; }
	inline LabelDataU5BU5D_t3838831632** get_address_of_labels_8() { return &___labels_8; }
	inline void set_labels_8(LabelDataU5BU5D_t3838831632* value)
	{
		___labels_8 = value;
		Il2CppCodeGenWriteBarrier((&___labels_8), value);
	}

	inline static int32_t get_offset_of_num_labels_9() { return static_cast<int32_t>(offsetof(ILGenerator_t3929519702, ___num_labels_9)); }
	inline int32_t get_num_labels_9() const { return ___num_labels_9; }
	inline int32_t* get_address_of_num_labels_9() { return &___num_labels_9; }
	inline void set_num_labels_9(int32_t value)
	{
		___num_labels_9 = value;
	}

	inline static int32_t get_offset_of_fixups_10() { return static_cast<int32_t>(offsetof(ILGenerator_t3929519702, ___fixups_10)); }
	inline LabelFixupU5BU5D_t1213067697* get_fixups_10() const { return ___fixups_10; }
	inline LabelFixupU5BU5D_t1213067697** get_address_of_fixups_10() { return &___fixups_10; }
	inline void set_fixups_10(LabelFixupU5BU5D_t1213067697* value)
	{
		___fixups_10 = value;
		Il2CppCodeGenWriteBarrier((&___fixups_10), value);
	}

	inline static int32_t get_offset_of_num_fixups_11() { return static_cast<int32_t>(offsetof(ILGenerator_t3929519702, ___num_fixups_11)); }
	inline int32_t get_num_fixups_11() const { return ___num_fixups_11; }
	inline int32_t* get_address_of_num_fixups_11() { return &___num_fixups_11; }
	inline void set_num_fixups_11(int32_t value)
	{
		___num_fixups_11 = value;
	}

	inline static int32_t get_offset_of_module_12() { return static_cast<int32_t>(offsetof(ILGenerator_t3929519702, ___module_12)); }
	inline Module_t3517295286 * get_module_12() const { return ___module_12; }
	inline Module_t3517295286 ** get_address_of_module_12() { return &___module_12; }
	inline void set_module_12(Module_t3517295286 * value)
	{
		___module_12 = value;
		Il2CppCodeGenWriteBarrier((&___module_12), value);
	}

	inline static int32_t get_offset_of_token_gen_13() { return static_cast<int32_t>(offsetof(ILGenerator_t3929519702, ___token_gen_13)); }
	inline RuntimeObject* get_token_gen_13() const { return ___token_gen_13; }
	inline RuntimeObject** get_address_of_token_gen_13() { return &___token_gen_13; }
	inline void set_token_gen_13(RuntimeObject* value)
	{
		___token_gen_13 = value;
		Il2CppCodeGenWriteBarrier((&___token_gen_13), value);
	}
};

struct ILGenerator_t3929519702_StaticFields
{
public:
	// System.Type System.Reflection.Emit.ILGenerator::void_type
	Type_t * ___void_type_0;

public:
	inline static int32_t get_offset_of_void_type_0() { return static_cast<int32_t>(offsetof(ILGenerator_t3929519702_StaticFields, ___void_type_0)); }
	inline Type_t * get_void_type_0() const { return ___void_type_0; }
	inline Type_t ** get_address_of_void_type_0() { return &___void_type_0; }
	inline void set_void_type_0(Type_t * value)
	{
		___void_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___void_type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ILGENERATOR_T3929519702_H
#ifndef POINTER_T786969270_H
#define POINTER_T786969270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Pointer
struct  Pointer_t786969270  : public RuntimeObject
{
public:
	// System.Void* System.Reflection.Pointer::data
	void* ___data_0;
	// System.Type System.Reflection.Pointer::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Pointer_t786969270, ___data_0)); }
	inline void* get_data_0() const { return ___data_0; }
	inline void** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(void* value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Pointer_t786969270, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTER_T786969270_H
#ifndef RESOLVEEVENTHOLDER_T3681357886_H
#define RESOLVEEVENTHOLDER_T3681357886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResolveEventHolder
struct  ResolveEventHolder_t3681357886  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHOLDER_T3681357886_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef CUSTOMATTRIBUTEDATA_T3042032017_H
#define CUSTOMATTRIBUTEDATA_T3042032017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t3042032017  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t3416953175 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t3042032017, ___ctorInfo_0)); }
	inline ConstructorInfo_t3416953175 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t3416953175 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t3416953175 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t3042032017, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t3042032017, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T3042032017_H
#ifndef MISSING_T147366456_H
#define MISSING_T147366456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Missing
struct  Missing_t147366456  : public RuntimeObject
{
public:

public:
};

struct Missing_t147366456_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t147366456 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t147366456_StaticFields, ___Value_0)); }
	inline Missing_t147366456 * get_Value_0() const { return ___Value_0; }
	inline Missing_t147366456 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t147366456 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSING_T147366456_H
#ifndef EXCEPTION_T871969127_H
#define EXCEPTION_T871969127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t871969127  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t2742960552* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t871969127 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t871969127, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t2742960552* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t2742960552** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t2742960552* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t871969127, ___inner_exception_1)); }
	inline Exception_t871969127 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t871969127 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t871969127 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t871969127, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t871969127, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t871969127, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t871969127, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t871969127, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t871969127, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t871969127, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t871969127, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t871969127, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T871969127_H
#ifndef ASSEMBLYDEFAULTALIASATTRIBUTE_T4074539517_H
#define ASSEMBLYDEFAULTALIASATTRIBUTE_T4074539517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDefaultAliasAttribute
struct  AssemblyDefaultAliasAttribute_t4074539517  : public Attribute_t1543762533
{
public:
	// System.String System.Reflection.AssemblyDefaultAliasAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDefaultAliasAttribute_t4074539517, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDEFAULTALIASATTRIBUTE_T4074539517_H
#ifndef ASSEMBLYDELAYSIGNATTRIBUTE_T1018316225_H
#define ASSEMBLYDELAYSIGNATTRIBUTE_T1018316225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDelaySignAttribute
struct  AssemblyDelaySignAttribute_t1018316225  : public Attribute_t1543762533
{
public:
	// System.Boolean System.Reflection.AssemblyDelaySignAttribute::delay
	bool ___delay_0;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(AssemblyDelaySignAttribute_t1018316225, ___delay_0)); }
	inline bool get_delay_0() const { return ___delay_0; }
	inline bool* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(bool value)
	{
		___delay_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDELAYSIGNATTRIBUTE_T1018316225_H
#ifndef ASSEMBLYDESCRIPTIONATTRIBUTE_T1884185221_H
#define ASSEMBLYDESCRIPTIONATTRIBUTE_T1884185221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDescriptionAttribute
struct  AssemblyDescriptionAttribute_t1884185221  : public Attribute_t1543762533
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_t1884185221, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDESCRIPTIONATTRIBUTE_T1884185221_H
#ifndef ASSEMBLYCOPYRIGHTATTRIBUTE_T853966766_H
#define ASSEMBLYCOPYRIGHTATTRIBUTE_T853966766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCopyrightAttribute
struct  AssemblyCopyrightAttribute_t853966766  : public Attribute_t1543762533
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_t853966766, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOPYRIGHTATTRIBUTE_T853966766_H
#ifndef ASSEMBLYFILEVERSIONATTRIBUTE_T2862700873_H
#define ASSEMBLYFILEVERSIONATTRIBUTE_T2862700873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyFileVersionAttribute
struct  AssemblyFileVersionAttribute_t2862700873  : public Attribute_t1543762533
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_t2862700873, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYFILEVERSIONATTRIBUTE_T2862700873_H
#ifndef ASSEMBLYCONFIGURATIONATTRIBUTE_T2928276068_H
#define ASSEMBLYCONFIGURATIONATTRIBUTE_T2928276068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyConfigurationAttribute
struct  AssemblyConfigurationAttribute_t2928276068  : public Attribute_t1543762533
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t2928276068, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCONFIGURATIONATTRIBUTE_T2928276068_H
#ifndef ASSEMBLYKEYFILEATTRIBUTE_T2536881849_H
#define ASSEMBLYKEYFILEATTRIBUTE_T2536881849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyKeyFileAttribute
struct  AssemblyKeyFileAttribute_t2536881849  : public Attribute_t1543762533
{
public:
	// System.String System.Reflection.AssemblyKeyFileAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyKeyFileAttribute_t2536881849, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYKEYFILEATTRIBUTE_T2536881849_H
#ifndef TARGETEXCEPTION_T511380248_H
#define TARGETEXCEPTION_T511380248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetException
struct  TargetException_t511380248  : public Exception_t871969127
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETEXCEPTION_T511380248_H
#ifndef ASSEMBLYPRODUCTATTRIBUTE_T3392206411_H
#define ASSEMBLYPRODUCTATTRIBUTE_T3392206411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyProductAttribute
struct  AssemblyProductAttribute_t3392206411  : public Attribute_t1543762533
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t3392206411, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYPRODUCTATTRIBUTE_T3392206411_H
#ifndef ASSEMBLYTITLEATTRIBUTE_T1841401628_H
#define ASSEMBLYTITLEATTRIBUTE_T1841401628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTitleAttribute
struct  AssemblyTitleAttribute_t1841401628  : public Attribute_t1543762533
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_t1841401628, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTITLEATTRIBUTE_T1841401628_H
#ifndef ASSEMBLYTRADEMARKATTRIBUTE_T27724473_H
#define ASSEMBLYTRADEMARKATTRIBUTE_T27724473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTrademarkAttribute
struct  AssemblyTrademarkAttribute_t27724473  : public Attribute_t1543762533
{
public:
	// System.String System.Reflection.AssemblyTrademarkAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyTrademarkAttribute_t27724473, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTRADEMARKATTRIBUTE_T27724473_H
#ifndef DEFAULT_T3682774473_H
#define DEFAULT_T3682774473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder/Default
struct  Default_t3682774473  : public Binder_t2916881575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULT_T3682774473_H
#ifndef PARAMETERMODIFIER_T3773948313_H
#define PARAMETERMODIFIER_T3773948313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t3773948313 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t3932380833* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t3773948313, ____byref_0)); }
	inline BooleanU5BU5D_t3932380833* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t3932380833** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t3932380833* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t3773948313_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t3773948313_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T3773948313_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T1365654730_H
#define ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T1365654730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyInformationalVersionAttribute
struct  AssemblyInformationalVersionAttribute_t1365654730  : public Attribute_t1543762533
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t1365654730, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T1365654730_H
#ifndef METHODBASE_T1974324469_H
#define METHODBASE_T1974324469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t1974324469  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T1974324469_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef TARGETINVOCATIONEXCEPTION_T1601342614_H
#define TARGETINVOCATIONEXCEPTION_T1601342614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t1601342614  : public Exception_t871969127
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINVOCATIONEXCEPTION_T1601342614_H
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
#ifndef ILTOKENINFO_T973482795_H
#define ILTOKENINFO_T973482795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILTokenInfo
struct  ILTokenInfo_t973482795 
{
public:
	// System.Reflection.MemberInfo System.Reflection.Emit.ILTokenInfo::member
	MemberInfo_t * ___member_0;
	// System.Int32 System.Reflection.Emit.ILTokenInfo::code_pos
	int32_t ___code_pos_1;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(ILTokenInfo_t973482795, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_code_pos_1() { return static_cast<int32_t>(offsetof(ILTokenInfo_t973482795, ___code_pos_1)); }
	inline int32_t get_code_pos_1() const { return ___code_pos_1; }
	inline int32_t* get_address_of_code_pos_1() { return &___code_pos_1; }
	inline void set_code_pos_1(int32_t value)
	{
		___code_pos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.ILTokenInfo
struct ILTokenInfo_t973482795_marshaled_pinvoke
{
	MemberInfo_t * ___member_0;
	int32_t ___code_pos_1;
};
// Native definition for COM marshalling of System.Reflection.Emit.ILTokenInfo
struct ILTokenInfo_t973482795_marshaled_com
{
	MemberInfo_t * ___member_0;
	int32_t ___code_pos_1;
};
#endif // ILTOKENINFO_T973482795_H
#ifndef LABELFIXUP_T3371994128_H
#define LABELFIXUP_T3371994128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelFixup
struct  LabelFixup_t3371994128 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::offset
	int32_t ___offset_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::pos
	int32_t ___pos_1;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::label_idx
	int32_t ___label_idx_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(LabelFixup_t3371994128, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(LabelFixup_t3371994128, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_label_idx_2() { return static_cast<int32_t>(offsetof(LabelFixup_t3371994128, ___label_idx_2)); }
	inline int32_t get_label_idx_2() const { return ___label_idx_2; }
	inline int32_t* get_address_of_label_idx_2() { return &___label_idx_2; }
	inline void set_label_idx_2(int32_t value)
	{
		___label_idx_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELFIXUP_T3371994128_H
#ifndef LABELDATA_T893095901_H
#define LABELDATA_T893095901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelData
struct  LabelData_t893095901 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::addr
	int32_t ___addr_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::maxStack
	int32_t ___maxStack_1;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(LabelData_t893095901, ___addr_0)); }
	inline int32_t get_addr_0() const { return ___addr_0; }
	inline int32_t* get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(int32_t value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_maxStack_1() { return static_cast<int32_t>(offsetof(LabelData_t893095901, ___maxStack_1)); }
	inline int32_t get_maxStack_1() const { return ___maxStack_1; }
	inline int32_t* get_address_of_maxStack_1() { return &___maxStack_1; }
	inline void set_maxStack_1(int32_t value)
	{
		___maxStack_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELDATA_T893095901_H
#ifndef LABEL_T4025996438_H
#define LABEL_T4025996438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.Label
struct  Label_t4025996438 
{
public:
	// System.Int32 System.Reflection.Emit.Label::label
	int32_t ___label_0;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(Label_t4025996438, ___label_0)); }
	inline int32_t get_label_0() const { return ___label_0; }
	inline int32_t* get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(int32_t value)
	{
		___label_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABEL_T4025996438_H
#ifndef LOCALBUILDER_T1471418515_H
#define LOCALBUILDER_T1471418515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.LocalBuilder
struct  LocalBuilder_t1471418515  : public LocalVariableInfo_t589738243
{
public:
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.LocalBuilder::ilgen
	ILGenerator_t3929519702 * ___ilgen_3;

public:
	inline static int32_t get_offset_of_ilgen_3() { return static_cast<int32_t>(offsetof(LocalBuilder_t1471418515, ___ilgen_3)); }
	inline ILGenerator_t3929519702 * get_ilgen_3() const { return ___ilgen_3; }
	inline ILGenerator_t3929519702 ** get_address_of_ilgen_3() { return &___ilgen_3; }
	inline void set_ilgen_3(ILGenerator_t3929519702 * value)
	{
		___ilgen_3 = value;
		Il2CppCodeGenWriteBarrier((&___ilgen_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALBUILDER_T1471418515_H
#ifndef ASSEMBLYCOMPANYATTRIBUTE_T2345724357_H
#define ASSEMBLYCOMPANYATTRIBUTE_T2345724357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCompanyAttribute
struct  AssemblyCompanyAttribute_t2345724357  : public Attribute_t1543762533
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t2345724357, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOMPANYATTRIBUTE_T2345724357_H
#ifndef METHODTOKEN_T257534408_H
#define METHODTOKEN_T257534408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MethodToken
struct  MethodToken_t257534408 
{
public:
	// System.Int32 System.Reflection.Emit.MethodToken::tokValue
	int32_t ___tokValue_0;

public:
	inline static int32_t get_offset_of_tokValue_0() { return static_cast<int32_t>(offsetof(MethodToken_t257534408, ___tokValue_0)); }
	inline int32_t get_tokValue_0() const { return ___tokValue_0; }
	inline int32_t* get_address_of_tokValue_0() { return &___tokValue_0; }
	inline void set_tokValue_0(int32_t value)
	{
		___tokValue_0 = value;
	}
};

struct MethodToken_t257534408_StaticFields
{
public:
	// System.Reflection.Emit.MethodToken System.Reflection.Emit.MethodToken::Empty
	MethodToken_t257534408  ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(MethodToken_t257534408_StaticFields, ___Empty_1)); }
	inline MethodToken_t257534408  get_Empty_1() const { return ___Empty_1; }
	inline MethodToken_t257534408 * get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(MethodToken_t257534408  value)
	{
		___Empty_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODTOKEN_T257534408_H
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
#ifndef SYSTEMEXCEPTION_T2736349149_H
#define SYSTEMEXCEPTION_T2736349149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t2736349149  : public Exception_t871969127
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T2736349149_H
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
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3289724300_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3289724300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
struct  NeutralResourcesLanguageAttribute_t3289724300  : public Attribute_t1543762533
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::culture
	String_t* ___culture_0;

public:
	inline static int32_t get_offset_of_culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t3289724300, ___culture_0)); }
	inline String_t* get_culture_0() const { return ___culture_0; }
	inline String_t** get_address_of_culture_0() { return &___culture_0; }
	inline void set_culture_0(String_t* value)
	{
		___culture_0 = value;
		Il2CppCodeGenWriteBarrier((&___culture_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3289724300_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t145792988 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t145792988 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t145792988 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t145792988 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T608700186_H
#define TARGETPARAMETERCOUNTEXCEPTION_T608700186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t608700186  : public Exception_t871969127
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETPARAMETERCOUNTEXCEPTION_T608700186_H
#ifndef OPCODE_T1087150903_H
#define OPCODE_T1087150903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCode
struct  OpCode_t1087150903 
{
public:
	// System.Byte System.Reflection.Emit.OpCode::op1
	uint8_t ___op1_0;
	// System.Byte System.Reflection.Emit.OpCode::op2
	uint8_t ___op2_1;
	// System.Byte System.Reflection.Emit.OpCode::push
	uint8_t ___push_2;
	// System.Byte System.Reflection.Emit.OpCode::pop
	uint8_t ___pop_3;
	// System.Byte System.Reflection.Emit.OpCode::size
	uint8_t ___size_4;
	// System.Byte System.Reflection.Emit.OpCode::type
	uint8_t ___type_5;
	// System.Byte System.Reflection.Emit.OpCode::args
	uint8_t ___args_6;
	// System.Byte System.Reflection.Emit.OpCode::flow
	uint8_t ___flow_7;

public:
	inline static int32_t get_offset_of_op1_0() { return static_cast<int32_t>(offsetof(OpCode_t1087150903, ___op1_0)); }
	inline uint8_t get_op1_0() const { return ___op1_0; }
	inline uint8_t* get_address_of_op1_0() { return &___op1_0; }
	inline void set_op1_0(uint8_t value)
	{
		___op1_0 = value;
	}

	inline static int32_t get_offset_of_op2_1() { return static_cast<int32_t>(offsetof(OpCode_t1087150903, ___op2_1)); }
	inline uint8_t get_op2_1() const { return ___op2_1; }
	inline uint8_t* get_address_of_op2_1() { return &___op2_1; }
	inline void set_op2_1(uint8_t value)
	{
		___op2_1 = value;
	}

	inline static int32_t get_offset_of_push_2() { return static_cast<int32_t>(offsetof(OpCode_t1087150903, ___push_2)); }
	inline uint8_t get_push_2() const { return ___push_2; }
	inline uint8_t* get_address_of_push_2() { return &___push_2; }
	inline void set_push_2(uint8_t value)
	{
		___push_2 = value;
	}

	inline static int32_t get_offset_of_pop_3() { return static_cast<int32_t>(offsetof(OpCode_t1087150903, ___pop_3)); }
	inline uint8_t get_pop_3() const { return ___pop_3; }
	inline uint8_t* get_address_of_pop_3() { return &___pop_3; }
	inline void set_pop_3(uint8_t value)
	{
		___pop_3 = value;
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(OpCode_t1087150903, ___size_4)); }
	inline uint8_t get_size_4() const { return ___size_4; }
	inline uint8_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(uint8_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(OpCode_t1087150903, ___type_5)); }
	inline uint8_t get_type_5() const { return ___type_5; }
	inline uint8_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(uint8_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_args_6() { return static_cast<int32_t>(offsetof(OpCode_t1087150903, ___args_6)); }
	inline uint8_t get_args_6() const { return ___args_6; }
	inline uint8_t* get_address_of_args_6() { return &___args_6; }
	inline void set_args_6(uint8_t value)
	{
		___args_6 = value;
	}

	inline static int32_t get_offset_of_flow_7() { return static_cast<int32_t>(offsetof(OpCode_t1087150903, ___flow_7)); }
	inline uint8_t get_flow_7() const { return ___flow_7; }
	inline uint8_t* get_address_of_flow_7() { return &___flow_7; }
	inline void set_flow_7(uint8_t value)
	{
		___flow_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODE_T1087150903_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T3236469821_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T3236469821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t3236469821 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t3236469821, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t3236469821, ___value_1)); }
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
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t3236469821_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t3236469821_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T3236469821_H
#ifndef PINFO_T537301144_H
#define PINFO_T537301144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PInfo
struct  PInfo_t537301144 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PInfo_t537301144, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PINFO_T537301144_H
#ifndef PARAMETERATTRIBUTES_T2964921339_H
#define PARAMETERATTRIBUTES_T2964921339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t2964921339 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t2964921339, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERATTRIBUTES_T2964921339_H
#ifndef MONOEVENT_T_H
#define MONOEVENT_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEvent
struct  MonoEvent_t  : public EventInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoEvent::klass
	IntPtr_t ___klass_1;
	// System.IntPtr System.Reflection.MonoEvent::handle
	IntPtr_t ___handle_2;

public:
	inline static int32_t get_offset_of_klass_1() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___klass_1)); }
	inline IntPtr_t get_klass_1() const { return ___klass_1; }
	inline IntPtr_t* get_address_of_klass_1() { return &___klass_1; }
	inline void set_klass_1(IntPtr_t value)
	{
		___klass_1 = value;
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___handle_2)); }
	inline IntPtr_t get_handle_2() const { return ___handle_2; }
	inline IntPtr_t* get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(IntPtr_t value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOEVENT_T_H
#ifndef FIELDATTRIBUTES_T747487871_H
#define FIELDATTRIBUTES_T747487871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t747487871 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FieldAttributes_t747487871, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDATTRIBUTES_T747487871_H
#ifndef PROPERTYATTRIBUTES_T4074471355_H
#define PROPERTYATTRIBUTES_T4074471355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyAttributes
struct  PropertyAttributes_t4074471355 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyAttributes_t4074471355, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTES_T4074471355_H
#ifndef RESOURCEATTRIBUTES_T1788242755_H
#define RESOURCEATTRIBUTES_T1788242755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResourceAttributes
struct  ResourceAttributes_t1788242755 
{
public:
	// System.Int32 System.Reflection.ResourceAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceAttributes_t1788242755, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEATTRIBUTES_T1788242755_H
#ifndef RESOURCELOCATION_T3110687668_H
#define RESOURCELOCATION_T3110687668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResourceLocation
struct  ResourceLocation_t3110687668 
{
public:
	// System.Int32 System.Reflection.ResourceLocation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceLocation_t3110687668, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCELOCATION_T3110687668_H
#ifndef TYPEATTRIBUTES_T3753556479_H
#define TYPEATTRIBUTES_T3753556479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeAttributes
struct  TypeAttributes_t3753556479 
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t3753556479, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEATTRIBUTES_T3753556479_H
#ifndef RUNTIMEMETHODHANDLE_T2181030097_H
#define RUNTIMEMETHODHANDLE_T2181030097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t2181030097 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t2181030097, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMETHODHANDLE_T2181030097_H
#ifndef UNMANAGEDTYPE_T1502286734_H
#define UNMANAGEDTYPE_T1502286734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t1502286734 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t1502286734, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDTYPE_T1502286734_H
#ifndef ASSEMBLYHASHALGORITHM_T1316225089_H
#define ASSEMBLYHASHALGORITHM_T1316225089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t1316225089 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t1316225089, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYHASHALGORITHM_T1316225089_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T3684134491_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T3684134491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t3684134491 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t3684134491, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T3684134491_H
#ifndef RUNTIMEFIELDHANDLE_T1797146554_H
#define RUNTIMEFIELDHANDLE_T1797146554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1797146554 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1797146554, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1797146554_H
#ifndef PROCESSORARCHITECTURE_T523647621_H
#define PROCESSORARCHITECTURE_T523647621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t523647621 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t523647621, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSORARCHITECTURE_T523647621_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t1974324469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef DELEGATE_T417437614_H
#define DELEGATE_T417437614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t417437614  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t4063697696 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t417437614, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t417437614, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t417437614, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t417437614, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t417437614, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t417437614, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t417437614, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t417437614, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t417437614, ___data_8)); }
	inline DelegateData_t4063697696 * get_data_8() const { return ___data_8; }
	inline DelegateData_t4063697696 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t4063697696 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T417437614_H
#ifndef METHODATTRIBUTES_T2273096568_H
#define METHODATTRIBUTES_T2273096568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t2273096568 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodAttributes_t2273096568, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODATTRIBUTES_T2273096568_H
#ifndef OPCODES_T2663897137_H
#define OPCODES_T2663897137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCodes
struct  OpCodes_t2663897137  : public RuntimeObject
{
public:

public:
};

struct OpCodes_t2663897137_StaticFields
{
public:
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Nop
	OpCode_t1087150903  ___Nop_0;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Break
	OpCode_t1087150903  ___Break_1;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_0
	OpCode_t1087150903  ___Ldarg_0_2;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_1
	OpCode_t1087150903  ___Ldarg_1_3;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_2
	OpCode_t1087150903  ___Ldarg_2_4;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_3
	OpCode_t1087150903  ___Ldarg_3_5;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_0
	OpCode_t1087150903  ___Ldloc_0_6;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_1
	OpCode_t1087150903  ___Ldloc_1_7;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_2
	OpCode_t1087150903  ___Ldloc_2_8;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_3
	OpCode_t1087150903  ___Ldloc_3_9;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_0
	OpCode_t1087150903  ___Stloc_0_10;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_1
	OpCode_t1087150903  ___Stloc_1_11;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_2
	OpCode_t1087150903  ___Stloc_2_12;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_3
	OpCode_t1087150903  ___Stloc_3_13;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_S
	OpCode_t1087150903  ___Ldarg_S_14;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarga_S
	OpCode_t1087150903  ___Ldarga_S_15;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Starg_S
	OpCode_t1087150903  ___Starg_S_16;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_S
	OpCode_t1087150903  ___Ldloc_S_17;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloca_S
	OpCode_t1087150903  ___Ldloca_S_18;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_S
	OpCode_t1087150903  ___Stloc_S_19;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldnull
	OpCode_t1087150903  ___Ldnull_20;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_M1
	OpCode_t1087150903  ___Ldc_I4_M1_21;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_0
	OpCode_t1087150903  ___Ldc_I4_0_22;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_1
	OpCode_t1087150903  ___Ldc_I4_1_23;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_2
	OpCode_t1087150903  ___Ldc_I4_2_24;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_3
	OpCode_t1087150903  ___Ldc_I4_3_25;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_4
	OpCode_t1087150903  ___Ldc_I4_4_26;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_5
	OpCode_t1087150903  ___Ldc_I4_5_27;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_6
	OpCode_t1087150903  ___Ldc_I4_6_28;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_7
	OpCode_t1087150903  ___Ldc_I4_7_29;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_8
	OpCode_t1087150903  ___Ldc_I4_8_30;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_S
	OpCode_t1087150903  ___Ldc_I4_S_31;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4
	OpCode_t1087150903  ___Ldc_I4_32;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I8
	OpCode_t1087150903  ___Ldc_I8_33;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_R4
	OpCode_t1087150903  ___Ldc_R4_34;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_R8
	OpCode_t1087150903  ___Ldc_R8_35;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Dup
	OpCode_t1087150903  ___Dup_36;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Pop
	OpCode_t1087150903  ___Pop_37;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Jmp
	OpCode_t1087150903  ___Jmp_38;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Call
	OpCode_t1087150903  ___Call_39;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Calli
	OpCode_t1087150903  ___Calli_40;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ret
	OpCode_t1087150903  ___Ret_41;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Br_S
	OpCode_t1087150903  ___Br_S_42;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brfalse_S
	OpCode_t1087150903  ___Brfalse_S_43;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brtrue_S
	OpCode_t1087150903  ___Brtrue_S_44;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Beq_S
	OpCode_t1087150903  ___Beq_S_45;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_S
	OpCode_t1087150903  ___Bge_S_46;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_S
	OpCode_t1087150903  ___Bgt_S_47;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_S
	OpCode_t1087150903  ___Ble_S_48;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_S
	OpCode_t1087150903  ___Blt_S_49;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bne_Un_S
	OpCode_t1087150903  ___Bne_Un_S_50;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_Un_S
	OpCode_t1087150903  ___Bge_Un_S_51;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_Un_S
	OpCode_t1087150903  ___Bgt_Un_S_52;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_Un_S
	OpCode_t1087150903  ___Ble_Un_S_53;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_Un_S
	OpCode_t1087150903  ___Blt_Un_S_54;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Br
	OpCode_t1087150903  ___Br_55;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brfalse
	OpCode_t1087150903  ___Brfalse_56;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brtrue
	OpCode_t1087150903  ___Brtrue_57;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Beq
	OpCode_t1087150903  ___Beq_58;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge
	OpCode_t1087150903  ___Bge_59;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt
	OpCode_t1087150903  ___Bgt_60;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble
	OpCode_t1087150903  ___Ble_61;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt
	OpCode_t1087150903  ___Blt_62;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bne_Un
	OpCode_t1087150903  ___Bne_Un_63;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_Un
	OpCode_t1087150903  ___Bge_Un_64;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_Un
	OpCode_t1087150903  ___Bgt_Un_65;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_Un
	OpCode_t1087150903  ___Ble_Un_66;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_Un
	OpCode_t1087150903  ___Blt_Un_67;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Switch
	OpCode_t1087150903  ___Switch_68;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I1
	OpCode_t1087150903  ___Ldind_I1_69;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U1
	OpCode_t1087150903  ___Ldind_U1_70;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I2
	OpCode_t1087150903  ___Ldind_I2_71;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U2
	OpCode_t1087150903  ___Ldind_U2_72;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I4
	OpCode_t1087150903  ___Ldind_I4_73;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U4
	OpCode_t1087150903  ___Ldind_U4_74;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I8
	OpCode_t1087150903  ___Ldind_I8_75;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I
	OpCode_t1087150903  ___Ldind_I_76;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_R4
	OpCode_t1087150903  ___Ldind_R4_77;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_R8
	OpCode_t1087150903  ___Ldind_R8_78;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_Ref
	OpCode_t1087150903  ___Ldind_Ref_79;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_Ref
	OpCode_t1087150903  ___Stind_Ref_80;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I1
	OpCode_t1087150903  ___Stind_I1_81;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I2
	OpCode_t1087150903  ___Stind_I2_82;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I4
	OpCode_t1087150903  ___Stind_I4_83;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I8
	OpCode_t1087150903  ___Stind_I8_84;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_R4
	OpCode_t1087150903  ___Stind_R4_85;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_R8
	OpCode_t1087150903  ___Stind_R8_86;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add
	OpCode_t1087150903  ___Add_87;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub
	OpCode_t1087150903  ___Sub_88;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul
	OpCode_t1087150903  ___Mul_89;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Div
	OpCode_t1087150903  ___Div_90;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Div_Un
	OpCode_t1087150903  ___Div_Un_91;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rem
	OpCode_t1087150903  ___Rem_92;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rem_Un
	OpCode_t1087150903  ___Rem_Un_93;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::And
	OpCode_t1087150903  ___And_94;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Or
	OpCode_t1087150903  ___Or_95;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Xor
	OpCode_t1087150903  ___Xor_96;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shl
	OpCode_t1087150903  ___Shl_97;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shr
	OpCode_t1087150903  ___Shr_98;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shr_Un
	OpCode_t1087150903  ___Shr_Un_99;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Neg
	OpCode_t1087150903  ___Neg_100;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Not
	OpCode_t1087150903  ___Not_101;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I1
	OpCode_t1087150903  ___Conv_I1_102;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I2
	OpCode_t1087150903  ___Conv_I2_103;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I4
	OpCode_t1087150903  ___Conv_I4_104;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I8
	OpCode_t1087150903  ___Conv_I8_105;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R4
	OpCode_t1087150903  ___Conv_R4_106;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R8
	OpCode_t1087150903  ___Conv_R8_107;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U4
	OpCode_t1087150903  ___Conv_U4_108;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U8
	OpCode_t1087150903  ___Conv_U8_109;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Callvirt
	OpCode_t1087150903  ___Callvirt_110;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cpobj
	OpCode_t1087150903  ___Cpobj_111;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldobj
	OpCode_t1087150903  ___Ldobj_112;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldstr
	OpCode_t1087150903  ___Ldstr_113;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Newobj
	OpCode_t1087150903  ___Newobj_114;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Castclass
	OpCode_t1087150903  ___Castclass_115;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Isinst
	OpCode_t1087150903  ___Isinst_116;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R_Un
	OpCode_t1087150903  ___Conv_R_Un_117;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unbox
	OpCode_t1087150903  ___Unbox_118;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Throw
	OpCode_t1087150903  ___Throw_119;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldfld
	OpCode_t1087150903  ___Ldfld_120;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldflda
	OpCode_t1087150903  ___Ldflda_121;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stfld
	OpCode_t1087150903  ___Stfld_122;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldsfld
	OpCode_t1087150903  ___Ldsfld_123;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldsflda
	OpCode_t1087150903  ___Ldsflda_124;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stsfld
	OpCode_t1087150903  ___Stsfld_125;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stobj
	OpCode_t1087150903  ___Stobj_126;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I1_Un
	OpCode_t1087150903  ___Conv_Ovf_I1_Un_127;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I2_Un
	OpCode_t1087150903  ___Conv_Ovf_I2_Un_128;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I4_Un
	OpCode_t1087150903  ___Conv_Ovf_I4_Un_129;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I8_Un
	OpCode_t1087150903  ___Conv_Ovf_I8_Un_130;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U1_Un
	OpCode_t1087150903  ___Conv_Ovf_U1_Un_131;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U2_Un
	OpCode_t1087150903  ___Conv_Ovf_U2_Un_132;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U4_Un
	OpCode_t1087150903  ___Conv_Ovf_U4_Un_133;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U8_Un
	OpCode_t1087150903  ___Conv_Ovf_U8_Un_134;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I_Un
	OpCode_t1087150903  ___Conv_Ovf_I_Un_135;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U_Un
	OpCode_t1087150903  ___Conv_Ovf_U_Un_136;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Box
	OpCode_t1087150903  ___Box_137;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Newarr
	OpCode_t1087150903  ___Newarr_138;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldlen
	OpCode_t1087150903  ___Ldlen_139;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelema
	OpCode_t1087150903  ___Ldelema_140;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I1
	OpCode_t1087150903  ___Ldelem_I1_141;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U1
	OpCode_t1087150903  ___Ldelem_U1_142;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I2
	OpCode_t1087150903  ___Ldelem_I2_143;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U2
	OpCode_t1087150903  ___Ldelem_U2_144;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I4
	OpCode_t1087150903  ___Ldelem_I4_145;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U4
	OpCode_t1087150903  ___Ldelem_U4_146;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I8
	OpCode_t1087150903  ___Ldelem_I8_147;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I
	OpCode_t1087150903  ___Ldelem_I_148;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_R4
	OpCode_t1087150903  ___Ldelem_R4_149;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_R8
	OpCode_t1087150903  ___Ldelem_R8_150;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_Ref
	OpCode_t1087150903  ___Ldelem_Ref_151;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I
	OpCode_t1087150903  ___Stelem_I_152;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I1
	OpCode_t1087150903  ___Stelem_I1_153;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I2
	OpCode_t1087150903  ___Stelem_I2_154;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I4
	OpCode_t1087150903  ___Stelem_I4_155;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I8
	OpCode_t1087150903  ___Stelem_I8_156;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_R4
	OpCode_t1087150903  ___Stelem_R4_157;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_R8
	OpCode_t1087150903  ___Stelem_R8_158;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_Ref
	OpCode_t1087150903  ___Stelem_Ref_159;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem
	OpCode_t1087150903  ___Ldelem_160;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem
	OpCode_t1087150903  ___Stelem_161;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unbox_Any
	OpCode_t1087150903  ___Unbox_Any_162;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I1
	OpCode_t1087150903  ___Conv_Ovf_I1_163;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U1
	OpCode_t1087150903  ___Conv_Ovf_U1_164;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I2
	OpCode_t1087150903  ___Conv_Ovf_I2_165;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U2
	OpCode_t1087150903  ___Conv_Ovf_U2_166;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I4
	OpCode_t1087150903  ___Conv_Ovf_I4_167;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U4
	OpCode_t1087150903  ___Conv_Ovf_U4_168;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I8
	OpCode_t1087150903  ___Conv_Ovf_I8_169;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U8
	OpCode_t1087150903  ___Conv_Ovf_U8_170;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Refanyval
	OpCode_t1087150903  ___Refanyval_171;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ckfinite
	OpCode_t1087150903  ___Ckfinite_172;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mkrefany
	OpCode_t1087150903  ___Mkrefany_173;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldtoken
	OpCode_t1087150903  ___Ldtoken_174;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U2
	OpCode_t1087150903  ___Conv_U2_175;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U1
	OpCode_t1087150903  ___Conv_U1_176;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I
	OpCode_t1087150903  ___Conv_I_177;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I
	OpCode_t1087150903  ___Conv_Ovf_I_178;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U
	OpCode_t1087150903  ___Conv_Ovf_U_179;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add_Ovf
	OpCode_t1087150903  ___Add_Ovf_180;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add_Ovf_Un
	OpCode_t1087150903  ___Add_Ovf_Un_181;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul_Ovf
	OpCode_t1087150903  ___Mul_Ovf_182;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul_Ovf_Un
	OpCode_t1087150903  ___Mul_Ovf_Un_183;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub_Ovf
	OpCode_t1087150903  ___Sub_Ovf_184;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub_Ovf_Un
	OpCode_t1087150903  ___Sub_Ovf_Un_185;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Endfinally
	OpCode_t1087150903  ___Endfinally_186;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Leave
	OpCode_t1087150903  ___Leave_187;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Leave_S
	OpCode_t1087150903  ___Leave_S_188;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I
	OpCode_t1087150903  ___Stind_I_189;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U
	OpCode_t1087150903  ___Conv_U_190;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix7
	OpCode_t1087150903  ___Prefix7_191;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix6
	OpCode_t1087150903  ___Prefix6_192;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix5
	OpCode_t1087150903  ___Prefix5_193;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix4
	OpCode_t1087150903  ___Prefix4_194;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix3
	OpCode_t1087150903  ___Prefix3_195;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix2
	OpCode_t1087150903  ___Prefix2_196;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix1
	OpCode_t1087150903  ___Prefix1_197;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefixref
	OpCode_t1087150903  ___Prefixref_198;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Arglist
	OpCode_t1087150903  ___Arglist_199;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ceq
	OpCode_t1087150903  ___Ceq_200;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cgt
	OpCode_t1087150903  ___Cgt_201;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cgt_Un
	OpCode_t1087150903  ___Cgt_Un_202;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Clt
	OpCode_t1087150903  ___Clt_203;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Clt_Un
	OpCode_t1087150903  ___Clt_Un_204;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldftn
	OpCode_t1087150903  ___Ldftn_205;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldvirtftn
	OpCode_t1087150903  ___Ldvirtftn_206;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg
	OpCode_t1087150903  ___Ldarg_207;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarga
	OpCode_t1087150903  ___Ldarga_208;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Starg
	OpCode_t1087150903  ___Starg_209;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc
	OpCode_t1087150903  ___Ldloc_210;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloca
	OpCode_t1087150903  ___Ldloca_211;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc
	OpCode_t1087150903  ___Stloc_212;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Localloc
	OpCode_t1087150903  ___Localloc_213;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Endfilter
	OpCode_t1087150903  ___Endfilter_214;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unaligned
	OpCode_t1087150903  ___Unaligned_215;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Volatile
	OpCode_t1087150903  ___Volatile_216;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Tailcall
	OpCode_t1087150903  ___Tailcall_217;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Initobj
	OpCode_t1087150903  ___Initobj_218;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Constrained
	OpCode_t1087150903  ___Constrained_219;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cpblk
	OpCode_t1087150903  ___Cpblk_220;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Initblk
	OpCode_t1087150903  ___Initblk_221;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rethrow
	OpCode_t1087150903  ___Rethrow_222;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sizeof
	OpCode_t1087150903  ___Sizeof_223;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Refanytype
	OpCode_t1087150903  ___Refanytype_224;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Readonly
	OpCode_t1087150903  ___Readonly_225;

public:
	inline static int32_t get_offset_of_Nop_0() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Nop_0)); }
	inline OpCode_t1087150903  get_Nop_0() const { return ___Nop_0; }
	inline OpCode_t1087150903 * get_address_of_Nop_0() { return &___Nop_0; }
	inline void set_Nop_0(OpCode_t1087150903  value)
	{
		___Nop_0 = value;
	}

	inline static int32_t get_offset_of_Break_1() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Break_1)); }
	inline OpCode_t1087150903  get_Break_1() const { return ___Break_1; }
	inline OpCode_t1087150903 * get_address_of_Break_1() { return &___Break_1; }
	inline void set_Break_1(OpCode_t1087150903  value)
	{
		___Break_1 = value;
	}

	inline static int32_t get_offset_of_Ldarg_0_2() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldarg_0_2)); }
	inline OpCode_t1087150903  get_Ldarg_0_2() const { return ___Ldarg_0_2; }
	inline OpCode_t1087150903 * get_address_of_Ldarg_0_2() { return &___Ldarg_0_2; }
	inline void set_Ldarg_0_2(OpCode_t1087150903  value)
	{
		___Ldarg_0_2 = value;
	}

	inline static int32_t get_offset_of_Ldarg_1_3() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldarg_1_3)); }
	inline OpCode_t1087150903  get_Ldarg_1_3() const { return ___Ldarg_1_3; }
	inline OpCode_t1087150903 * get_address_of_Ldarg_1_3() { return &___Ldarg_1_3; }
	inline void set_Ldarg_1_3(OpCode_t1087150903  value)
	{
		___Ldarg_1_3 = value;
	}

	inline static int32_t get_offset_of_Ldarg_2_4() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldarg_2_4)); }
	inline OpCode_t1087150903  get_Ldarg_2_4() const { return ___Ldarg_2_4; }
	inline OpCode_t1087150903 * get_address_of_Ldarg_2_4() { return &___Ldarg_2_4; }
	inline void set_Ldarg_2_4(OpCode_t1087150903  value)
	{
		___Ldarg_2_4 = value;
	}

	inline static int32_t get_offset_of_Ldarg_3_5() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldarg_3_5)); }
	inline OpCode_t1087150903  get_Ldarg_3_5() const { return ___Ldarg_3_5; }
	inline OpCode_t1087150903 * get_address_of_Ldarg_3_5() { return &___Ldarg_3_5; }
	inline void set_Ldarg_3_5(OpCode_t1087150903  value)
	{
		___Ldarg_3_5 = value;
	}

	inline static int32_t get_offset_of_Ldloc_0_6() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldloc_0_6)); }
	inline OpCode_t1087150903  get_Ldloc_0_6() const { return ___Ldloc_0_6; }
	inline OpCode_t1087150903 * get_address_of_Ldloc_0_6() { return &___Ldloc_0_6; }
	inline void set_Ldloc_0_6(OpCode_t1087150903  value)
	{
		___Ldloc_0_6 = value;
	}

	inline static int32_t get_offset_of_Ldloc_1_7() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldloc_1_7)); }
	inline OpCode_t1087150903  get_Ldloc_1_7() const { return ___Ldloc_1_7; }
	inline OpCode_t1087150903 * get_address_of_Ldloc_1_7() { return &___Ldloc_1_7; }
	inline void set_Ldloc_1_7(OpCode_t1087150903  value)
	{
		___Ldloc_1_7 = value;
	}

	inline static int32_t get_offset_of_Ldloc_2_8() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldloc_2_8)); }
	inline OpCode_t1087150903  get_Ldloc_2_8() const { return ___Ldloc_2_8; }
	inline OpCode_t1087150903 * get_address_of_Ldloc_2_8() { return &___Ldloc_2_8; }
	inline void set_Ldloc_2_8(OpCode_t1087150903  value)
	{
		___Ldloc_2_8 = value;
	}

	inline static int32_t get_offset_of_Ldloc_3_9() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldloc_3_9)); }
	inline OpCode_t1087150903  get_Ldloc_3_9() const { return ___Ldloc_3_9; }
	inline OpCode_t1087150903 * get_address_of_Ldloc_3_9() { return &___Ldloc_3_9; }
	inline void set_Ldloc_3_9(OpCode_t1087150903  value)
	{
		___Ldloc_3_9 = value;
	}

	inline static int32_t get_offset_of_Stloc_0_10() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stloc_0_10)); }
	inline OpCode_t1087150903  get_Stloc_0_10() const { return ___Stloc_0_10; }
	inline OpCode_t1087150903 * get_address_of_Stloc_0_10() { return &___Stloc_0_10; }
	inline void set_Stloc_0_10(OpCode_t1087150903  value)
	{
		___Stloc_0_10 = value;
	}

	inline static int32_t get_offset_of_Stloc_1_11() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stloc_1_11)); }
	inline OpCode_t1087150903  get_Stloc_1_11() const { return ___Stloc_1_11; }
	inline OpCode_t1087150903 * get_address_of_Stloc_1_11() { return &___Stloc_1_11; }
	inline void set_Stloc_1_11(OpCode_t1087150903  value)
	{
		___Stloc_1_11 = value;
	}

	inline static int32_t get_offset_of_Stloc_2_12() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stloc_2_12)); }
	inline OpCode_t1087150903  get_Stloc_2_12() const { return ___Stloc_2_12; }
	inline OpCode_t1087150903 * get_address_of_Stloc_2_12() { return &___Stloc_2_12; }
	inline void set_Stloc_2_12(OpCode_t1087150903  value)
	{
		___Stloc_2_12 = value;
	}

	inline static int32_t get_offset_of_Stloc_3_13() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stloc_3_13)); }
	inline OpCode_t1087150903  get_Stloc_3_13() const { return ___Stloc_3_13; }
	inline OpCode_t1087150903 * get_address_of_Stloc_3_13() { return &___Stloc_3_13; }
	inline void set_Stloc_3_13(OpCode_t1087150903  value)
	{
		___Stloc_3_13 = value;
	}

	inline static int32_t get_offset_of_Ldarg_S_14() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldarg_S_14)); }
	inline OpCode_t1087150903  get_Ldarg_S_14() const { return ___Ldarg_S_14; }
	inline OpCode_t1087150903 * get_address_of_Ldarg_S_14() { return &___Ldarg_S_14; }
	inline void set_Ldarg_S_14(OpCode_t1087150903  value)
	{
		___Ldarg_S_14 = value;
	}

	inline static int32_t get_offset_of_Ldarga_S_15() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldarga_S_15)); }
	inline OpCode_t1087150903  get_Ldarga_S_15() const { return ___Ldarga_S_15; }
	inline OpCode_t1087150903 * get_address_of_Ldarga_S_15() { return &___Ldarga_S_15; }
	inline void set_Ldarga_S_15(OpCode_t1087150903  value)
	{
		___Ldarga_S_15 = value;
	}

	inline static int32_t get_offset_of_Starg_S_16() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Starg_S_16)); }
	inline OpCode_t1087150903  get_Starg_S_16() const { return ___Starg_S_16; }
	inline OpCode_t1087150903 * get_address_of_Starg_S_16() { return &___Starg_S_16; }
	inline void set_Starg_S_16(OpCode_t1087150903  value)
	{
		___Starg_S_16 = value;
	}

	inline static int32_t get_offset_of_Ldloc_S_17() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldloc_S_17)); }
	inline OpCode_t1087150903  get_Ldloc_S_17() const { return ___Ldloc_S_17; }
	inline OpCode_t1087150903 * get_address_of_Ldloc_S_17() { return &___Ldloc_S_17; }
	inline void set_Ldloc_S_17(OpCode_t1087150903  value)
	{
		___Ldloc_S_17 = value;
	}

	inline static int32_t get_offset_of_Ldloca_S_18() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldloca_S_18)); }
	inline OpCode_t1087150903  get_Ldloca_S_18() const { return ___Ldloca_S_18; }
	inline OpCode_t1087150903 * get_address_of_Ldloca_S_18() { return &___Ldloca_S_18; }
	inline void set_Ldloca_S_18(OpCode_t1087150903  value)
	{
		___Ldloca_S_18 = value;
	}

	inline static int32_t get_offset_of_Stloc_S_19() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stloc_S_19)); }
	inline OpCode_t1087150903  get_Stloc_S_19() const { return ___Stloc_S_19; }
	inline OpCode_t1087150903 * get_address_of_Stloc_S_19() { return &___Stloc_S_19; }
	inline void set_Stloc_S_19(OpCode_t1087150903  value)
	{
		___Stloc_S_19 = value;
	}

	inline static int32_t get_offset_of_Ldnull_20() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldnull_20)); }
	inline OpCode_t1087150903  get_Ldnull_20() const { return ___Ldnull_20; }
	inline OpCode_t1087150903 * get_address_of_Ldnull_20() { return &___Ldnull_20; }
	inline void set_Ldnull_20(OpCode_t1087150903  value)
	{
		___Ldnull_20 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_M1_21() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldc_I4_M1_21)); }
	inline OpCode_t1087150903  get_Ldc_I4_M1_21() const { return ___Ldc_I4_M1_21; }
	inline OpCode_t1087150903 * get_address_of_Ldc_I4_M1_21() { return &___Ldc_I4_M1_21; }
	inline void set_Ldc_I4_M1_21(OpCode_t1087150903  value)
	{
		___Ldc_I4_M1_21 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_0_22() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldc_I4_0_22)); }
	inline OpCode_t1087150903  get_Ldc_I4_0_22() const { return ___Ldc_I4_0_22; }
	inline OpCode_t1087150903 * get_address_of_Ldc_I4_0_22() { return &___Ldc_I4_0_22; }
	inline void set_Ldc_I4_0_22(OpCode_t1087150903  value)
	{
		___Ldc_I4_0_22 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_1_23() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldc_I4_1_23)); }
	inline OpCode_t1087150903  get_Ldc_I4_1_23() const { return ___Ldc_I4_1_23; }
	inline OpCode_t1087150903 * get_address_of_Ldc_I4_1_23() { return &___Ldc_I4_1_23; }
	inline void set_Ldc_I4_1_23(OpCode_t1087150903  value)
	{
		___Ldc_I4_1_23 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_2_24() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldc_I4_2_24)); }
	inline OpCode_t1087150903  get_Ldc_I4_2_24() const { return ___Ldc_I4_2_24; }
	inline OpCode_t1087150903 * get_address_of_Ldc_I4_2_24() { return &___Ldc_I4_2_24; }
	inline void set_Ldc_I4_2_24(OpCode_t1087150903  value)
	{
		___Ldc_I4_2_24 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_3_25() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldc_I4_3_25)); }
	inline OpCode_t1087150903  get_Ldc_I4_3_25() const { return ___Ldc_I4_3_25; }
	inline OpCode_t1087150903 * get_address_of_Ldc_I4_3_25() { return &___Ldc_I4_3_25; }
	inline void set_Ldc_I4_3_25(OpCode_t1087150903  value)
	{
		___Ldc_I4_3_25 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_4_26() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldc_I4_4_26)); }
	inline OpCode_t1087150903  get_Ldc_I4_4_26() const { return ___Ldc_I4_4_26; }
	inline OpCode_t1087150903 * get_address_of_Ldc_I4_4_26() { return &___Ldc_I4_4_26; }
	inline void set_Ldc_I4_4_26(OpCode_t1087150903  value)
	{
		___Ldc_I4_4_26 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_5_27() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldc_I4_5_27)); }
	inline OpCode_t1087150903  get_Ldc_I4_5_27() const { return ___Ldc_I4_5_27; }
	inline OpCode_t1087150903 * get_address_of_Ldc_I4_5_27() { return &___Ldc_I4_5_27; }
	inline void set_Ldc_I4_5_27(OpCode_t1087150903  value)
	{
		___Ldc_I4_5_27 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_6_28() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldc_I4_6_28)); }
	inline OpCode_t1087150903  get_Ldc_I4_6_28() const { return ___Ldc_I4_6_28; }
	inline OpCode_t1087150903 * get_address_of_Ldc_I4_6_28() { return &___Ldc_I4_6_28; }
	inline void set_Ldc_I4_6_28(OpCode_t1087150903  value)
	{
		___Ldc_I4_6_28 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_7_29() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldc_I4_7_29)); }
	inline OpCode_t1087150903  get_Ldc_I4_7_29() const { return ___Ldc_I4_7_29; }
	inline OpCode_t1087150903 * get_address_of_Ldc_I4_7_29() { return &___Ldc_I4_7_29; }
	inline void set_Ldc_I4_7_29(OpCode_t1087150903  value)
	{
		___Ldc_I4_7_29 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_8_30() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldc_I4_8_30)); }
	inline OpCode_t1087150903  get_Ldc_I4_8_30() const { return ___Ldc_I4_8_30; }
	inline OpCode_t1087150903 * get_address_of_Ldc_I4_8_30() { return &___Ldc_I4_8_30; }
	inline void set_Ldc_I4_8_30(OpCode_t1087150903  value)
	{
		___Ldc_I4_8_30 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_S_31() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldc_I4_S_31)); }
	inline OpCode_t1087150903  get_Ldc_I4_S_31() const { return ___Ldc_I4_S_31; }
	inline OpCode_t1087150903 * get_address_of_Ldc_I4_S_31() { return &___Ldc_I4_S_31; }
	inline void set_Ldc_I4_S_31(OpCode_t1087150903  value)
	{
		___Ldc_I4_S_31 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_32() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldc_I4_32)); }
	inline OpCode_t1087150903  get_Ldc_I4_32() const { return ___Ldc_I4_32; }
	inline OpCode_t1087150903 * get_address_of_Ldc_I4_32() { return &___Ldc_I4_32; }
	inline void set_Ldc_I4_32(OpCode_t1087150903  value)
	{
		___Ldc_I4_32 = value;
	}

	inline static int32_t get_offset_of_Ldc_I8_33() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldc_I8_33)); }
	inline OpCode_t1087150903  get_Ldc_I8_33() const { return ___Ldc_I8_33; }
	inline OpCode_t1087150903 * get_address_of_Ldc_I8_33() { return &___Ldc_I8_33; }
	inline void set_Ldc_I8_33(OpCode_t1087150903  value)
	{
		___Ldc_I8_33 = value;
	}

	inline static int32_t get_offset_of_Ldc_R4_34() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldc_R4_34)); }
	inline OpCode_t1087150903  get_Ldc_R4_34() const { return ___Ldc_R4_34; }
	inline OpCode_t1087150903 * get_address_of_Ldc_R4_34() { return &___Ldc_R4_34; }
	inline void set_Ldc_R4_34(OpCode_t1087150903  value)
	{
		___Ldc_R4_34 = value;
	}

	inline static int32_t get_offset_of_Ldc_R8_35() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldc_R8_35)); }
	inline OpCode_t1087150903  get_Ldc_R8_35() const { return ___Ldc_R8_35; }
	inline OpCode_t1087150903 * get_address_of_Ldc_R8_35() { return &___Ldc_R8_35; }
	inline void set_Ldc_R8_35(OpCode_t1087150903  value)
	{
		___Ldc_R8_35 = value;
	}

	inline static int32_t get_offset_of_Dup_36() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Dup_36)); }
	inline OpCode_t1087150903  get_Dup_36() const { return ___Dup_36; }
	inline OpCode_t1087150903 * get_address_of_Dup_36() { return &___Dup_36; }
	inline void set_Dup_36(OpCode_t1087150903  value)
	{
		___Dup_36 = value;
	}

	inline static int32_t get_offset_of_Pop_37() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Pop_37)); }
	inline OpCode_t1087150903  get_Pop_37() const { return ___Pop_37; }
	inline OpCode_t1087150903 * get_address_of_Pop_37() { return &___Pop_37; }
	inline void set_Pop_37(OpCode_t1087150903  value)
	{
		___Pop_37 = value;
	}

	inline static int32_t get_offset_of_Jmp_38() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Jmp_38)); }
	inline OpCode_t1087150903  get_Jmp_38() const { return ___Jmp_38; }
	inline OpCode_t1087150903 * get_address_of_Jmp_38() { return &___Jmp_38; }
	inline void set_Jmp_38(OpCode_t1087150903  value)
	{
		___Jmp_38 = value;
	}

	inline static int32_t get_offset_of_Call_39() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Call_39)); }
	inline OpCode_t1087150903  get_Call_39() const { return ___Call_39; }
	inline OpCode_t1087150903 * get_address_of_Call_39() { return &___Call_39; }
	inline void set_Call_39(OpCode_t1087150903  value)
	{
		___Call_39 = value;
	}

	inline static int32_t get_offset_of_Calli_40() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Calli_40)); }
	inline OpCode_t1087150903  get_Calli_40() const { return ___Calli_40; }
	inline OpCode_t1087150903 * get_address_of_Calli_40() { return &___Calli_40; }
	inline void set_Calli_40(OpCode_t1087150903  value)
	{
		___Calli_40 = value;
	}

	inline static int32_t get_offset_of_Ret_41() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ret_41)); }
	inline OpCode_t1087150903  get_Ret_41() const { return ___Ret_41; }
	inline OpCode_t1087150903 * get_address_of_Ret_41() { return &___Ret_41; }
	inline void set_Ret_41(OpCode_t1087150903  value)
	{
		___Ret_41 = value;
	}

	inline static int32_t get_offset_of_Br_S_42() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Br_S_42)); }
	inline OpCode_t1087150903  get_Br_S_42() const { return ___Br_S_42; }
	inline OpCode_t1087150903 * get_address_of_Br_S_42() { return &___Br_S_42; }
	inline void set_Br_S_42(OpCode_t1087150903  value)
	{
		___Br_S_42 = value;
	}

	inline static int32_t get_offset_of_Brfalse_S_43() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Brfalse_S_43)); }
	inline OpCode_t1087150903  get_Brfalse_S_43() const { return ___Brfalse_S_43; }
	inline OpCode_t1087150903 * get_address_of_Brfalse_S_43() { return &___Brfalse_S_43; }
	inline void set_Brfalse_S_43(OpCode_t1087150903  value)
	{
		___Brfalse_S_43 = value;
	}

	inline static int32_t get_offset_of_Brtrue_S_44() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Brtrue_S_44)); }
	inline OpCode_t1087150903  get_Brtrue_S_44() const { return ___Brtrue_S_44; }
	inline OpCode_t1087150903 * get_address_of_Brtrue_S_44() { return &___Brtrue_S_44; }
	inline void set_Brtrue_S_44(OpCode_t1087150903  value)
	{
		___Brtrue_S_44 = value;
	}

	inline static int32_t get_offset_of_Beq_S_45() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Beq_S_45)); }
	inline OpCode_t1087150903  get_Beq_S_45() const { return ___Beq_S_45; }
	inline OpCode_t1087150903 * get_address_of_Beq_S_45() { return &___Beq_S_45; }
	inline void set_Beq_S_45(OpCode_t1087150903  value)
	{
		___Beq_S_45 = value;
	}

	inline static int32_t get_offset_of_Bge_S_46() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Bge_S_46)); }
	inline OpCode_t1087150903  get_Bge_S_46() const { return ___Bge_S_46; }
	inline OpCode_t1087150903 * get_address_of_Bge_S_46() { return &___Bge_S_46; }
	inline void set_Bge_S_46(OpCode_t1087150903  value)
	{
		___Bge_S_46 = value;
	}

	inline static int32_t get_offset_of_Bgt_S_47() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Bgt_S_47)); }
	inline OpCode_t1087150903  get_Bgt_S_47() const { return ___Bgt_S_47; }
	inline OpCode_t1087150903 * get_address_of_Bgt_S_47() { return &___Bgt_S_47; }
	inline void set_Bgt_S_47(OpCode_t1087150903  value)
	{
		___Bgt_S_47 = value;
	}

	inline static int32_t get_offset_of_Ble_S_48() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ble_S_48)); }
	inline OpCode_t1087150903  get_Ble_S_48() const { return ___Ble_S_48; }
	inline OpCode_t1087150903 * get_address_of_Ble_S_48() { return &___Ble_S_48; }
	inline void set_Ble_S_48(OpCode_t1087150903  value)
	{
		___Ble_S_48 = value;
	}

	inline static int32_t get_offset_of_Blt_S_49() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Blt_S_49)); }
	inline OpCode_t1087150903  get_Blt_S_49() const { return ___Blt_S_49; }
	inline OpCode_t1087150903 * get_address_of_Blt_S_49() { return &___Blt_S_49; }
	inline void set_Blt_S_49(OpCode_t1087150903  value)
	{
		___Blt_S_49 = value;
	}

	inline static int32_t get_offset_of_Bne_Un_S_50() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Bne_Un_S_50)); }
	inline OpCode_t1087150903  get_Bne_Un_S_50() const { return ___Bne_Un_S_50; }
	inline OpCode_t1087150903 * get_address_of_Bne_Un_S_50() { return &___Bne_Un_S_50; }
	inline void set_Bne_Un_S_50(OpCode_t1087150903  value)
	{
		___Bne_Un_S_50 = value;
	}

	inline static int32_t get_offset_of_Bge_Un_S_51() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Bge_Un_S_51)); }
	inline OpCode_t1087150903  get_Bge_Un_S_51() const { return ___Bge_Un_S_51; }
	inline OpCode_t1087150903 * get_address_of_Bge_Un_S_51() { return &___Bge_Un_S_51; }
	inline void set_Bge_Un_S_51(OpCode_t1087150903  value)
	{
		___Bge_Un_S_51 = value;
	}

	inline static int32_t get_offset_of_Bgt_Un_S_52() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Bgt_Un_S_52)); }
	inline OpCode_t1087150903  get_Bgt_Un_S_52() const { return ___Bgt_Un_S_52; }
	inline OpCode_t1087150903 * get_address_of_Bgt_Un_S_52() { return &___Bgt_Un_S_52; }
	inline void set_Bgt_Un_S_52(OpCode_t1087150903  value)
	{
		___Bgt_Un_S_52 = value;
	}

	inline static int32_t get_offset_of_Ble_Un_S_53() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ble_Un_S_53)); }
	inline OpCode_t1087150903  get_Ble_Un_S_53() const { return ___Ble_Un_S_53; }
	inline OpCode_t1087150903 * get_address_of_Ble_Un_S_53() { return &___Ble_Un_S_53; }
	inline void set_Ble_Un_S_53(OpCode_t1087150903  value)
	{
		___Ble_Un_S_53 = value;
	}

	inline static int32_t get_offset_of_Blt_Un_S_54() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Blt_Un_S_54)); }
	inline OpCode_t1087150903  get_Blt_Un_S_54() const { return ___Blt_Un_S_54; }
	inline OpCode_t1087150903 * get_address_of_Blt_Un_S_54() { return &___Blt_Un_S_54; }
	inline void set_Blt_Un_S_54(OpCode_t1087150903  value)
	{
		___Blt_Un_S_54 = value;
	}

	inline static int32_t get_offset_of_Br_55() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Br_55)); }
	inline OpCode_t1087150903  get_Br_55() const { return ___Br_55; }
	inline OpCode_t1087150903 * get_address_of_Br_55() { return &___Br_55; }
	inline void set_Br_55(OpCode_t1087150903  value)
	{
		___Br_55 = value;
	}

	inline static int32_t get_offset_of_Brfalse_56() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Brfalse_56)); }
	inline OpCode_t1087150903  get_Brfalse_56() const { return ___Brfalse_56; }
	inline OpCode_t1087150903 * get_address_of_Brfalse_56() { return &___Brfalse_56; }
	inline void set_Brfalse_56(OpCode_t1087150903  value)
	{
		___Brfalse_56 = value;
	}

	inline static int32_t get_offset_of_Brtrue_57() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Brtrue_57)); }
	inline OpCode_t1087150903  get_Brtrue_57() const { return ___Brtrue_57; }
	inline OpCode_t1087150903 * get_address_of_Brtrue_57() { return &___Brtrue_57; }
	inline void set_Brtrue_57(OpCode_t1087150903  value)
	{
		___Brtrue_57 = value;
	}

	inline static int32_t get_offset_of_Beq_58() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Beq_58)); }
	inline OpCode_t1087150903  get_Beq_58() const { return ___Beq_58; }
	inline OpCode_t1087150903 * get_address_of_Beq_58() { return &___Beq_58; }
	inline void set_Beq_58(OpCode_t1087150903  value)
	{
		___Beq_58 = value;
	}

	inline static int32_t get_offset_of_Bge_59() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Bge_59)); }
	inline OpCode_t1087150903  get_Bge_59() const { return ___Bge_59; }
	inline OpCode_t1087150903 * get_address_of_Bge_59() { return &___Bge_59; }
	inline void set_Bge_59(OpCode_t1087150903  value)
	{
		___Bge_59 = value;
	}

	inline static int32_t get_offset_of_Bgt_60() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Bgt_60)); }
	inline OpCode_t1087150903  get_Bgt_60() const { return ___Bgt_60; }
	inline OpCode_t1087150903 * get_address_of_Bgt_60() { return &___Bgt_60; }
	inline void set_Bgt_60(OpCode_t1087150903  value)
	{
		___Bgt_60 = value;
	}

	inline static int32_t get_offset_of_Ble_61() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ble_61)); }
	inline OpCode_t1087150903  get_Ble_61() const { return ___Ble_61; }
	inline OpCode_t1087150903 * get_address_of_Ble_61() { return &___Ble_61; }
	inline void set_Ble_61(OpCode_t1087150903  value)
	{
		___Ble_61 = value;
	}

	inline static int32_t get_offset_of_Blt_62() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Blt_62)); }
	inline OpCode_t1087150903  get_Blt_62() const { return ___Blt_62; }
	inline OpCode_t1087150903 * get_address_of_Blt_62() { return &___Blt_62; }
	inline void set_Blt_62(OpCode_t1087150903  value)
	{
		___Blt_62 = value;
	}

	inline static int32_t get_offset_of_Bne_Un_63() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Bne_Un_63)); }
	inline OpCode_t1087150903  get_Bne_Un_63() const { return ___Bne_Un_63; }
	inline OpCode_t1087150903 * get_address_of_Bne_Un_63() { return &___Bne_Un_63; }
	inline void set_Bne_Un_63(OpCode_t1087150903  value)
	{
		___Bne_Un_63 = value;
	}

	inline static int32_t get_offset_of_Bge_Un_64() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Bge_Un_64)); }
	inline OpCode_t1087150903  get_Bge_Un_64() const { return ___Bge_Un_64; }
	inline OpCode_t1087150903 * get_address_of_Bge_Un_64() { return &___Bge_Un_64; }
	inline void set_Bge_Un_64(OpCode_t1087150903  value)
	{
		___Bge_Un_64 = value;
	}

	inline static int32_t get_offset_of_Bgt_Un_65() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Bgt_Un_65)); }
	inline OpCode_t1087150903  get_Bgt_Un_65() const { return ___Bgt_Un_65; }
	inline OpCode_t1087150903 * get_address_of_Bgt_Un_65() { return &___Bgt_Un_65; }
	inline void set_Bgt_Un_65(OpCode_t1087150903  value)
	{
		___Bgt_Un_65 = value;
	}

	inline static int32_t get_offset_of_Ble_Un_66() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ble_Un_66)); }
	inline OpCode_t1087150903  get_Ble_Un_66() const { return ___Ble_Un_66; }
	inline OpCode_t1087150903 * get_address_of_Ble_Un_66() { return &___Ble_Un_66; }
	inline void set_Ble_Un_66(OpCode_t1087150903  value)
	{
		___Ble_Un_66 = value;
	}

	inline static int32_t get_offset_of_Blt_Un_67() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Blt_Un_67)); }
	inline OpCode_t1087150903  get_Blt_Un_67() const { return ___Blt_Un_67; }
	inline OpCode_t1087150903 * get_address_of_Blt_Un_67() { return &___Blt_Un_67; }
	inline void set_Blt_Un_67(OpCode_t1087150903  value)
	{
		___Blt_Un_67 = value;
	}

	inline static int32_t get_offset_of_Switch_68() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Switch_68)); }
	inline OpCode_t1087150903  get_Switch_68() const { return ___Switch_68; }
	inline OpCode_t1087150903 * get_address_of_Switch_68() { return &___Switch_68; }
	inline void set_Switch_68(OpCode_t1087150903  value)
	{
		___Switch_68 = value;
	}

	inline static int32_t get_offset_of_Ldind_I1_69() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldind_I1_69)); }
	inline OpCode_t1087150903  get_Ldind_I1_69() const { return ___Ldind_I1_69; }
	inline OpCode_t1087150903 * get_address_of_Ldind_I1_69() { return &___Ldind_I1_69; }
	inline void set_Ldind_I1_69(OpCode_t1087150903  value)
	{
		___Ldind_I1_69 = value;
	}

	inline static int32_t get_offset_of_Ldind_U1_70() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldind_U1_70)); }
	inline OpCode_t1087150903  get_Ldind_U1_70() const { return ___Ldind_U1_70; }
	inline OpCode_t1087150903 * get_address_of_Ldind_U1_70() { return &___Ldind_U1_70; }
	inline void set_Ldind_U1_70(OpCode_t1087150903  value)
	{
		___Ldind_U1_70 = value;
	}

	inline static int32_t get_offset_of_Ldind_I2_71() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldind_I2_71)); }
	inline OpCode_t1087150903  get_Ldind_I2_71() const { return ___Ldind_I2_71; }
	inline OpCode_t1087150903 * get_address_of_Ldind_I2_71() { return &___Ldind_I2_71; }
	inline void set_Ldind_I2_71(OpCode_t1087150903  value)
	{
		___Ldind_I2_71 = value;
	}

	inline static int32_t get_offset_of_Ldind_U2_72() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldind_U2_72)); }
	inline OpCode_t1087150903  get_Ldind_U2_72() const { return ___Ldind_U2_72; }
	inline OpCode_t1087150903 * get_address_of_Ldind_U2_72() { return &___Ldind_U2_72; }
	inline void set_Ldind_U2_72(OpCode_t1087150903  value)
	{
		___Ldind_U2_72 = value;
	}

	inline static int32_t get_offset_of_Ldind_I4_73() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldind_I4_73)); }
	inline OpCode_t1087150903  get_Ldind_I4_73() const { return ___Ldind_I4_73; }
	inline OpCode_t1087150903 * get_address_of_Ldind_I4_73() { return &___Ldind_I4_73; }
	inline void set_Ldind_I4_73(OpCode_t1087150903  value)
	{
		___Ldind_I4_73 = value;
	}

	inline static int32_t get_offset_of_Ldind_U4_74() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldind_U4_74)); }
	inline OpCode_t1087150903  get_Ldind_U4_74() const { return ___Ldind_U4_74; }
	inline OpCode_t1087150903 * get_address_of_Ldind_U4_74() { return &___Ldind_U4_74; }
	inline void set_Ldind_U4_74(OpCode_t1087150903  value)
	{
		___Ldind_U4_74 = value;
	}

	inline static int32_t get_offset_of_Ldind_I8_75() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldind_I8_75)); }
	inline OpCode_t1087150903  get_Ldind_I8_75() const { return ___Ldind_I8_75; }
	inline OpCode_t1087150903 * get_address_of_Ldind_I8_75() { return &___Ldind_I8_75; }
	inline void set_Ldind_I8_75(OpCode_t1087150903  value)
	{
		___Ldind_I8_75 = value;
	}

	inline static int32_t get_offset_of_Ldind_I_76() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldind_I_76)); }
	inline OpCode_t1087150903  get_Ldind_I_76() const { return ___Ldind_I_76; }
	inline OpCode_t1087150903 * get_address_of_Ldind_I_76() { return &___Ldind_I_76; }
	inline void set_Ldind_I_76(OpCode_t1087150903  value)
	{
		___Ldind_I_76 = value;
	}

	inline static int32_t get_offset_of_Ldind_R4_77() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldind_R4_77)); }
	inline OpCode_t1087150903  get_Ldind_R4_77() const { return ___Ldind_R4_77; }
	inline OpCode_t1087150903 * get_address_of_Ldind_R4_77() { return &___Ldind_R4_77; }
	inline void set_Ldind_R4_77(OpCode_t1087150903  value)
	{
		___Ldind_R4_77 = value;
	}

	inline static int32_t get_offset_of_Ldind_R8_78() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldind_R8_78)); }
	inline OpCode_t1087150903  get_Ldind_R8_78() const { return ___Ldind_R8_78; }
	inline OpCode_t1087150903 * get_address_of_Ldind_R8_78() { return &___Ldind_R8_78; }
	inline void set_Ldind_R8_78(OpCode_t1087150903  value)
	{
		___Ldind_R8_78 = value;
	}

	inline static int32_t get_offset_of_Ldind_Ref_79() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldind_Ref_79)); }
	inline OpCode_t1087150903  get_Ldind_Ref_79() const { return ___Ldind_Ref_79; }
	inline OpCode_t1087150903 * get_address_of_Ldind_Ref_79() { return &___Ldind_Ref_79; }
	inline void set_Ldind_Ref_79(OpCode_t1087150903  value)
	{
		___Ldind_Ref_79 = value;
	}

	inline static int32_t get_offset_of_Stind_Ref_80() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stind_Ref_80)); }
	inline OpCode_t1087150903  get_Stind_Ref_80() const { return ___Stind_Ref_80; }
	inline OpCode_t1087150903 * get_address_of_Stind_Ref_80() { return &___Stind_Ref_80; }
	inline void set_Stind_Ref_80(OpCode_t1087150903  value)
	{
		___Stind_Ref_80 = value;
	}

	inline static int32_t get_offset_of_Stind_I1_81() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stind_I1_81)); }
	inline OpCode_t1087150903  get_Stind_I1_81() const { return ___Stind_I1_81; }
	inline OpCode_t1087150903 * get_address_of_Stind_I1_81() { return &___Stind_I1_81; }
	inline void set_Stind_I1_81(OpCode_t1087150903  value)
	{
		___Stind_I1_81 = value;
	}

	inline static int32_t get_offset_of_Stind_I2_82() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stind_I2_82)); }
	inline OpCode_t1087150903  get_Stind_I2_82() const { return ___Stind_I2_82; }
	inline OpCode_t1087150903 * get_address_of_Stind_I2_82() { return &___Stind_I2_82; }
	inline void set_Stind_I2_82(OpCode_t1087150903  value)
	{
		___Stind_I2_82 = value;
	}

	inline static int32_t get_offset_of_Stind_I4_83() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stind_I4_83)); }
	inline OpCode_t1087150903  get_Stind_I4_83() const { return ___Stind_I4_83; }
	inline OpCode_t1087150903 * get_address_of_Stind_I4_83() { return &___Stind_I4_83; }
	inline void set_Stind_I4_83(OpCode_t1087150903  value)
	{
		___Stind_I4_83 = value;
	}

	inline static int32_t get_offset_of_Stind_I8_84() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stind_I8_84)); }
	inline OpCode_t1087150903  get_Stind_I8_84() const { return ___Stind_I8_84; }
	inline OpCode_t1087150903 * get_address_of_Stind_I8_84() { return &___Stind_I8_84; }
	inline void set_Stind_I8_84(OpCode_t1087150903  value)
	{
		___Stind_I8_84 = value;
	}

	inline static int32_t get_offset_of_Stind_R4_85() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stind_R4_85)); }
	inline OpCode_t1087150903  get_Stind_R4_85() const { return ___Stind_R4_85; }
	inline OpCode_t1087150903 * get_address_of_Stind_R4_85() { return &___Stind_R4_85; }
	inline void set_Stind_R4_85(OpCode_t1087150903  value)
	{
		___Stind_R4_85 = value;
	}

	inline static int32_t get_offset_of_Stind_R8_86() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stind_R8_86)); }
	inline OpCode_t1087150903  get_Stind_R8_86() const { return ___Stind_R8_86; }
	inline OpCode_t1087150903 * get_address_of_Stind_R8_86() { return &___Stind_R8_86; }
	inline void set_Stind_R8_86(OpCode_t1087150903  value)
	{
		___Stind_R8_86 = value;
	}

	inline static int32_t get_offset_of_Add_87() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Add_87)); }
	inline OpCode_t1087150903  get_Add_87() const { return ___Add_87; }
	inline OpCode_t1087150903 * get_address_of_Add_87() { return &___Add_87; }
	inline void set_Add_87(OpCode_t1087150903  value)
	{
		___Add_87 = value;
	}

	inline static int32_t get_offset_of_Sub_88() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Sub_88)); }
	inline OpCode_t1087150903  get_Sub_88() const { return ___Sub_88; }
	inline OpCode_t1087150903 * get_address_of_Sub_88() { return &___Sub_88; }
	inline void set_Sub_88(OpCode_t1087150903  value)
	{
		___Sub_88 = value;
	}

	inline static int32_t get_offset_of_Mul_89() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Mul_89)); }
	inline OpCode_t1087150903  get_Mul_89() const { return ___Mul_89; }
	inline OpCode_t1087150903 * get_address_of_Mul_89() { return &___Mul_89; }
	inline void set_Mul_89(OpCode_t1087150903  value)
	{
		___Mul_89 = value;
	}

	inline static int32_t get_offset_of_Div_90() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Div_90)); }
	inline OpCode_t1087150903  get_Div_90() const { return ___Div_90; }
	inline OpCode_t1087150903 * get_address_of_Div_90() { return &___Div_90; }
	inline void set_Div_90(OpCode_t1087150903  value)
	{
		___Div_90 = value;
	}

	inline static int32_t get_offset_of_Div_Un_91() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Div_Un_91)); }
	inline OpCode_t1087150903  get_Div_Un_91() const { return ___Div_Un_91; }
	inline OpCode_t1087150903 * get_address_of_Div_Un_91() { return &___Div_Un_91; }
	inline void set_Div_Un_91(OpCode_t1087150903  value)
	{
		___Div_Un_91 = value;
	}

	inline static int32_t get_offset_of_Rem_92() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Rem_92)); }
	inline OpCode_t1087150903  get_Rem_92() const { return ___Rem_92; }
	inline OpCode_t1087150903 * get_address_of_Rem_92() { return &___Rem_92; }
	inline void set_Rem_92(OpCode_t1087150903  value)
	{
		___Rem_92 = value;
	}

	inline static int32_t get_offset_of_Rem_Un_93() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Rem_Un_93)); }
	inline OpCode_t1087150903  get_Rem_Un_93() const { return ___Rem_Un_93; }
	inline OpCode_t1087150903 * get_address_of_Rem_Un_93() { return &___Rem_Un_93; }
	inline void set_Rem_Un_93(OpCode_t1087150903  value)
	{
		___Rem_Un_93 = value;
	}

	inline static int32_t get_offset_of_And_94() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___And_94)); }
	inline OpCode_t1087150903  get_And_94() const { return ___And_94; }
	inline OpCode_t1087150903 * get_address_of_And_94() { return &___And_94; }
	inline void set_And_94(OpCode_t1087150903  value)
	{
		___And_94 = value;
	}

	inline static int32_t get_offset_of_Or_95() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Or_95)); }
	inline OpCode_t1087150903  get_Or_95() const { return ___Or_95; }
	inline OpCode_t1087150903 * get_address_of_Or_95() { return &___Or_95; }
	inline void set_Or_95(OpCode_t1087150903  value)
	{
		___Or_95 = value;
	}

	inline static int32_t get_offset_of_Xor_96() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Xor_96)); }
	inline OpCode_t1087150903  get_Xor_96() const { return ___Xor_96; }
	inline OpCode_t1087150903 * get_address_of_Xor_96() { return &___Xor_96; }
	inline void set_Xor_96(OpCode_t1087150903  value)
	{
		___Xor_96 = value;
	}

	inline static int32_t get_offset_of_Shl_97() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Shl_97)); }
	inline OpCode_t1087150903  get_Shl_97() const { return ___Shl_97; }
	inline OpCode_t1087150903 * get_address_of_Shl_97() { return &___Shl_97; }
	inline void set_Shl_97(OpCode_t1087150903  value)
	{
		___Shl_97 = value;
	}

	inline static int32_t get_offset_of_Shr_98() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Shr_98)); }
	inline OpCode_t1087150903  get_Shr_98() const { return ___Shr_98; }
	inline OpCode_t1087150903 * get_address_of_Shr_98() { return &___Shr_98; }
	inline void set_Shr_98(OpCode_t1087150903  value)
	{
		___Shr_98 = value;
	}

	inline static int32_t get_offset_of_Shr_Un_99() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Shr_Un_99)); }
	inline OpCode_t1087150903  get_Shr_Un_99() const { return ___Shr_Un_99; }
	inline OpCode_t1087150903 * get_address_of_Shr_Un_99() { return &___Shr_Un_99; }
	inline void set_Shr_Un_99(OpCode_t1087150903  value)
	{
		___Shr_Un_99 = value;
	}

	inline static int32_t get_offset_of_Neg_100() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Neg_100)); }
	inline OpCode_t1087150903  get_Neg_100() const { return ___Neg_100; }
	inline OpCode_t1087150903 * get_address_of_Neg_100() { return &___Neg_100; }
	inline void set_Neg_100(OpCode_t1087150903  value)
	{
		___Neg_100 = value;
	}

	inline static int32_t get_offset_of_Not_101() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Not_101)); }
	inline OpCode_t1087150903  get_Not_101() const { return ___Not_101; }
	inline OpCode_t1087150903 * get_address_of_Not_101() { return &___Not_101; }
	inline void set_Not_101(OpCode_t1087150903  value)
	{
		___Not_101 = value;
	}

	inline static int32_t get_offset_of_Conv_I1_102() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_I1_102)); }
	inline OpCode_t1087150903  get_Conv_I1_102() const { return ___Conv_I1_102; }
	inline OpCode_t1087150903 * get_address_of_Conv_I1_102() { return &___Conv_I1_102; }
	inline void set_Conv_I1_102(OpCode_t1087150903  value)
	{
		___Conv_I1_102 = value;
	}

	inline static int32_t get_offset_of_Conv_I2_103() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_I2_103)); }
	inline OpCode_t1087150903  get_Conv_I2_103() const { return ___Conv_I2_103; }
	inline OpCode_t1087150903 * get_address_of_Conv_I2_103() { return &___Conv_I2_103; }
	inline void set_Conv_I2_103(OpCode_t1087150903  value)
	{
		___Conv_I2_103 = value;
	}

	inline static int32_t get_offset_of_Conv_I4_104() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_I4_104)); }
	inline OpCode_t1087150903  get_Conv_I4_104() const { return ___Conv_I4_104; }
	inline OpCode_t1087150903 * get_address_of_Conv_I4_104() { return &___Conv_I4_104; }
	inline void set_Conv_I4_104(OpCode_t1087150903  value)
	{
		___Conv_I4_104 = value;
	}

	inline static int32_t get_offset_of_Conv_I8_105() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_I8_105)); }
	inline OpCode_t1087150903  get_Conv_I8_105() const { return ___Conv_I8_105; }
	inline OpCode_t1087150903 * get_address_of_Conv_I8_105() { return &___Conv_I8_105; }
	inline void set_Conv_I8_105(OpCode_t1087150903  value)
	{
		___Conv_I8_105 = value;
	}

	inline static int32_t get_offset_of_Conv_R4_106() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_R4_106)); }
	inline OpCode_t1087150903  get_Conv_R4_106() const { return ___Conv_R4_106; }
	inline OpCode_t1087150903 * get_address_of_Conv_R4_106() { return &___Conv_R4_106; }
	inline void set_Conv_R4_106(OpCode_t1087150903  value)
	{
		___Conv_R4_106 = value;
	}

	inline static int32_t get_offset_of_Conv_R8_107() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_R8_107)); }
	inline OpCode_t1087150903  get_Conv_R8_107() const { return ___Conv_R8_107; }
	inline OpCode_t1087150903 * get_address_of_Conv_R8_107() { return &___Conv_R8_107; }
	inline void set_Conv_R8_107(OpCode_t1087150903  value)
	{
		___Conv_R8_107 = value;
	}

	inline static int32_t get_offset_of_Conv_U4_108() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_U4_108)); }
	inline OpCode_t1087150903  get_Conv_U4_108() const { return ___Conv_U4_108; }
	inline OpCode_t1087150903 * get_address_of_Conv_U4_108() { return &___Conv_U4_108; }
	inline void set_Conv_U4_108(OpCode_t1087150903  value)
	{
		___Conv_U4_108 = value;
	}

	inline static int32_t get_offset_of_Conv_U8_109() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_U8_109)); }
	inline OpCode_t1087150903  get_Conv_U8_109() const { return ___Conv_U8_109; }
	inline OpCode_t1087150903 * get_address_of_Conv_U8_109() { return &___Conv_U8_109; }
	inline void set_Conv_U8_109(OpCode_t1087150903  value)
	{
		___Conv_U8_109 = value;
	}

	inline static int32_t get_offset_of_Callvirt_110() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Callvirt_110)); }
	inline OpCode_t1087150903  get_Callvirt_110() const { return ___Callvirt_110; }
	inline OpCode_t1087150903 * get_address_of_Callvirt_110() { return &___Callvirt_110; }
	inline void set_Callvirt_110(OpCode_t1087150903  value)
	{
		___Callvirt_110 = value;
	}

	inline static int32_t get_offset_of_Cpobj_111() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Cpobj_111)); }
	inline OpCode_t1087150903  get_Cpobj_111() const { return ___Cpobj_111; }
	inline OpCode_t1087150903 * get_address_of_Cpobj_111() { return &___Cpobj_111; }
	inline void set_Cpobj_111(OpCode_t1087150903  value)
	{
		___Cpobj_111 = value;
	}

	inline static int32_t get_offset_of_Ldobj_112() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldobj_112)); }
	inline OpCode_t1087150903  get_Ldobj_112() const { return ___Ldobj_112; }
	inline OpCode_t1087150903 * get_address_of_Ldobj_112() { return &___Ldobj_112; }
	inline void set_Ldobj_112(OpCode_t1087150903  value)
	{
		___Ldobj_112 = value;
	}

	inline static int32_t get_offset_of_Ldstr_113() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldstr_113)); }
	inline OpCode_t1087150903  get_Ldstr_113() const { return ___Ldstr_113; }
	inline OpCode_t1087150903 * get_address_of_Ldstr_113() { return &___Ldstr_113; }
	inline void set_Ldstr_113(OpCode_t1087150903  value)
	{
		___Ldstr_113 = value;
	}

	inline static int32_t get_offset_of_Newobj_114() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Newobj_114)); }
	inline OpCode_t1087150903  get_Newobj_114() const { return ___Newobj_114; }
	inline OpCode_t1087150903 * get_address_of_Newobj_114() { return &___Newobj_114; }
	inline void set_Newobj_114(OpCode_t1087150903  value)
	{
		___Newobj_114 = value;
	}

	inline static int32_t get_offset_of_Castclass_115() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Castclass_115)); }
	inline OpCode_t1087150903  get_Castclass_115() const { return ___Castclass_115; }
	inline OpCode_t1087150903 * get_address_of_Castclass_115() { return &___Castclass_115; }
	inline void set_Castclass_115(OpCode_t1087150903  value)
	{
		___Castclass_115 = value;
	}

	inline static int32_t get_offset_of_Isinst_116() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Isinst_116)); }
	inline OpCode_t1087150903  get_Isinst_116() const { return ___Isinst_116; }
	inline OpCode_t1087150903 * get_address_of_Isinst_116() { return &___Isinst_116; }
	inline void set_Isinst_116(OpCode_t1087150903  value)
	{
		___Isinst_116 = value;
	}

	inline static int32_t get_offset_of_Conv_R_Un_117() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_R_Un_117)); }
	inline OpCode_t1087150903  get_Conv_R_Un_117() const { return ___Conv_R_Un_117; }
	inline OpCode_t1087150903 * get_address_of_Conv_R_Un_117() { return &___Conv_R_Un_117; }
	inline void set_Conv_R_Un_117(OpCode_t1087150903  value)
	{
		___Conv_R_Un_117 = value;
	}

	inline static int32_t get_offset_of_Unbox_118() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Unbox_118)); }
	inline OpCode_t1087150903  get_Unbox_118() const { return ___Unbox_118; }
	inline OpCode_t1087150903 * get_address_of_Unbox_118() { return &___Unbox_118; }
	inline void set_Unbox_118(OpCode_t1087150903  value)
	{
		___Unbox_118 = value;
	}

	inline static int32_t get_offset_of_Throw_119() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Throw_119)); }
	inline OpCode_t1087150903  get_Throw_119() const { return ___Throw_119; }
	inline OpCode_t1087150903 * get_address_of_Throw_119() { return &___Throw_119; }
	inline void set_Throw_119(OpCode_t1087150903  value)
	{
		___Throw_119 = value;
	}

	inline static int32_t get_offset_of_Ldfld_120() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldfld_120)); }
	inline OpCode_t1087150903  get_Ldfld_120() const { return ___Ldfld_120; }
	inline OpCode_t1087150903 * get_address_of_Ldfld_120() { return &___Ldfld_120; }
	inline void set_Ldfld_120(OpCode_t1087150903  value)
	{
		___Ldfld_120 = value;
	}

	inline static int32_t get_offset_of_Ldflda_121() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldflda_121)); }
	inline OpCode_t1087150903  get_Ldflda_121() const { return ___Ldflda_121; }
	inline OpCode_t1087150903 * get_address_of_Ldflda_121() { return &___Ldflda_121; }
	inline void set_Ldflda_121(OpCode_t1087150903  value)
	{
		___Ldflda_121 = value;
	}

	inline static int32_t get_offset_of_Stfld_122() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stfld_122)); }
	inline OpCode_t1087150903  get_Stfld_122() const { return ___Stfld_122; }
	inline OpCode_t1087150903 * get_address_of_Stfld_122() { return &___Stfld_122; }
	inline void set_Stfld_122(OpCode_t1087150903  value)
	{
		___Stfld_122 = value;
	}

	inline static int32_t get_offset_of_Ldsfld_123() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldsfld_123)); }
	inline OpCode_t1087150903  get_Ldsfld_123() const { return ___Ldsfld_123; }
	inline OpCode_t1087150903 * get_address_of_Ldsfld_123() { return &___Ldsfld_123; }
	inline void set_Ldsfld_123(OpCode_t1087150903  value)
	{
		___Ldsfld_123 = value;
	}

	inline static int32_t get_offset_of_Ldsflda_124() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldsflda_124)); }
	inline OpCode_t1087150903  get_Ldsflda_124() const { return ___Ldsflda_124; }
	inline OpCode_t1087150903 * get_address_of_Ldsflda_124() { return &___Ldsflda_124; }
	inline void set_Ldsflda_124(OpCode_t1087150903  value)
	{
		___Ldsflda_124 = value;
	}

	inline static int32_t get_offset_of_Stsfld_125() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stsfld_125)); }
	inline OpCode_t1087150903  get_Stsfld_125() const { return ___Stsfld_125; }
	inline OpCode_t1087150903 * get_address_of_Stsfld_125() { return &___Stsfld_125; }
	inline void set_Stsfld_125(OpCode_t1087150903  value)
	{
		___Stsfld_125 = value;
	}

	inline static int32_t get_offset_of_Stobj_126() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stobj_126)); }
	inline OpCode_t1087150903  get_Stobj_126() const { return ___Stobj_126; }
	inline OpCode_t1087150903 * get_address_of_Stobj_126() { return &___Stobj_126; }
	inline void set_Stobj_126(OpCode_t1087150903  value)
	{
		___Stobj_126 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I1_Un_127() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_I1_Un_127)); }
	inline OpCode_t1087150903  get_Conv_Ovf_I1_Un_127() const { return ___Conv_Ovf_I1_Un_127; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_I1_Un_127() { return &___Conv_Ovf_I1_Un_127; }
	inline void set_Conv_Ovf_I1_Un_127(OpCode_t1087150903  value)
	{
		___Conv_Ovf_I1_Un_127 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I2_Un_128() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_I2_Un_128)); }
	inline OpCode_t1087150903  get_Conv_Ovf_I2_Un_128() const { return ___Conv_Ovf_I2_Un_128; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_I2_Un_128() { return &___Conv_Ovf_I2_Un_128; }
	inline void set_Conv_Ovf_I2_Un_128(OpCode_t1087150903  value)
	{
		___Conv_Ovf_I2_Un_128 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I4_Un_129() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_I4_Un_129)); }
	inline OpCode_t1087150903  get_Conv_Ovf_I4_Un_129() const { return ___Conv_Ovf_I4_Un_129; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_I4_Un_129() { return &___Conv_Ovf_I4_Un_129; }
	inline void set_Conv_Ovf_I4_Un_129(OpCode_t1087150903  value)
	{
		___Conv_Ovf_I4_Un_129 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I8_Un_130() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_I8_Un_130)); }
	inline OpCode_t1087150903  get_Conv_Ovf_I8_Un_130() const { return ___Conv_Ovf_I8_Un_130; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_I8_Un_130() { return &___Conv_Ovf_I8_Un_130; }
	inline void set_Conv_Ovf_I8_Un_130(OpCode_t1087150903  value)
	{
		___Conv_Ovf_I8_Un_130 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U1_Un_131() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_U1_Un_131)); }
	inline OpCode_t1087150903  get_Conv_Ovf_U1_Un_131() const { return ___Conv_Ovf_U1_Un_131; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_U1_Un_131() { return &___Conv_Ovf_U1_Un_131; }
	inline void set_Conv_Ovf_U1_Un_131(OpCode_t1087150903  value)
	{
		___Conv_Ovf_U1_Un_131 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U2_Un_132() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_U2_Un_132)); }
	inline OpCode_t1087150903  get_Conv_Ovf_U2_Un_132() const { return ___Conv_Ovf_U2_Un_132; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_U2_Un_132() { return &___Conv_Ovf_U2_Un_132; }
	inline void set_Conv_Ovf_U2_Un_132(OpCode_t1087150903  value)
	{
		___Conv_Ovf_U2_Un_132 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U4_Un_133() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_U4_Un_133)); }
	inline OpCode_t1087150903  get_Conv_Ovf_U4_Un_133() const { return ___Conv_Ovf_U4_Un_133; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_U4_Un_133() { return &___Conv_Ovf_U4_Un_133; }
	inline void set_Conv_Ovf_U4_Un_133(OpCode_t1087150903  value)
	{
		___Conv_Ovf_U4_Un_133 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U8_Un_134() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_U8_Un_134)); }
	inline OpCode_t1087150903  get_Conv_Ovf_U8_Un_134() const { return ___Conv_Ovf_U8_Un_134; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_U8_Un_134() { return &___Conv_Ovf_U8_Un_134; }
	inline void set_Conv_Ovf_U8_Un_134(OpCode_t1087150903  value)
	{
		___Conv_Ovf_U8_Un_134 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I_Un_135() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_I_Un_135)); }
	inline OpCode_t1087150903  get_Conv_Ovf_I_Un_135() const { return ___Conv_Ovf_I_Un_135; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_I_Un_135() { return &___Conv_Ovf_I_Un_135; }
	inline void set_Conv_Ovf_I_Un_135(OpCode_t1087150903  value)
	{
		___Conv_Ovf_I_Un_135 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U_Un_136() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_U_Un_136)); }
	inline OpCode_t1087150903  get_Conv_Ovf_U_Un_136() const { return ___Conv_Ovf_U_Un_136; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_U_Un_136() { return &___Conv_Ovf_U_Un_136; }
	inline void set_Conv_Ovf_U_Un_136(OpCode_t1087150903  value)
	{
		___Conv_Ovf_U_Un_136 = value;
	}

	inline static int32_t get_offset_of_Box_137() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Box_137)); }
	inline OpCode_t1087150903  get_Box_137() const { return ___Box_137; }
	inline OpCode_t1087150903 * get_address_of_Box_137() { return &___Box_137; }
	inline void set_Box_137(OpCode_t1087150903  value)
	{
		___Box_137 = value;
	}

	inline static int32_t get_offset_of_Newarr_138() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Newarr_138)); }
	inline OpCode_t1087150903  get_Newarr_138() const { return ___Newarr_138; }
	inline OpCode_t1087150903 * get_address_of_Newarr_138() { return &___Newarr_138; }
	inline void set_Newarr_138(OpCode_t1087150903  value)
	{
		___Newarr_138 = value;
	}

	inline static int32_t get_offset_of_Ldlen_139() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldlen_139)); }
	inline OpCode_t1087150903  get_Ldlen_139() const { return ___Ldlen_139; }
	inline OpCode_t1087150903 * get_address_of_Ldlen_139() { return &___Ldlen_139; }
	inline void set_Ldlen_139(OpCode_t1087150903  value)
	{
		___Ldlen_139 = value;
	}

	inline static int32_t get_offset_of_Ldelema_140() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldelema_140)); }
	inline OpCode_t1087150903  get_Ldelema_140() const { return ___Ldelema_140; }
	inline OpCode_t1087150903 * get_address_of_Ldelema_140() { return &___Ldelema_140; }
	inline void set_Ldelema_140(OpCode_t1087150903  value)
	{
		___Ldelema_140 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I1_141() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldelem_I1_141)); }
	inline OpCode_t1087150903  get_Ldelem_I1_141() const { return ___Ldelem_I1_141; }
	inline OpCode_t1087150903 * get_address_of_Ldelem_I1_141() { return &___Ldelem_I1_141; }
	inline void set_Ldelem_I1_141(OpCode_t1087150903  value)
	{
		___Ldelem_I1_141 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U1_142() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldelem_U1_142)); }
	inline OpCode_t1087150903  get_Ldelem_U1_142() const { return ___Ldelem_U1_142; }
	inline OpCode_t1087150903 * get_address_of_Ldelem_U1_142() { return &___Ldelem_U1_142; }
	inline void set_Ldelem_U1_142(OpCode_t1087150903  value)
	{
		___Ldelem_U1_142 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I2_143() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldelem_I2_143)); }
	inline OpCode_t1087150903  get_Ldelem_I2_143() const { return ___Ldelem_I2_143; }
	inline OpCode_t1087150903 * get_address_of_Ldelem_I2_143() { return &___Ldelem_I2_143; }
	inline void set_Ldelem_I2_143(OpCode_t1087150903  value)
	{
		___Ldelem_I2_143 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U2_144() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldelem_U2_144)); }
	inline OpCode_t1087150903  get_Ldelem_U2_144() const { return ___Ldelem_U2_144; }
	inline OpCode_t1087150903 * get_address_of_Ldelem_U2_144() { return &___Ldelem_U2_144; }
	inline void set_Ldelem_U2_144(OpCode_t1087150903  value)
	{
		___Ldelem_U2_144 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I4_145() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldelem_I4_145)); }
	inline OpCode_t1087150903  get_Ldelem_I4_145() const { return ___Ldelem_I4_145; }
	inline OpCode_t1087150903 * get_address_of_Ldelem_I4_145() { return &___Ldelem_I4_145; }
	inline void set_Ldelem_I4_145(OpCode_t1087150903  value)
	{
		___Ldelem_I4_145 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U4_146() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldelem_U4_146)); }
	inline OpCode_t1087150903  get_Ldelem_U4_146() const { return ___Ldelem_U4_146; }
	inline OpCode_t1087150903 * get_address_of_Ldelem_U4_146() { return &___Ldelem_U4_146; }
	inline void set_Ldelem_U4_146(OpCode_t1087150903  value)
	{
		___Ldelem_U4_146 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I8_147() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldelem_I8_147)); }
	inline OpCode_t1087150903  get_Ldelem_I8_147() const { return ___Ldelem_I8_147; }
	inline OpCode_t1087150903 * get_address_of_Ldelem_I8_147() { return &___Ldelem_I8_147; }
	inline void set_Ldelem_I8_147(OpCode_t1087150903  value)
	{
		___Ldelem_I8_147 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I_148() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldelem_I_148)); }
	inline OpCode_t1087150903  get_Ldelem_I_148() const { return ___Ldelem_I_148; }
	inline OpCode_t1087150903 * get_address_of_Ldelem_I_148() { return &___Ldelem_I_148; }
	inline void set_Ldelem_I_148(OpCode_t1087150903  value)
	{
		___Ldelem_I_148 = value;
	}

	inline static int32_t get_offset_of_Ldelem_R4_149() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldelem_R4_149)); }
	inline OpCode_t1087150903  get_Ldelem_R4_149() const { return ___Ldelem_R4_149; }
	inline OpCode_t1087150903 * get_address_of_Ldelem_R4_149() { return &___Ldelem_R4_149; }
	inline void set_Ldelem_R4_149(OpCode_t1087150903  value)
	{
		___Ldelem_R4_149 = value;
	}

	inline static int32_t get_offset_of_Ldelem_R8_150() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldelem_R8_150)); }
	inline OpCode_t1087150903  get_Ldelem_R8_150() const { return ___Ldelem_R8_150; }
	inline OpCode_t1087150903 * get_address_of_Ldelem_R8_150() { return &___Ldelem_R8_150; }
	inline void set_Ldelem_R8_150(OpCode_t1087150903  value)
	{
		___Ldelem_R8_150 = value;
	}

	inline static int32_t get_offset_of_Ldelem_Ref_151() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldelem_Ref_151)); }
	inline OpCode_t1087150903  get_Ldelem_Ref_151() const { return ___Ldelem_Ref_151; }
	inline OpCode_t1087150903 * get_address_of_Ldelem_Ref_151() { return &___Ldelem_Ref_151; }
	inline void set_Ldelem_Ref_151(OpCode_t1087150903  value)
	{
		___Ldelem_Ref_151 = value;
	}

	inline static int32_t get_offset_of_Stelem_I_152() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stelem_I_152)); }
	inline OpCode_t1087150903  get_Stelem_I_152() const { return ___Stelem_I_152; }
	inline OpCode_t1087150903 * get_address_of_Stelem_I_152() { return &___Stelem_I_152; }
	inline void set_Stelem_I_152(OpCode_t1087150903  value)
	{
		___Stelem_I_152 = value;
	}

	inline static int32_t get_offset_of_Stelem_I1_153() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stelem_I1_153)); }
	inline OpCode_t1087150903  get_Stelem_I1_153() const { return ___Stelem_I1_153; }
	inline OpCode_t1087150903 * get_address_of_Stelem_I1_153() { return &___Stelem_I1_153; }
	inline void set_Stelem_I1_153(OpCode_t1087150903  value)
	{
		___Stelem_I1_153 = value;
	}

	inline static int32_t get_offset_of_Stelem_I2_154() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stelem_I2_154)); }
	inline OpCode_t1087150903  get_Stelem_I2_154() const { return ___Stelem_I2_154; }
	inline OpCode_t1087150903 * get_address_of_Stelem_I2_154() { return &___Stelem_I2_154; }
	inline void set_Stelem_I2_154(OpCode_t1087150903  value)
	{
		___Stelem_I2_154 = value;
	}

	inline static int32_t get_offset_of_Stelem_I4_155() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stelem_I4_155)); }
	inline OpCode_t1087150903  get_Stelem_I4_155() const { return ___Stelem_I4_155; }
	inline OpCode_t1087150903 * get_address_of_Stelem_I4_155() { return &___Stelem_I4_155; }
	inline void set_Stelem_I4_155(OpCode_t1087150903  value)
	{
		___Stelem_I4_155 = value;
	}

	inline static int32_t get_offset_of_Stelem_I8_156() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stelem_I8_156)); }
	inline OpCode_t1087150903  get_Stelem_I8_156() const { return ___Stelem_I8_156; }
	inline OpCode_t1087150903 * get_address_of_Stelem_I8_156() { return &___Stelem_I8_156; }
	inline void set_Stelem_I8_156(OpCode_t1087150903  value)
	{
		___Stelem_I8_156 = value;
	}

	inline static int32_t get_offset_of_Stelem_R4_157() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stelem_R4_157)); }
	inline OpCode_t1087150903  get_Stelem_R4_157() const { return ___Stelem_R4_157; }
	inline OpCode_t1087150903 * get_address_of_Stelem_R4_157() { return &___Stelem_R4_157; }
	inline void set_Stelem_R4_157(OpCode_t1087150903  value)
	{
		___Stelem_R4_157 = value;
	}

	inline static int32_t get_offset_of_Stelem_R8_158() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stelem_R8_158)); }
	inline OpCode_t1087150903  get_Stelem_R8_158() const { return ___Stelem_R8_158; }
	inline OpCode_t1087150903 * get_address_of_Stelem_R8_158() { return &___Stelem_R8_158; }
	inline void set_Stelem_R8_158(OpCode_t1087150903  value)
	{
		___Stelem_R8_158 = value;
	}

	inline static int32_t get_offset_of_Stelem_Ref_159() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stelem_Ref_159)); }
	inline OpCode_t1087150903  get_Stelem_Ref_159() const { return ___Stelem_Ref_159; }
	inline OpCode_t1087150903 * get_address_of_Stelem_Ref_159() { return &___Stelem_Ref_159; }
	inline void set_Stelem_Ref_159(OpCode_t1087150903  value)
	{
		___Stelem_Ref_159 = value;
	}

	inline static int32_t get_offset_of_Ldelem_160() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldelem_160)); }
	inline OpCode_t1087150903  get_Ldelem_160() const { return ___Ldelem_160; }
	inline OpCode_t1087150903 * get_address_of_Ldelem_160() { return &___Ldelem_160; }
	inline void set_Ldelem_160(OpCode_t1087150903  value)
	{
		___Ldelem_160 = value;
	}

	inline static int32_t get_offset_of_Stelem_161() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stelem_161)); }
	inline OpCode_t1087150903  get_Stelem_161() const { return ___Stelem_161; }
	inline OpCode_t1087150903 * get_address_of_Stelem_161() { return &___Stelem_161; }
	inline void set_Stelem_161(OpCode_t1087150903  value)
	{
		___Stelem_161 = value;
	}

	inline static int32_t get_offset_of_Unbox_Any_162() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Unbox_Any_162)); }
	inline OpCode_t1087150903  get_Unbox_Any_162() const { return ___Unbox_Any_162; }
	inline OpCode_t1087150903 * get_address_of_Unbox_Any_162() { return &___Unbox_Any_162; }
	inline void set_Unbox_Any_162(OpCode_t1087150903  value)
	{
		___Unbox_Any_162 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I1_163() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_I1_163)); }
	inline OpCode_t1087150903  get_Conv_Ovf_I1_163() const { return ___Conv_Ovf_I1_163; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_I1_163() { return &___Conv_Ovf_I1_163; }
	inline void set_Conv_Ovf_I1_163(OpCode_t1087150903  value)
	{
		___Conv_Ovf_I1_163 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U1_164() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_U1_164)); }
	inline OpCode_t1087150903  get_Conv_Ovf_U1_164() const { return ___Conv_Ovf_U1_164; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_U1_164() { return &___Conv_Ovf_U1_164; }
	inline void set_Conv_Ovf_U1_164(OpCode_t1087150903  value)
	{
		___Conv_Ovf_U1_164 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I2_165() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_I2_165)); }
	inline OpCode_t1087150903  get_Conv_Ovf_I2_165() const { return ___Conv_Ovf_I2_165; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_I2_165() { return &___Conv_Ovf_I2_165; }
	inline void set_Conv_Ovf_I2_165(OpCode_t1087150903  value)
	{
		___Conv_Ovf_I2_165 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U2_166() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_U2_166)); }
	inline OpCode_t1087150903  get_Conv_Ovf_U2_166() const { return ___Conv_Ovf_U2_166; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_U2_166() { return &___Conv_Ovf_U2_166; }
	inline void set_Conv_Ovf_U2_166(OpCode_t1087150903  value)
	{
		___Conv_Ovf_U2_166 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I4_167() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_I4_167)); }
	inline OpCode_t1087150903  get_Conv_Ovf_I4_167() const { return ___Conv_Ovf_I4_167; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_I4_167() { return &___Conv_Ovf_I4_167; }
	inline void set_Conv_Ovf_I4_167(OpCode_t1087150903  value)
	{
		___Conv_Ovf_I4_167 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U4_168() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_U4_168)); }
	inline OpCode_t1087150903  get_Conv_Ovf_U4_168() const { return ___Conv_Ovf_U4_168; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_U4_168() { return &___Conv_Ovf_U4_168; }
	inline void set_Conv_Ovf_U4_168(OpCode_t1087150903  value)
	{
		___Conv_Ovf_U4_168 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I8_169() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_I8_169)); }
	inline OpCode_t1087150903  get_Conv_Ovf_I8_169() const { return ___Conv_Ovf_I8_169; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_I8_169() { return &___Conv_Ovf_I8_169; }
	inline void set_Conv_Ovf_I8_169(OpCode_t1087150903  value)
	{
		___Conv_Ovf_I8_169 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U8_170() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_U8_170)); }
	inline OpCode_t1087150903  get_Conv_Ovf_U8_170() const { return ___Conv_Ovf_U8_170; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_U8_170() { return &___Conv_Ovf_U8_170; }
	inline void set_Conv_Ovf_U8_170(OpCode_t1087150903  value)
	{
		___Conv_Ovf_U8_170 = value;
	}

	inline static int32_t get_offset_of_Refanyval_171() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Refanyval_171)); }
	inline OpCode_t1087150903  get_Refanyval_171() const { return ___Refanyval_171; }
	inline OpCode_t1087150903 * get_address_of_Refanyval_171() { return &___Refanyval_171; }
	inline void set_Refanyval_171(OpCode_t1087150903  value)
	{
		___Refanyval_171 = value;
	}

	inline static int32_t get_offset_of_Ckfinite_172() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ckfinite_172)); }
	inline OpCode_t1087150903  get_Ckfinite_172() const { return ___Ckfinite_172; }
	inline OpCode_t1087150903 * get_address_of_Ckfinite_172() { return &___Ckfinite_172; }
	inline void set_Ckfinite_172(OpCode_t1087150903  value)
	{
		___Ckfinite_172 = value;
	}

	inline static int32_t get_offset_of_Mkrefany_173() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Mkrefany_173)); }
	inline OpCode_t1087150903  get_Mkrefany_173() const { return ___Mkrefany_173; }
	inline OpCode_t1087150903 * get_address_of_Mkrefany_173() { return &___Mkrefany_173; }
	inline void set_Mkrefany_173(OpCode_t1087150903  value)
	{
		___Mkrefany_173 = value;
	}

	inline static int32_t get_offset_of_Ldtoken_174() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldtoken_174)); }
	inline OpCode_t1087150903  get_Ldtoken_174() const { return ___Ldtoken_174; }
	inline OpCode_t1087150903 * get_address_of_Ldtoken_174() { return &___Ldtoken_174; }
	inline void set_Ldtoken_174(OpCode_t1087150903  value)
	{
		___Ldtoken_174 = value;
	}

	inline static int32_t get_offset_of_Conv_U2_175() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_U2_175)); }
	inline OpCode_t1087150903  get_Conv_U2_175() const { return ___Conv_U2_175; }
	inline OpCode_t1087150903 * get_address_of_Conv_U2_175() { return &___Conv_U2_175; }
	inline void set_Conv_U2_175(OpCode_t1087150903  value)
	{
		___Conv_U2_175 = value;
	}

	inline static int32_t get_offset_of_Conv_U1_176() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_U1_176)); }
	inline OpCode_t1087150903  get_Conv_U1_176() const { return ___Conv_U1_176; }
	inline OpCode_t1087150903 * get_address_of_Conv_U1_176() { return &___Conv_U1_176; }
	inline void set_Conv_U1_176(OpCode_t1087150903  value)
	{
		___Conv_U1_176 = value;
	}

	inline static int32_t get_offset_of_Conv_I_177() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_I_177)); }
	inline OpCode_t1087150903  get_Conv_I_177() const { return ___Conv_I_177; }
	inline OpCode_t1087150903 * get_address_of_Conv_I_177() { return &___Conv_I_177; }
	inline void set_Conv_I_177(OpCode_t1087150903  value)
	{
		___Conv_I_177 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I_178() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_I_178)); }
	inline OpCode_t1087150903  get_Conv_Ovf_I_178() const { return ___Conv_Ovf_I_178; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_I_178() { return &___Conv_Ovf_I_178; }
	inline void set_Conv_Ovf_I_178(OpCode_t1087150903  value)
	{
		___Conv_Ovf_I_178 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U_179() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_Ovf_U_179)); }
	inline OpCode_t1087150903  get_Conv_Ovf_U_179() const { return ___Conv_Ovf_U_179; }
	inline OpCode_t1087150903 * get_address_of_Conv_Ovf_U_179() { return &___Conv_Ovf_U_179; }
	inline void set_Conv_Ovf_U_179(OpCode_t1087150903  value)
	{
		___Conv_Ovf_U_179 = value;
	}

	inline static int32_t get_offset_of_Add_Ovf_180() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Add_Ovf_180)); }
	inline OpCode_t1087150903  get_Add_Ovf_180() const { return ___Add_Ovf_180; }
	inline OpCode_t1087150903 * get_address_of_Add_Ovf_180() { return &___Add_Ovf_180; }
	inline void set_Add_Ovf_180(OpCode_t1087150903  value)
	{
		___Add_Ovf_180 = value;
	}

	inline static int32_t get_offset_of_Add_Ovf_Un_181() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Add_Ovf_Un_181)); }
	inline OpCode_t1087150903  get_Add_Ovf_Un_181() const { return ___Add_Ovf_Un_181; }
	inline OpCode_t1087150903 * get_address_of_Add_Ovf_Un_181() { return &___Add_Ovf_Un_181; }
	inline void set_Add_Ovf_Un_181(OpCode_t1087150903  value)
	{
		___Add_Ovf_Un_181 = value;
	}

	inline static int32_t get_offset_of_Mul_Ovf_182() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Mul_Ovf_182)); }
	inline OpCode_t1087150903  get_Mul_Ovf_182() const { return ___Mul_Ovf_182; }
	inline OpCode_t1087150903 * get_address_of_Mul_Ovf_182() { return &___Mul_Ovf_182; }
	inline void set_Mul_Ovf_182(OpCode_t1087150903  value)
	{
		___Mul_Ovf_182 = value;
	}

	inline static int32_t get_offset_of_Mul_Ovf_Un_183() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Mul_Ovf_Un_183)); }
	inline OpCode_t1087150903  get_Mul_Ovf_Un_183() const { return ___Mul_Ovf_Un_183; }
	inline OpCode_t1087150903 * get_address_of_Mul_Ovf_Un_183() { return &___Mul_Ovf_Un_183; }
	inline void set_Mul_Ovf_Un_183(OpCode_t1087150903  value)
	{
		___Mul_Ovf_Un_183 = value;
	}

	inline static int32_t get_offset_of_Sub_Ovf_184() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Sub_Ovf_184)); }
	inline OpCode_t1087150903  get_Sub_Ovf_184() const { return ___Sub_Ovf_184; }
	inline OpCode_t1087150903 * get_address_of_Sub_Ovf_184() { return &___Sub_Ovf_184; }
	inline void set_Sub_Ovf_184(OpCode_t1087150903  value)
	{
		___Sub_Ovf_184 = value;
	}

	inline static int32_t get_offset_of_Sub_Ovf_Un_185() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Sub_Ovf_Un_185)); }
	inline OpCode_t1087150903  get_Sub_Ovf_Un_185() const { return ___Sub_Ovf_Un_185; }
	inline OpCode_t1087150903 * get_address_of_Sub_Ovf_Un_185() { return &___Sub_Ovf_Un_185; }
	inline void set_Sub_Ovf_Un_185(OpCode_t1087150903  value)
	{
		___Sub_Ovf_Un_185 = value;
	}

	inline static int32_t get_offset_of_Endfinally_186() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Endfinally_186)); }
	inline OpCode_t1087150903  get_Endfinally_186() const { return ___Endfinally_186; }
	inline OpCode_t1087150903 * get_address_of_Endfinally_186() { return &___Endfinally_186; }
	inline void set_Endfinally_186(OpCode_t1087150903  value)
	{
		___Endfinally_186 = value;
	}

	inline static int32_t get_offset_of_Leave_187() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Leave_187)); }
	inline OpCode_t1087150903  get_Leave_187() const { return ___Leave_187; }
	inline OpCode_t1087150903 * get_address_of_Leave_187() { return &___Leave_187; }
	inline void set_Leave_187(OpCode_t1087150903  value)
	{
		___Leave_187 = value;
	}

	inline static int32_t get_offset_of_Leave_S_188() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Leave_S_188)); }
	inline OpCode_t1087150903  get_Leave_S_188() const { return ___Leave_S_188; }
	inline OpCode_t1087150903 * get_address_of_Leave_S_188() { return &___Leave_S_188; }
	inline void set_Leave_S_188(OpCode_t1087150903  value)
	{
		___Leave_S_188 = value;
	}

	inline static int32_t get_offset_of_Stind_I_189() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stind_I_189)); }
	inline OpCode_t1087150903  get_Stind_I_189() const { return ___Stind_I_189; }
	inline OpCode_t1087150903 * get_address_of_Stind_I_189() { return &___Stind_I_189; }
	inline void set_Stind_I_189(OpCode_t1087150903  value)
	{
		___Stind_I_189 = value;
	}

	inline static int32_t get_offset_of_Conv_U_190() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Conv_U_190)); }
	inline OpCode_t1087150903  get_Conv_U_190() const { return ___Conv_U_190; }
	inline OpCode_t1087150903 * get_address_of_Conv_U_190() { return &___Conv_U_190; }
	inline void set_Conv_U_190(OpCode_t1087150903  value)
	{
		___Conv_U_190 = value;
	}

	inline static int32_t get_offset_of_Prefix7_191() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Prefix7_191)); }
	inline OpCode_t1087150903  get_Prefix7_191() const { return ___Prefix7_191; }
	inline OpCode_t1087150903 * get_address_of_Prefix7_191() { return &___Prefix7_191; }
	inline void set_Prefix7_191(OpCode_t1087150903  value)
	{
		___Prefix7_191 = value;
	}

	inline static int32_t get_offset_of_Prefix6_192() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Prefix6_192)); }
	inline OpCode_t1087150903  get_Prefix6_192() const { return ___Prefix6_192; }
	inline OpCode_t1087150903 * get_address_of_Prefix6_192() { return &___Prefix6_192; }
	inline void set_Prefix6_192(OpCode_t1087150903  value)
	{
		___Prefix6_192 = value;
	}

	inline static int32_t get_offset_of_Prefix5_193() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Prefix5_193)); }
	inline OpCode_t1087150903  get_Prefix5_193() const { return ___Prefix5_193; }
	inline OpCode_t1087150903 * get_address_of_Prefix5_193() { return &___Prefix5_193; }
	inline void set_Prefix5_193(OpCode_t1087150903  value)
	{
		___Prefix5_193 = value;
	}

	inline static int32_t get_offset_of_Prefix4_194() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Prefix4_194)); }
	inline OpCode_t1087150903  get_Prefix4_194() const { return ___Prefix4_194; }
	inline OpCode_t1087150903 * get_address_of_Prefix4_194() { return &___Prefix4_194; }
	inline void set_Prefix4_194(OpCode_t1087150903  value)
	{
		___Prefix4_194 = value;
	}

	inline static int32_t get_offset_of_Prefix3_195() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Prefix3_195)); }
	inline OpCode_t1087150903  get_Prefix3_195() const { return ___Prefix3_195; }
	inline OpCode_t1087150903 * get_address_of_Prefix3_195() { return &___Prefix3_195; }
	inline void set_Prefix3_195(OpCode_t1087150903  value)
	{
		___Prefix3_195 = value;
	}

	inline static int32_t get_offset_of_Prefix2_196() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Prefix2_196)); }
	inline OpCode_t1087150903  get_Prefix2_196() const { return ___Prefix2_196; }
	inline OpCode_t1087150903 * get_address_of_Prefix2_196() { return &___Prefix2_196; }
	inline void set_Prefix2_196(OpCode_t1087150903  value)
	{
		___Prefix2_196 = value;
	}

	inline static int32_t get_offset_of_Prefix1_197() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Prefix1_197)); }
	inline OpCode_t1087150903  get_Prefix1_197() const { return ___Prefix1_197; }
	inline OpCode_t1087150903 * get_address_of_Prefix1_197() { return &___Prefix1_197; }
	inline void set_Prefix1_197(OpCode_t1087150903  value)
	{
		___Prefix1_197 = value;
	}

	inline static int32_t get_offset_of_Prefixref_198() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Prefixref_198)); }
	inline OpCode_t1087150903  get_Prefixref_198() const { return ___Prefixref_198; }
	inline OpCode_t1087150903 * get_address_of_Prefixref_198() { return &___Prefixref_198; }
	inline void set_Prefixref_198(OpCode_t1087150903  value)
	{
		___Prefixref_198 = value;
	}

	inline static int32_t get_offset_of_Arglist_199() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Arglist_199)); }
	inline OpCode_t1087150903  get_Arglist_199() const { return ___Arglist_199; }
	inline OpCode_t1087150903 * get_address_of_Arglist_199() { return &___Arglist_199; }
	inline void set_Arglist_199(OpCode_t1087150903  value)
	{
		___Arglist_199 = value;
	}

	inline static int32_t get_offset_of_Ceq_200() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ceq_200)); }
	inline OpCode_t1087150903  get_Ceq_200() const { return ___Ceq_200; }
	inline OpCode_t1087150903 * get_address_of_Ceq_200() { return &___Ceq_200; }
	inline void set_Ceq_200(OpCode_t1087150903  value)
	{
		___Ceq_200 = value;
	}

	inline static int32_t get_offset_of_Cgt_201() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Cgt_201)); }
	inline OpCode_t1087150903  get_Cgt_201() const { return ___Cgt_201; }
	inline OpCode_t1087150903 * get_address_of_Cgt_201() { return &___Cgt_201; }
	inline void set_Cgt_201(OpCode_t1087150903  value)
	{
		___Cgt_201 = value;
	}

	inline static int32_t get_offset_of_Cgt_Un_202() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Cgt_Un_202)); }
	inline OpCode_t1087150903  get_Cgt_Un_202() const { return ___Cgt_Un_202; }
	inline OpCode_t1087150903 * get_address_of_Cgt_Un_202() { return &___Cgt_Un_202; }
	inline void set_Cgt_Un_202(OpCode_t1087150903  value)
	{
		___Cgt_Un_202 = value;
	}

	inline static int32_t get_offset_of_Clt_203() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Clt_203)); }
	inline OpCode_t1087150903  get_Clt_203() const { return ___Clt_203; }
	inline OpCode_t1087150903 * get_address_of_Clt_203() { return &___Clt_203; }
	inline void set_Clt_203(OpCode_t1087150903  value)
	{
		___Clt_203 = value;
	}

	inline static int32_t get_offset_of_Clt_Un_204() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Clt_Un_204)); }
	inline OpCode_t1087150903  get_Clt_Un_204() const { return ___Clt_Un_204; }
	inline OpCode_t1087150903 * get_address_of_Clt_Un_204() { return &___Clt_Un_204; }
	inline void set_Clt_Un_204(OpCode_t1087150903  value)
	{
		___Clt_Un_204 = value;
	}

	inline static int32_t get_offset_of_Ldftn_205() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldftn_205)); }
	inline OpCode_t1087150903  get_Ldftn_205() const { return ___Ldftn_205; }
	inline OpCode_t1087150903 * get_address_of_Ldftn_205() { return &___Ldftn_205; }
	inline void set_Ldftn_205(OpCode_t1087150903  value)
	{
		___Ldftn_205 = value;
	}

	inline static int32_t get_offset_of_Ldvirtftn_206() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldvirtftn_206)); }
	inline OpCode_t1087150903  get_Ldvirtftn_206() const { return ___Ldvirtftn_206; }
	inline OpCode_t1087150903 * get_address_of_Ldvirtftn_206() { return &___Ldvirtftn_206; }
	inline void set_Ldvirtftn_206(OpCode_t1087150903  value)
	{
		___Ldvirtftn_206 = value;
	}

	inline static int32_t get_offset_of_Ldarg_207() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldarg_207)); }
	inline OpCode_t1087150903  get_Ldarg_207() const { return ___Ldarg_207; }
	inline OpCode_t1087150903 * get_address_of_Ldarg_207() { return &___Ldarg_207; }
	inline void set_Ldarg_207(OpCode_t1087150903  value)
	{
		___Ldarg_207 = value;
	}

	inline static int32_t get_offset_of_Ldarga_208() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldarga_208)); }
	inline OpCode_t1087150903  get_Ldarga_208() const { return ___Ldarga_208; }
	inline OpCode_t1087150903 * get_address_of_Ldarga_208() { return &___Ldarga_208; }
	inline void set_Ldarga_208(OpCode_t1087150903  value)
	{
		___Ldarga_208 = value;
	}

	inline static int32_t get_offset_of_Starg_209() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Starg_209)); }
	inline OpCode_t1087150903  get_Starg_209() const { return ___Starg_209; }
	inline OpCode_t1087150903 * get_address_of_Starg_209() { return &___Starg_209; }
	inline void set_Starg_209(OpCode_t1087150903  value)
	{
		___Starg_209 = value;
	}

	inline static int32_t get_offset_of_Ldloc_210() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldloc_210)); }
	inline OpCode_t1087150903  get_Ldloc_210() const { return ___Ldloc_210; }
	inline OpCode_t1087150903 * get_address_of_Ldloc_210() { return &___Ldloc_210; }
	inline void set_Ldloc_210(OpCode_t1087150903  value)
	{
		___Ldloc_210 = value;
	}

	inline static int32_t get_offset_of_Ldloca_211() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Ldloca_211)); }
	inline OpCode_t1087150903  get_Ldloca_211() const { return ___Ldloca_211; }
	inline OpCode_t1087150903 * get_address_of_Ldloca_211() { return &___Ldloca_211; }
	inline void set_Ldloca_211(OpCode_t1087150903  value)
	{
		___Ldloca_211 = value;
	}

	inline static int32_t get_offset_of_Stloc_212() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Stloc_212)); }
	inline OpCode_t1087150903  get_Stloc_212() const { return ___Stloc_212; }
	inline OpCode_t1087150903 * get_address_of_Stloc_212() { return &___Stloc_212; }
	inline void set_Stloc_212(OpCode_t1087150903  value)
	{
		___Stloc_212 = value;
	}

	inline static int32_t get_offset_of_Localloc_213() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Localloc_213)); }
	inline OpCode_t1087150903  get_Localloc_213() const { return ___Localloc_213; }
	inline OpCode_t1087150903 * get_address_of_Localloc_213() { return &___Localloc_213; }
	inline void set_Localloc_213(OpCode_t1087150903  value)
	{
		___Localloc_213 = value;
	}

	inline static int32_t get_offset_of_Endfilter_214() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Endfilter_214)); }
	inline OpCode_t1087150903  get_Endfilter_214() const { return ___Endfilter_214; }
	inline OpCode_t1087150903 * get_address_of_Endfilter_214() { return &___Endfilter_214; }
	inline void set_Endfilter_214(OpCode_t1087150903  value)
	{
		___Endfilter_214 = value;
	}

	inline static int32_t get_offset_of_Unaligned_215() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Unaligned_215)); }
	inline OpCode_t1087150903  get_Unaligned_215() const { return ___Unaligned_215; }
	inline OpCode_t1087150903 * get_address_of_Unaligned_215() { return &___Unaligned_215; }
	inline void set_Unaligned_215(OpCode_t1087150903  value)
	{
		___Unaligned_215 = value;
	}

	inline static int32_t get_offset_of_Volatile_216() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Volatile_216)); }
	inline OpCode_t1087150903  get_Volatile_216() const { return ___Volatile_216; }
	inline OpCode_t1087150903 * get_address_of_Volatile_216() { return &___Volatile_216; }
	inline void set_Volatile_216(OpCode_t1087150903  value)
	{
		___Volatile_216 = value;
	}

	inline static int32_t get_offset_of_Tailcall_217() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Tailcall_217)); }
	inline OpCode_t1087150903  get_Tailcall_217() const { return ___Tailcall_217; }
	inline OpCode_t1087150903 * get_address_of_Tailcall_217() { return &___Tailcall_217; }
	inline void set_Tailcall_217(OpCode_t1087150903  value)
	{
		___Tailcall_217 = value;
	}

	inline static int32_t get_offset_of_Initobj_218() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Initobj_218)); }
	inline OpCode_t1087150903  get_Initobj_218() const { return ___Initobj_218; }
	inline OpCode_t1087150903 * get_address_of_Initobj_218() { return &___Initobj_218; }
	inline void set_Initobj_218(OpCode_t1087150903  value)
	{
		___Initobj_218 = value;
	}

	inline static int32_t get_offset_of_Constrained_219() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Constrained_219)); }
	inline OpCode_t1087150903  get_Constrained_219() const { return ___Constrained_219; }
	inline OpCode_t1087150903 * get_address_of_Constrained_219() { return &___Constrained_219; }
	inline void set_Constrained_219(OpCode_t1087150903  value)
	{
		___Constrained_219 = value;
	}

	inline static int32_t get_offset_of_Cpblk_220() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Cpblk_220)); }
	inline OpCode_t1087150903  get_Cpblk_220() const { return ___Cpblk_220; }
	inline OpCode_t1087150903 * get_address_of_Cpblk_220() { return &___Cpblk_220; }
	inline void set_Cpblk_220(OpCode_t1087150903  value)
	{
		___Cpblk_220 = value;
	}

	inline static int32_t get_offset_of_Initblk_221() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Initblk_221)); }
	inline OpCode_t1087150903  get_Initblk_221() const { return ___Initblk_221; }
	inline OpCode_t1087150903 * get_address_of_Initblk_221() { return &___Initblk_221; }
	inline void set_Initblk_221(OpCode_t1087150903  value)
	{
		___Initblk_221 = value;
	}

	inline static int32_t get_offset_of_Rethrow_222() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Rethrow_222)); }
	inline OpCode_t1087150903  get_Rethrow_222() const { return ___Rethrow_222; }
	inline OpCode_t1087150903 * get_address_of_Rethrow_222() { return &___Rethrow_222; }
	inline void set_Rethrow_222(OpCode_t1087150903  value)
	{
		___Rethrow_222 = value;
	}

	inline static int32_t get_offset_of_Sizeof_223() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Sizeof_223)); }
	inline OpCode_t1087150903  get_Sizeof_223() const { return ___Sizeof_223; }
	inline OpCode_t1087150903 * get_address_of_Sizeof_223() { return &___Sizeof_223; }
	inline void set_Sizeof_223(OpCode_t1087150903  value)
	{
		___Sizeof_223 = value;
	}

	inline static int32_t get_offset_of_Refanytype_224() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Refanytype_224)); }
	inline OpCode_t1087150903  get_Refanytype_224() const { return ___Refanytype_224; }
	inline OpCode_t1087150903 * get_address_of_Refanytype_224() { return &___Refanytype_224; }
	inline void set_Refanytype_224(OpCode_t1087150903  value)
	{
		___Refanytype_224 = value;
	}

	inline static int32_t get_offset_of_Readonly_225() { return static_cast<int32_t>(offsetof(OpCodes_t2663897137_StaticFields, ___Readonly_225)); }
	inline OpCode_t1087150903  get_Readonly_225() const { return ___Readonly_225; }
	inline OpCode_t1087150903 * get_address_of_Readonly_225() { return &___Readonly_225; }
	inline void set_Readonly_225(OpCode_t1087150903  value)
	{
		___Readonly_225 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODES_T2663897137_H
#ifndef OPERANDTYPE_T212035841_H
#define OPERANDTYPE_T212035841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OperandType
struct  OperandType_t212035841 
{
public:
	// System.Int32 System.Reflection.Emit.OperandType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OperandType_t212035841, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERANDTYPE_T212035841_H
#ifndef PEFILEKINDS_T2066454822_H
#define PEFILEKINDS_T2066454822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.PEFileKinds
struct  PEFileKinds_t2066454822 
{
public:
	// System.Int32 System.Reflection.Emit.PEFileKinds::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PEFileKinds_t2066454822, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PEFILEKINDS_T2066454822_H
#ifndef PACKINGSIZE_T2043223532_H
#define PACKINGSIZE_T2043223532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.PackingSize
struct  PackingSize_t2043223532 
{
public:
	// System.Int32 System.Reflection.Emit.PackingSize::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PackingSize_t2043223532, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PACKINGSIZE_T2043223532_H
#ifndef STACKBEHAVIOUR_T3112878820_H
#define STACKBEHAVIOUR_T3112878820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.StackBehaviour
struct  StackBehaviour_t3112878820 
{
public:
	// System.Int32 System.Reflection.Emit.StackBehaviour::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StackBehaviour_t3112878820, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKBEHAVIOUR_T3112878820_H
#ifndef AMBIGUOUSMATCHEXCEPTION_T4198777595_H
#define AMBIGUOUSMATCHEXCEPTION_T4198777595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AmbiguousMatchException
struct  AmbiguousMatchException_t4198777595  : public SystemException_t2736349149
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIGUOUSMATCHEXCEPTION_T4198777595_H
#ifndef ASSEMBLY_T2577078533_H
#define ASSEMBLY_T2577078533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t2577078533  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	IntPtr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t3681357886 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t417703073 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t1340974424 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t1340974424 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t1340974424 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t1340974424 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t1340974424 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t2577078533, ____mono_assembly_0)); }
	inline IntPtr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline IntPtr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(IntPtr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t2577078533, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t3681357886 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t3681357886 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t3681357886 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t2577078533, ____evidence_2)); }
	inline Evidence_t417703073 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t417703073 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t417703073 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t2577078533, ____minimum_3)); }
	inline PermissionSet_t1340974424 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t1340974424 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t1340974424 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t2577078533, ____optional_4)); }
	inline PermissionSet_t1340974424 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t1340974424 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t1340974424 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t2577078533, ____refuse_5)); }
	inline PermissionSet_t1340974424 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t1340974424 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t1340974424 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t2577078533, ____granted_6)); }
	inline PermissionSet_t1340974424 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t1340974424 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t1340974424 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t2577078533, ____denied_7)); }
	inline PermissionSet_t1340974424 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t1340974424 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t1340974424 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t2577078533, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t2577078533, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T2577078533_H
#ifndef METHODIMPLATTRIBUTES_T3919091257_H
#define METHODIMPLATTRIBUTES_T3919091257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodImplAttributes
struct  MethodImplAttributes_t3919091257 
{
public:
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodImplAttributes_t3919091257, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODIMPLATTRIBUTES_T3919091257_H
#ifndef BINDINGFLAGS_T857453048_H
#define BINDINGFLAGS_T857453048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t857453048 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t857453048, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T857453048_H
#ifndef CALLINGCONVENTIONS_T2902728440_H
#define CALLINGCONVENTIONS_T2902728440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t2902728440 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConventions_t2902728440, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLINGCONVENTIONS_T2902728440_H
#ifndef CONSTRUCTORINFO_T3416953175_H
#define CONSTRUCTORINFO_T3416953175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t3416953175  : public MethodBase_t1974324469
{
public:

public:
};

struct ConstructorInfo_t3416953175_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t3416953175_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t3416953175_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T3416953175_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T2828217530_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T2828217530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t2828217530 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t3236469821  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t2828217530, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t3236469821  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t3236469821 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t3236469821  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t2828217530, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t2828217530_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t3236469821_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t2828217530_marshaled_com
{
	CustomAttributeTypedArgument_t3236469821_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T2828217530_H
#ifndef EVENTATTRIBUTES_T3166287721_H
#define EVENTATTRIBUTES_T3166287721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventAttributes
struct  EventAttributes_t3166287721 
{
public:
	// System.Int32 System.Reflection.EventAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventAttributes_t3166287721, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTATTRIBUTES_T3166287721_H
#ifndef RUNTIMETYPEHANDLE_T3668608135_H
#define RUNTIMETYPEHANDLE_T3668608135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3668608135 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3668608135, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3668608135_H
#ifndef ASSEMBLYNAMEFLAGS_T1094365128_H
#define ASSEMBLYNAMEFLAGS_T1094365128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t1094365128 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t1094365128, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAMEFLAGS_T1094365128_H
#ifndef MEMBERTYPES_T2777851904_H
#define MEMBERTYPES_T2777851904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t2777851904 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberTypes_t2777851904, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERTYPES_T2777851904_H
#ifndef MANIFESTRESOURCEINFO_T3891984548_H
#define MANIFESTRESOURCEINFO_T3891984548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ManifestResourceInfo
struct  ManifestResourceInfo_t3891984548  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Reflection.ManifestResourceInfo::_assembly
	Assembly_t2577078533 * ____assembly_0;
	// System.String System.Reflection.ManifestResourceInfo::_filename
	String_t* ____filename_1;
	// System.Reflection.ResourceLocation System.Reflection.ManifestResourceInfo::_location
	int32_t ____location_2;

public:
	inline static int32_t get_offset_of__assembly_0() { return static_cast<int32_t>(offsetof(ManifestResourceInfo_t3891984548, ____assembly_0)); }
	inline Assembly_t2577078533 * get__assembly_0() const { return ____assembly_0; }
	inline Assembly_t2577078533 ** get_address_of__assembly_0() { return &____assembly_0; }
	inline void set__assembly_0(Assembly_t2577078533 * value)
	{
		____assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&____assembly_0), value);
	}

	inline static int32_t get_offset_of__filename_1() { return static_cast<int32_t>(offsetof(ManifestResourceInfo_t3891984548, ____filename_1)); }
	inline String_t* get__filename_1() const { return ____filename_1; }
	inline String_t** get_address_of__filename_1() { return &____filename_1; }
	inline void set__filename_1(String_t* value)
	{
		____filename_1 = value;
		Il2CppCodeGenWriteBarrier((&____filename_1), value);
	}

	inline static int32_t get_offset_of__location_2() { return static_cast<int32_t>(offsetof(ManifestResourceInfo_t3891984548, ____location_2)); }
	inline int32_t get__location_2() const { return ____location_2; }
	inline int32_t* get_address_of__location_2() { return &____location_2; }
	inline void set__location_2(int32_t value)
	{
		____location_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIFESTRESOURCEINFO_T3891984548_H
#ifndef MONOFIELD_T_H
#define MONOFIELD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoField
struct  MonoField_t  : public FieldInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoField::klass
	IntPtr_t ___klass_0;
	// System.RuntimeFieldHandle System.Reflection.MonoField::fhandle
	RuntimeFieldHandle_t1797146554  ___fhandle_1;
	// System.String System.Reflection.MonoField::name
	String_t* ___name_2;
	// System.Type System.Reflection.MonoField::type
	Type_t * ___type_3;
	// System.Reflection.FieldAttributes System.Reflection.MonoField::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoField_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_fhandle_1() { return static_cast<int32_t>(offsetof(MonoField_t, ___fhandle_1)); }
	inline RuntimeFieldHandle_t1797146554  get_fhandle_1() const { return ___fhandle_1; }
	inline RuntimeFieldHandle_t1797146554 * get_address_of_fhandle_1() { return &___fhandle_1; }
	inline void set_fhandle_1(RuntimeFieldHandle_t1797146554  value)
	{
		___fhandle_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoField_t, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(MonoField_t, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoField_t, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOFIELD_T_H
#ifndef PARAMETERBUILDER_T2979056846_H
#define PARAMETERBUILDER_T2979056846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ParameterBuilder
struct  ParameterBuilder_t2979056846  : public RuntimeObject
{
public:
	// System.String System.Reflection.Emit.ParameterBuilder::name
	String_t* ___name_0;
	// System.Reflection.ParameterAttributes System.Reflection.Emit.ParameterBuilder::attrs
	int32_t ___attrs_1;
	// System.Int32 System.Reflection.Emit.ParameterBuilder::position
	int32_t ___position_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ParameterBuilder_t2979056846, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(ParameterBuilder_t2979056846, ___attrs_1)); }
	inline int32_t get_attrs_1() const { return ___attrs_1; }
	inline int32_t* get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(int32_t value)
	{
		___attrs_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(ParameterBuilder_t2979056846, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERBUILDER_T2979056846_H
#ifndef PROPERTYBUILDER_T438031321_H
#define PROPERTYBUILDER_T438031321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.PropertyBuilder
struct  PropertyBuilder_t438031321  : public PropertyInfo_t
{
public:
	// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::attrs
	int32_t ___attrs_0;
	// System.String System.Reflection.Emit.PropertyBuilder::name
	String_t* ___name_1;
	// System.Type System.Reflection.Emit.PropertyBuilder::type
	Type_t * ___type_2;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.PropertyBuilder::set_method
	MethodBuilder_t3828721349 * ___set_method_3;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.PropertyBuilder::get_method
	MethodBuilder_t3828721349 * ___get_method_4;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.PropertyBuilder::typeb
	TypeBuilder_t2760519975 * ___typeb_5;

public:
	inline static int32_t get_offset_of_attrs_0() { return static_cast<int32_t>(offsetof(PropertyBuilder_t438031321, ___attrs_0)); }
	inline int32_t get_attrs_0() const { return ___attrs_0; }
	inline int32_t* get_address_of_attrs_0() { return &___attrs_0; }
	inline void set_attrs_0(int32_t value)
	{
		___attrs_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(PropertyBuilder_t438031321, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(PropertyBuilder_t438031321, ___type_2)); }
	inline Type_t * get_type_2() const { return ___type_2; }
	inline Type_t ** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(Type_t * value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier((&___type_2), value);
	}

	inline static int32_t get_offset_of_set_method_3() { return static_cast<int32_t>(offsetof(PropertyBuilder_t438031321, ___set_method_3)); }
	inline MethodBuilder_t3828721349 * get_set_method_3() const { return ___set_method_3; }
	inline MethodBuilder_t3828721349 ** get_address_of_set_method_3() { return &___set_method_3; }
	inline void set_set_method_3(MethodBuilder_t3828721349 * value)
	{
		___set_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___set_method_3), value);
	}

	inline static int32_t get_offset_of_get_method_4() { return static_cast<int32_t>(offsetof(PropertyBuilder_t438031321, ___get_method_4)); }
	inline MethodBuilder_t3828721349 * get_get_method_4() const { return ___get_method_4; }
	inline MethodBuilder_t3828721349 ** get_address_of_get_method_4() { return &___get_method_4; }
	inline void set_get_method_4(MethodBuilder_t3828721349 * value)
	{
		___get_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___get_method_4), value);
	}

	inline static int32_t get_offset_of_typeb_5() { return static_cast<int32_t>(offsetof(PropertyBuilder_t438031321, ___typeb_5)); }
	inline TypeBuilder_t2760519975 * get_typeb_5() const { return ___typeb_5; }
	inline TypeBuilder_t2760519975 ** get_address_of_typeb_5() { return &___typeb_5; }
	inline void set_typeb_5(TypeBuilder_t2760519975 * value)
	{
		___typeb_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeb_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYBUILDER_T438031321_H
#ifndef PARAMETERINFO_T3572016085_H
#define PARAMETERINFO_T3572016085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t3572016085  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t1556783966 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t3572016085, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t3572016085, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t3572016085, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t3572016085, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t3572016085, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t3572016085, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t3572016085, ___marshalAs_6)); }
	inline UnmanagedMarshal_t1556783966 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t1556783966 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t1556783966 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T3572016085_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3668608135  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3668608135  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3668608135 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3668608135  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t1627120059* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t1368463053 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t1368463053 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t1368463053 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t1627120059* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t1627120059** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t1627120059* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t1368463053 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t1368463053 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t1368463053 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t1368463053 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t1368463053 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t1368463053 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t1368463053 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t1368463053 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t1368463053 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef METHODBUILDER_T3828721349_H
#define METHODBUILDER_T3828721349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MethodBuilder
struct  MethodBuilder_t3828721349  : public MethodInfo_t
{
public:
	// System.Type System.Reflection.Emit.MethodBuilder::rtype
	Type_t * ___rtype_0;
	// System.Type[] System.Reflection.Emit.MethodBuilder::parameters
	TypeU5BU5D_t1627120059* ___parameters_1;
	// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.Emit.MethodBuilder::iattrs
	int32_t ___iattrs_3;
	// System.String System.Reflection.Emit.MethodBuilder::name
	String_t* ___name_4;
	// System.Int32 System.Reflection.Emit.MethodBuilder::table_idx
	int32_t ___table_idx_5;
	// System.Byte[] System.Reflection.Emit.MethodBuilder::code
	ByteU5BU5D_t2729897319* ___code_6;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::ilgen
	ILGenerator_t3929519702 * ___ilgen_7;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.MethodBuilder::type
	TypeBuilder_t2760519975 * ___type_8;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.MethodBuilder::pinfo
	ParameterBuilderU5BU5D_t296063035* ___pinfo_9;
	// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::override_method
	MethodInfo_t * ___override_method_10;
	// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::call_conv
	int32_t ___call_conv_11;
	// System.Boolean System.Reflection.Emit.MethodBuilder::init_locals
	bool ___init_locals_12;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.MethodBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t1648436935* ___generic_params_13;
	// System.Type[] System.Reflection.Emit.MethodBuilder::returnModReq
	TypeU5BU5D_t1627120059* ___returnModReq_14;
	// System.Type[] System.Reflection.Emit.MethodBuilder::returnModOpt
	TypeU5BU5D_t1627120059* ___returnModOpt_15;
	// System.Type[][] System.Reflection.Emit.MethodBuilder::paramModReq
	TypeU5BU5DU5BU5D_t1089499386* ___paramModReq_16;
	// System.Type[][] System.Reflection.Emit.MethodBuilder::paramModOpt
	TypeU5BU5DU5BU5D_t1089499386* ___paramModOpt_17;

public:
	inline static int32_t get_offset_of_rtype_0() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___rtype_0)); }
	inline Type_t * get_rtype_0() const { return ___rtype_0; }
	inline Type_t ** get_address_of_rtype_0() { return &___rtype_0; }
	inline void set_rtype_0(Type_t * value)
	{
		___rtype_0 = value;
		Il2CppCodeGenWriteBarrier((&___rtype_0), value);
	}

	inline static int32_t get_offset_of_parameters_1() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___parameters_1)); }
	inline TypeU5BU5D_t1627120059* get_parameters_1() const { return ___parameters_1; }
	inline TypeU5BU5D_t1627120059** get_address_of_parameters_1() { return &___parameters_1; }
	inline void set_parameters_1(TypeU5BU5D_t1627120059* value)
	{
		___parameters_1 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier((&___name_4), value);
	}

	inline static int32_t get_offset_of_table_idx_5() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___table_idx_5)); }
	inline int32_t get_table_idx_5() const { return ___table_idx_5; }
	inline int32_t* get_address_of_table_idx_5() { return &___table_idx_5; }
	inline void set_table_idx_5(int32_t value)
	{
		___table_idx_5 = value;
	}

	inline static int32_t get_offset_of_code_6() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___code_6)); }
	inline ByteU5BU5D_t2729897319* get_code_6() const { return ___code_6; }
	inline ByteU5BU5D_t2729897319** get_address_of_code_6() { return &___code_6; }
	inline void set_code_6(ByteU5BU5D_t2729897319* value)
	{
		___code_6 = value;
		Il2CppCodeGenWriteBarrier((&___code_6), value);
	}

	inline static int32_t get_offset_of_ilgen_7() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___ilgen_7)); }
	inline ILGenerator_t3929519702 * get_ilgen_7() const { return ___ilgen_7; }
	inline ILGenerator_t3929519702 ** get_address_of_ilgen_7() { return &___ilgen_7; }
	inline void set_ilgen_7(ILGenerator_t3929519702 * value)
	{
		___ilgen_7 = value;
		Il2CppCodeGenWriteBarrier((&___ilgen_7), value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___type_8)); }
	inline TypeBuilder_t2760519975 * get_type_8() const { return ___type_8; }
	inline TypeBuilder_t2760519975 ** get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(TypeBuilder_t2760519975 * value)
	{
		___type_8 = value;
		Il2CppCodeGenWriteBarrier((&___type_8), value);
	}

	inline static int32_t get_offset_of_pinfo_9() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___pinfo_9)); }
	inline ParameterBuilderU5BU5D_t296063035* get_pinfo_9() const { return ___pinfo_9; }
	inline ParameterBuilderU5BU5D_t296063035** get_address_of_pinfo_9() { return &___pinfo_9; }
	inline void set_pinfo_9(ParameterBuilderU5BU5D_t296063035* value)
	{
		___pinfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___pinfo_9), value);
	}

	inline static int32_t get_offset_of_override_method_10() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___override_method_10)); }
	inline MethodInfo_t * get_override_method_10() const { return ___override_method_10; }
	inline MethodInfo_t ** get_address_of_override_method_10() { return &___override_method_10; }
	inline void set_override_method_10(MethodInfo_t * value)
	{
		___override_method_10 = value;
		Il2CppCodeGenWriteBarrier((&___override_method_10), value);
	}

	inline static int32_t get_offset_of_call_conv_11() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___call_conv_11)); }
	inline int32_t get_call_conv_11() const { return ___call_conv_11; }
	inline int32_t* get_address_of_call_conv_11() { return &___call_conv_11; }
	inline void set_call_conv_11(int32_t value)
	{
		___call_conv_11 = value;
	}

	inline static int32_t get_offset_of_init_locals_12() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___init_locals_12)); }
	inline bool get_init_locals_12() const { return ___init_locals_12; }
	inline bool* get_address_of_init_locals_12() { return &___init_locals_12; }
	inline void set_init_locals_12(bool value)
	{
		___init_locals_12 = value;
	}

	inline static int32_t get_offset_of_generic_params_13() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___generic_params_13)); }
	inline GenericTypeParameterBuilderU5BU5D_t1648436935* get_generic_params_13() const { return ___generic_params_13; }
	inline GenericTypeParameterBuilderU5BU5D_t1648436935** get_address_of_generic_params_13() { return &___generic_params_13; }
	inline void set_generic_params_13(GenericTypeParameterBuilderU5BU5D_t1648436935* value)
	{
		___generic_params_13 = value;
		Il2CppCodeGenWriteBarrier((&___generic_params_13), value);
	}

	inline static int32_t get_offset_of_returnModReq_14() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___returnModReq_14)); }
	inline TypeU5BU5D_t1627120059* get_returnModReq_14() const { return ___returnModReq_14; }
	inline TypeU5BU5D_t1627120059** get_address_of_returnModReq_14() { return &___returnModReq_14; }
	inline void set_returnModReq_14(TypeU5BU5D_t1627120059* value)
	{
		___returnModReq_14 = value;
		Il2CppCodeGenWriteBarrier((&___returnModReq_14), value);
	}

	inline static int32_t get_offset_of_returnModOpt_15() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___returnModOpt_15)); }
	inline TypeU5BU5D_t1627120059* get_returnModOpt_15() const { return ___returnModOpt_15; }
	inline TypeU5BU5D_t1627120059** get_address_of_returnModOpt_15() { return &___returnModOpt_15; }
	inline void set_returnModOpt_15(TypeU5BU5D_t1627120059* value)
	{
		___returnModOpt_15 = value;
		Il2CppCodeGenWriteBarrier((&___returnModOpt_15), value);
	}

	inline static int32_t get_offset_of_paramModReq_16() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___paramModReq_16)); }
	inline TypeU5BU5DU5BU5D_t1089499386* get_paramModReq_16() const { return ___paramModReq_16; }
	inline TypeU5BU5DU5BU5D_t1089499386** get_address_of_paramModReq_16() { return &___paramModReq_16; }
	inline void set_paramModReq_16(TypeU5BU5DU5BU5D_t1089499386* value)
	{
		___paramModReq_16 = value;
		Il2CppCodeGenWriteBarrier((&___paramModReq_16), value);
	}

	inline static int32_t get_offset_of_paramModOpt_17() { return static_cast<int32_t>(offsetof(MethodBuilder_t3828721349, ___paramModOpt_17)); }
	inline TypeU5BU5DU5BU5D_t1089499386* get_paramModOpt_17() const { return ___paramModOpt_17; }
	inline TypeU5BU5DU5BU5D_t1089499386** get_address_of_paramModOpt_17() { return &___paramModOpt_17; }
	inline void set_paramModOpt_17(TypeU5BU5DU5BU5D_t1089499386* value)
	{
		___paramModOpt_17 = value;
		Il2CppCodeGenWriteBarrier((&___paramModOpt_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBUILDER_T3828721349_H
#ifndef UNMANAGEDMARSHAL_T1556783966_H
#define UNMANAGEDMARSHAL_T1556783966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.UnmanagedMarshal
struct  UnmanagedMarshal_t1556783966  : public RuntimeObject
{
public:
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::count
	int32_t ___count_0;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::t
	int32_t ___t_1;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::tbase
	int32_t ___tbase_2;
	// System.String System.Reflection.Emit.UnmanagedMarshal::guid
	String_t* ___guid_3;
	// System.String System.Reflection.Emit.UnmanagedMarshal::mcookie
	String_t* ___mcookie_4;
	// System.String System.Reflection.Emit.UnmanagedMarshal::marshaltype
	String_t* ___marshaltype_5;
	// System.Type System.Reflection.Emit.UnmanagedMarshal::marshaltyperef
	Type_t * ___marshaltyperef_6;
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::param_num
	int32_t ___param_num_7;
	// System.Boolean System.Reflection.Emit.UnmanagedMarshal::has_size
	bool ___has_size_8;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1556783966, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_t_1() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1556783966, ___t_1)); }
	inline int32_t get_t_1() const { return ___t_1; }
	inline int32_t* get_address_of_t_1() { return &___t_1; }
	inline void set_t_1(int32_t value)
	{
		___t_1 = value;
	}

	inline static int32_t get_offset_of_tbase_2() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1556783966, ___tbase_2)); }
	inline int32_t get_tbase_2() const { return ___tbase_2; }
	inline int32_t* get_address_of_tbase_2() { return &___tbase_2; }
	inline void set_tbase_2(int32_t value)
	{
		___tbase_2 = value;
	}

	inline static int32_t get_offset_of_guid_3() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1556783966, ___guid_3)); }
	inline String_t* get_guid_3() const { return ___guid_3; }
	inline String_t** get_address_of_guid_3() { return &___guid_3; }
	inline void set_guid_3(String_t* value)
	{
		___guid_3 = value;
		Il2CppCodeGenWriteBarrier((&___guid_3), value);
	}

	inline static int32_t get_offset_of_mcookie_4() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1556783966, ___mcookie_4)); }
	inline String_t* get_mcookie_4() const { return ___mcookie_4; }
	inline String_t** get_address_of_mcookie_4() { return &___mcookie_4; }
	inline void set_mcookie_4(String_t* value)
	{
		___mcookie_4 = value;
		Il2CppCodeGenWriteBarrier((&___mcookie_4), value);
	}

	inline static int32_t get_offset_of_marshaltype_5() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1556783966, ___marshaltype_5)); }
	inline String_t* get_marshaltype_5() const { return ___marshaltype_5; }
	inline String_t** get_address_of_marshaltype_5() { return &___marshaltype_5; }
	inline void set_marshaltype_5(String_t* value)
	{
		___marshaltype_5 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltype_5), value);
	}

	inline static int32_t get_offset_of_marshaltyperef_6() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1556783966, ___marshaltyperef_6)); }
	inline Type_t * get_marshaltyperef_6() const { return ___marshaltyperef_6; }
	inline Type_t ** get_address_of_marshaltyperef_6() { return &___marshaltyperef_6; }
	inline void set_marshaltyperef_6(Type_t * value)
	{
		___marshaltyperef_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltyperef_6), value);
	}

	inline static int32_t get_offset_of_param_num_7() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1556783966, ___param_num_7)); }
	inline int32_t get_param_num_7() const { return ___param_num_7; }
	inline int32_t* get_address_of_param_num_7() { return &___param_num_7; }
	inline void set_param_num_7(int32_t value)
	{
		___param_num_7 = value;
	}

	inline static int32_t get_offset_of_has_size_8() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t1556783966, ___has_size_8)); }
	inline bool get_has_size_8() const { return ___has_size_8; }
	inline bool* get_address_of_has_size_8() { return &___has_size_8; }
	inline void set_has_size_8(bool value)
	{
		___has_size_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMARSHAL_T1556783966_H
#ifndef MONOEVENTINFO_T1085908357_H
#define MONOEVENTINFO_T1085908357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEventInfo
struct  MonoEventInfo_t1085908357 
{
public:
	// System.Type System.Reflection.MonoEventInfo::declaring_type
	Type_t * ___declaring_type_0;
	// System.Type System.Reflection.MonoEventInfo::reflected_type
	Type_t * ___reflected_type_1;
	// System.String System.Reflection.MonoEventInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::add_method
	MethodInfo_t * ___add_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::remove_method
	MethodInfo_t * ___remove_method_4;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::raise_method
	MethodInfo_t * ___raise_method_5;
	// System.Reflection.EventAttributes System.Reflection.MonoEventInfo::attrs
	int32_t ___attrs_6;
	// System.Reflection.MethodInfo[] System.Reflection.MonoEventInfo::other_methods
	MethodInfoU5BU5D_t2287781964* ___other_methods_7;

public:
	inline static int32_t get_offset_of_declaring_type_0() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1085908357, ___declaring_type_0)); }
	inline Type_t * get_declaring_type_0() const { return ___declaring_type_0; }
	inline Type_t ** get_address_of_declaring_type_0() { return &___declaring_type_0; }
	inline void set_declaring_type_0(Type_t * value)
	{
		___declaring_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_0), value);
	}

	inline static int32_t get_offset_of_reflected_type_1() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1085908357, ___reflected_type_1)); }
	inline Type_t * get_reflected_type_1() const { return ___reflected_type_1; }
	inline Type_t ** get_address_of_reflected_type_1() { return &___reflected_type_1; }
	inline void set_reflected_type_1(Type_t * value)
	{
		___reflected_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___reflected_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1085908357, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_add_method_3() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1085908357, ___add_method_3)); }
	inline MethodInfo_t * get_add_method_3() const { return ___add_method_3; }
	inline MethodInfo_t ** get_address_of_add_method_3() { return &___add_method_3; }
	inline void set_add_method_3(MethodInfo_t * value)
	{
		___add_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_3), value);
	}

	inline static int32_t get_offset_of_remove_method_4() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1085908357, ___remove_method_4)); }
	inline MethodInfo_t * get_remove_method_4() const { return ___remove_method_4; }
	inline MethodInfo_t ** get_address_of_remove_method_4() { return &___remove_method_4; }
	inline void set_remove_method_4(MethodInfo_t * value)
	{
		___remove_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_4), value);
	}

	inline static int32_t get_offset_of_raise_method_5() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1085908357, ___raise_method_5)); }
	inline MethodInfo_t * get_raise_method_5() const { return ___raise_method_5; }
	inline MethodInfo_t ** get_address_of_raise_method_5() { return &___raise_method_5; }
	inline void set_raise_method_5(MethodInfo_t * value)
	{
		___raise_method_5 = value;
		Il2CppCodeGenWriteBarrier((&___raise_method_5), value);
	}

	inline static int32_t get_offset_of_attrs_6() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1085908357, ___attrs_6)); }
	inline int32_t get_attrs_6() const { return ___attrs_6; }
	inline int32_t* get_address_of_attrs_6() { return &___attrs_6; }
	inline void set_attrs_6(int32_t value)
	{
		___attrs_6 = value;
	}

	inline static int32_t get_offset_of_other_methods_7() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1085908357, ___other_methods_7)); }
	inline MethodInfoU5BU5D_t2287781964* get_other_methods_7() const { return ___other_methods_7; }
	inline MethodInfoU5BU5D_t2287781964** get_address_of_other_methods_7() { return &___other_methods_7; }
	inline void set_other_methods_7(MethodInfoU5BU5D_t2287781964* value)
	{
		___other_methods_7 = value;
		Il2CppCodeGenWriteBarrier((&___other_methods_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t1085908357_marshaled_pinvoke
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	char* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t2287781964* ___other_methods_7;
};
// Native definition for COM marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t1085908357_marshaled_com
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t2287781964* ___other_methods_7;
};
#endif // MONOEVENTINFO_T1085908357_H
#ifndef FIELDBUILDER_T2744714187_H
#define FIELDBUILDER_T2744714187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.FieldBuilder
struct  FieldBuilder_t2744714187  : public FieldInfo_t
{
public:
	// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::attrs
	int32_t ___attrs_0;
	// System.Type System.Reflection.Emit.FieldBuilder::type
	Type_t * ___type_1;
	// System.String System.Reflection.Emit.FieldBuilder::name
	String_t* ___name_2;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.FieldBuilder::typeb
	TypeBuilder_t2760519975 * ___typeb_3;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::marshal_info
	UnmanagedMarshal_t1556783966 * ___marshal_info_4;

public:
	inline static int32_t get_offset_of_attrs_0() { return static_cast<int32_t>(offsetof(FieldBuilder_t2744714187, ___attrs_0)); }
	inline int32_t get_attrs_0() const { return ___attrs_0; }
	inline int32_t* get_address_of_attrs_0() { return &___attrs_0; }
	inline void set_attrs_0(int32_t value)
	{
		___attrs_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(FieldBuilder_t2744714187, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(FieldBuilder_t2744714187, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_typeb_3() { return static_cast<int32_t>(offsetof(FieldBuilder_t2744714187, ___typeb_3)); }
	inline TypeBuilder_t2760519975 * get_typeb_3() const { return ___typeb_3; }
	inline TypeBuilder_t2760519975 ** get_address_of_typeb_3() { return &___typeb_3; }
	inline void set_typeb_3(TypeBuilder_t2760519975 * value)
	{
		___typeb_3 = value;
		Il2CppCodeGenWriteBarrier((&___typeb_3), value);
	}

	inline static int32_t get_offset_of_marshal_info_4() { return static_cast<int32_t>(offsetof(FieldBuilder_t2744714187, ___marshal_info_4)); }
	inline UnmanagedMarshal_t1556783966 * get_marshal_info_4() const { return ___marshal_info_4; }
	inline UnmanagedMarshal_t1556783966 ** get_address_of_marshal_info_4() { return &___marshal_info_4; }
	inline void set_marshal_info_4(UnmanagedMarshal_t1556783966 * value)
	{
		___marshal_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___marshal_info_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDBUILDER_T2744714187_H
#ifndef ASSEMBLYNAME_T28451399_H
#define ASSEMBLYNAME_T28451399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t28451399  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t4283686187 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t1867757446 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t2729897319* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t2729897319* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t2220740773 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t28451399, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t28451399, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t28451399, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t28451399, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t28451399, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t28451399, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t28451399, ___cultureinfo_6)); }
	inline CultureInfo_t4283686187 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t4283686187 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t4283686187 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t28451399, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t28451399, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t28451399, ___keypair_9)); }
	inline StrongNameKeyPair_t1867757446 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t1867757446 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t1867757446 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t28451399, ___publicKey_10)); }
	inline ByteU5BU5D_t2729897319* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t2729897319** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t2729897319* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t28451399, ___keyToken_11)); }
	inline ByteU5BU5D_t2729897319* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t2729897319** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t2729897319* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t28451399, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t28451399, ___version_13)); }
	inline Version_t2220740773 * get_version_13() const { return ___version_13; }
	inline Version_t2220740773 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t2220740773 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t28451399, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAME_T28451399_H
#ifndef MONOMETHOD_T_H
#define MONOMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethod
struct  MonoMethod_t  : public MethodInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoMethod::mhandle
	IntPtr_t ___mhandle_0;
	// System.String System.Reflection.MonoMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.MonoMethod::reftype
	Type_t * ___reftype_2;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___mhandle_0)); }
	inline IntPtr_t get_mhandle_0() const { return ___mhandle_0; }
	inline IntPtr_t* get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(IntPtr_t value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_reftype_2() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___reftype_2)); }
	inline Type_t * get_reftype_2() const { return ___reftype_2; }
	inline Type_t ** get_address_of_reftype_2() { return &___reftype_2; }
	inline void set_reftype_2(Type_t * value)
	{
		___reftype_2 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHOD_T_H
#ifndef MONOCMETHOD_T581046119_H
#define MONOCMETHOD_T581046119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoCMethod
struct  MonoCMethod_t581046119  : public ConstructorInfo_t3416953175
{
public:
	// System.IntPtr System.Reflection.MonoCMethod::mhandle
	IntPtr_t ___mhandle_2;
	// System.String System.Reflection.MonoCMethod::name
	String_t* ___name_3;
	// System.Type System.Reflection.MonoCMethod::reftype
	Type_t * ___reftype_4;

public:
	inline static int32_t get_offset_of_mhandle_2() { return static_cast<int32_t>(offsetof(MonoCMethod_t581046119, ___mhandle_2)); }
	inline IntPtr_t get_mhandle_2() const { return ___mhandle_2; }
	inline IntPtr_t* get_address_of_mhandle_2() { return &___mhandle_2; }
	inline void set_mhandle_2(IntPtr_t value)
	{
		___mhandle_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(MonoCMethod_t581046119, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_reftype_4() { return static_cast<int32_t>(offsetof(MonoCMethod_t581046119, ___reftype_4)); }
	inline Type_t * get_reftype_4() const { return ___reftype_4; }
	inline Type_t ** get_address_of_reftype_4() { return &___reftype_4; }
	inline void set_reftype_4(Type_t * value)
	{
		___reftype_4 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCMETHOD_T581046119_H
#ifndef MONOPROPERTYINFO_T3447785465_H
#define MONOPROPERTYINFO_T3447785465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoPropertyInfo
struct  MonoPropertyInfo_t3447785465 
{
public:
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent_0;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_1;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t * ___get_method_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t * ___set_method_3;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3447785465, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3447785465, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_get_method_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3447785465, ___get_method_2)); }
	inline MethodInfo_t * get_get_method_2() const { return ___get_method_2; }
	inline MethodInfo_t ** get_address_of_get_method_2() { return &___get_method_2; }
	inline void set_get_method_2(MethodInfo_t * value)
	{
		___get_method_2 = value;
		Il2CppCodeGenWriteBarrier((&___get_method_2), value);
	}

	inline static int32_t get_offset_of_set_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3447785465, ___set_method_3)); }
	inline MethodInfo_t * get_set_method_3() const { return ___set_method_3; }
	inline MethodInfo_t ** get_address_of_set_method_3() { return &___set_method_3; }
	inline void set_set_method_3(MethodInfo_t * value)
	{
		___set_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___set_method_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3447785465, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3447785465_marshaled_pinvoke
{
	Type_t * ___parent_0;
	char* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3447785465_marshaled_com
{
	Type_t * ___parent_0;
	Il2CppChar* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
#endif // MONOPROPERTYINFO_T3447785465_H
#ifndef MEMBERINFOSERIALIZATIONHOLDER_T1819359186_H
#define MEMBERINFOSERIALIZATIONHOLDER_T1819359186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfoSerializationHolder
struct  MemberInfoSerializationHolder_t1819359186  : public RuntimeObject
{
public:
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberName
	String_t* ____memberName_0;
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberSignature
	String_t* ____memberSignature_1;
	// System.Reflection.MemberTypes System.Reflection.MemberInfoSerializationHolder::_memberType
	int32_t ____memberType_2;
	// System.Type System.Reflection.MemberInfoSerializationHolder::_reflectedType
	Type_t * ____reflectedType_3;
	// System.Type[] System.Reflection.MemberInfoSerializationHolder::_genericArguments
	TypeU5BU5D_t1627120059* ____genericArguments_4;

public:
	inline static int32_t get_offset_of__memberName_0() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1819359186, ____memberName_0)); }
	inline String_t* get__memberName_0() const { return ____memberName_0; }
	inline String_t** get_address_of__memberName_0() { return &____memberName_0; }
	inline void set__memberName_0(String_t* value)
	{
		____memberName_0 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_0), value);
	}

	inline static int32_t get_offset_of__memberSignature_1() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1819359186, ____memberSignature_1)); }
	inline String_t* get__memberSignature_1() const { return ____memberSignature_1; }
	inline String_t** get_address_of__memberSignature_1() { return &____memberSignature_1; }
	inline void set__memberSignature_1(String_t* value)
	{
		____memberSignature_1 = value;
		Il2CppCodeGenWriteBarrier((&____memberSignature_1), value);
	}

	inline static int32_t get_offset_of__memberType_2() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1819359186, ____memberType_2)); }
	inline int32_t get__memberType_2() const { return ____memberType_2; }
	inline int32_t* get_address_of__memberType_2() { return &____memberType_2; }
	inline void set__memberType_2(int32_t value)
	{
		____memberType_2 = value;
	}

	inline static int32_t get_offset_of__reflectedType_3() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1819359186, ____reflectedType_3)); }
	inline Type_t * get__reflectedType_3() const { return ____reflectedType_3; }
	inline Type_t ** get_address_of__reflectedType_3() { return &____reflectedType_3; }
	inline void set__reflectedType_3(Type_t * value)
	{
		____reflectedType_3 = value;
		Il2CppCodeGenWriteBarrier((&____reflectedType_3), value);
	}

	inline static int32_t get_offset_of__genericArguments_4() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1819359186, ____genericArguments_4)); }
	inline TypeU5BU5D_t1627120059* get__genericArguments_4() const { return ____genericArguments_4; }
	inline TypeU5BU5D_t1627120059** get_address_of__genericArguments_4() { return &____genericArguments_4; }
	inline void set__genericArguments_4(TypeU5BU5D_t1627120059* value)
	{
		____genericArguments_4 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFOSERIALIZATIONHOLDER_T1819359186_H
#ifndef MULTICASTDELEGATE_T361376620_H
#define MULTICASTDELEGATE_T361376620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t361376620  : public Delegate_t417437614
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t361376620 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t361376620 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t361376620, ___prev_9)); }
	inline MulticastDelegate_t361376620 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t361376620 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t361376620 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t361376620, ___kpm_next_10)); }
	inline MulticastDelegate_t361376620 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t361376620 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t361376620 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T361376620_H
#ifndef DYNAMICMETHOD_T4133704721_H
#define DYNAMICMETHOD_T4133704721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.DynamicMethod
struct  DynamicMethod_t4133704721  : public MethodInfo_t
{
public:
	// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::mhandle
	RuntimeMethodHandle_t2181030097  ___mhandle_0;
	// System.String System.Reflection.Emit.DynamicMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.Emit.DynamicMethod::returnType
	Type_t * ___returnType_2;
	// System.Type[] System.Reflection.Emit.DynamicMethod::parameters
	TypeU5BU5D_t1627120059* ___parameters_3;
	// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::attributes
	int32_t ___attributes_4;
	// System.Reflection.CallingConventions System.Reflection.Emit.DynamicMethod::callingConvention
	int32_t ___callingConvention_5;
	// System.Reflection.Module System.Reflection.Emit.DynamicMethod::module
	Module_t3517295286 * ___module_6;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::ilgen
	ILGenerator_t3929519702 * ___ilgen_7;
	// System.Object[] System.Reflection.Emit.DynamicMethod::refs
	ObjectU5BU5D_t1430047311* ___refs_8;
	// System.Reflection.MonoMethod System.Reflection.Emit.DynamicMethod::method
	MonoMethod_t * ___method_9;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.DynamicMethod::pinfo
	ParameterBuilderU5BU5D_t296063035* ___pinfo_10;
	// System.Boolean System.Reflection.Emit.DynamicMethod::creating
	bool ___creating_11;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(DynamicMethod_t4133704721, ___mhandle_0)); }
	inline RuntimeMethodHandle_t2181030097  get_mhandle_0() const { return ___mhandle_0; }
	inline RuntimeMethodHandle_t2181030097 * get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(RuntimeMethodHandle_t2181030097  value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(DynamicMethod_t4133704721, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_returnType_2() { return static_cast<int32_t>(offsetof(DynamicMethod_t4133704721, ___returnType_2)); }
	inline Type_t * get_returnType_2() const { return ___returnType_2; }
	inline Type_t ** get_address_of_returnType_2() { return &___returnType_2; }
	inline void set_returnType_2(Type_t * value)
	{
		___returnType_2 = value;
		Il2CppCodeGenWriteBarrier((&___returnType_2), value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(DynamicMethod_t4133704721, ___parameters_3)); }
	inline TypeU5BU5D_t1627120059* get_parameters_3() const { return ___parameters_3; }
	inline TypeU5BU5D_t1627120059** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(TypeU5BU5D_t1627120059* value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_3), value);
	}

	inline static int32_t get_offset_of_attributes_4() { return static_cast<int32_t>(offsetof(DynamicMethod_t4133704721, ___attributes_4)); }
	inline int32_t get_attributes_4() const { return ___attributes_4; }
	inline int32_t* get_address_of_attributes_4() { return &___attributes_4; }
	inline void set_attributes_4(int32_t value)
	{
		___attributes_4 = value;
	}

	inline static int32_t get_offset_of_callingConvention_5() { return static_cast<int32_t>(offsetof(DynamicMethod_t4133704721, ___callingConvention_5)); }
	inline int32_t get_callingConvention_5() const { return ___callingConvention_5; }
	inline int32_t* get_address_of_callingConvention_5() { return &___callingConvention_5; }
	inline void set_callingConvention_5(int32_t value)
	{
		___callingConvention_5 = value;
	}

	inline static int32_t get_offset_of_module_6() { return static_cast<int32_t>(offsetof(DynamicMethod_t4133704721, ___module_6)); }
	inline Module_t3517295286 * get_module_6() const { return ___module_6; }
	inline Module_t3517295286 ** get_address_of_module_6() { return &___module_6; }
	inline void set_module_6(Module_t3517295286 * value)
	{
		___module_6 = value;
		Il2CppCodeGenWriteBarrier((&___module_6), value);
	}

	inline static int32_t get_offset_of_ilgen_7() { return static_cast<int32_t>(offsetof(DynamicMethod_t4133704721, ___ilgen_7)); }
	inline ILGenerator_t3929519702 * get_ilgen_7() const { return ___ilgen_7; }
	inline ILGenerator_t3929519702 ** get_address_of_ilgen_7() { return &___ilgen_7; }
	inline void set_ilgen_7(ILGenerator_t3929519702 * value)
	{
		___ilgen_7 = value;
		Il2CppCodeGenWriteBarrier((&___ilgen_7), value);
	}

	inline static int32_t get_offset_of_refs_8() { return static_cast<int32_t>(offsetof(DynamicMethod_t4133704721, ___refs_8)); }
	inline ObjectU5BU5D_t1430047311* get_refs_8() const { return ___refs_8; }
	inline ObjectU5BU5D_t1430047311** get_address_of_refs_8() { return &___refs_8; }
	inline void set_refs_8(ObjectU5BU5D_t1430047311* value)
	{
		___refs_8 = value;
		Il2CppCodeGenWriteBarrier((&___refs_8), value);
	}

	inline static int32_t get_offset_of_method_9() { return static_cast<int32_t>(offsetof(DynamicMethod_t4133704721, ___method_9)); }
	inline MonoMethod_t * get_method_9() const { return ___method_9; }
	inline MonoMethod_t ** get_address_of_method_9() { return &___method_9; }
	inline void set_method_9(MonoMethod_t * value)
	{
		___method_9 = value;
		Il2CppCodeGenWriteBarrier((&___method_9), value);
	}

	inline static int32_t get_offset_of_pinfo_10() { return static_cast<int32_t>(offsetof(DynamicMethod_t4133704721, ___pinfo_10)); }
	inline ParameterBuilderU5BU5D_t296063035* get_pinfo_10() const { return ___pinfo_10; }
	inline ParameterBuilderU5BU5D_t296063035** get_address_of_pinfo_10() { return &___pinfo_10; }
	inline void set_pinfo_10(ParameterBuilderU5BU5D_t296063035* value)
	{
		___pinfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___pinfo_10), value);
	}

	inline static int32_t get_offset_of_creating_11() { return static_cast<int32_t>(offsetof(DynamicMethod_t4133704721, ___creating_11)); }
	inline bool get_creating_11() const { return ___creating_11; }
	inline bool* get_address_of_creating_11() { return &___creating_11; }
	inline void set_creating_11(bool value)
	{
		___creating_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICMETHOD_T4133704721_H
#ifndef MONOMETHODINFO_T795915902_H
#define MONOMETHODINFO_T795915902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethodInfo
struct  MonoMethodInfo_t795915902 
{
public:
	// System.Type System.Reflection.MonoMethodInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoMethodInfo::ret
	Type_t * ___ret_1;
	// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.MonoMethodInfo::iattrs
	int32_t ___iattrs_3;
	// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::callconv
	int32_t ___callconv_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t795915902, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_ret_1() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t795915902, ___ret_1)); }
	inline Type_t * get_ret_1() const { return ___ret_1; }
	inline Type_t ** get_address_of_ret_1() { return &___ret_1; }
	inline void set_ret_1(Type_t * value)
	{
		___ret_1 = value;
		Il2CppCodeGenWriteBarrier((&___ret_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t795915902, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t795915902, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_callconv_4() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t795915902, ___callconv_4)); }
	inline int32_t get_callconv_4() const { return ___callconv_4; }
	inline int32_t* get_address_of_callconv_4() { return &___callconv_4; }
	inline void set_callconv_4(int32_t value)
	{
		___callconv_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t795915902_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
// Native definition for COM marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t795915902_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
#endif // MONOMETHODINFO_T795915902_H
#ifndef MODULE_T3517295286_H
#define MODULE_T3517295286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t3517295286  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	IntPtr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t2577078533 * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t3517295286, ____impl_3)); }
	inline IntPtr_t get__impl_3() const { return ____impl_3; }
	inline IntPtr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(IntPtr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t3517295286, ___assembly_4)); }
	inline Assembly_t2577078533 * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t2577078533 ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t2577078533 * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t3517295286, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t3517295286, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t3517295286, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t3517295286, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t3517295286, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t3517295286_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t3510508607 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t3510508607 * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t3517295286_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t3510508607 * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t3510508607 ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t3510508607 * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t3517295286_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t3510508607 * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t3510508607 ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t3510508607 * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T3517295286_H
#ifndef GENERICTYPEPARAMETERBUILDER_T673941554_H
#define GENERICTYPEPARAMETERBUILDER_T673941554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.GenericTypeParameterBuilder
struct  GenericTypeParameterBuilder_t673941554  : public Type_t
{
public:
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.GenericTypeParameterBuilder::tbuilder
	TypeBuilder_t2760519975 * ___tbuilder_8;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.GenericTypeParameterBuilder::mbuilder
	MethodBuilder_t3828721349 * ___mbuilder_9;
	// System.String System.Reflection.Emit.GenericTypeParameterBuilder::name
	String_t* ___name_10;
	// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::base_type
	Type_t * ___base_type_11;

public:
	inline static int32_t get_offset_of_tbuilder_8() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t673941554, ___tbuilder_8)); }
	inline TypeBuilder_t2760519975 * get_tbuilder_8() const { return ___tbuilder_8; }
	inline TypeBuilder_t2760519975 ** get_address_of_tbuilder_8() { return &___tbuilder_8; }
	inline void set_tbuilder_8(TypeBuilder_t2760519975 * value)
	{
		___tbuilder_8 = value;
		Il2CppCodeGenWriteBarrier((&___tbuilder_8), value);
	}

	inline static int32_t get_offset_of_mbuilder_9() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t673941554, ___mbuilder_9)); }
	inline MethodBuilder_t3828721349 * get_mbuilder_9() const { return ___mbuilder_9; }
	inline MethodBuilder_t3828721349 ** get_address_of_mbuilder_9() { return &___mbuilder_9; }
	inline void set_mbuilder_9(MethodBuilder_t3828721349 * value)
	{
		___mbuilder_9 = value;
		Il2CppCodeGenWriteBarrier((&___mbuilder_9), value);
	}

	inline static int32_t get_offset_of_name_10() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t673941554, ___name_10)); }
	inline String_t* get_name_10() const { return ___name_10; }
	inline String_t** get_address_of_name_10() { return &___name_10; }
	inline void set_name_10(String_t* value)
	{
		___name_10 = value;
		Il2CppCodeGenWriteBarrier((&___name_10), value);
	}

	inline static int32_t get_offset_of_base_type_11() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t673941554, ___base_type_11)); }
	inline Type_t * get_base_type_11() const { return ___base_type_11; }
	inline Type_t ** get_address_of_base_type_11() { return &___base_type_11; }
	inline void set_base_type_11(Type_t * value)
	{
		___base_type_11 = value;
		Il2CppCodeGenWriteBarrier((&___base_type_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICTYPEPARAMETERBUILDER_T673941554_H
#ifndef ENUMBUILDER_T491705617_H
#define ENUMBUILDER_T491705617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.EnumBuilder
struct  EnumBuilder_t491705617  : public Type_t
{
public:
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.EnumBuilder::_tb
	TypeBuilder_t2760519975 * ____tb_8;
	// System.Type System.Reflection.Emit.EnumBuilder::_underlyingType
	Type_t * ____underlyingType_9;

public:
	inline static int32_t get_offset_of__tb_8() { return static_cast<int32_t>(offsetof(EnumBuilder_t491705617, ____tb_8)); }
	inline TypeBuilder_t2760519975 * get__tb_8() const { return ____tb_8; }
	inline TypeBuilder_t2760519975 ** get_address_of__tb_8() { return &____tb_8; }
	inline void set__tb_8(TypeBuilder_t2760519975 * value)
	{
		____tb_8 = value;
		Il2CppCodeGenWriteBarrier((&____tb_8), value);
	}

	inline static int32_t get_offset_of__underlyingType_9() { return static_cast<int32_t>(offsetof(EnumBuilder_t491705617, ____underlyingType_9)); }
	inline Type_t * get__underlyingType_9() const { return ____underlyingType_9; }
	inline Type_t ** get_address_of__underlyingType_9() { return &____underlyingType_9; }
	inline void set__underlyingType_9(Type_t * value)
	{
		____underlyingType_9 = value;
		Il2CppCodeGenWriteBarrier((&____underlyingType_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMBUILDER_T491705617_H
#ifndef MONOGENERICMETHOD_T_H
#define MONOGENERICMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericMethod
struct  MonoGenericMethod_t  : public MonoMethod_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICMETHOD_T_H
#ifndef TYPEBUILDER_T2760519975_H
#define TYPEBUILDER_T2760519975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.TypeBuilder
struct  TypeBuilder_t2760519975  : public Type_t
{
public:
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname_8;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace_9;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent_10;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type_11;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t1627120059* ___interfaces_12;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_methods
	int32_t ___num_methods_13;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t2513458312* ___methods_14;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t4068674872* ___ctors_15;
	// System.Reflection.Emit.PropertyBuilder[] System.Reflection.Emit.TypeBuilder::properties
	PropertyBuilderU5BU5D_t2412219556* ___properties_16;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t2961880234* ___fields_17;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.TypeBuilder::subtypes
	TypeBuilderU5BU5D_t2036906590* ___subtypes_18;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs_19;
	// System.Int32 System.Reflection.Emit.TypeBuilder::table_idx
	int32_t ___table_idx_20;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t3323659057 * ___pmodule_21;
	// System.Int32 System.Reflection.Emit.TypeBuilder::class_size
	int32_t ___class_size_22;
	// System.Reflection.Emit.PackingSize System.Reflection.Emit.TypeBuilder::packing_size
	int32_t ___packing_size_23;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t1648436935* ___generic_params_24;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created_25;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname_26;
	// System.Boolean System.Reflection.Emit.TypeBuilder::createTypeCalled
	bool ___createTypeCalled_27;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type_28;

public:
	inline static int32_t get_offset_of_tname_8() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___tname_8)); }
	inline String_t* get_tname_8() const { return ___tname_8; }
	inline String_t** get_address_of_tname_8() { return &___tname_8; }
	inline void set_tname_8(String_t* value)
	{
		___tname_8 = value;
		Il2CppCodeGenWriteBarrier((&___tname_8), value);
	}

	inline static int32_t get_offset_of_nspace_9() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___nspace_9)); }
	inline String_t* get_nspace_9() const { return ___nspace_9; }
	inline String_t** get_address_of_nspace_9() { return &___nspace_9; }
	inline void set_nspace_9(String_t* value)
	{
		___nspace_9 = value;
		Il2CppCodeGenWriteBarrier((&___nspace_9), value);
	}

	inline static int32_t get_offset_of_parent_10() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___parent_10)); }
	inline Type_t * get_parent_10() const { return ___parent_10; }
	inline Type_t ** get_address_of_parent_10() { return &___parent_10; }
	inline void set_parent_10(Type_t * value)
	{
		___parent_10 = value;
		Il2CppCodeGenWriteBarrier((&___parent_10), value);
	}

	inline static int32_t get_offset_of_nesting_type_11() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___nesting_type_11)); }
	inline Type_t * get_nesting_type_11() const { return ___nesting_type_11; }
	inline Type_t ** get_address_of_nesting_type_11() { return &___nesting_type_11; }
	inline void set_nesting_type_11(Type_t * value)
	{
		___nesting_type_11 = value;
		Il2CppCodeGenWriteBarrier((&___nesting_type_11), value);
	}

	inline static int32_t get_offset_of_interfaces_12() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___interfaces_12)); }
	inline TypeU5BU5D_t1627120059* get_interfaces_12() const { return ___interfaces_12; }
	inline TypeU5BU5D_t1627120059** get_address_of_interfaces_12() { return &___interfaces_12; }
	inline void set_interfaces_12(TypeU5BU5D_t1627120059* value)
	{
		___interfaces_12 = value;
		Il2CppCodeGenWriteBarrier((&___interfaces_12), value);
	}

	inline static int32_t get_offset_of_num_methods_13() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___num_methods_13)); }
	inline int32_t get_num_methods_13() const { return ___num_methods_13; }
	inline int32_t* get_address_of_num_methods_13() { return &___num_methods_13; }
	inline void set_num_methods_13(int32_t value)
	{
		___num_methods_13 = value;
	}

	inline static int32_t get_offset_of_methods_14() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___methods_14)); }
	inline MethodBuilderU5BU5D_t2513458312* get_methods_14() const { return ___methods_14; }
	inline MethodBuilderU5BU5D_t2513458312** get_address_of_methods_14() { return &___methods_14; }
	inline void set_methods_14(MethodBuilderU5BU5D_t2513458312* value)
	{
		___methods_14 = value;
		Il2CppCodeGenWriteBarrier((&___methods_14), value);
	}

	inline static int32_t get_offset_of_ctors_15() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___ctors_15)); }
	inline ConstructorBuilderU5BU5D_t4068674872* get_ctors_15() const { return ___ctors_15; }
	inline ConstructorBuilderU5BU5D_t4068674872** get_address_of_ctors_15() { return &___ctors_15; }
	inline void set_ctors_15(ConstructorBuilderU5BU5D_t4068674872* value)
	{
		___ctors_15 = value;
		Il2CppCodeGenWriteBarrier((&___ctors_15), value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___properties_16)); }
	inline PropertyBuilderU5BU5D_t2412219556* get_properties_16() const { return ___properties_16; }
	inline PropertyBuilderU5BU5D_t2412219556** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(PropertyBuilderU5BU5D_t2412219556* value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier((&___properties_16), value);
	}

	inline static int32_t get_offset_of_fields_17() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___fields_17)); }
	inline FieldBuilderU5BU5D_t2961880234* get_fields_17() const { return ___fields_17; }
	inline FieldBuilderU5BU5D_t2961880234** get_address_of_fields_17() { return &___fields_17; }
	inline void set_fields_17(FieldBuilderU5BU5D_t2961880234* value)
	{
		___fields_17 = value;
		Il2CppCodeGenWriteBarrier((&___fields_17), value);
	}

	inline static int32_t get_offset_of_subtypes_18() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___subtypes_18)); }
	inline TypeBuilderU5BU5D_t2036906590* get_subtypes_18() const { return ___subtypes_18; }
	inline TypeBuilderU5BU5D_t2036906590** get_address_of_subtypes_18() { return &___subtypes_18; }
	inline void set_subtypes_18(TypeBuilderU5BU5D_t2036906590* value)
	{
		___subtypes_18 = value;
		Il2CppCodeGenWriteBarrier((&___subtypes_18), value);
	}

	inline static int32_t get_offset_of_attrs_19() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___attrs_19)); }
	inline int32_t get_attrs_19() const { return ___attrs_19; }
	inline int32_t* get_address_of_attrs_19() { return &___attrs_19; }
	inline void set_attrs_19(int32_t value)
	{
		___attrs_19 = value;
	}

	inline static int32_t get_offset_of_table_idx_20() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___table_idx_20)); }
	inline int32_t get_table_idx_20() const { return ___table_idx_20; }
	inline int32_t* get_address_of_table_idx_20() { return &___table_idx_20; }
	inline void set_table_idx_20(int32_t value)
	{
		___table_idx_20 = value;
	}

	inline static int32_t get_offset_of_pmodule_21() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___pmodule_21)); }
	inline ModuleBuilder_t3323659057 * get_pmodule_21() const { return ___pmodule_21; }
	inline ModuleBuilder_t3323659057 ** get_address_of_pmodule_21() { return &___pmodule_21; }
	inline void set_pmodule_21(ModuleBuilder_t3323659057 * value)
	{
		___pmodule_21 = value;
		Il2CppCodeGenWriteBarrier((&___pmodule_21), value);
	}

	inline static int32_t get_offset_of_class_size_22() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___class_size_22)); }
	inline int32_t get_class_size_22() const { return ___class_size_22; }
	inline int32_t* get_address_of_class_size_22() { return &___class_size_22; }
	inline void set_class_size_22(int32_t value)
	{
		___class_size_22 = value;
	}

	inline static int32_t get_offset_of_packing_size_23() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___packing_size_23)); }
	inline int32_t get_packing_size_23() const { return ___packing_size_23; }
	inline int32_t* get_address_of_packing_size_23() { return &___packing_size_23; }
	inline void set_packing_size_23(int32_t value)
	{
		___packing_size_23 = value;
	}

	inline static int32_t get_offset_of_generic_params_24() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___generic_params_24)); }
	inline GenericTypeParameterBuilderU5BU5D_t1648436935* get_generic_params_24() const { return ___generic_params_24; }
	inline GenericTypeParameterBuilderU5BU5D_t1648436935** get_address_of_generic_params_24() { return &___generic_params_24; }
	inline void set_generic_params_24(GenericTypeParameterBuilderU5BU5D_t1648436935* value)
	{
		___generic_params_24 = value;
		Il2CppCodeGenWriteBarrier((&___generic_params_24), value);
	}

	inline static int32_t get_offset_of_created_25() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___created_25)); }
	inline Type_t * get_created_25() const { return ___created_25; }
	inline Type_t ** get_address_of_created_25() { return &___created_25; }
	inline void set_created_25(Type_t * value)
	{
		___created_25 = value;
		Il2CppCodeGenWriteBarrier((&___created_25), value);
	}

	inline static int32_t get_offset_of_fullname_26() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___fullname_26)); }
	inline String_t* get_fullname_26() const { return ___fullname_26; }
	inline String_t** get_address_of_fullname_26() { return &___fullname_26; }
	inline void set_fullname_26(String_t* value)
	{
		___fullname_26 = value;
		Il2CppCodeGenWriteBarrier((&___fullname_26), value);
	}

	inline static int32_t get_offset_of_createTypeCalled_27() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___createTypeCalled_27)); }
	inline bool get_createTypeCalled_27() const { return ___createTypeCalled_27; }
	inline bool* get_address_of_createTypeCalled_27() { return &___createTypeCalled_27; }
	inline void set_createTypeCalled_27(bool value)
	{
		___createTypeCalled_27 = value;
	}

	inline static int32_t get_offset_of_underlying_type_28() { return static_cast<int32_t>(offsetof(TypeBuilder_t2760519975, ___underlying_type_28)); }
	inline Type_t * get_underlying_type_28() const { return ___underlying_type_28; }
	inline Type_t ** get_address_of_underlying_type_28() { return &___underlying_type_28; }
	inline void set_underlying_type_28(Type_t * value)
	{
		___underlying_type_28 = value;
		Il2CppCodeGenWriteBarrier((&___underlying_type_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEBUILDER_T2760519975_H
#ifndef TYPEDELEGATOR_T260377144_H
#define TYPEDELEGATOR_T260377144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeDelegator
struct  TypeDelegator_t260377144  : public Type_t
{
public:
	// System.Type System.Reflection.TypeDelegator::typeImpl
	Type_t * ___typeImpl_8;

public:
	inline static int32_t get_offset_of_typeImpl_8() { return static_cast<int32_t>(offsetof(TypeDelegator_t260377144, ___typeImpl_8)); }
	inline Type_t * get_typeImpl_8() const { return ___typeImpl_8; }
	inline Type_t ** get_address_of_typeImpl_8() { return &___typeImpl_8; }
	inline void set_typeImpl_8(Type_t * value)
	{
		___typeImpl_8 = value;
		Il2CppCodeGenWriteBarrier((&___typeImpl_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDELEGATOR_T260377144_H
#ifndef MONOGENERICCMETHOD_T2690016845_H
#define MONOGENERICCMETHOD_T2690016845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericCMethod
struct  MonoGenericCMethod_t2690016845  : public MonoCMethod_t581046119
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICCMETHOD_T2690016845_H
#ifndef MONOPROPERTY_T_H
#define MONOPROPERTY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty
struct  MonoProperty_t  : public PropertyInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	IntPtr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	IntPtr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t3447785465  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t4030410391 * ___cached_getter_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___prop_1)); }
	inline IntPtr_t get_prop_1() const { return ___prop_1; }
	inline IntPtr_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(IntPtr_t value)
	{
		___prop_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___info_2)); }
	inline MonoPropertyInfo_t3447785465  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_t3447785465 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_t3447785465  value)
	{
		___info_2 = value;
	}

	inline static int32_t get_offset_of_cached_3() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_3)); }
	inline int32_t get_cached_3() const { return ___cached_3; }
	inline int32_t* get_address_of_cached_3() { return &___cached_3; }
	inline void set_cached_3(int32_t value)
	{
		___cached_3 = value;
	}

	inline static int32_t get_offset_of_cached_getter_4() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_getter_4)); }
	inline GetterAdapter_t4030410391 * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t4030410391 ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t4030410391 * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((&___cached_getter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPROPERTY_T_H
#ifndef GETTERADAPTER_T4030410391_H
#define GETTERADAPTER_T4030410391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/GetterAdapter
struct  GetterAdapter_t4030410391  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTERADAPTER_T4030410391_H
#ifndef ADDEVENTADAPTER_T145792988_H
#define ADDEVENTADAPTER_T145792988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo/AddEventAdapter
struct  AddEventAdapter_t145792988  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDEVENTADAPTER_T145792988_H
#ifndef MODULEBUILDER_T3323659057_H
#define MODULEBUILDER_T3323659057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ModuleBuilder
struct  ModuleBuilder_t3323659057  : public Module_t3517295286
{
public:
	// System.Int32 System.Reflection.Emit.ModuleBuilder::num_types
	int32_t ___num_types_10;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.ModuleBuilder::types
	TypeBuilderU5BU5D_t2036906590* ___types_11;
	// System.Byte[] System.Reflection.Emit.ModuleBuilder::guid
	ByteU5BU5D_t2729897319* ___guid_12;
	// System.Int32 System.Reflection.Emit.ModuleBuilder::table_idx
	int32_t ___table_idx_13;
	// System.Reflection.Emit.AssemblyBuilder System.Reflection.Emit.ModuleBuilder::assemblyb
	AssemblyBuilder_t494911997 * ___assemblyb_14;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::global_type
	TypeBuilder_t2760519975 * ___global_type_15;
	// System.Collections.Hashtable System.Reflection.Emit.ModuleBuilder::name_cache
	Hashtable_t313414306 * ___name_cache_16;
	// System.Collections.Hashtable System.Reflection.Emit.ModuleBuilder::us_string_cache
	Hashtable_t313414306 * ___us_string_cache_17;
	// System.Int32[] System.Reflection.Emit.ModuleBuilder::table_indexes
	Int32U5BU5D_t1536829261* ___table_indexes_18;
	// System.Boolean System.Reflection.Emit.ModuleBuilder::transient
	bool ___transient_19;
	// System.Reflection.Emit.ModuleBuilderTokenGenerator System.Reflection.Emit.ModuleBuilder::token_gen
	ModuleBuilderTokenGenerator_t75569071 * ___token_gen_20;
	// System.Diagnostics.SymbolStore.ISymbolWriter System.Reflection.Emit.ModuleBuilder::symbolWriter
	RuntimeObject* ___symbolWriter_21;

public:
	inline static int32_t get_offset_of_num_types_10() { return static_cast<int32_t>(offsetof(ModuleBuilder_t3323659057, ___num_types_10)); }
	inline int32_t get_num_types_10() const { return ___num_types_10; }
	inline int32_t* get_address_of_num_types_10() { return &___num_types_10; }
	inline void set_num_types_10(int32_t value)
	{
		___num_types_10 = value;
	}

	inline static int32_t get_offset_of_types_11() { return static_cast<int32_t>(offsetof(ModuleBuilder_t3323659057, ___types_11)); }
	inline TypeBuilderU5BU5D_t2036906590* get_types_11() const { return ___types_11; }
	inline TypeBuilderU5BU5D_t2036906590** get_address_of_types_11() { return &___types_11; }
	inline void set_types_11(TypeBuilderU5BU5D_t2036906590* value)
	{
		___types_11 = value;
		Il2CppCodeGenWriteBarrier((&___types_11), value);
	}

	inline static int32_t get_offset_of_guid_12() { return static_cast<int32_t>(offsetof(ModuleBuilder_t3323659057, ___guid_12)); }
	inline ByteU5BU5D_t2729897319* get_guid_12() const { return ___guid_12; }
	inline ByteU5BU5D_t2729897319** get_address_of_guid_12() { return &___guid_12; }
	inline void set_guid_12(ByteU5BU5D_t2729897319* value)
	{
		___guid_12 = value;
		Il2CppCodeGenWriteBarrier((&___guid_12), value);
	}

	inline static int32_t get_offset_of_table_idx_13() { return static_cast<int32_t>(offsetof(ModuleBuilder_t3323659057, ___table_idx_13)); }
	inline int32_t get_table_idx_13() const { return ___table_idx_13; }
	inline int32_t* get_address_of_table_idx_13() { return &___table_idx_13; }
	inline void set_table_idx_13(int32_t value)
	{
		___table_idx_13 = value;
	}

	inline static int32_t get_offset_of_assemblyb_14() { return static_cast<int32_t>(offsetof(ModuleBuilder_t3323659057, ___assemblyb_14)); }
	inline AssemblyBuilder_t494911997 * get_assemblyb_14() const { return ___assemblyb_14; }
	inline AssemblyBuilder_t494911997 ** get_address_of_assemblyb_14() { return &___assemblyb_14; }
	inline void set_assemblyb_14(AssemblyBuilder_t494911997 * value)
	{
		___assemblyb_14 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyb_14), value);
	}

	inline static int32_t get_offset_of_global_type_15() { return static_cast<int32_t>(offsetof(ModuleBuilder_t3323659057, ___global_type_15)); }
	inline TypeBuilder_t2760519975 * get_global_type_15() const { return ___global_type_15; }
	inline TypeBuilder_t2760519975 ** get_address_of_global_type_15() { return &___global_type_15; }
	inline void set_global_type_15(TypeBuilder_t2760519975 * value)
	{
		___global_type_15 = value;
		Il2CppCodeGenWriteBarrier((&___global_type_15), value);
	}

	inline static int32_t get_offset_of_name_cache_16() { return static_cast<int32_t>(offsetof(ModuleBuilder_t3323659057, ___name_cache_16)); }
	inline Hashtable_t313414306 * get_name_cache_16() const { return ___name_cache_16; }
	inline Hashtable_t313414306 ** get_address_of_name_cache_16() { return &___name_cache_16; }
	inline void set_name_cache_16(Hashtable_t313414306 * value)
	{
		___name_cache_16 = value;
		Il2CppCodeGenWriteBarrier((&___name_cache_16), value);
	}

	inline static int32_t get_offset_of_us_string_cache_17() { return static_cast<int32_t>(offsetof(ModuleBuilder_t3323659057, ___us_string_cache_17)); }
	inline Hashtable_t313414306 * get_us_string_cache_17() const { return ___us_string_cache_17; }
	inline Hashtable_t313414306 ** get_address_of_us_string_cache_17() { return &___us_string_cache_17; }
	inline void set_us_string_cache_17(Hashtable_t313414306 * value)
	{
		___us_string_cache_17 = value;
		Il2CppCodeGenWriteBarrier((&___us_string_cache_17), value);
	}

	inline static int32_t get_offset_of_table_indexes_18() { return static_cast<int32_t>(offsetof(ModuleBuilder_t3323659057, ___table_indexes_18)); }
	inline Int32U5BU5D_t1536829261* get_table_indexes_18() const { return ___table_indexes_18; }
	inline Int32U5BU5D_t1536829261** get_address_of_table_indexes_18() { return &___table_indexes_18; }
	inline void set_table_indexes_18(Int32U5BU5D_t1536829261* value)
	{
		___table_indexes_18 = value;
		Il2CppCodeGenWriteBarrier((&___table_indexes_18), value);
	}

	inline static int32_t get_offset_of_transient_19() { return static_cast<int32_t>(offsetof(ModuleBuilder_t3323659057, ___transient_19)); }
	inline bool get_transient_19() const { return ___transient_19; }
	inline bool* get_address_of_transient_19() { return &___transient_19; }
	inline void set_transient_19(bool value)
	{
		___transient_19 = value;
	}

	inline static int32_t get_offset_of_token_gen_20() { return static_cast<int32_t>(offsetof(ModuleBuilder_t3323659057, ___token_gen_20)); }
	inline ModuleBuilderTokenGenerator_t75569071 * get_token_gen_20() const { return ___token_gen_20; }
	inline ModuleBuilderTokenGenerator_t75569071 ** get_address_of_token_gen_20() { return &___token_gen_20; }
	inline void set_token_gen_20(ModuleBuilderTokenGenerator_t75569071 * value)
	{
		___token_gen_20 = value;
		Il2CppCodeGenWriteBarrier((&___token_gen_20), value);
	}

	inline static int32_t get_offset_of_symbolWriter_21() { return static_cast<int32_t>(offsetof(ModuleBuilder_t3323659057, ___symbolWriter_21)); }
	inline RuntimeObject* get_symbolWriter_21() const { return ___symbolWriter_21; }
	inline RuntimeObject** get_address_of_symbolWriter_21() { return &___symbolWriter_21; }
	inline void set_symbolWriter_21(RuntimeObject* value)
	{
		___symbolWriter_21 = value;
		Il2CppCodeGenWriteBarrier((&___symbolWriter_21), value);
	}
};

struct ModuleBuilder_t3323659057_StaticFields
{
public:
	// System.Char[] System.Reflection.Emit.ModuleBuilder::type_modifiers
	CharU5BU5D_t913677958* ___type_modifiers_22;

public:
	inline static int32_t get_offset_of_type_modifiers_22() { return static_cast<int32_t>(offsetof(ModuleBuilder_t3323659057_StaticFields, ___type_modifiers_22)); }
	inline CharU5BU5D_t913677958* get_type_modifiers_22() const { return ___type_modifiers_22; }
	inline CharU5BU5D_t913677958** get_address_of_type_modifiers_22() { return &___type_modifiers_22; }
	inline void set_type_modifiers_22(CharU5BU5D_t913677958* value)
	{
		___type_modifiers_22 = value;
		Il2CppCodeGenWriteBarrier((&___type_modifiers_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULEBUILDER_T3323659057_H
#ifndef DERIVEDTYPE_T1325348911_H
#define DERIVEDTYPE_T1325348911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.DerivedType
struct  DerivedType_t1325348911  : public Type_t
{
public:
	// System.Type System.Reflection.Emit.DerivedType::elementType
	Type_t * ___elementType_8;

public:
	inline static int32_t get_offset_of_elementType_8() { return static_cast<int32_t>(offsetof(DerivedType_t1325348911, ___elementType_8)); }
	inline Type_t * get_elementType_8() const { return ___elementType_8; }
	inline Type_t ** get_address_of_elementType_8() { return &___elementType_8; }
	inline void set_elementType_8(Type_t * value)
	{
		___elementType_8 = value;
		Il2CppCodeGenWriteBarrier((&___elementType_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEDTYPE_T1325348911_H
#ifndef BYREFTYPE_T2482382753_H
#define BYREFTYPE_T2482382753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ByRefType
struct  ByRefType_t2482382753  : public DerivedType_t1325348911
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYREFTYPE_T2482382753_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize300 = { sizeof (DerivedType_t1325348911), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable300[1] = 
{
	DerivedType_t1325348911::get_offset_of_elementType_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize301 = { sizeof (ByRefType_t2482382753), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize302 = { sizeof (DynamicMethod_t4133704721), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable302[12] = 
{
	DynamicMethod_t4133704721::get_offset_of_mhandle_0(),
	DynamicMethod_t4133704721::get_offset_of_name_1(),
	DynamicMethod_t4133704721::get_offset_of_returnType_2(),
	DynamicMethod_t4133704721::get_offset_of_parameters_3(),
	DynamicMethod_t4133704721::get_offset_of_attributes_4(),
	DynamicMethod_t4133704721::get_offset_of_callingConvention_5(),
	DynamicMethod_t4133704721::get_offset_of_module_6(),
	DynamicMethod_t4133704721::get_offset_of_ilgen_7(),
	DynamicMethod_t4133704721::get_offset_of_refs_8(),
	DynamicMethod_t4133704721::get_offset_of_method_9(),
	DynamicMethod_t4133704721::get_offset_of_pinfo_10(),
	DynamicMethod_t4133704721::get_offset_of_creating_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize303 = { sizeof (EnumBuilder_t491705617), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable303[2] = 
{
	EnumBuilder_t491705617::get_offset_of__tb_8(),
	EnumBuilder_t491705617::get_offset_of__underlyingType_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize304 = { sizeof (FieldBuilder_t2744714187), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable304[5] = 
{
	FieldBuilder_t2744714187::get_offset_of_attrs_0(),
	FieldBuilder_t2744714187::get_offset_of_type_1(),
	FieldBuilder_t2744714187::get_offset_of_name_2(),
	FieldBuilder_t2744714187::get_offset_of_typeb_3(),
	FieldBuilder_t2744714187::get_offset_of_marshal_info_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize305 = { sizeof (GenericTypeParameterBuilder_t673941554), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable305[4] = 
{
	GenericTypeParameterBuilder_t673941554::get_offset_of_tbuilder_8(),
	GenericTypeParameterBuilder_t673941554::get_offset_of_mbuilder_9(),
	GenericTypeParameterBuilder_t673941554::get_offset_of_name_10(),
	GenericTypeParameterBuilder_t673941554::get_offset_of_base_type_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize306 = { sizeof (ILTokenInfo_t973482795)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable306[2] = 
{
	ILTokenInfo_t973482795::get_offset_of_member_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ILTokenInfo_t973482795::get_offset_of_code_pos_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize307 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize308 = { sizeof (ILGenerator_t3929519702), -1, sizeof(ILGenerator_t3929519702_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable308[14] = 
{
	ILGenerator_t3929519702_StaticFields::get_offset_of_void_type_0(),
	ILGenerator_t3929519702::get_offset_of_code_1(),
	ILGenerator_t3929519702::get_offset_of_code_len_2(),
	ILGenerator_t3929519702::get_offset_of_max_stack_3(),
	ILGenerator_t3929519702::get_offset_of_cur_stack_4(),
	ILGenerator_t3929519702::get_offset_of_locals_5(),
	ILGenerator_t3929519702::get_offset_of_num_token_fixups_6(),
	ILGenerator_t3929519702::get_offset_of_token_fixups_7(),
	ILGenerator_t3929519702::get_offset_of_labels_8(),
	ILGenerator_t3929519702::get_offset_of_num_labels_9(),
	ILGenerator_t3929519702::get_offset_of_fixups_10(),
	ILGenerator_t3929519702::get_offset_of_num_fixups_11(),
	ILGenerator_t3929519702::get_offset_of_module_12(),
	ILGenerator_t3929519702::get_offset_of_token_gen_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize309 = { sizeof (LabelFixup_t3371994128)+ sizeof (RuntimeObject), sizeof(LabelFixup_t3371994128 ), 0, 0 };
extern const int32_t g_FieldOffsetTable309[3] = 
{
	LabelFixup_t3371994128::get_offset_of_offset_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LabelFixup_t3371994128::get_offset_of_pos_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LabelFixup_t3371994128::get_offset_of_label_idx_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize310 = { sizeof (LabelData_t893095901)+ sizeof (RuntimeObject), sizeof(LabelData_t893095901 ), 0, 0 };
extern const int32_t g_FieldOffsetTable310[2] = 
{
	LabelData_t893095901::get_offset_of_addr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LabelData_t893095901::get_offset_of_maxStack_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize311 = { sizeof (Label_t4025996438)+ sizeof (RuntimeObject), sizeof(Label_t4025996438 ), 0, 0 };
extern const int32_t g_FieldOffsetTable311[1] = 
{
	Label_t4025996438::get_offset_of_label_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize312 = { sizeof (LocalBuilder_t1471418515), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable312[1] = 
{
	LocalBuilder_t1471418515::get_offset_of_ilgen_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize313 = { sizeof (MethodBuilder_t3828721349), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable313[18] = 
{
	MethodBuilder_t3828721349::get_offset_of_rtype_0(),
	MethodBuilder_t3828721349::get_offset_of_parameters_1(),
	MethodBuilder_t3828721349::get_offset_of_attrs_2(),
	MethodBuilder_t3828721349::get_offset_of_iattrs_3(),
	MethodBuilder_t3828721349::get_offset_of_name_4(),
	MethodBuilder_t3828721349::get_offset_of_table_idx_5(),
	MethodBuilder_t3828721349::get_offset_of_code_6(),
	MethodBuilder_t3828721349::get_offset_of_ilgen_7(),
	MethodBuilder_t3828721349::get_offset_of_type_8(),
	MethodBuilder_t3828721349::get_offset_of_pinfo_9(),
	MethodBuilder_t3828721349::get_offset_of_override_method_10(),
	MethodBuilder_t3828721349::get_offset_of_call_conv_11(),
	MethodBuilder_t3828721349::get_offset_of_init_locals_12(),
	MethodBuilder_t3828721349::get_offset_of_generic_params_13(),
	MethodBuilder_t3828721349::get_offset_of_returnModReq_14(),
	MethodBuilder_t3828721349::get_offset_of_returnModOpt_15(),
	MethodBuilder_t3828721349::get_offset_of_paramModReq_16(),
	MethodBuilder_t3828721349::get_offset_of_paramModOpt_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize314 = { sizeof (MethodToken_t257534408)+ sizeof (RuntimeObject), sizeof(MethodToken_t257534408 ), sizeof(MethodToken_t257534408_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable314[2] = 
{
	MethodToken_t257534408::get_offset_of_tokValue_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MethodToken_t257534408_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize315 = { sizeof (ModuleBuilder_t3323659057), -1, sizeof(ModuleBuilder_t3323659057_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable315[13] = 
{
	ModuleBuilder_t3323659057::get_offset_of_num_types_10(),
	ModuleBuilder_t3323659057::get_offset_of_types_11(),
	ModuleBuilder_t3323659057::get_offset_of_guid_12(),
	ModuleBuilder_t3323659057::get_offset_of_table_idx_13(),
	ModuleBuilder_t3323659057::get_offset_of_assemblyb_14(),
	ModuleBuilder_t3323659057::get_offset_of_global_type_15(),
	ModuleBuilder_t3323659057::get_offset_of_name_cache_16(),
	ModuleBuilder_t3323659057::get_offset_of_us_string_cache_17(),
	ModuleBuilder_t3323659057::get_offset_of_table_indexes_18(),
	ModuleBuilder_t3323659057::get_offset_of_transient_19(),
	ModuleBuilder_t3323659057::get_offset_of_token_gen_20(),
	ModuleBuilder_t3323659057::get_offset_of_symbolWriter_21(),
	ModuleBuilder_t3323659057_StaticFields::get_offset_of_type_modifiers_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize316 = { sizeof (ModuleBuilderTokenGenerator_t75569071), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable316[1] = 
{
	ModuleBuilderTokenGenerator_t75569071::get_offset_of_mb_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize317 = { sizeof (OpCode_t1087150903)+ sizeof (RuntimeObject), sizeof(OpCode_t1087150903 ), 0, 0 };
extern const int32_t g_FieldOffsetTable317[8] = 
{
	OpCode_t1087150903::get_offset_of_op1_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t1087150903::get_offset_of_op2_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t1087150903::get_offset_of_push_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t1087150903::get_offset_of_pop_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t1087150903::get_offset_of_size_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t1087150903::get_offset_of_type_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t1087150903::get_offset_of_args_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t1087150903::get_offset_of_flow_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize318 = { sizeof (OpCodeNames_t620212120), -1, sizeof(OpCodeNames_t620212120_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable318[1] = 
{
	OpCodeNames_t620212120_StaticFields::get_offset_of_names_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize319 = { sizeof (OpCodes_t2663897137), -1, sizeof(OpCodes_t2663897137_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable319[226] = 
{
	OpCodes_t2663897137_StaticFields::get_offset_of_Nop_0(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Break_1(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldarg_0_2(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldarg_1_3(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldarg_2_4(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldarg_3_5(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldloc_0_6(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldloc_1_7(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldloc_2_8(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldloc_3_9(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stloc_0_10(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stloc_1_11(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stloc_2_12(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stloc_3_13(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldarg_S_14(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldarga_S_15(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Starg_S_16(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldloc_S_17(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldloca_S_18(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stloc_S_19(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldnull_20(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldc_I4_M1_21(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldc_I4_0_22(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldc_I4_1_23(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldc_I4_2_24(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldc_I4_3_25(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldc_I4_4_26(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldc_I4_5_27(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldc_I4_6_28(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldc_I4_7_29(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldc_I4_8_30(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldc_I4_S_31(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldc_I4_32(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldc_I8_33(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldc_R4_34(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldc_R8_35(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Dup_36(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Pop_37(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Jmp_38(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Call_39(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Calli_40(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ret_41(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Br_S_42(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Brfalse_S_43(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Brtrue_S_44(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Beq_S_45(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Bge_S_46(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Bgt_S_47(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ble_S_48(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Blt_S_49(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Bne_Un_S_50(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Bge_Un_S_51(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Bgt_Un_S_52(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ble_Un_S_53(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Blt_Un_S_54(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Br_55(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Brfalse_56(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Brtrue_57(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Beq_58(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Bge_59(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Bgt_60(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ble_61(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Blt_62(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Bne_Un_63(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Bge_Un_64(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Bgt_Un_65(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ble_Un_66(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Blt_Un_67(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Switch_68(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldind_I1_69(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldind_U1_70(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldind_I2_71(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldind_U2_72(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldind_I4_73(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldind_U4_74(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldind_I8_75(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldind_I_76(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldind_R4_77(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldind_R8_78(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldind_Ref_79(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stind_Ref_80(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stind_I1_81(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stind_I2_82(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stind_I4_83(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stind_I8_84(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stind_R4_85(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stind_R8_86(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Add_87(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Sub_88(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Mul_89(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Div_90(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Div_Un_91(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Rem_92(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Rem_Un_93(),
	OpCodes_t2663897137_StaticFields::get_offset_of_And_94(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Or_95(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Xor_96(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Shl_97(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Shr_98(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Shr_Un_99(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Neg_100(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Not_101(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_I1_102(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_I2_103(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_I4_104(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_I8_105(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_R4_106(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_R8_107(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_U4_108(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_U8_109(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Callvirt_110(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Cpobj_111(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldobj_112(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldstr_113(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Newobj_114(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Castclass_115(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Isinst_116(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_R_Un_117(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Unbox_118(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Throw_119(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldfld_120(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldflda_121(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stfld_122(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldsfld_123(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldsflda_124(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stsfld_125(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stobj_126(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_I1_Un_127(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_I2_Un_128(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_I4_Un_129(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_I8_Un_130(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_U1_Un_131(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_U2_Un_132(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_U4_Un_133(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_U8_Un_134(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_I_Un_135(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_U_Un_136(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Box_137(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Newarr_138(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldlen_139(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldelema_140(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldelem_I1_141(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldelem_U1_142(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldelem_I2_143(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldelem_U2_144(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldelem_I4_145(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldelem_U4_146(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldelem_I8_147(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldelem_I_148(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldelem_R4_149(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldelem_R8_150(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldelem_Ref_151(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stelem_I_152(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stelem_I1_153(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stelem_I2_154(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stelem_I4_155(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stelem_I8_156(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stelem_R4_157(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stelem_R8_158(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stelem_Ref_159(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldelem_160(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stelem_161(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Unbox_Any_162(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_I1_163(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_U1_164(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_I2_165(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_U2_166(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_I4_167(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_U4_168(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_I8_169(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_U8_170(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Refanyval_171(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ckfinite_172(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Mkrefany_173(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldtoken_174(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_U2_175(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_U1_176(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_I_177(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_I_178(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_Ovf_U_179(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Add_Ovf_180(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Add_Ovf_Un_181(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Mul_Ovf_182(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Mul_Ovf_Un_183(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Sub_Ovf_184(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Sub_Ovf_Un_185(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Endfinally_186(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Leave_187(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Leave_S_188(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stind_I_189(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Conv_U_190(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Prefix7_191(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Prefix6_192(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Prefix5_193(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Prefix4_194(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Prefix3_195(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Prefix2_196(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Prefix1_197(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Prefixref_198(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Arglist_199(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ceq_200(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Cgt_201(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Cgt_Un_202(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Clt_203(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Clt_Un_204(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldftn_205(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldvirtftn_206(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldarg_207(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldarga_208(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Starg_209(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldloc_210(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Ldloca_211(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Stloc_212(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Localloc_213(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Endfilter_214(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Unaligned_215(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Volatile_216(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Tailcall_217(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Initobj_218(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Constrained_219(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Cpblk_220(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Initblk_221(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Rethrow_222(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Sizeof_223(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Refanytype_224(),
	OpCodes_t2663897137_StaticFields::get_offset_of_Readonly_225(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize320 = { sizeof (OperandType_t212035841)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable320[19] = 
{
	OperandType_t212035841::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize321 = { sizeof (PEFileKinds_t2066454822)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable321[4] = 
{
	PEFileKinds_t2066454822::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize322 = { sizeof (PackingSize_t2043223532)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable322[10] = 
{
	PackingSize_t2043223532::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize323 = { sizeof (ParameterBuilder_t2979056846), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable323[3] = 
{
	ParameterBuilder_t2979056846::get_offset_of_name_0(),
	ParameterBuilder_t2979056846::get_offset_of_attrs_1(),
	ParameterBuilder_t2979056846::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize324 = { sizeof (PropertyBuilder_t438031321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable324[6] = 
{
	PropertyBuilder_t438031321::get_offset_of_attrs_0(),
	PropertyBuilder_t438031321::get_offset_of_name_1(),
	PropertyBuilder_t438031321::get_offset_of_type_2(),
	PropertyBuilder_t438031321::get_offset_of_set_method_3(),
	PropertyBuilder_t438031321::get_offset_of_get_method_4(),
	PropertyBuilder_t438031321::get_offset_of_typeb_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize325 = { sizeof (StackBehaviour_t3112878820)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable325[30] = 
{
	StackBehaviour_t3112878820::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize326 = { sizeof (TypeBuilder_t2760519975), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable326[21] = 
{
	TypeBuilder_t2760519975::get_offset_of_tname_8(),
	TypeBuilder_t2760519975::get_offset_of_nspace_9(),
	TypeBuilder_t2760519975::get_offset_of_parent_10(),
	TypeBuilder_t2760519975::get_offset_of_nesting_type_11(),
	TypeBuilder_t2760519975::get_offset_of_interfaces_12(),
	TypeBuilder_t2760519975::get_offset_of_num_methods_13(),
	TypeBuilder_t2760519975::get_offset_of_methods_14(),
	TypeBuilder_t2760519975::get_offset_of_ctors_15(),
	TypeBuilder_t2760519975::get_offset_of_properties_16(),
	TypeBuilder_t2760519975::get_offset_of_fields_17(),
	TypeBuilder_t2760519975::get_offset_of_subtypes_18(),
	TypeBuilder_t2760519975::get_offset_of_attrs_19(),
	TypeBuilder_t2760519975::get_offset_of_table_idx_20(),
	TypeBuilder_t2760519975::get_offset_of_pmodule_21(),
	TypeBuilder_t2760519975::get_offset_of_class_size_22(),
	TypeBuilder_t2760519975::get_offset_of_packing_size_23(),
	TypeBuilder_t2760519975::get_offset_of_generic_params_24(),
	TypeBuilder_t2760519975::get_offset_of_created_25(),
	TypeBuilder_t2760519975::get_offset_of_fullname_26(),
	TypeBuilder_t2760519975::get_offset_of_createTypeCalled_27(),
	TypeBuilder_t2760519975::get_offset_of_underlying_type_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize327 = { sizeof (UnmanagedMarshal_t1556783966), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable327[9] = 
{
	UnmanagedMarshal_t1556783966::get_offset_of_count_0(),
	UnmanagedMarshal_t1556783966::get_offset_of_t_1(),
	UnmanagedMarshal_t1556783966::get_offset_of_tbase_2(),
	UnmanagedMarshal_t1556783966::get_offset_of_guid_3(),
	UnmanagedMarshal_t1556783966::get_offset_of_mcookie_4(),
	UnmanagedMarshal_t1556783966::get_offset_of_marshaltype_5(),
	UnmanagedMarshal_t1556783966::get_offset_of_marshaltyperef_6(),
	UnmanagedMarshal_t1556783966::get_offset_of_param_num_7(),
	UnmanagedMarshal_t1556783966::get_offset_of_has_size_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize328 = { sizeof (AmbiguousMatchException_t4198777595), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize329 = { sizeof (Assembly_t2577078533), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable329[10] = 
{
	Assembly_t2577078533::get_offset_of__mono_assembly_0(),
	Assembly_t2577078533::get_offset_of_resolve_event_holder_1(),
	Assembly_t2577078533::get_offset_of__evidence_2(),
	Assembly_t2577078533::get_offset_of__minimum_3(),
	Assembly_t2577078533::get_offset_of__optional_4(),
	Assembly_t2577078533::get_offset_of__refuse_5(),
	Assembly_t2577078533::get_offset_of__granted_6(),
	Assembly_t2577078533::get_offset_of__denied_7(),
	Assembly_t2577078533::get_offset_of_fromByteArray_8(),
	Assembly_t2577078533::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize330 = { sizeof (ResolveEventHolder_t3681357886), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize331 = { sizeof (ResourceCloseHandler_t1603621906), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable331[1] = 
{
	ResourceCloseHandler_t1603621906::get_offset_of_module_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize332 = { sizeof (AssemblyCompanyAttribute_t2345724357), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable332[1] = 
{
	AssemblyCompanyAttribute_t2345724357::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize333 = { sizeof (AssemblyConfigurationAttribute_t2928276068), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable333[1] = 
{
	AssemblyConfigurationAttribute_t2928276068::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize334 = { sizeof (AssemblyCopyrightAttribute_t853966766), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable334[1] = 
{
	AssemblyCopyrightAttribute_t853966766::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize335 = { sizeof (AssemblyDefaultAliasAttribute_t4074539517), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable335[1] = 
{
	AssemblyDefaultAliasAttribute_t4074539517::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize336 = { sizeof (AssemblyDelaySignAttribute_t1018316225), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable336[1] = 
{
	AssemblyDelaySignAttribute_t1018316225::get_offset_of_delay_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize337 = { sizeof (AssemblyDescriptionAttribute_t1884185221), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable337[1] = 
{
	AssemblyDescriptionAttribute_t1884185221::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize338 = { sizeof (AssemblyFileVersionAttribute_t2862700873), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable338[1] = 
{
	AssemblyFileVersionAttribute_t2862700873::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize339 = { sizeof (AssemblyInformationalVersionAttribute_t1365654730), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable339[1] = 
{
	AssemblyInformationalVersionAttribute_t1365654730::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize340 = { sizeof (AssemblyKeyFileAttribute_t2536881849), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable340[1] = 
{
	AssemblyKeyFileAttribute_t2536881849::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize341 = { sizeof (AssemblyName_t28451399), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable341[15] = 
{
	AssemblyName_t28451399::get_offset_of_name_0(),
	AssemblyName_t28451399::get_offset_of_codebase_1(),
	AssemblyName_t28451399::get_offset_of_major_2(),
	AssemblyName_t28451399::get_offset_of_minor_3(),
	AssemblyName_t28451399::get_offset_of_build_4(),
	AssemblyName_t28451399::get_offset_of_revision_5(),
	AssemblyName_t28451399::get_offset_of_cultureinfo_6(),
	AssemblyName_t28451399::get_offset_of_flags_7(),
	AssemblyName_t28451399::get_offset_of_hashalg_8(),
	AssemblyName_t28451399::get_offset_of_keypair_9(),
	AssemblyName_t28451399::get_offset_of_publicKey_10(),
	AssemblyName_t28451399::get_offset_of_keyToken_11(),
	AssemblyName_t28451399::get_offset_of_versioncompat_12(),
	AssemblyName_t28451399::get_offset_of_version_13(),
	AssemblyName_t28451399::get_offset_of_processor_architecture_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize342 = { sizeof (AssemblyNameFlags_t1094365128)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable342[6] = 
{
	AssemblyNameFlags_t1094365128::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize343 = { sizeof (AssemblyProductAttribute_t3392206411), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable343[1] = 
{
	AssemblyProductAttribute_t3392206411::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize344 = { sizeof (AssemblyTitleAttribute_t1841401628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable344[1] = 
{
	AssemblyTitleAttribute_t1841401628::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize345 = { sizeof (AssemblyTrademarkAttribute_t27724473), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable345[1] = 
{
	AssemblyTrademarkAttribute_t27724473::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize346 = { sizeof (Binder_t2916881575), -1, sizeof(Binder_t2916881575_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable346[1] = 
{
	Binder_t2916881575_StaticFields::get_offset_of_default_binder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize347 = { sizeof (Default_t3682774473), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize348 = { sizeof (BindingFlags_t857453048)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable348[21] = 
{
	BindingFlags_t857453048::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize349 = { sizeof (CallingConventions_t2902728440)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable349[6] = 
{
	CallingConventions_t2902728440::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize350 = { sizeof (ConstructorInfo_t3416953175), -1, sizeof(ConstructorInfo_t3416953175_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable350[2] = 
{
	ConstructorInfo_t3416953175_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t3416953175_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize351 = { sizeof (CustomAttributeData_t3042032017), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable351[3] = 
{
	CustomAttributeData_t3042032017::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t3042032017::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t3042032017::get_offset_of_namedArgs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize352 = { sizeof (CustomAttributeNamedArgument_t2828217530)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable352[2] = 
{
	CustomAttributeNamedArgument_t2828217530::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeNamedArgument_t2828217530::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize353 = { sizeof (CustomAttributeTypedArgument_t3236469821)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable353[2] = 
{
	CustomAttributeTypedArgument_t3236469821::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeTypedArgument_t3236469821::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize354 = { sizeof (EventAttributes_t3166287721)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable354[5] = 
{
	EventAttributes_t3166287721::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize355 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable355[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize356 = { sizeof (AddEventAdapter_t145792988), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize357 = { sizeof (FieldAttributes_t747487871)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable357[20] = 
{
	FieldAttributes_t747487871::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize358 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize359 = { sizeof (LocalVariableInfo_t589738243), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable359[3] = 
{
	LocalVariableInfo_t589738243::get_offset_of_type_0(),
	LocalVariableInfo_t589738243::get_offset_of_is_pinned_1(),
	LocalVariableInfo_t589738243::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize360 = { sizeof (ManifestResourceInfo_t3891984548), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable360[3] = 
{
	ManifestResourceInfo_t3891984548::get_offset_of__assembly_0(),
	ManifestResourceInfo_t3891984548::get_offset_of__filename_1(),
	ManifestResourceInfo_t3891984548::get_offset_of__location_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize361 = { sizeof (MemberInfoSerializationHolder_t1819359186), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable361[5] = 
{
	MemberInfoSerializationHolder_t1819359186::get_offset_of__memberName_0(),
	MemberInfoSerializationHolder_t1819359186::get_offset_of__memberSignature_1(),
	MemberInfoSerializationHolder_t1819359186::get_offset_of__memberType_2(),
	MemberInfoSerializationHolder_t1819359186::get_offset_of__reflectedType_3(),
	MemberInfoSerializationHolder_t1819359186::get_offset_of__genericArguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize362 = { sizeof (MemberTypes_t2777851904)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable362[10] = 
{
	MemberTypes_t2777851904::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize363 = { sizeof (MethodAttributes_t2273096568)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable363[25] = 
{
	MethodAttributes_t2273096568::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize364 = { sizeof (MethodBase_t1974324469), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize365 = { sizeof (MethodImplAttributes_t3919091257)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable365[15] = 
{
	MethodImplAttributes_t3919091257::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize366 = { sizeof (MethodInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize367 = { sizeof (Missing_t147366456), -1, sizeof(Missing_t147366456_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable367[1] = 
{
	Missing_t147366456_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize368 = { sizeof (Module_t3517295286), -1, sizeof(Module_t3517295286_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable368[10] = 
{
	0,
	Module_t3517295286_StaticFields::get_offset_of_FilterTypeName_1(),
	Module_t3517295286_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_2(),
	Module_t3517295286::get_offset_of__impl_3(),
	Module_t3517295286::get_offset_of_assembly_4(),
	Module_t3517295286::get_offset_of_fqname_5(),
	Module_t3517295286::get_offset_of_name_6(),
	Module_t3517295286::get_offset_of_scopename_7(),
	Module_t3517295286::get_offset_of_is_resource_8(),
	Module_t3517295286::get_offset_of_token_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize369 = { sizeof (MonoEventInfo_t1085908357)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable369[8] = 
{
	MonoEventInfo_t1085908357::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t1085908357::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t1085908357::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t1085908357::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t1085908357::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t1085908357::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t1085908357::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t1085908357::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize370 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable370[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize371 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable371[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize372 = { sizeof (MonoGenericMethod_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize373 = { sizeof (MonoGenericCMethod_t2690016845), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize374 = { sizeof (MonoMethodInfo_t795915902)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable374[5] = 
{
	MonoMethodInfo_t795915902::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t795915902::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t795915902::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t795915902::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t795915902::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize375 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable375[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize376 = { sizeof (MonoCMethod_t581046119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable376[3] = 
{
	MonoCMethod_t581046119::get_offset_of_mhandle_2(),
	MonoCMethod_t581046119::get_offset_of_name_3(),
	MonoCMethod_t581046119::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize377 = { sizeof (MonoPropertyInfo_t3447785465)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable377[5] = 
{
	MonoPropertyInfo_t3447785465::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3447785465::get_offset_of_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3447785465::get_offset_of_get_method_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3447785465::get_offset_of_set_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3447785465::get_offset_of_attrs_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize378 = { sizeof (PInfo_t537301144)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable378[7] = 
{
	PInfo_t537301144::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize379 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable379[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize380 = { sizeof (GetterAdapter_t4030410391), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize381 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize382 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize383 = { sizeof (ParameterAttributes_t2964921339)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable383[12] = 
{
	ParameterAttributes_t2964921339::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize384 = { sizeof (ParameterInfo_t3572016085), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable384[7] = 
{
	ParameterInfo_t3572016085::get_offset_of_ClassImpl_0(),
	ParameterInfo_t3572016085::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t3572016085::get_offset_of_MemberImpl_2(),
	ParameterInfo_t3572016085::get_offset_of_NameImpl_3(),
	ParameterInfo_t3572016085::get_offset_of_PositionImpl_4(),
	ParameterInfo_t3572016085::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t3572016085::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize385 = { sizeof (ParameterModifier_t3773948313)+ sizeof (RuntimeObject), sizeof(ParameterModifier_t3773948313_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable385[1] = 
{
	ParameterModifier_t3773948313::get_offset_of__byref_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize386 = { sizeof (Pointer_t786969270), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable386[2] = 
{
	Pointer_t786969270::get_offset_of_data_0(),
	Pointer_t786969270::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize387 = { sizeof (ProcessorArchitecture_t523647621)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable387[6] = 
{
	ProcessorArchitecture_t523647621::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize388 = { sizeof (PropertyAttributes_t4074471355)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable388[9] = 
{
	PropertyAttributes_t4074471355::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize389 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize390 = { sizeof (ResourceAttributes_t1788242755)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable390[3] = 
{
	ResourceAttributes_t1788242755::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize391 = { sizeof (ResourceLocation_t3110687668)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable391[4] = 
{
	ResourceLocation_t3110687668::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize392 = { sizeof (StrongNameKeyPair_t1867757446), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable392[5] = 
{
	StrongNameKeyPair_t1867757446::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t1867757446::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t1867757446::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t1867757446::get_offset_of__keyPairArray_3(),
	StrongNameKeyPair_t1867757446::get_offset_of__rsa_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize393 = { sizeof (TargetException_t511380248), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize394 = { sizeof (TargetInvocationException_t1601342614), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize395 = { sizeof (TargetParameterCountException_t608700186), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize396 = { sizeof (TypeAttributes_t3753556479)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable396[32] = 
{
	TypeAttributes_t3753556479::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize397 = { sizeof (TypeDelegator_t260377144), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable397[1] = 
{
	TypeDelegator_t260377144::get_offset_of_typeImpl_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize398 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize399 = { sizeof (NeutralResourcesLanguageAttribute_t3289724300), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable399[1] = 
{
	NeutralResourcesLanguageAttribute_t3289724300::get_offset_of_culture_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
