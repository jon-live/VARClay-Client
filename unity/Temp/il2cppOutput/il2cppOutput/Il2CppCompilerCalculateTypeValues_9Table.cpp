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

// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1733704081;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t606894440;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t3974187271;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t313414306;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t1969467976;
// System.Collections.ArrayList
struct ArrayList_t1318183536;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t3493476091;
// System.Collections.IComparer
struct IComparer_t256759697;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1439774373;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1091263119;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t2536965062;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1543311471;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t2582398355;
// System.Int32[]
struct Int32U5BU5D_t1536829261;
// System.IntPtr[]
struct IntPtrU5BU5D_t2742960552;
// System.Collections.IDictionary
struct IDictionary_t2891060155;
// System.Void
struct Void_t779120870;
// System.Globalization.CompareInfo
struct CompareInfo_t1972811411;
// System.Char[]
struct CharU5BU5D_t913677958;
// System.String[]
struct StringU5BU5D_t1824645579;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t4063697696;
// System.Globalization.DaylightTime
struct DaylightTime_t2661640372;
// System.Version
struct Version_t2220740773;
// System.IAsyncResult
struct IAsyncResult_t479242646;
// System.AsyncCallback
struct AsyncCallback_t1859346098;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t782569306;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t1337475805;
// System.EventArgs
struct EventArgs_t2769582899;
// System.Reflection.Assembly
struct Assembly_t2577078533;
// System.ResolveEventArgs
struct ResolveEventArgs_t123755114;
// Mono.Math.BigInteger
struct BigInteger_t3496767332;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t1331691442;




#ifndef U3CMODULEU3E_T396589453_H
#define U3CMODULEU3E_T396589453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t396589453 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T396589453_H
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
#ifndef DICTIONARYNODECOLLECTIONENUMERATOR_T416218623_H
#define DICTIONARYNODECOLLECTIONENUMERATOR_T416218623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator
struct  DictionaryNodeCollectionEnumerator_t416218623  : public RuntimeObject
{
public:
	// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::inner
	RuntimeObject* ___inner_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_inner_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t416218623, ___inner_0)); }
	inline RuntimeObject* get_inner_0() const { return ___inner_0; }
	inline RuntimeObject** get_address_of_inner_0() { return &___inner_0; }
	inline void set_inner_0(RuntimeObject* value)
	{
		___inner_0 = value;
		Il2CppCodeGenWriteBarrier((&___inner_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t416218623, ___isKeyList_1)); }
	inline bool get_isKeyList_1() const { return ___isKeyList_1; }
	inline bool* get_address_of_isKeyList_1() { return &___isKeyList_1; }
	inline void set_isKeyList_1(bool value)
	{
		___isKeyList_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODECOLLECTIONENUMERATOR_T416218623_H
#ifndef DESIGNERTRANSACTION_T657471228_H
#define DESIGNERTRANSACTION_T657471228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.DesignerTransaction
struct  DesignerTransaction_t657471228  : public RuntimeObject
{
public:
	// System.Boolean System.ComponentModel.Design.DesignerTransaction::committed
	bool ___committed_0;
	// System.Boolean System.ComponentModel.Design.DesignerTransaction::canceled
	bool ___canceled_1;

public:
	inline static int32_t get_offset_of_committed_0() { return static_cast<int32_t>(offsetof(DesignerTransaction_t657471228, ___committed_0)); }
	inline bool get_committed_0() const { return ___committed_0; }
	inline bool* get_address_of_committed_0() { return &___committed_0; }
	inline void set_committed_0(bool value)
	{
		___committed_0 = value;
	}

	inline static int32_t get_offset_of_canceled_1() { return static_cast<int32_t>(offsetof(DesignerTransaction_t657471228, ___canceled_1)); }
	inline bool get_canceled_1() const { return ___canceled_1; }
	inline bool* get_address_of_canceled_1() { return &___canceled_1; }
	inline void set_canceled_1(bool value)
	{
		___canceled_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERTRANSACTION_T657471228_H
#ifndef INSTANCEDESCRIPTOR_T175512466_H
#define INSTANCEDESCRIPTOR_T175512466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t175512466  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t175512466, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t175512466, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t175512466, ___isComplete_2)); }
	inline bool get_isComplete_2() const { return ___isComplete_2; }
	inline bool* get_address_of_isComplete_2() { return &___isComplete_2; }
	inline void set_isComplete_2(bool value)
	{
		___isComplete_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEDESCRIPTOR_T175512466_H
#ifndef KEYSCOLLECTION_T1091263119_H
#define KEYSCOLLECTION_T1091263119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t1091263119  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::m_collection
	NameObjectCollectionBase_t3974187271 * ___m_collection_0;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(KeysCollection_t1091263119, ___m_collection_0)); }
	inline NameObjectCollectionBase_t3974187271 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t3974187271 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t3974187271 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T1091263119_H
#ifndef VERSION_T2220740773_H
#define VERSION_T2220740773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t2220740773  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t2220740773, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t2220740773, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t2220740773, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t2220740773, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T2220740773_H
#ifndef _KEYSENUMERATOR_T3085262282_H
#define _KEYSENUMERATOR_T3085262282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
struct  _KeysEnumerator_t3085262282  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_collection
	NameObjectCollectionBase_t3974187271 * ___m_collection_0;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_position
	int32_t ___m_position_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t3085262282, ___m_collection_0)); }
	inline NameObjectCollectionBase_t3974187271 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t3974187271 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t3974187271 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}

	inline static int32_t get_offset_of_m_position_1() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t3085262282, ___m_position_1)); }
	inline int32_t get_m_position_1() const { return ___m_position_1; }
	inline int32_t* get_address_of_m_position_1() { return &___m_position_1; }
	inline void set_m_position_1(int32_t value)
	{
		___m_position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _KEYSENUMERATOR_T3085262282_H
#ifndef _ITEM_T1969467976_H
#define _ITEM_T1969467976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct  _Item_t1969467976  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/_Item::key
	String_t* ___key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/_Item::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(_Item_t1969467976, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(_Item_t1969467976, ___value_1)); }
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
#endif // _ITEM_T1969467976_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T3974187271_H
#define NAMEOBJECTCOLLECTIONBASE_T3974187271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t3974187271  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t313414306 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t1969467976 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t1318183536 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t1439774373 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t1091263119 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3974187271, ___m_ItemsContainer_0)); }
	inline Hashtable_t313414306 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t313414306 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t313414306 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3974187271, ___m_NullKeyItem_1)); }
	inline _Item_t1969467976 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t1969467976 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t1969467976 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3974187271, ___m_ItemsArray_2)); }
	inline ArrayList_t1318183536 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t1318183536 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t1318183536 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3974187271, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3974187271, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3974187271, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3974187271, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3974187271, ___infoCopy_7)); }
	inline SerializationInfo_t1439774373 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t1439774373 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t1439774373 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3974187271, ___keyscoll_8)); }
	inline KeysCollection_t1091263119 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t1091263119 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t1091263119 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3974187271, ___equality_comparer_9)); }
	inline RuntimeObject* get_equality_comparer_9() const { return ___equality_comparer_9; }
	inline RuntimeObject** get_address_of_equality_comparer_9() { return &___equality_comparer_9; }
	inline void set_equality_comparer_9(RuntimeObject* value)
	{
		___equality_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___equality_comparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T3974187271_H
#ifndef DICTIONARYNODECOLLECTION_T2652443716_H
#define DICTIONARYNODECOLLECTION_T2652443716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection
struct  DictionaryNodeCollection_t2652443716  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::dict
	ListDictionary_t1543311471 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t2652443716, ___dict_0)); }
	inline ListDictionary_t1543311471 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1543311471 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1543311471 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t2652443716, ___isKeyList_1)); }
	inline bool get_isKeyList_1() const { return ___isKeyList_1; }
	inline bool* get_address_of_isKeyList_1() { return &___isKeyList_1; }
	inline void set_isKeyList_1(bool value)
	{
		___isKeyList_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODECOLLECTION_T2652443716_H
#ifndef DICTIONARYNODEENUMERATOR_T1656147859_H
#define DICTIONARYNODEENUMERATOR_T1656147859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct  DictionaryNodeEnumerator_t1656147859  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::dict
	ListDictionary_t1543311471 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::isAtStart
	bool ___isAtStart_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::current
	DictionaryNode_t2582398355 * ___current_2;
	// System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1656147859, ___dict_0)); }
	inline ListDictionary_t1543311471 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1543311471 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1543311471 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isAtStart_1() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1656147859, ___isAtStart_1)); }
	inline bool get_isAtStart_1() const { return ___isAtStart_1; }
	inline bool* get_address_of_isAtStart_1() { return &___isAtStart_1; }
	inline void set_isAtStart_1(bool value)
	{
		___isAtStart_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1656147859, ___current_2)); }
	inline DictionaryNode_t2582398355 * get_current_2() const { return ___current_2; }
	inline DictionaryNode_t2582398355 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(DictionaryNode_t2582398355 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1656147859, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODEENUMERATOR_T1656147859_H
#ifndef DICTIONARYNODE_T2582398355_H
#define DICTIONARYNODE_T2582398355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t2582398355  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t2582398355 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t2582398355, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t2582398355, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t2582398355, ___next_2)); }
	inline DictionaryNode_t2582398355 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t2582398355 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t2582398355 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T2582398355_H
#ifndef LISTDICTIONARY_T1543311471_H
#define LISTDICTIONARY_T1543311471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t1543311471  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t2582398355 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ListDictionary_t1543311471, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t1543311471, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(ListDictionary_t1543311471, ___head_2)); }
	inline DictionaryNode_t2582398355 * get_head_2() const { return ___head_2; }
	inline DictionaryNode_t2582398355 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(DictionaryNode_t2582398355 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier((&___head_2), value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t1543311471, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTDICTIONARY_T1543311471_H
#ifndef HYBRIDDICTIONARY_T2877025225_H
#define HYBRIDDICTIONARY_T2877025225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t2877025225  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t313414306 * ___hashtable_1;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t1543311471 * ___list_2;

public:
	inline static int32_t get_offset_of_caseInsensitive_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t2877025225, ___caseInsensitive_0)); }
	inline bool get_caseInsensitive_0() const { return ___caseInsensitive_0; }
	inline bool* get_address_of_caseInsensitive_0() { return &___caseInsensitive_0; }
	inline void set_caseInsensitive_0(bool value)
	{
		___caseInsensitive_0 = value;
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t2877025225, ___hashtable_1)); }
	inline Hashtable_t313414306 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t313414306 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t313414306 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t2877025225, ___list_2)); }
	inline ListDictionary_t1543311471 * get_list_2() const { return ___list_2; }
	inline ListDictionary_t1543311471 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ListDictionary_t1543311471 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T2877025225_H
#ifndef LOCALE_T2139996603_H
#define LOCALE_T2139996603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t2139996603  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T2139996603_H
#ifndef TIMEZONE_T3041793295_H
#define TIMEZONE_T3041793295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t3041793295  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t3041793295_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t3041793295 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t3041793295_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t3041793295 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t3041793295 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t3041793295 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t3041793295_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t3041793295_StaticFields, ___timezone_check_2)); }
	inline int64_t get_timezone_check_2() const { return ___timezone_check_2; }
	inline int64_t* get_address_of_timezone_check_2() { return &___timezone_check_2; }
	inline void set_timezone_check_2(int64_t value)
	{
		___timezone_check_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONE_T3041793295_H
#ifndef PARSER_T2845395181_H
#define PARSER_T2845395181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan/Parser
struct  Parser_t2845395181  : public RuntimeObject
{
public:
	// System.String System.TimeSpan/Parser::_src
	String_t* ____src_0;
	// System.Int32 System.TimeSpan/Parser::_cur
	int32_t ____cur_1;
	// System.Int32 System.TimeSpan/Parser::_length
	int32_t ____length_2;
	// System.Boolean System.TimeSpan/Parser::formatError
	bool ___formatError_3;

public:
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(Parser_t2845395181, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__cur_1() { return static_cast<int32_t>(offsetof(Parser_t2845395181, ____cur_1)); }
	inline int32_t get__cur_1() const { return ____cur_1; }
	inline int32_t* get_address_of__cur_1() { return &____cur_1; }
	inline void set__cur_1(int32_t value)
	{
		____cur_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Parser_t2845395181, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}

	inline static int32_t get_offset_of_formatError_3() { return static_cast<int32_t>(offsetof(Parser_t2845395181, ___formatError_3)); }
	inline bool get_formatError_3() const { return ___formatError_3; }
	inline bool* get_address_of_formatError_3() { return &___formatError_3; }
	inline void set_formatError_3(bool value)
	{
		___formatError_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T2845395181_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef EVENTARGS_T2769582899_H
#define EVENTARGS_T2769582899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t2769582899  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t2769582899_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t2769582899 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t2769582899_StaticFields, ___Empty_0)); }
	inline EventArgs_t2769582899 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t2769582899 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t2769582899 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T2769582899_H
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
#ifndef RANDOM_T1807396861_H
#define RANDOM_T1807396861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t1807396861  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t1536829261* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t1807396861, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t1807396861, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t1807396861, ___SeedArray_5)); }
	inline Int32U5BU5D_t1536829261* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t1536829261** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t1536829261* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T1807396861_H
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
#ifndef STRINGCOMPARER_T932953942_H
#define STRINGCOMPARER_T932953942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t932953942  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t932953942_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t932953942 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t932953942 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t932953942 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t932953942 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t932953942_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t932953942 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t932953942 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t932953942 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t932953942_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t932953942 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t932953942 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t932953942 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t932953942_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t932953942 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t932953942 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t932953942 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t932953942_StaticFields, ___ordinal_3)); }
	inline StringComparer_t932953942 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t932953942 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t932953942 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T932953942_H
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
#ifndef U24ARRAYTYPEU2448_T4046192101_H
#define U24ARRAYTYPEU2448_T4046192101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t4046192101 
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
		uint8_t U24ArrayTypeU2448_t4046192101__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T4046192101_H
#ifndef U24ARRAYTYPEU24256_T2476451032_H
#define U24ARRAYTYPEU24256_T2476451032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t2476451032 
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
		uint8_t U24ArrayTypeU24256_t2476451032__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T2476451032_H
#ifndef U24ARRAYTYPEU242048_T3323641027_H
#define U24ARRAYTYPEU242048_T3323641027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t3323641027 
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
		uint8_t U24ArrayTypeU242048_t3323641027__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T3323641027_H
#ifndef U24ARRAYTYPEU24128_T2227855530_H
#define U24ARRAYTYPEU24128_T2227855530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t2227855530 
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
		uint8_t U24ArrayTypeU24128_t2227855530__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T2227855530_H
#ifndef U24ARRAYTYPEU2456_T1141983456_H
#define U24ARRAYTYPEU2456_T1141983456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$56
struct  U24ArrayTypeU2456_t1141983456 
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
		uint8_t U24ArrayTypeU2456_t1141983456__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2456_T1141983456_H
#ifndef U24ARRAYTYPEU2496_T1681756587_H
#define U24ARRAYTYPEU2496_T1681756587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t1681756587 
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
		uint8_t U24ArrayTypeU2496_t1681756587__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T1681756587_H
#ifndef U24ARRAYTYPEU24124_T2654171511_H
#define U24ARRAYTYPEU24124_T2654171511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t2654171511 
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
		uint8_t U24ArrayTypeU24124_t2654171511__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T2654171511_H
#ifndef U24ARRAYTYPEU2472_T2580382839_H
#define U24ARRAYTYPEU2472_T2580382839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t2580382839 
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
		uint8_t U24ArrayTypeU2472_t2580382839__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T2580382839_H
#ifndef U24ARRAYTYPEU2432_T1312594586_H
#define U24ARRAYTYPEU2432_T1312594586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t1312594586 
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
		uint8_t U24ArrayTypeU2432_t1312594586__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T1312594586_H
#ifndef U24ARRAYTYPEU248_T493588690_H
#define U24ARRAYTYPEU248_T493588690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t493588690 
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
		uint8_t U24ArrayTypeU248_t493588690__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T493588690_H
#ifndef U24ARRAYTYPEU24136_T3864702551_H
#define U24ARRAYTYPEU24136_T3864702551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t3864702551 
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
		uint8_t U24ArrayTypeU24136_t3864702551__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T3864702551_H
#ifndef U24ARRAYTYPEU2416_T1716708211_H
#define U24ARRAYTYPEU2416_T1716708211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t1716708211 
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
		uint8_t U24ArrayTypeU2416_t1716708211__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T1716708211_H
#ifndef U24ARRAYTYPEU24120_T1628175134_H
#define U24ARRAYTYPEU24120_T1628175134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t1628175134 
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
		uint8_t U24ArrayTypeU24120_t1628175134__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T1628175134_H
#ifndef U24ARRAYTYPEU2412_T3573280208_H
#define U24ARRAYTYPEU2412_T3573280208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t3573280208 
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
		uint8_t U24ArrayTypeU2412_t3573280208__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T3573280208_H
#ifndef U24ARRAYTYPEU2464_T2093717306_H
#define U24ARRAYTYPEU2464_T2093717306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t2093717306 
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
		uint8_t U24ArrayTypeU2464_t2093717306__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T2093717306_H
#ifndef U24ARRAYTYPEU2452_T3779047252_H
#define U24ARRAYTYPEU2452_T3779047252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t3779047252 
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
		uint8_t U24ArrayTypeU2452_t3779047252__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T3779047252_H
#ifndef U24ARRAYTYPEU2420_T2132466434_H
#define U24ARRAYTYPEU2420_T2132466434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t2132466434 
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
		uint8_t U24ArrayTypeU2420_t2132466434__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T2132466434_H
#ifndef U24ARRAYTYPEU2424_T3686291353_H
#define U24ARRAYTYPEU2424_T3686291353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$24
struct  U24ArrayTypeU2424_t3686291353 
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
		uint8_t U24ArrayTypeU2424_t3686291353__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2424_T3686291353_H
#ifndef BOOLEAN_T2904247776_H
#define BOOLEAN_T2904247776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t2904247776 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t2904247776, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t2904247776_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t2904247776_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t2904247776_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T2904247776_H
#ifndef U24ARRAYTYPEU243132_T3154424248_H
#define U24ARRAYTYPEU243132_T3154424248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t3154424248 
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
		uint8_t U24ArrayTypeU243132_t3154424248__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T3154424248_H
#ifndef MONOTODOATTRIBUTE_T1897844925_H
#define MONOTODOATTRIBUTE_T1897844925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t1897844925  : public Attribute_t1543762533
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t1897844925, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T1897844925_H
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
#ifndef GCHANDLE_T3293015910_H
#define GCHANDLE_T3293015910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3293015910 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3293015910, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3293015910_H
#ifndef RESOLVEEVENTARGS_T123755114_H
#define RESOLVEEVENTARGS_T123755114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventArgs
struct  ResolveEventArgs_t123755114  : public EventArgs_t2769582899
{
public:
	// System.String System.ResolveEventArgs::m_Name
	String_t* ___m_Name_1;

public:
	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(ResolveEventArgs_t123755114, ___m_Name_1)); }
	inline String_t* get_m_Name_1() const { return ___m_Name_1; }
	inline String_t** get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(String_t* value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTARGS_T123755114_H
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
#ifndef CULTUREAWARECOMPARER_T4090923966_H
#define CULTUREAWARECOMPARER_T4090923966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t4090923966  : public StringComparer_t932953942
{
public:
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1972811411 * ____compareInfo_5;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t4090923966, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}

	inline static int32_t get_offset_of__compareInfo_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t4090923966, ____compareInfo_5)); }
	inline CompareInfo_t1972811411 * get__compareInfo_5() const { return ____compareInfo_5; }
	inline CompareInfo_t1972811411 ** get_address_of__compareInfo_5() { return &____compareInfo_5; }
	inline void set__compareInfo_5(CompareInfo_t1972811411 * value)
	{
		____compareInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREAWARECOMPARER_T4090923966_H
#ifndef ORDINALCOMPARER_T3159403829_H
#define ORDINALCOMPARER_T3159403829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t3159403829  : public StringComparer_t932953942
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t3159403829, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDINALCOMPARER_T3159403829_H
#ifndef __IL2CPPCOMDELEGATE_T956130987_H
#define __IL2CPPCOMDELEGATE_T956130987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t956130987  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T956130987_H
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
#ifndef TIMESPAN_T4185802735_H
#define TIMESPAN_T4185802735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t4185802735 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t4185802735, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t4185802735_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4185802735  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4185802735  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4185802735  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4185802735_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t4185802735  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t4185802735 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t4185802735  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t4185802735_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t4185802735  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t4185802735 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t4185802735  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t4185802735_StaticFields, ___Zero_7)); }
	inline TimeSpan_t4185802735  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t4185802735 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t4185802735  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T4185802735_H
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
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T1331691442_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T1331691442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t1331691442  : public EventArgs_t2769582899
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t1331691442, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t1331691442, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T1331691442_H
#ifndef NAMEVALUECOLLECTION_T3180674583_H
#define NAMEVALUECOLLECTION_T3180674583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t3180674583  : public NameObjectCollectionBase_t3974187271
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t1824645579* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t1824645579* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t3180674583, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t1824645579* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t1824645579** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t1824645579* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t3180674583, ___cachedAll_11)); }
	inline StringU5BU5D_t1824645579* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t1824645579** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t1824645579* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T3180674583_H
#ifndef U24ARRAYTYPEU241024_T3243492089_H
#define U24ARRAYTYPEU241024_T3243492089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t3243492089 
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
		uint8_t U24ArrayTypeU241024_t3243492089__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T3243492089_H
#ifndef THREADSTATICATTRIBUTE_T3251921557_H
#define THREADSTATICATTRIBUTE_T3251921557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t3251921557  : public Attribute_t1543762533
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T3251921557_H
#ifndef U24ARRAYTYPEU24640_T2464802022_H
#define U24ARRAYTYPEU24640_T2464802022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t2464802022 
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
		uint8_t U24ArrayTypeU24640_t2464802022__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T2464802022_H
#ifndef NOTSUPPORTEDEXCEPTION_T960534527_H
#define NOTSUPPORTEDEXCEPTION_T960534527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t960534527  : public SystemException_t2736349149
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T960534527_H
#ifndef ARITHMETICEXCEPTION_T1150028136_H
#define ARITHMETICEXCEPTION_T1150028136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t1150028136  : public SystemException_t2736349149
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T1150028136_H
#ifndef CONFIDENCEFACTOR_T3271735598_H
#define CONFIDENCEFACTOR_T3271735598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t3271735598 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t3271735598, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T3271735598_H
#ifndef MONONOTSUPPORTEDATTRIBUTE_T594685263_H
#define MONONOTSUPPORTEDATTRIBUTE_T594685263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoNotSupportedAttribute
struct  MonoNotSupportedAttribute_t594685263  : public MonoTODOAttribute_t1897844925
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONONOTSUPPORTEDATTRIBUTE_T594685263_H
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
#ifndef STRINGCOMPARISON_T813392614_H
#define STRINGCOMPARISON_T813392614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t813392614 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t813392614, ___value___1)); }
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
#endif // STRINGCOMPARISON_T813392614_H
#ifndef UNITYTYPE_T4119603325_H
#define UNITYTYPE_T4119603325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t4119603325 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t4119603325, ___value___1)); }
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
#endif // UNITYTYPE_T4119603325_H
#ifndef WEAKREFERENCE_T1476557708_H
#define WEAKREFERENCE_T1476557708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1476557708  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3293015910  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1476557708, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1476557708, ___gcHandle_1)); }
	inline GCHandle_t3293015910  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3293015910 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3293015910  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1476557708_H
#ifndef TYPELOADEXCEPTION_T3028333785_H
#define TYPELOADEXCEPTION_T3028333785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t3028333785  : public SystemException_t2736349149
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t3028333785, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t3028333785, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T3028333785_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T2174846868_H
#define TYPEINITIALIZATIONEXCEPTION_T2174846868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t2174846868  : public SystemException_t2736349149
{
public:
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_11;

public:
	inline static int32_t get_offset_of_type_name_11() { return static_cast<int32_t>(offsetof(TypeInitializationException_t2174846868, ___type_name_11)); }
	inline String_t* get_type_name_11() const { return ___type_name_11; }
	inline String_t** get_address_of_type_name_11() { return &___type_name_11; }
	inline void set_type_name_11(String_t* value)
	{
		___type_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_T2174846868_H
#ifndef TYPECODE_T2657166490_H
#define TYPECODE_T2657166490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2657166490 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t2657166490, ___value___1)); }
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
#endif // TYPECODE_T2657166490_H
#ifndef CURRENTSYSTEMTIMEZONE_T3577172731_H
#define CURRENTSYSTEMTIMEZONE_T3577172731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t3577172731  : public TimeZone_t3041793295
{
public:
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_3;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_4;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t313414306 * ___m_CachedDaylightChanges_5;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_6;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t4185802735  ___utcOffsetWithOutDLS_7;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t4185802735  ___utcOffsetWithDLS_8;

public:
	inline static int32_t get_offset_of_m_standardName_3() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3577172731, ___m_standardName_3)); }
	inline String_t* get_m_standardName_3() const { return ___m_standardName_3; }
	inline String_t** get_address_of_m_standardName_3() { return &___m_standardName_3; }
	inline void set_m_standardName_3(String_t* value)
	{
		___m_standardName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_standardName_3), value);
	}

	inline static int32_t get_offset_of_m_daylightName_4() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3577172731, ___m_daylightName_4)); }
	inline String_t* get_m_daylightName_4() const { return ___m_daylightName_4; }
	inline String_t** get_address_of_m_daylightName_4() { return &___m_daylightName_4; }
	inline void set_m_daylightName_4(String_t* value)
	{
		___m_daylightName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_daylightName_4), value);
	}

	inline static int32_t get_offset_of_m_CachedDaylightChanges_5() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3577172731, ___m_CachedDaylightChanges_5)); }
	inline Hashtable_t313414306 * get_m_CachedDaylightChanges_5() const { return ___m_CachedDaylightChanges_5; }
	inline Hashtable_t313414306 ** get_address_of_m_CachedDaylightChanges_5() { return &___m_CachedDaylightChanges_5; }
	inline void set_m_CachedDaylightChanges_5(Hashtable_t313414306 * value)
	{
		___m_CachedDaylightChanges_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedDaylightChanges_5), value);
	}

	inline static int32_t get_offset_of_m_ticksOffset_6() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3577172731, ___m_ticksOffset_6)); }
	inline int64_t get_m_ticksOffset_6() const { return ___m_ticksOffset_6; }
	inline int64_t* get_address_of_m_ticksOffset_6() { return &___m_ticksOffset_6; }
	inline void set_m_ticksOffset_6(int64_t value)
	{
		___m_ticksOffset_6 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithOutDLS_7() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3577172731, ___utcOffsetWithOutDLS_7)); }
	inline TimeSpan_t4185802735  get_utcOffsetWithOutDLS_7() const { return ___utcOffsetWithOutDLS_7; }
	inline TimeSpan_t4185802735 * get_address_of_utcOffsetWithOutDLS_7() { return &___utcOffsetWithOutDLS_7; }
	inline void set_utcOffsetWithOutDLS_7(TimeSpan_t4185802735  value)
	{
		___utcOffsetWithOutDLS_7 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithDLS_8() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3577172731, ___utcOffsetWithDLS_8)); }
	inline TimeSpan_t4185802735  get_utcOffsetWithDLS_8() const { return ___utcOffsetWithDLS_8; }
	inline TimeSpan_t4185802735 * get_address_of_utcOffsetWithDLS_8() { return &___utcOffsetWithDLS_8; }
	inline void set_utcOffsetWithDLS_8(TimeSpan_t4185802735  value)
	{
		___utcOffsetWithDLS_8 = value;
	}
};

struct CurrentSystemTimeZone_t3577172731_StaticFields
{
public:
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_9;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t2661640372 * ___this_year_dlt_10;

public:
	inline static int32_t get_offset_of_this_year_9() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3577172731_StaticFields, ___this_year_9)); }
	inline int32_t get_this_year_9() const { return ___this_year_9; }
	inline int32_t* get_address_of_this_year_9() { return &___this_year_9; }
	inline void set_this_year_9(int32_t value)
	{
		___this_year_9 = value;
	}

	inline static int32_t get_offset_of_this_year_dlt_10() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3577172731_StaticFields, ___this_year_dlt_10)); }
	inline DaylightTime_t2661640372 * get_this_year_dlt_10() const { return ___this_year_dlt_10; }
	inline DaylightTime_t2661640372 ** get_address_of_this_year_dlt_10() { return &___this_year_dlt_10; }
	inline void set_this_year_dlt_10(DaylightTime_t2661640372 * value)
	{
		___this_year_dlt_10 = value;
		Il2CppCodeGenWriteBarrier((&___this_year_dlt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTSYSTEMTIMEZONE_T3577172731_H
#ifndef STRINGSPLITOPTIONS_T1781795557_H
#define STRINGSPLITOPTIONS_T1781795557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t1781795557 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringSplitOptions_t1781795557, ___value___1)); }
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
#endif // STRINGSPLITOPTIONS_T1781795557_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T41767793_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T41767793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t41767793  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t41767793_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2456_t1141983456  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU2424_t3686291353  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU2424_t3686291353  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2424_t3686291353  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2424_t3686291353  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU2416_t1716708211  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2416_t1716708211  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU243132_t3154424248  ___U24U24fieldU2D15_7;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2420_t2132466434  ___U24U24fieldU2D16_8;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2432_t1312594586  ___U24U24fieldU2D17_9;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-18
	U24ArrayTypeU2448_t4046192101  ___U24U24fieldU2D18_10;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-19
	U24ArrayTypeU2464_t2093717306  ___U24U24fieldU2D19_11;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-20
	U24ArrayTypeU2464_t2093717306  ___U24U24fieldU2D20_12;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU2464_t2093717306  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU2464_t2093717306  ___U24U24fieldU2D22_14;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU2412_t3573280208  ___U24U24fieldU2D23_15;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU2412_t3573280208  ___U24U24fieldU2D24_16;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-25
	U24ArrayTypeU2412_t3573280208  ___U24U24fieldU2D25_17;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU2416_t1716708211  ___U24U24fieldU2D26_18;
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24136_t3864702551  ___U24U24fieldU2D27_19;
	// <PrivateImplementationDetails>/$ArrayType$72 <PrivateImplementationDetails>::$$field-30
	U24ArrayTypeU2472_t2580382839  ___U24U24fieldU2D30_20;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-31
	U24ArrayTypeU248_t493588690  ___U24U24fieldU2D31_21;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-32
	U24ArrayTypeU2420_t2132466434  ___U24U24fieldU2D32_22;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-33
	U24ArrayTypeU2464_t2093717306  ___U24U24fieldU2D33_23;
	// <PrivateImplementationDetails>/$ArrayType$124 <PrivateImplementationDetails>::$$field-34
	U24ArrayTypeU24124_t2654171511  ___U24U24fieldU2D34_24;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-35
	U24ArrayTypeU2432_t1312594586  ___U24U24fieldU2D35_25;
	// <PrivateImplementationDetails>/$ArrayType$96 <PrivateImplementationDetails>::$$field-36
	U24ArrayTypeU2496_t1681756587  ___U24U24fieldU2D36_26;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-37
	U24ArrayTypeU242048_t3323641027  ___U24U24fieldU2D37_27;
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-38
	U24ArrayTypeU2456_t1141983456  ___U24U24fieldU2D38_28;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-39
	U24ArrayTypeU2416_t1716708211  ___U24U24fieldU2D39_29;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-40
	U24ArrayTypeU2448_t4046192101  ___U24U24fieldU2D40_30;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-41
	U24ArrayTypeU242048_t3323641027  ___U24U24fieldU2D41_31;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-42
	U24ArrayTypeU242048_t3323641027  ___U24U24fieldU2D42_32;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU24256_t2476451032  ___U24U24fieldU2D43_33;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU24256_t2476451032  ___U24U24fieldU2D44_34;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-45
	U24ArrayTypeU24120_t1628175134  ___U24U24fieldU2D45_35;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-46
	U24ArrayTypeU24256_t2476451032  ___U24U24fieldU2D46_36;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-47
	U24ArrayTypeU24256_t2476451032  ___U24U24fieldU2D47_37;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-48
	U24ArrayTypeU241024_t3243492089  ___U24U24fieldU2D48_38;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-49
	U24ArrayTypeU241024_t3243492089  ___U24U24fieldU2D49_39;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-50
	U24ArrayTypeU241024_t3243492089  ___U24U24fieldU2D50_40;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-51
	U24ArrayTypeU241024_t3243492089  ___U24U24fieldU2D51_41;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-52
	U24ArrayTypeU241024_t3243492089  ___U24U24fieldU2D52_42;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-53
	U24ArrayTypeU241024_t3243492089  ___U24U24fieldU2D53_43;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-54
	U24ArrayTypeU241024_t3243492089  ___U24U24fieldU2D54_44;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-55
	U24ArrayTypeU241024_t3243492089  ___U24U24fieldU2D55_45;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-56
	U24ArrayTypeU24256_t2476451032  ___U24U24fieldU2D56_46;
	// <PrivateImplementationDetails>/$ArrayType$640 <PrivateImplementationDetails>::$$field-57
	U24ArrayTypeU24640_t2464802022  ___U24U24fieldU2D57_47;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-60
	U24ArrayTypeU2412_t3573280208  ___U24U24fieldU2D60_48;
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-62
	U24ArrayTypeU24128_t2227855530  ___U24U24fieldU2D62_49;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-63
	U24ArrayTypeU24256_t2476451032  ___U24U24fieldU2D63_50;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-64
	U24ArrayTypeU2452_t3779047252  ___U24U24fieldU2D64_51;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-65
	U24ArrayTypeU2452_t3779047252  ___U24U24fieldU2D65_52;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2456_t1141983456  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2456_t1141983456 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2456_t1141983456  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU2424_t3686291353  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU2424_t3686291353 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU2424_t3686291353  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU2424_t3686291353  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU2424_t3686291353 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU2424_t3686291353  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU2424_t3686291353  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU2424_t3686291353 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU2424_t3686291353  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU2424_t3686291353  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU2424_t3686291353 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU2424_t3686291353  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU2416_t1716708211  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU2416_t1716708211 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU2416_t1716708211  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU2416_t1716708211  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU2416_t1716708211 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU2416_t1716708211  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D15_7)); }
	inline U24ArrayTypeU243132_t3154424248  get_U24U24fieldU2D15_7() const { return ___U24U24fieldU2D15_7; }
	inline U24ArrayTypeU243132_t3154424248 * get_address_of_U24U24fieldU2D15_7() { return &___U24U24fieldU2D15_7; }
	inline void set_U24U24fieldU2D15_7(U24ArrayTypeU243132_t3154424248  value)
	{
		___U24U24fieldU2D15_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D16_8)); }
	inline U24ArrayTypeU2420_t2132466434  get_U24U24fieldU2D16_8() const { return ___U24U24fieldU2D16_8; }
	inline U24ArrayTypeU2420_t2132466434 * get_address_of_U24U24fieldU2D16_8() { return &___U24U24fieldU2D16_8; }
	inline void set_U24U24fieldU2D16_8(U24ArrayTypeU2420_t2132466434  value)
	{
		___U24U24fieldU2D16_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D17_9)); }
	inline U24ArrayTypeU2432_t1312594586  get_U24U24fieldU2D17_9() const { return ___U24U24fieldU2D17_9; }
	inline U24ArrayTypeU2432_t1312594586 * get_address_of_U24U24fieldU2D17_9() { return &___U24U24fieldU2D17_9; }
	inline void set_U24U24fieldU2D17_9(U24ArrayTypeU2432_t1312594586  value)
	{
		___U24U24fieldU2D17_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D18_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D18_10)); }
	inline U24ArrayTypeU2448_t4046192101  get_U24U24fieldU2D18_10() const { return ___U24U24fieldU2D18_10; }
	inline U24ArrayTypeU2448_t4046192101 * get_address_of_U24U24fieldU2D18_10() { return &___U24U24fieldU2D18_10; }
	inline void set_U24U24fieldU2D18_10(U24ArrayTypeU2448_t4046192101  value)
	{
		___U24U24fieldU2D18_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D19_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D19_11)); }
	inline U24ArrayTypeU2464_t2093717306  get_U24U24fieldU2D19_11() const { return ___U24U24fieldU2D19_11; }
	inline U24ArrayTypeU2464_t2093717306 * get_address_of_U24U24fieldU2D19_11() { return &___U24U24fieldU2D19_11; }
	inline void set_U24U24fieldU2D19_11(U24ArrayTypeU2464_t2093717306  value)
	{
		___U24U24fieldU2D19_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D20_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D20_12)); }
	inline U24ArrayTypeU2464_t2093717306  get_U24U24fieldU2D20_12() const { return ___U24U24fieldU2D20_12; }
	inline U24ArrayTypeU2464_t2093717306 * get_address_of_U24U24fieldU2D20_12() { return &___U24U24fieldU2D20_12; }
	inline void set_U24U24fieldU2D20_12(U24ArrayTypeU2464_t2093717306  value)
	{
		___U24U24fieldU2D20_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU2464_t2093717306  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU2464_t2093717306 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU2464_t2093717306  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU2464_t2093717306  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU2464_t2093717306 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU2464_t2093717306  value)
	{
		___U24U24fieldU2D22_14 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D23_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D23_15)); }
	inline U24ArrayTypeU2412_t3573280208  get_U24U24fieldU2D23_15() const { return ___U24U24fieldU2D23_15; }
	inline U24ArrayTypeU2412_t3573280208 * get_address_of_U24U24fieldU2D23_15() { return &___U24U24fieldU2D23_15; }
	inline void set_U24U24fieldU2D23_15(U24ArrayTypeU2412_t3573280208  value)
	{
		___U24U24fieldU2D23_15 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D24_16)); }
	inline U24ArrayTypeU2412_t3573280208  get_U24U24fieldU2D24_16() const { return ___U24U24fieldU2D24_16; }
	inline U24ArrayTypeU2412_t3573280208 * get_address_of_U24U24fieldU2D24_16() { return &___U24U24fieldU2D24_16; }
	inline void set_U24U24fieldU2D24_16(U24ArrayTypeU2412_t3573280208  value)
	{
		___U24U24fieldU2D24_16 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D25_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D25_17)); }
	inline U24ArrayTypeU2412_t3573280208  get_U24U24fieldU2D25_17() const { return ___U24U24fieldU2D25_17; }
	inline U24ArrayTypeU2412_t3573280208 * get_address_of_U24U24fieldU2D25_17() { return &___U24U24fieldU2D25_17; }
	inline void set_U24U24fieldU2D25_17(U24ArrayTypeU2412_t3573280208  value)
	{
		___U24U24fieldU2D25_17 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D26_18)); }
	inline U24ArrayTypeU2416_t1716708211  get_U24U24fieldU2D26_18() const { return ___U24U24fieldU2D26_18; }
	inline U24ArrayTypeU2416_t1716708211 * get_address_of_U24U24fieldU2D26_18() { return &___U24U24fieldU2D26_18; }
	inline void set_U24U24fieldU2D26_18(U24ArrayTypeU2416_t1716708211  value)
	{
		___U24U24fieldU2D26_18 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D27_19)); }
	inline U24ArrayTypeU24136_t3864702551  get_U24U24fieldU2D27_19() const { return ___U24U24fieldU2D27_19; }
	inline U24ArrayTypeU24136_t3864702551 * get_address_of_U24U24fieldU2D27_19() { return &___U24U24fieldU2D27_19; }
	inline void set_U24U24fieldU2D27_19(U24ArrayTypeU24136_t3864702551  value)
	{
		___U24U24fieldU2D27_19 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D30_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D30_20)); }
	inline U24ArrayTypeU2472_t2580382839  get_U24U24fieldU2D30_20() const { return ___U24U24fieldU2D30_20; }
	inline U24ArrayTypeU2472_t2580382839 * get_address_of_U24U24fieldU2D30_20() { return &___U24U24fieldU2D30_20; }
	inline void set_U24U24fieldU2D30_20(U24ArrayTypeU2472_t2580382839  value)
	{
		___U24U24fieldU2D30_20 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D31_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D31_21)); }
	inline U24ArrayTypeU248_t493588690  get_U24U24fieldU2D31_21() const { return ___U24U24fieldU2D31_21; }
	inline U24ArrayTypeU248_t493588690 * get_address_of_U24U24fieldU2D31_21() { return &___U24U24fieldU2D31_21; }
	inline void set_U24U24fieldU2D31_21(U24ArrayTypeU248_t493588690  value)
	{
		___U24U24fieldU2D31_21 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D32_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D32_22)); }
	inline U24ArrayTypeU2420_t2132466434  get_U24U24fieldU2D32_22() const { return ___U24U24fieldU2D32_22; }
	inline U24ArrayTypeU2420_t2132466434 * get_address_of_U24U24fieldU2D32_22() { return &___U24U24fieldU2D32_22; }
	inline void set_U24U24fieldU2D32_22(U24ArrayTypeU2420_t2132466434  value)
	{
		___U24U24fieldU2D32_22 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D33_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D33_23)); }
	inline U24ArrayTypeU2464_t2093717306  get_U24U24fieldU2D33_23() const { return ___U24U24fieldU2D33_23; }
	inline U24ArrayTypeU2464_t2093717306 * get_address_of_U24U24fieldU2D33_23() { return &___U24U24fieldU2D33_23; }
	inline void set_U24U24fieldU2D33_23(U24ArrayTypeU2464_t2093717306  value)
	{
		___U24U24fieldU2D33_23 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D34_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D34_24)); }
	inline U24ArrayTypeU24124_t2654171511  get_U24U24fieldU2D34_24() const { return ___U24U24fieldU2D34_24; }
	inline U24ArrayTypeU24124_t2654171511 * get_address_of_U24U24fieldU2D34_24() { return &___U24U24fieldU2D34_24; }
	inline void set_U24U24fieldU2D34_24(U24ArrayTypeU24124_t2654171511  value)
	{
		___U24U24fieldU2D34_24 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D35_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D35_25)); }
	inline U24ArrayTypeU2432_t1312594586  get_U24U24fieldU2D35_25() const { return ___U24U24fieldU2D35_25; }
	inline U24ArrayTypeU2432_t1312594586 * get_address_of_U24U24fieldU2D35_25() { return &___U24U24fieldU2D35_25; }
	inline void set_U24U24fieldU2D35_25(U24ArrayTypeU2432_t1312594586  value)
	{
		___U24U24fieldU2D35_25 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D36_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D36_26)); }
	inline U24ArrayTypeU2496_t1681756587  get_U24U24fieldU2D36_26() const { return ___U24U24fieldU2D36_26; }
	inline U24ArrayTypeU2496_t1681756587 * get_address_of_U24U24fieldU2D36_26() { return &___U24U24fieldU2D36_26; }
	inline void set_U24U24fieldU2D36_26(U24ArrayTypeU2496_t1681756587  value)
	{
		___U24U24fieldU2D36_26 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D37_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D37_27)); }
	inline U24ArrayTypeU242048_t3323641027  get_U24U24fieldU2D37_27() const { return ___U24U24fieldU2D37_27; }
	inline U24ArrayTypeU242048_t3323641027 * get_address_of_U24U24fieldU2D37_27() { return &___U24U24fieldU2D37_27; }
	inline void set_U24U24fieldU2D37_27(U24ArrayTypeU242048_t3323641027  value)
	{
		___U24U24fieldU2D37_27 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D38_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D38_28)); }
	inline U24ArrayTypeU2456_t1141983456  get_U24U24fieldU2D38_28() const { return ___U24U24fieldU2D38_28; }
	inline U24ArrayTypeU2456_t1141983456 * get_address_of_U24U24fieldU2D38_28() { return &___U24U24fieldU2D38_28; }
	inline void set_U24U24fieldU2D38_28(U24ArrayTypeU2456_t1141983456  value)
	{
		___U24U24fieldU2D38_28 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D39_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D39_29)); }
	inline U24ArrayTypeU2416_t1716708211  get_U24U24fieldU2D39_29() const { return ___U24U24fieldU2D39_29; }
	inline U24ArrayTypeU2416_t1716708211 * get_address_of_U24U24fieldU2D39_29() { return &___U24U24fieldU2D39_29; }
	inline void set_U24U24fieldU2D39_29(U24ArrayTypeU2416_t1716708211  value)
	{
		___U24U24fieldU2D39_29 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D40_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D40_30)); }
	inline U24ArrayTypeU2448_t4046192101  get_U24U24fieldU2D40_30() const { return ___U24U24fieldU2D40_30; }
	inline U24ArrayTypeU2448_t4046192101 * get_address_of_U24U24fieldU2D40_30() { return &___U24U24fieldU2D40_30; }
	inline void set_U24U24fieldU2D40_30(U24ArrayTypeU2448_t4046192101  value)
	{
		___U24U24fieldU2D40_30 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D41_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D41_31)); }
	inline U24ArrayTypeU242048_t3323641027  get_U24U24fieldU2D41_31() const { return ___U24U24fieldU2D41_31; }
	inline U24ArrayTypeU242048_t3323641027 * get_address_of_U24U24fieldU2D41_31() { return &___U24U24fieldU2D41_31; }
	inline void set_U24U24fieldU2D41_31(U24ArrayTypeU242048_t3323641027  value)
	{
		___U24U24fieldU2D41_31 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D42_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D42_32)); }
	inline U24ArrayTypeU242048_t3323641027  get_U24U24fieldU2D42_32() const { return ___U24U24fieldU2D42_32; }
	inline U24ArrayTypeU242048_t3323641027 * get_address_of_U24U24fieldU2D42_32() { return &___U24U24fieldU2D42_32; }
	inline void set_U24U24fieldU2D42_32(U24ArrayTypeU242048_t3323641027  value)
	{
		___U24U24fieldU2D42_32 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D43_33)); }
	inline U24ArrayTypeU24256_t2476451032  get_U24U24fieldU2D43_33() const { return ___U24U24fieldU2D43_33; }
	inline U24ArrayTypeU24256_t2476451032 * get_address_of_U24U24fieldU2D43_33() { return &___U24U24fieldU2D43_33; }
	inline void set_U24U24fieldU2D43_33(U24ArrayTypeU24256_t2476451032  value)
	{
		___U24U24fieldU2D43_33 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D44_34)); }
	inline U24ArrayTypeU24256_t2476451032  get_U24U24fieldU2D44_34() const { return ___U24U24fieldU2D44_34; }
	inline U24ArrayTypeU24256_t2476451032 * get_address_of_U24U24fieldU2D44_34() { return &___U24U24fieldU2D44_34; }
	inline void set_U24U24fieldU2D44_34(U24ArrayTypeU24256_t2476451032  value)
	{
		___U24U24fieldU2D44_34 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D45_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D45_35)); }
	inline U24ArrayTypeU24120_t1628175134  get_U24U24fieldU2D45_35() const { return ___U24U24fieldU2D45_35; }
	inline U24ArrayTypeU24120_t1628175134 * get_address_of_U24U24fieldU2D45_35() { return &___U24U24fieldU2D45_35; }
	inline void set_U24U24fieldU2D45_35(U24ArrayTypeU24120_t1628175134  value)
	{
		___U24U24fieldU2D45_35 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D46_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D46_36)); }
	inline U24ArrayTypeU24256_t2476451032  get_U24U24fieldU2D46_36() const { return ___U24U24fieldU2D46_36; }
	inline U24ArrayTypeU24256_t2476451032 * get_address_of_U24U24fieldU2D46_36() { return &___U24U24fieldU2D46_36; }
	inline void set_U24U24fieldU2D46_36(U24ArrayTypeU24256_t2476451032  value)
	{
		___U24U24fieldU2D46_36 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D47_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D47_37)); }
	inline U24ArrayTypeU24256_t2476451032  get_U24U24fieldU2D47_37() const { return ___U24U24fieldU2D47_37; }
	inline U24ArrayTypeU24256_t2476451032 * get_address_of_U24U24fieldU2D47_37() { return &___U24U24fieldU2D47_37; }
	inline void set_U24U24fieldU2D47_37(U24ArrayTypeU24256_t2476451032  value)
	{
		___U24U24fieldU2D47_37 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D48_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D48_38)); }
	inline U24ArrayTypeU241024_t3243492089  get_U24U24fieldU2D48_38() const { return ___U24U24fieldU2D48_38; }
	inline U24ArrayTypeU241024_t3243492089 * get_address_of_U24U24fieldU2D48_38() { return &___U24U24fieldU2D48_38; }
	inline void set_U24U24fieldU2D48_38(U24ArrayTypeU241024_t3243492089  value)
	{
		___U24U24fieldU2D48_38 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D49_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D49_39)); }
	inline U24ArrayTypeU241024_t3243492089  get_U24U24fieldU2D49_39() const { return ___U24U24fieldU2D49_39; }
	inline U24ArrayTypeU241024_t3243492089 * get_address_of_U24U24fieldU2D49_39() { return &___U24U24fieldU2D49_39; }
	inline void set_U24U24fieldU2D49_39(U24ArrayTypeU241024_t3243492089  value)
	{
		___U24U24fieldU2D49_39 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D50_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D50_40)); }
	inline U24ArrayTypeU241024_t3243492089  get_U24U24fieldU2D50_40() const { return ___U24U24fieldU2D50_40; }
	inline U24ArrayTypeU241024_t3243492089 * get_address_of_U24U24fieldU2D50_40() { return &___U24U24fieldU2D50_40; }
	inline void set_U24U24fieldU2D50_40(U24ArrayTypeU241024_t3243492089  value)
	{
		___U24U24fieldU2D50_40 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D51_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D51_41)); }
	inline U24ArrayTypeU241024_t3243492089  get_U24U24fieldU2D51_41() const { return ___U24U24fieldU2D51_41; }
	inline U24ArrayTypeU241024_t3243492089 * get_address_of_U24U24fieldU2D51_41() { return &___U24U24fieldU2D51_41; }
	inline void set_U24U24fieldU2D51_41(U24ArrayTypeU241024_t3243492089  value)
	{
		___U24U24fieldU2D51_41 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D52_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D52_42)); }
	inline U24ArrayTypeU241024_t3243492089  get_U24U24fieldU2D52_42() const { return ___U24U24fieldU2D52_42; }
	inline U24ArrayTypeU241024_t3243492089 * get_address_of_U24U24fieldU2D52_42() { return &___U24U24fieldU2D52_42; }
	inline void set_U24U24fieldU2D52_42(U24ArrayTypeU241024_t3243492089  value)
	{
		___U24U24fieldU2D52_42 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D53_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D53_43)); }
	inline U24ArrayTypeU241024_t3243492089  get_U24U24fieldU2D53_43() const { return ___U24U24fieldU2D53_43; }
	inline U24ArrayTypeU241024_t3243492089 * get_address_of_U24U24fieldU2D53_43() { return &___U24U24fieldU2D53_43; }
	inline void set_U24U24fieldU2D53_43(U24ArrayTypeU241024_t3243492089  value)
	{
		___U24U24fieldU2D53_43 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D54_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D54_44)); }
	inline U24ArrayTypeU241024_t3243492089  get_U24U24fieldU2D54_44() const { return ___U24U24fieldU2D54_44; }
	inline U24ArrayTypeU241024_t3243492089 * get_address_of_U24U24fieldU2D54_44() { return &___U24U24fieldU2D54_44; }
	inline void set_U24U24fieldU2D54_44(U24ArrayTypeU241024_t3243492089  value)
	{
		___U24U24fieldU2D54_44 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D55_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D55_45)); }
	inline U24ArrayTypeU241024_t3243492089  get_U24U24fieldU2D55_45() const { return ___U24U24fieldU2D55_45; }
	inline U24ArrayTypeU241024_t3243492089 * get_address_of_U24U24fieldU2D55_45() { return &___U24U24fieldU2D55_45; }
	inline void set_U24U24fieldU2D55_45(U24ArrayTypeU241024_t3243492089  value)
	{
		___U24U24fieldU2D55_45 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D56_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D56_46)); }
	inline U24ArrayTypeU24256_t2476451032  get_U24U24fieldU2D56_46() const { return ___U24U24fieldU2D56_46; }
	inline U24ArrayTypeU24256_t2476451032 * get_address_of_U24U24fieldU2D56_46() { return &___U24U24fieldU2D56_46; }
	inline void set_U24U24fieldU2D56_46(U24ArrayTypeU24256_t2476451032  value)
	{
		___U24U24fieldU2D56_46 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D57_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D57_47)); }
	inline U24ArrayTypeU24640_t2464802022  get_U24U24fieldU2D57_47() const { return ___U24U24fieldU2D57_47; }
	inline U24ArrayTypeU24640_t2464802022 * get_address_of_U24U24fieldU2D57_47() { return &___U24U24fieldU2D57_47; }
	inline void set_U24U24fieldU2D57_47(U24ArrayTypeU24640_t2464802022  value)
	{
		___U24U24fieldU2D57_47 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D60_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D60_48)); }
	inline U24ArrayTypeU2412_t3573280208  get_U24U24fieldU2D60_48() const { return ___U24U24fieldU2D60_48; }
	inline U24ArrayTypeU2412_t3573280208 * get_address_of_U24U24fieldU2D60_48() { return &___U24U24fieldU2D60_48; }
	inline void set_U24U24fieldU2D60_48(U24ArrayTypeU2412_t3573280208  value)
	{
		___U24U24fieldU2D60_48 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D62_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D62_49)); }
	inline U24ArrayTypeU24128_t2227855530  get_U24U24fieldU2D62_49() const { return ___U24U24fieldU2D62_49; }
	inline U24ArrayTypeU24128_t2227855530 * get_address_of_U24U24fieldU2D62_49() { return &___U24U24fieldU2D62_49; }
	inline void set_U24U24fieldU2D62_49(U24ArrayTypeU24128_t2227855530  value)
	{
		___U24U24fieldU2D62_49 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D63_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D63_50)); }
	inline U24ArrayTypeU24256_t2476451032  get_U24U24fieldU2D63_50() const { return ___U24U24fieldU2D63_50; }
	inline U24ArrayTypeU24256_t2476451032 * get_address_of_U24U24fieldU2D63_50() { return &___U24U24fieldU2D63_50; }
	inline void set_U24U24fieldU2D63_50(U24ArrayTypeU24256_t2476451032  value)
	{
		___U24U24fieldU2D63_50 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D64_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D64_51)); }
	inline U24ArrayTypeU2452_t3779047252  get_U24U24fieldU2D64_51() const { return ___U24U24fieldU2D64_51; }
	inline U24ArrayTypeU2452_t3779047252 * get_address_of_U24U24fieldU2D64_51() { return &___U24U24fieldU2D64_51; }
	inline void set_U24U24fieldU2D64_51(U24ArrayTypeU2452_t3779047252  value)
	{
		___U24U24fieldU2D64_51 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D65_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields, ___U24U24fieldU2D65_52)); }
	inline U24ArrayTypeU2452_t3779047252  get_U24U24fieldU2D65_52() const { return ___U24U24fieldU2D65_52; }
	inline U24ArrayTypeU2452_t3779047252 * get_address_of_U24U24fieldU2D65_52() { return &___U24U24fieldU2D65_52; }
	inline void set_U24U24fieldU2D65_52(U24ArrayTypeU2452_t3779047252  value)
	{
		___U24U24fieldU2D65_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T41767793_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T2298733573_H
#define UNAUTHORIZEDACCESSEXCEPTION_T2298733573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t2298733573  : public SystemException_t2736349149
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T2298733573_H
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
#ifndef RANKEXCEPTION_T4293997295_H
#define RANKEXCEPTION_T4293997295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t4293997295  : public SystemException_t2736349149
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T4293997295_H
#ifndef PLATFORMID_T2843673850_H
#define PLATFORMID_T2843673850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformID
struct  PlatformID_t2843673850 
{
public:
	// System.Int32 System.PlatformID::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlatformID_t2843673850, ___value___1)); }
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
#endif // PLATFORMID_T2843673850_H
#ifndef OUTOFMEMORYEXCEPTION_T3984073499_H
#define OUTOFMEMORYEXCEPTION_T3984073499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t3984073499  : public SystemException_t2736349149
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T3984073499_H
#ifndef STACKOVERFLOWEXCEPTION_T772239400_H
#define STACKOVERFLOWEXCEPTION_T772239400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t772239400  : public SystemException_t2736349149
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T772239400_H
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T998211750_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T998211750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t998211750  : public NotSupportedException_t960534527
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T998211750_H
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
#ifndef OVERFLOWEXCEPTION_T1907239274_H
#define OVERFLOWEXCEPTION_T1907239274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t1907239274  : public ArithmeticException_t1150028136
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T1907239274_H
#ifndef UNITYSERIALIZATIONHOLDER_T2601619976_H
#define UNITYSERIALIZATIONHOLDER_T2601619976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t2601619976  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t2601619976, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t2601619976, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t2601619976, ____assemblyName_2)); }
	inline String_t* get__assemblyName_2() const { return ____assemblyName_2; }
	inline String_t** get_address_of__assemblyName_2() { return &____assemblyName_2; }
	inline void set__assemblyName_2(String_t* value)
	{
		____assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T2601619976_H
#ifndef OPERATINGSYSTEM_T3539237882_H
#define OPERATINGSYSTEM_T3539237882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperatingSystem
struct  OperatingSystem_t3539237882  : public RuntimeObject
{
public:
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_0;
	// System.Version System.OperatingSystem::_version
	Version_t2220740773 * ____version_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;

public:
	inline static int32_t get_offset_of__platform_0() { return static_cast<int32_t>(offsetof(OperatingSystem_t3539237882, ____platform_0)); }
	inline int32_t get__platform_0() const { return ____platform_0; }
	inline int32_t* get_address_of__platform_0() { return &____platform_0; }
	inline void set__platform_0(int32_t value)
	{
		____platform_0 = value;
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(OperatingSystem_t3539237882, ____version_1)); }
	inline Version_t2220740773 * get__version_1() const { return ____version_1; }
	inline Version_t2220740773 ** get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(Version_t2220740773 * value)
	{
		____version_1 = value;
		Il2CppCodeGenWriteBarrier((&____version_1), value);
	}

	inline static int32_t get_offset_of__servicePack_2() { return static_cast<int32_t>(offsetof(OperatingSystem_t3539237882, ____servicePack_2)); }
	inline String_t* get__servicePack_2() const { return ____servicePack_2; }
	inline String_t** get_address_of__servicePack_2() { return &____servicePack_2; }
	inline void set__servicePack_2(String_t* value)
	{
		____servicePack_2 = value;
		Il2CppCodeGenWriteBarrier((&____servicePack_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATINGSYSTEM_T3539237882_H
#ifndef MEMBERFILTER_T1368463053_H
#define MEMBERFILTER_T1368463053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t1368463053  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T1368463053_H
#ifndef TYPEFILTER_T3510508607_H
#define TYPEFILTER_T3510508607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeFilter
struct  TypeFilter_t3510508607  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTER_T3510508607_H
#ifndef CROSSCONTEXTDELEGATE_T1201188041_H
#define CROSSCONTEXTDELEGATE_T1201188041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct  CrossContextDelegate_t1201188041  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTDELEGATE_T1201188041_H
#ifndef HEADERHANDLER_T2351503714_H
#define HEADERHANDLER_T2351503714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.HeaderHandler
struct  HeaderHandler_t2351503714  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERHANDLER_T2351503714_H
#ifndef SENDORPOSTCALLBACK_T192871396_H
#define SENDORPOSTCALLBACK_T192871396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t192871396  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T192871396_H
#ifndef THREADSTART_T806373570_H
#define THREADSTART_T806373570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t806373570  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T806373570_H
#ifndef TIMERCALLBACK_T3966598444_H
#define TIMERCALLBACK_T3966598444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.TimerCallback
struct  TimerCallback_t3966598444  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCALLBACK_T3966598444_H
#ifndef WAITCALLBACK_T2331482389_H
#define WAITCALLBACK_T2331482389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t2331482389  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T2331482389_H
#ifndef WAITORTIMERCALLBACK_T319943674_H
#define WAITORTIMERCALLBACK_T319943674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitOrTimerCallback
struct  WaitOrTimerCallback_t319943674  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITORTIMERCALLBACK_T319943674_H
#ifndef APPDOMAININITIALIZER_T362924222_H
#define APPDOMAININITIALIZER_T362924222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainInitializer
struct  AppDomainInitializer_t362924222  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAININITIALIZER_T362924222_H
#ifndef ASSEMBLYLOADEVENTHANDLER_T1837823140_H
#define ASSEMBLYLOADEVENTHANDLER_T1837823140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventHandler
struct  AssemblyLoadEventHandler_t1837823140  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTHANDLER_T1837823140_H
#ifndef EVENTHANDLER_T3214020592_H
#define EVENTHANDLER_T3214020592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t3214020592  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T3214020592_H
#ifndef RESOLVEEVENTHANDLER_T4146843324_H
#define RESOLVEEVENTHANDLER_T4146843324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventHandler
struct  ResolveEventHandler_t4146843324  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHANDLER_T4146843324_H
#ifndef PRIMALITYTEST_T2252025792_H
#define PRIMALITYTEST_T2252025792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t2252025792  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T2252025792_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T1620546901_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T1620546901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t1620546901  : public MulticastDelegate_t361376620
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T1620546901_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { sizeof (OperatingSystem_t3539237882), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable900[3] = 
{
	OperatingSystem_t3539237882::get_offset_of__platform_0(),
	OperatingSystem_t3539237882::get_offset_of__version_1(),
	OperatingSystem_t3539237882::get_offset_of__servicePack_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (OutOfMemoryException_t3984073499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable901[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (OverflowException_t1907239274), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable902[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { sizeof (PlatformID_t2843673850)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable903[8] = 
{
	PlatformID_t2843673850::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { sizeof (PlatformNotSupportedException_t998211750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable904[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { sizeof (Random_t1807396861), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable905[6] = 
{
	0,
	0,
	0,
	Random_t1807396861::get_offset_of_inext_3(),
	Random_t1807396861::get_offset_of_inextp_4(),
	Random_t1807396861::get_offset_of_SeedArray_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { sizeof (RankException_t4293997295), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { sizeof (ResolveEventArgs_t123755114), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable907[1] = 
{
	ResolveEventArgs_t123755114::get_offset_of_m_Name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { sizeof (RuntimeMethodHandle_t2181030097)+ sizeof (RuntimeObject), sizeof(RuntimeMethodHandle_t2181030097 ), 0, 0 };
extern const int32_t g_FieldOffsetTable908[1] = 
{
	RuntimeMethodHandle_t2181030097::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { sizeof (StackOverflowException_t772239400), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { sizeof (StringComparer_t932953942), -1, sizeof(StringComparer_t932953942_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable910[4] = 
{
	StringComparer_t932953942_StaticFields::get_offset_of_invariantCultureIgnoreCase_0(),
	StringComparer_t932953942_StaticFields::get_offset_of_invariantCulture_1(),
	StringComparer_t932953942_StaticFields::get_offset_of_ordinalIgnoreCase_2(),
	StringComparer_t932953942_StaticFields::get_offset_of_ordinal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (CultureAwareComparer_t4090923966), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable911[2] = 
{
	CultureAwareComparer_t4090923966::get_offset_of__ignoreCase_4(),
	CultureAwareComparer_t4090923966::get_offset_of__compareInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (OrdinalComparer_t3159403829), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable912[1] = 
{
	OrdinalComparer_t3159403829::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (StringComparison_t813392614)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable913[7] = 
{
	StringComparison_t813392614::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (StringSplitOptions_t1781795557)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable914[3] = 
{
	StringSplitOptions_t1781795557::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (SystemException_t2736349149), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (ThreadStaticAttribute_t3251921557), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (TimeSpan_t4185802735)+ sizeof (RuntimeObject), sizeof(TimeSpan_t4185802735 ), sizeof(TimeSpan_t4185802735_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable917[9] = 
{
	0,
	0,
	0,
	0,
	0,
	TimeSpan_t4185802735_StaticFields::get_offset_of_MaxValue_5(),
	TimeSpan_t4185802735_StaticFields::get_offset_of_MinValue_6(),
	TimeSpan_t4185802735_StaticFields::get_offset_of_Zero_7(),
	TimeSpan_t4185802735::get_offset_of__ticks_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { sizeof (Parser_t2845395181), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable918[4] = 
{
	Parser_t2845395181::get_offset_of__src_0(),
	Parser_t2845395181::get_offset_of__cur_1(),
	Parser_t2845395181::get_offset_of__length_2(),
	Parser_t2845395181::get_offset_of_formatError_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (TimeZone_t3041793295), -1, sizeof(TimeZone_t3041793295_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable919[3] = 
{
	TimeZone_t3041793295_StaticFields::get_offset_of_currentTimeZone_0(),
	TimeZone_t3041793295_StaticFields::get_offset_of_tz_lock_1(),
	TimeZone_t3041793295_StaticFields::get_offset_of_timezone_check_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (CurrentSystemTimeZone_t3577172731), -1, sizeof(CurrentSystemTimeZone_t3577172731_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable920[8] = 
{
	CurrentSystemTimeZone_t3577172731::get_offset_of_m_standardName_3(),
	CurrentSystemTimeZone_t3577172731::get_offset_of_m_daylightName_4(),
	CurrentSystemTimeZone_t3577172731::get_offset_of_m_CachedDaylightChanges_5(),
	CurrentSystemTimeZone_t3577172731::get_offset_of_m_ticksOffset_6(),
	CurrentSystemTimeZone_t3577172731::get_offset_of_utcOffsetWithOutDLS_7(),
	CurrentSystemTimeZone_t3577172731::get_offset_of_utcOffsetWithDLS_8(),
	CurrentSystemTimeZone_t3577172731_StaticFields::get_offset_of_this_year_9(),
	CurrentSystemTimeZone_t3577172731_StaticFields::get_offset_of_this_year_dlt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (TypeCode_t2657166490)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable921[19] = 
{
	TypeCode_t2657166490::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { sizeof (TypeInitializationException_t2174846868), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable922[1] = 
{
	TypeInitializationException_t2174846868::get_offset_of_type_name_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { sizeof (TypeLoadException_t3028333785), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable923[3] = 
{
	0,
	TypeLoadException_t3028333785::get_offset_of_className_12(),
	TypeLoadException_t3028333785::get_offset_of_assemblyName_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { sizeof (UnauthorizedAccessException_t2298733573), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { sizeof (UnhandledExceptionEventArgs_t1331691442), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable925[2] = 
{
	UnhandledExceptionEventArgs_t1331691442::get_offset_of_exception_1(),
	UnhandledExceptionEventArgs_t1331691442::get_offset_of_m_isTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { sizeof (UnitySerializationHolder_t2601619976), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable926[3] = 
{
	UnitySerializationHolder_t2601619976::get_offset_of__data_0(),
	UnitySerializationHolder_t2601619976::get_offset_of__unityType_1(),
	UnitySerializationHolder_t2601619976::get_offset_of__assemblyName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { sizeof (UnityType_t4119603325)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable927[5] = 
{
	UnityType_t4119603325::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { sizeof (Version_t2220740773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable928[5] = 
{
	0,
	Version_t2220740773::get_offset_of__Major_1(),
	Version_t2220740773::get_offset_of__Minor_2(),
	Version_t2220740773::get_offset_of__Build_3(),
	Version_t2220740773::get_offset_of__Revision_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (WeakReference_t1476557708), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable929[2] = 
{
	WeakReference_t1476557708::get_offset_of_isLongReference_0(),
	WeakReference_t1476557708::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (PrimalityTest_t2252025792), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (MemberFilter_t1368463053), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (TypeFilter_t3510508607), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (CrossContextDelegate_t1201188041), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { sizeof (HeaderHandler_t2351503714), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { sizeof (SendOrPostCallback_t192871396), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (ThreadStart_t806373570), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (TimerCallback_t3966598444), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (WaitCallback_t2331482389), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { sizeof (WaitOrTimerCallback_t319943674), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { sizeof (AppDomainInitializer_t362924222), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { sizeof (AssemblyLoadEventHandler_t1837823140), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { sizeof (EventHandler_t3214020592), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (ResolveEventHandler_t4146843324), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { sizeof (UnhandledExceptionEventHandler_t1620546901), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { sizeof (U3CPrivateImplementationDetailsU3E_t41767793), -1, sizeof(U3CPrivateImplementationDetailsU3E_t41767793_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable949[53] = 
{
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D15_7(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D16_8(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D17_9(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D18_10(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D19_11(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D20_12(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D23_15(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D24_16(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D25_17(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D26_18(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D27_19(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D30_20(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D31_21(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D32_22(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D33_23(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D34_24(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D35_25(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D36_26(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D37_27(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D38_28(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D39_29(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D40_30(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D41_31(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D42_32(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D43_33(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D44_34(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D45_35(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D46_36(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D47_37(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D48_38(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D49_39(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D50_40(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D51_41(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D52_42(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D53_43(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D54_44(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D55_45(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D56_46(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D57_47(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D60_48(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D62_49(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D63_50(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D64_51(),
	U3CPrivateImplementationDetailsU3E_t41767793_StaticFields::get_offset_of_U24U24fieldU2D65_52(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { sizeof (U24ArrayTypeU2456_t1141983456)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2456_t1141983456 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { sizeof (U24ArrayTypeU2424_t3686291353)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2424_t3686291353 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { sizeof (U24ArrayTypeU2416_t1716708211)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t1716708211 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { sizeof (U24ArrayTypeU24120_t1628175134)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t1628175134 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { sizeof (U24ArrayTypeU243132_t3154424248)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t3154424248 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { sizeof (U24ArrayTypeU2420_t2132466434)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t2132466434 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { sizeof (U24ArrayTypeU2432_t1312594586)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t1312594586 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { sizeof (U24ArrayTypeU2448_t4046192101)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t4046192101 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { sizeof (U24ArrayTypeU2464_t2093717306)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t2093717306 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (U24ArrayTypeU2412_t3573280208)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t3573280208 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { sizeof (U24ArrayTypeU24136_t3864702551)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t3864702551 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { sizeof (U24ArrayTypeU248_t493588690)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU248_t493588690 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { sizeof (U24ArrayTypeU2472_t2580382839)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2472_t2580382839 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { sizeof (U24ArrayTypeU24124_t2654171511)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24124_t2654171511 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (U24ArrayTypeU2496_t1681756587)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2496_t1681756587 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (U24ArrayTypeU242048_t3323641027)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU242048_t3323641027 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (U24ArrayTypeU24256_t2476451032)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t2476451032 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (U24ArrayTypeU241024_t3243492089)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t3243492089 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (U24ArrayTypeU24640_t2464802022)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24640_t2464802022 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (U24ArrayTypeU24128_t2227855530)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t2227855530 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (U24ArrayTypeU2452_t3779047252)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2452_t3779047252 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (__Il2CppComDelegate_t956130987), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (U3CModuleU3E_t396589453), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { sizeof (Locale_t2139996603), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { sizeof (MonoTODOAttribute_t1897844925), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable975[1] = 
{
	MonoTODOAttribute_t1897844925::get_offset_of_comment_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { sizeof (MonoNotSupportedAttribute_t594685263), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable977[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable978[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable979[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable980[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable981[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable982[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable983[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (HybridDictionary_t2877025225), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable984[3] = 
{
	HybridDictionary_t2877025225::get_offset_of_caseInsensitive_0(),
	HybridDictionary_t2877025225::get_offset_of_hashtable_1(),
	HybridDictionary_t2877025225::get_offset_of_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (ListDictionary_t1543311471), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable985[4] = 
{
	ListDictionary_t1543311471::get_offset_of_count_0(),
	ListDictionary_t1543311471::get_offset_of_version_1(),
	ListDictionary_t1543311471::get_offset_of_head_2(),
	ListDictionary_t1543311471::get_offset_of_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (DictionaryNode_t2582398355), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable986[3] = 
{
	DictionaryNode_t2582398355::get_offset_of_key_0(),
	DictionaryNode_t2582398355::get_offset_of_value_1(),
	DictionaryNode_t2582398355::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { sizeof (DictionaryNodeEnumerator_t1656147859), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable987[4] = 
{
	DictionaryNodeEnumerator_t1656147859::get_offset_of_dict_0(),
	DictionaryNodeEnumerator_t1656147859::get_offset_of_isAtStart_1(),
	DictionaryNodeEnumerator_t1656147859::get_offset_of_current_2(),
	DictionaryNodeEnumerator_t1656147859::get_offset_of_version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { sizeof (DictionaryNodeCollection_t2652443716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable988[2] = 
{
	DictionaryNodeCollection_t2652443716::get_offset_of_dict_0(),
	DictionaryNodeCollection_t2652443716::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { sizeof (DictionaryNodeCollectionEnumerator_t416218623), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable989[2] = 
{
	DictionaryNodeCollectionEnumerator_t416218623::get_offset_of_inner_0(),
	DictionaryNodeCollectionEnumerator_t416218623::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (NameObjectCollectionBase_t3974187271), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable990[10] = 
{
	NameObjectCollectionBase_t3974187271::get_offset_of_m_ItemsContainer_0(),
	NameObjectCollectionBase_t3974187271::get_offset_of_m_NullKeyItem_1(),
	NameObjectCollectionBase_t3974187271::get_offset_of_m_ItemsArray_2(),
	NameObjectCollectionBase_t3974187271::get_offset_of_m_hashprovider_3(),
	NameObjectCollectionBase_t3974187271::get_offset_of_m_comparer_4(),
	NameObjectCollectionBase_t3974187271::get_offset_of_m_defCapacity_5(),
	NameObjectCollectionBase_t3974187271::get_offset_of_m_readonly_6(),
	NameObjectCollectionBase_t3974187271::get_offset_of_infoCopy_7(),
	NameObjectCollectionBase_t3974187271::get_offset_of_keyscoll_8(),
	NameObjectCollectionBase_t3974187271::get_offset_of_equality_comparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (_Item_t1969467976), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable991[2] = 
{
	_Item_t1969467976::get_offset_of_key_0(),
	_Item_t1969467976::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { sizeof (_KeysEnumerator_t3085262282), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable992[2] = 
{
	_KeysEnumerator_t3085262282::get_offset_of_m_collection_0(),
	_KeysEnumerator_t3085262282::get_offset_of_m_position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { sizeof (KeysCollection_t1091263119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable993[1] = 
{
	KeysCollection_t1091263119::get_offset_of_m_collection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (NameValueCollection_t3180674583), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable994[2] = 
{
	NameValueCollection_t3180674583::get_offset_of_cachedAllKeys_10(),
	NameValueCollection_t3180674583::get_offset_of_cachedAll_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (InstanceDescriptor_t175512466), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable995[3] = 
{
	InstanceDescriptor_t175512466::get_offset_of_member_0(),
	InstanceDescriptor_t175512466::get_offset_of_arguments_1(),
	InstanceDescriptor_t175512466::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (DesignerTransaction_t657471228), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable996[2] = 
{
	DesignerTransaction_t657471228::get_offset_of_committed_0(),
	DesignerTransaction_t657471228::get_offset_of_canceled_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
