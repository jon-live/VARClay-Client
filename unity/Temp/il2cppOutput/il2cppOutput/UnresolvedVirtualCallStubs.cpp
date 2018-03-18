#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.GameObject
struct GameObject_t4215223176;
// UnityEngine.Collider
struct Collider_t3285233152;
// UnityEngine.Collision
struct Collision_t3287392452;
// VRTK.VRTK_InteractTouch
struct VRTK_InteractTouch_t3070279415;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1377807838;
// UnityEngine.Transform
struct Transform_t2732716350;
// VRTK.VRTK_ControllerReference
struct VRTK_ControllerReference_t2614677003;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t1099096164;
// PhotonPlayer
struct PhotonPlayer_t2856026751;
// PhotonView
struct PhotonView_t1244555896;
// System.Char[]
struct CharU5BU5D_t2518678323;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t675704942;
// System.Type
struct Type_t;
// System.Byte[]
struct ByteU5BU5D_t2293224833;
// System.Void
struct Void_t1084091345;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t525921075;
// System.String[]
struct StringU5BU5D_t513271263;
// System.Int32[]
struct Int32U5BU5D_t302413437;
// UnityEngine.UI.Selectable
struct Selectable_t3369345471;

struct Collision_t3287392452_marshaled_pinvoke;
struct Collision_t3287392452_marshaled_com;
struct RaycastHit_t1730847655_marshaled_pinvoke;
struct RaycastHit_t1730847655_marshaled_com;



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
#ifndef BODYPHYSICSEVENTARGS_T2782781156_H
#define BODYPHYSICSEVENTARGS_T2782781156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.BodyPhysicsEventArgs
struct  BodyPhysicsEventArgs_t2782781156 
{
public:
	// UnityEngine.GameObject VRTK.BodyPhysicsEventArgs::target
	GameObject_t4215223176 * ___target_0;
	// UnityEngine.Collider VRTK.BodyPhysicsEventArgs::collider
	Collider_t3285233152 * ___collider_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(BodyPhysicsEventArgs_t2782781156, ___target_0)); }
	inline GameObject_t4215223176 * get_target_0() const { return ___target_0; }
	inline GameObject_t4215223176 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t4215223176 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_collider_1() { return static_cast<int32_t>(offsetof(BodyPhysicsEventArgs_t2782781156, ___collider_1)); }
	inline Collider_t3285233152 * get_collider_1() const { return ___collider_1; }
	inline Collider_t3285233152 ** get_address_of_collider_1() { return &___collider_1; }
	inline void set_collider_1(Collider_t3285233152 * value)
	{
		___collider_1 = value;
		Il2CppCodeGenWriteBarrier((&___collider_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.BodyPhysicsEventArgs
struct BodyPhysicsEventArgs_t2782781156_marshaled_pinvoke
{
	GameObject_t4215223176 * ___target_0;
	Collider_t3285233152 * ___collider_1;
};
// Native definition for COM marshalling of VRTK.BodyPhysicsEventArgs
struct BodyPhysicsEventArgs_t2782781156_marshaled_com
{
	GameObject_t4215223176 * ___target_0;
	Collider_t3285233152 * ___collider_1;
};
#endif // BODYPHYSICSEVENTARGS_T2782781156_H
#ifndef CONTROL3DEVENTARGS_T1329496489_H
#define CONTROL3DEVENTARGS_T1329496489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.Control3DEventArgs
struct  Control3DEventArgs_t1329496489 
{
public:
	// System.Single VRTK.Control3DEventArgs::value
	float ___value_0;
	// System.Single VRTK.Control3DEventArgs::normalizedValue
	float ___normalizedValue_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Control3DEventArgs_t1329496489, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_normalizedValue_1() { return static_cast<int32_t>(offsetof(Control3DEventArgs_t1329496489, ___normalizedValue_1)); }
	inline float get_normalizedValue_1() const { return ___normalizedValue_1; }
	inline float* get_address_of_normalizedValue_1() { return &___normalizedValue_1; }
	inline void set_normalizedValue_1(float value)
	{
		___normalizedValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROL3DEVENTARGS_T1329496489_H
#ifndef COLLISIONTRACKEREVENTARGS_T1671502100_H
#define COLLISIONTRACKEREVENTARGS_T1671502100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.CollisionTrackerEventArgs
struct  CollisionTrackerEventArgs_t1671502100 
{
public:
	// System.Boolean VRTK.CollisionTrackerEventArgs::isTrigger
	bool ___isTrigger_0;
	// UnityEngine.Collision VRTK.CollisionTrackerEventArgs::collision
	Collision_t3287392452 * ___collision_1;
	// UnityEngine.Collider VRTK.CollisionTrackerEventArgs::collider
	Collider_t3285233152 * ___collider_2;

public:
	inline static int32_t get_offset_of_isTrigger_0() { return static_cast<int32_t>(offsetof(CollisionTrackerEventArgs_t1671502100, ___isTrigger_0)); }
	inline bool get_isTrigger_0() const { return ___isTrigger_0; }
	inline bool* get_address_of_isTrigger_0() { return &___isTrigger_0; }
	inline void set_isTrigger_0(bool value)
	{
		___isTrigger_0 = value;
	}

	inline static int32_t get_offset_of_collision_1() { return static_cast<int32_t>(offsetof(CollisionTrackerEventArgs_t1671502100, ___collision_1)); }
	inline Collision_t3287392452 * get_collision_1() const { return ___collision_1; }
	inline Collision_t3287392452 ** get_address_of_collision_1() { return &___collision_1; }
	inline void set_collision_1(Collision_t3287392452 * value)
	{
		___collision_1 = value;
		Il2CppCodeGenWriteBarrier((&___collision_1), value);
	}

	inline static int32_t get_offset_of_collider_2() { return static_cast<int32_t>(offsetof(CollisionTrackerEventArgs_t1671502100, ___collider_2)); }
	inline Collider_t3285233152 * get_collider_2() const { return ___collider_2; }
	inline Collider_t3285233152 ** get_address_of_collider_2() { return &___collider_2; }
	inline void set_collider_2(Collider_t3285233152 * value)
	{
		___collider_2 = value;
		Il2CppCodeGenWriteBarrier((&___collider_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.CollisionTrackerEventArgs
struct CollisionTrackerEventArgs_t1671502100_marshaled_pinvoke
{
	int32_t ___isTrigger_0;
	Collision_t3287392452_marshaled_pinvoke* ___collision_1;
	Collider_t3285233152 * ___collider_2;
};
// Native definition for COM marshalling of VRTK.CollisionTrackerEventArgs
struct CollisionTrackerEventArgs_t1671502100_marshaled_com
{
	int32_t ___isTrigger_0;
	Collision_t3287392452_marshaled_com* ___collision_1;
	Collider_t3285233152 * ___collider_2;
};
#endif // COLLISIONTRACKEREVENTARGS_T1671502100_H
#ifndef CONTROLVALUERANGE_T1484964184_H
#define CONTROLVALUERANGE_T1484964184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.VRTK_Control/ControlValueRange
struct  ControlValueRange_t1484964184 
{
public:
	// System.Single VRTK.VRTK_Control/ControlValueRange::controlMin
	float ___controlMin_0;
	// System.Single VRTK.VRTK_Control/ControlValueRange::controlMax
	float ___controlMax_1;

public:
	inline static int32_t get_offset_of_controlMin_0() { return static_cast<int32_t>(offsetof(ControlValueRange_t1484964184, ___controlMin_0)); }
	inline float get_controlMin_0() const { return ___controlMin_0; }
	inline float* get_address_of_controlMin_0() { return &___controlMin_0; }
	inline void set_controlMin_0(float value)
	{
		___controlMin_0 = value;
	}

	inline static int32_t get_offset_of_controlMax_1() { return static_cast<int32_t>(offsetof(ControlValueRange_t1484964184, ___controlMax_1)); }
	inline float get_controlMax_1() const { return ___controlMax_1; }
	inline float* get_address_of_controlMax_1() { return &___controlMax_1; }
	inline void set_controlMax_1(float value)
	{
		___controlMax_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLVALUERANGE_T1484964184_H
#ifndef CONTROLLERACTIONSEVENTARGS_T430656062_H
#define CONTROLLERACTIONSEVENTARGS_T430656062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.ControllerActionsEventArgs
struct  ControllerActionsEventArgs_t430656062 
{
public:
	// System.UInt32 VRTK.ControllerActionsEventArgs::controllerIndex
	uint32_t ___controllerIndex_0;

public:
	inline static int32_t get_offset_of_controllerIndex_0() { return static_cast<int32_t>(offsetof(ControllerActionsEventArgs_t430656062, ___controllerIndex_0)); }
	inline uint32_t get_controllerIndex_0() const { return ___controllerIndex_0; }
	inline uint32_t* get_address_of_controllerIndex_0() { return &___controllerIndex_0; }
	inline void set_controllerIndex_0(uint32_t value)
	{
		___controllerIndex_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLERACTIONSEVENTARGS_T430656062_H
#ifndef CONTROLLERRIGIDBODYACTIVATOREVENTARGS_T1851152386_H
#define CONTROLLERRIGIDBODYACTIVATOREVENTARGS_T1851152386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.ControllerRigidbodyActivatorEventArgs
struct  ControllerRigidbodyActivatorEventArgs_t1851152386 
{
public:
	// VRTK.VRTK_InteractTouch VRTK.ControllerRigidbodyActivatorEventArgs::touchingObject
	VRTK_InteractTouch_t3070279415 * ___touchingObject_0;

public:
	inline static int32_t get_offset_of_touchingObject_0() { return static_cast<int32_t>(offsetof(ControllerRigidbodyActivatorEventArgs_t1851152386, ___touchingObject_0)); }
	inline VRTK_InteractTouch_t3070279415 * get_touchingObject_0() const { return ___touchingObject_0; }
	inline VRTK_InteractTouch_t3070279415 ** get_address_of_touchingObject_0() { return &___touchingObject_0; }
	inline void set_touchingObject_0(VRTK_InteractTouch_t3070279415 * value)
	{
		___touchingObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___touchingObject_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.ControllerRigidbodyActivatorEventArgs
struct ControllerRigidbodyActivatorEventArgs_t1851152386_marshaled_pinvoke
{
	VRTK_InteractTouch_t3070279415 * ___touchingObject_0;
};
// Native definition for COM marshalling of VRTK.ControllerRigidbodyActivatorEventArgs
struct ControllerRigidbodyActivatorEventArgs_t1851152386_marshaled_com
{
	VRTK_InteractTouch_t3070279415 * ___touchingObject_0;
};
#endif // CONTROLLERRIGIDBODYACTIVATOREVENTARGS_T1851152386_H
#ifndef DASHTELEPORTEVENTARGS_T1410175322_H
#define DASHTELEPORTEVENTARGS_T1410175322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.DashTeleportEventArgs
struct  DashTeleportEventArgs_t1410175322 
{
public:
	// UnityEngine.RaycastHit[] VRTK.DashTeleportEventArgs::hits
	RaycastHitU5BU5D_t1377807838* ___hits_0;

public:
	inline static int32_t get_offset_of_hits_0() { return static_cast<int32_t>(offsetof(DashTeleportEventArgs_t1410175322, ___hits_0)); }
	inline RaycastHitU5BU5D_t1377807838* get_hits_0() const { return ___hits_0; }
	inline RaycastHitU5BU5D_t1377807838** get_address_of_hits_0() { return &___hits_0; }
	inline void set_hits_0(RaycastHitU5BU5D_t1377807838* value)
	{
		___hits_0 = value;
		Il2CppCodeGenWriteBarrier((&___hits_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.DashTeleportEventArgs
struct DashTeleportEventArgs_t1410175322_marshaled_pinvoke
{
	RaycastHit_t1730847655_marshaled_pinvoke* ___hits_0;
};
// Native definition for COM marshalling of VRTK.DashTeleportEventArgs
struct DashTeleportEventArgs_t1410175322_marshaled_com
{
	RaycastHit_t1730847655_marshaled_com* ___hits_0;
};
#endif // DASHTELEPORTEVENTARGS_T1410175322_H
#ifndef HEADSETCOLLISIONEVENTARGS_T1124612885_H
#define HEADSETCOLLISIONEVENTARGS_T1124612885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.HeadsetCollisionEventArgs
struct  HeadsetCollisionEventArgs_t1124612885 
{
public:
	// UnityEngine.Collider VRTK.HeadsetCollisionEventArgs::collider
	Collider_t3285233152 * ___collider_0;
	// UnityEngine.Transform VRTK.HeadsetCollisionEventArgs::currentTransform
	Transform_t2732716350 * ___currentTransform_1;

public:
	inline static int32_t get_offset_of_collider_0() { return static_cast<int32_t>(offsetof(HeadsetCollisionEventArgs_t1124612885, ___collider_0)); }
	inline Collider_t3285233152 * get_collider_0() const { return ___collider_0; }
	inline Collider_t3285233152 ** get_address_of_collider_0() { return &___collider_0; }
	inline void set_collider_0(Collider_t3285233152 * value)
	{
		___collider_0 = value;
		Il2CppCodeGenWriteBarrier((&___collider_0), value);
	}

	inline static int32_t get_offset_of_currentTransform_1() { return static_cast<int32_t>(offsetof(HeadsetCollisionEventArgs_t1124612885, ___currentTransform_1)); }
	inline Transform_t2732716350 * get_currentTransform_1() const { return ___currentTransform_1; }
	inline Transform_t2732716350 ** get_address_of_currentTransform_1() { return &___currentTransform_1; }
	inline void set_currentTransform_1(Transform_t2732716350 * value)
	{
		___currentTransform_1 = value;
		Il2CppCodeGenWriteBarrier((&___currentTransform_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.HeadsetCollisionEventArgs
struct HeadsetCollisionEventArgs_t1124612885_marshaled_pinvoke
{
	Collider_t3285233152 * ___collider_0;
	Transform_t2732716350 * ___currentTransform_1;
};
// Native definition for COM marshalling of VRTK.HeadsetCollisionEventArgs
struct HeadsetCollisionEventArgs_t1124612885_marshaled_com
{
	Collider_t3285233152 * ___collider_0;
	Transform_t2732716350 * ___currentTransform_1;
};
#endif // HEADSETCOLLISIONEVENTARGS_T1124612885_H
#ifndef HEADSETFADEEVENTARGS_T2140906877_H
#define HEADSETFADEEVENTARGS_T2140906877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.HeadsetFadeEventArgs
struct  HeadsetFadeEventArgs_t2140906877 
{
public:
	// System.Single VRTK.HeadsetFadeEventArgs::timeTillComplete
	float ___timeTillComplete_0;
	// UnityEngine.Transform VRTK.HeadsetFadeEventArgs::currentTransform
	Transform_t2732716350 * ___currentTransform_1;

public:
	inline static int32_t get_offset_of_timeTillComplete_0() { return static_cast<int32_t>(offsetof(HeadsetFadeEventArgs_t2140906877, ___timeTillComplete_0)); }
	inline float get_timeTillComplete_0() const { return ___timeTillComplete_0; }
	inline float* get_address_of_timeTillComplete_0() { return &___timeTillComplete_0; }
	inline void set_timeTillComplete_0(float value)
	{
		___timeTillComplete_0 = value;
	}

	inline static int32_t get_offset_of_currentTransform_1() { return static_cast<int32_t>(offsetof(HeadsetFadeEventArgs_t2140906877, ___currentTransform_1)); }
	inline Transform_t2732716350 * get_currentTransform_1() const { return ___currentTransform_1; }
	inline Transform_t2732716350 ** get_address_of_currentTransform_1() { return &___currentTransform_1; }
	inline void set_currentTransform_1(Transform_t2732716350 * value)
	{
		___currentTransform_1 = value;
		Il2CppCodeGenWriteBarrier((&___currentTransform_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.HeadsetFadeEventArgs
struct HeadsetFadeEventArgs_t2140906877_marshaled_pinvoke
{
	float ___timeTillComplete_0;
	Transform_t2732716350 * ___currentTransform_1;
};
// Native definition for COM marshalling of VRTK.HeadsetFadeEventArgs
struct HeadsetFadeEventArgs_t2140906877_marshaled_com
{
	float ___timeTillComplete_0;
	Transform_t2732716350 * ___currentTransform_1;
};
#endif // HEADSETFADEEVENTARGS_T2140906877_H
#ifndef INTERACTABLEOBJECTEVENTARGS_T2436369074_H
#define INTERACTABLEOBJECTEVENTARGS_T2436369074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.InteractableObjectEventArgs
struct  InteractableObjectEventArgs_t2436369074 
{
public:
	// UnityEngine.GameObject VRTK.InteractableObjectEventArgs::interactingObject
	GameObject_t4215223176 * ___interactingObject_0;

public:
	inline static int32_t get_offset_of_interactingObject_0() { return static_cast<int32_t>(offsetof(InteractableObjectEventArgs_t2436369074, ___interactingObject_0)); }
	inline GameObject_t4215223176 * get_interactingObject_0() const { return ___interactingObject_0; }
	inline GameObject_t4215223176 ** get_address_of_interactingObject_0() { return &___interactingObject_0; }
	inline void set_interactingObject_0(GameObject_t4215223176 * value)
	{
		___interactingObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___interactingObject_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.InteractableObjectEventArgs
struct InteractableObjectEventArgs_t2436369074_marshaled_pinvoke
{
	GameObject_t4215223176 * ___interactingObject_0;
};
// Native definition for COM marshalling of VRTK.InteractableObjectEventArgs
struct InteractableObjectEventArgs_t2436369074_marshaled_com
{
	GameObject_t4215223176 * ___interactingObject_0;
};
#endif // INTERACTABLEOBJECTEVENTARGS_T2436369074_H
#ifndef SNAPDROPZONEEVENTARGS_T60463308_H
#define SNAPDROPZONEEVENTARGS_T60463308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.SnapDropZoneEventArgs
struct  SnapDropZoneEventArgs_t60463308 
{
public:
	// UnityEngine.GameObject VRTK.SnapDropZoneEventArgs::snappedObject
	GameObject_t4215223176 * ___snappedObject_0;

public:
	inline static int32_t get_offset_of_snappedObject_0() { return static_cast<int32_t>(offsetof(SnapDropZoneEventArgs_t60463308, ___snappedObject_0)); }
	inline GameObject_t4215223176 * get_snappedObject_0() const { return ___snappedObject_0; }
	inline GameObject_t4215223176 ** get_address_of_snappedObject_0() { return &___snappedObject_0; }
	inline void set_snappedObject_0(GameObject_t4215223176 * value)
	{
		___snappedObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___snappedObject_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.SnapDropZoneEventArgs
struct SnapDropZoneEventArgs_t60463308_marshaled_pinvoke
{
	GameObject_t4215223176 * ___snappedObject_0;
};
// Native definition for COM marshalling of VRTK.SnapDropZoneEventArgs
struct SnapDropZoneEventArgs_t60463308_marshaled_com
{
	GameObject_t4215223176 * ___snappedObject_0;
};
#endif // SNAPDROPZONEEVENTARGS_T60463308_H
#ifndef INTERACTCONTROLLERAPPEARANCEEVENTARGS_T895611834_H
#define INTERACTCONTROLLERAPPEARANCEEVENTARGS_T895611834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.InteractControllerAppearanceEventArgs
struct  InteractControllerAppearanceEventArgs_t895611834 
{
public:
	// UnityEngine.GameObject VRTK.InteractControllerAppearanceEventArgs::interactingObject
	GameObject_t4215223176 * ___interactingObject_0;
	// UnityEngine.GameObject VRTK.InteractControllerAppearanceEventArgs::ignoredObject
	GameObject_t4215223176 * ___ignoredObject_1;

public:
	inline static int32_t get_offset_of_interactingObject_0() { return static_cast<int32_t>(offsetof(InteractControllerAppearanceEventArgs_t895611834, ___interactingObject_0)); }
	inline GameObject_t4215223176 * get_interactingObject_0() const { return ___interactingObject_0; }
	inline GameObject_t4215223176 ** get_address_of_interactingObject_0() { return &___interactingObject_0; }
	inline void set_interactingObject_0(GameObject_t4215223176 * value)
	{
		___interactingObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___interactingObject_0), value);
	}

	inline static int32_t get_offset_of_ignoredObject_1() { return static_cast<int32_t>(offsetof(InteractControllerAppearanceEventArgs_t895611834, ___ignoredObject_1)); }
	inline GameObject_t4215223176 * get_ignoredObject_1() const { return ___ignoredObject_1; }
	inline GameObject_t4215223176 ** get_address_of_ignoredObject_1() { return &___ignoredObject_1; }
	inline void set_ignoredObject_1(GameObject_t4215223176 * value)
	{
		___ignoredObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___ignoredObject_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.InteractControllerAppearanceEventArgs
struct InteractControllerAppearanceEventArgs_t895611834_marshaled_pinvoke
{
	GameObject_t4215223176 * ___interactingObject_0;
	GameObject_t4215223176 * ___ignoredObject_1;
};
// Native definition for COM marshalling of VRTK.InteractControllerAppearanceEventArgs
struct InteractControllerAppearanceEventArgs_t895611834_marshaled_com
{
	GameObject_t4215223176 * ___interactingObject_0;
	GameObject_t4215223176 * ___ignoredObject_1;
};
#endif // INTERACTCONTROLLERAPPEARANCEEVENTARGS_T895611834_H
#ifndef OBJECTINTERACTEVENTARGS_T560748097_H
#define OBJECTINTERACTEVENTARGS_T560748097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.ObjectInteractEventArgs
struct  ObjectInteractEventArgs_t560748097 
{
public:
	// System.UInt32 VRTK.ObjectInteractEventArgs::controllerIndex
	uint32_t ___controllerIndex_0;
	// VRTK.VRTK_ControllerReference VRTK.ObjectInteractEventArgs::controllerReference
	VRTK_ControllerReference_t2614677003 * ___controllerReference_1;
	// UnityEngine.GameObject VRTK.ObjectInteractEventArgs::target
	GameObject_t4215223176 * ___target_2;

public:
	inline static int32_t get_offset_of_controllerIndex_0() { return static_cast<int32_t>(offsetof(ObjectInteractEventArgs_t560748097, ___controllerIndex_0)); }
	inline uint32_t get_controllerIndex_0() const { return ___controllerIndex_0; }
	inline uint32_t* get_address_of_controllerIndex_0() { return &___controllerIndex_0; }
	inline void set_controllerIndex_0(uint32_t value)
	{
		___controllerIndex_0 = value;
	}

	inline static int32_t get_offset_of_controllerReference_1() { return static_cast<int32_t>(offsetof(ObjectInteractEventArgs_t560748097, ___controllerReference_1)); }
	inline VRTK_ControllerReference_t2614677003 * get_controllerReference_1() const { return ___controllerReference_1; }
	inline VRTK_ControllerReference_t2614677003 ** get_address_of_controllerReference_1() { return &___controllerReference_1; }
	inline void set_controllerReference_1(VRTK_ControllerReference_t2614677003 * value)
	{
		___controllerReference_1 = value;
		Il2CppCodeGenWriteBarrier((&___controllerReference_1), value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(ObjectInteractEventArgs_t560748097, ___target_2)); }
	inline GameObject_t4215223176 * get_target_2() const { return ___target_2; }
	inline GameObject_t4215223176 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t4215223176 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.ObjectInteractEventArgs
struct ObjectInteractEventArgs_t560748097_marshaled_pinvoke
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t2614677003 * ___controllerReference_1;
	GameObject_t4215223176 * ___target_2;
};
// Native definition for COM marshalling of VRTK.ObjectInteractEventArgs
struct ObjectInteractEventArgs_t560748097_marshaled_com
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t2614677003 * ___controllerReference_1;
	GameObject_t4215223176 * ___target_2;
};
#endif // OBJECTINTERACTEVENTARGS_T560748097_H
#ifndef INTERACTHAPTICSEVENTARGS_T1131202885_H
#define INTERACTHAPTICSEVENTARGS_T1131202885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.InteractHapticsEventArgs
struct  InteractHapticsEventArgs_t1131202885 
{
public:
	// VRTK.VRTK_ControllerReference VRTK.InteractHapticsEventArgs::controllerReference
	VRTK_ControllerReference_t2614677003 * ___controllerReference_0;

public:
	inline static int32_t get_offset_of_controllerReference_0() { return static_cast<int32_t>(offsetof(InteractHapticsEventArgs_t1131202885, ___controllerReference_0)); }
	inline VRTK_ControllerReference_t2614677003 * get_controllerReference_0() const { return ___controllerReference_0; }
	inline VRTK_ControllerReference_t2614677003 ** get_address_of_controllerReference_0() { return &___controllerReference_0; }
	inline void set_controllerReference_0(VRTK_ControllerReference_t2614677003 * value)
	{
		___controllerReference_0 = value;
		Il2CppCodeGenWriteBarrier((&___controllerReference_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.InteractHapticsEventArgs
struct InteractHapticsEventArgs_t1131202885_marshaled_pinvoke
{
	VRTK_ControllerReference_t2614677003 * ___controllerReference_0;
};
// Native definition for COM marshalling of VRTK.InteractHapticsEventArgs
struct InteractHapticsEventArgs_t1131202885_marshaled_com
{
	VRTK_ControllerReference_t2614677003 * ___controllerReference_0;
};
#endif // INTERACTHAPTICSEVENTARGS_T1131202885_H
#ifndef OBJECTTOOLTIPEVENTARGS_T840852757_H
#define OBJECTTOOLTIPEVENTARGS_T840852757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.ObjectTooltipEventArgs
struct  ObjectTooltipEventArgs_t840852757 
{
public:
	// System.String VRTK.ObjectTooltipEventArgs::newText
	String_t* ___newText_0;

public:
	inline static int32_t get_offset_of_newText_0() { return static_cast<int32_t>(offsetof(ObjectTooltipEventArgs_t840852757, ___newText_0)); }
	inline String_t* get_newText_0() const { return ___newText_0; }
	inline String_t** get_address_of_newText_0() { return &___newText_0; }
	inline void set_newText_0(String_t* value)
	{
		___newText_0 = value;
		Il2CppCodeGenWriteBarrier((&___newText_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.ObjectTooltipEventArgs
struct ObjectTooltipEventArgs_t840852757_marshaled_pinvoke
{
	char* ___newText_0;
};
// Native definition for COM marshalling of VRTK.ObjectTooltipEventArgs
struct ObjectTooltipEventArgs_t840852757_marshaled_com
{
	Il2CppChar* ___newText_0;
};
#endif // OBJECTTOOLTIPEVENTARGS_T840852757_H
#ifndef PANELMENUITEMCONTROLLEREVENTARGS_T3920619084_H
#define PANELMENUITEMCONTROLLEREVENTARGS_T3920619084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.PanelMenuItemControllerEventArgs
struct  PanelMenuItemControllerEventArgs_t3920619084 
{
public:
	// UnityEngine.GameObject VRTK.PanelMenuItemControllerEventArgs::interactableObject
	GameObject_t4215223176 * ___interactableObject_0;

public:
	inline static int32_t get_offset_of_interactableObject_0() { return static_cast<int32_t>(offsetof(PanelMenuItemControllerEventArgs_t3920619084, ___interactableObject_0)); }
	inline GameObject_t4215223176 * get_interactableObject_0() const { return ___interactableObject_0; }
	inline GameObject_t4215223176 ** get_address_of_interactableObject_0() { return &___interactableObject_0; }
	inline void set_interactableObject_0(GameObject_t4215223176 * value)
	{
		___interactableObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___interactableObject_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.PanelMenuItemControllerEventArgs
struct PanelMenuItemControllerEventArgs_t3920619084_marshaled_pinvoke
{
	GameObject_t4215223176 * ___interactableObject_0;
};
// Native definition for COM marshalling of VRTK.PanelMenuItemControllerEventArgs
struct PanelMenuItemControllerEventArgs_t3920619084_marshaled_com
{
	GameObject_t4215223176 * ___interactableObject_0;
};
#endif // PANELMENUITEMCONTROLLEREVENTARGS_T3920619084_H
#ifndef PLAYAREACURSOREVENTARGS_T3732259145_H
#define PLAYAREACURSOREVENTARGS_T3732259145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.PlayAreaCursorEventArgs
struct  PlayAreaCursorEventArgs_t3732259145 
{
public:
	// UnityEngine.Collider VRTK.PlayAreaCursorEventArgs::collider
	Collider_t3285233152 * ___collider_0;

public:
	inline static int32_t get_offset_of_collider_0() { return static_cast<int32_t>(offsetof(PlayAreaCursorEventArgs_t3732259145, ___collider_0)); }
	inline Collider_t3285233152 * get_collider_0() const { return ___collider_0; }
	inline Collider_t3285233152 ** get_address_of_collider_0() { return &___collider_0; }
	inline void set_collider_0(Collider_t3285233152 * value)
	{
		___collider_0 = value;
		Il2CppCodeGenWriteBarrier((&___collider_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.PlayAreaCursorEventArgs
struct PlayAreaCursorEventArgs_t3732259145_marshaled_pinvoke
{
	Collider_t3285233152 * ___collider_0;
};
// Native definition for COM marshalling of VRTK.PlayAreaCursorEventArgs
struct PlayAreaCursorEventArgs_t3732259145_marshaled_com
{
	Collider_t3285233152 * ___collider_0;
};
#endif // PLAYAREACURSOREVENTARGS_T3732259145_H
#ifndef PLAYERCLIMBEVENTARGS_T577284162_H
#define PLAYERCLIMBEVENTARGS_T577284162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.PlayerClimbEventArgs
struct  PlayerClimbEventArgs_t577284162 
{
public:
	// System.UInt32 VRTK.PlayerClimbEventArgs::controllerIndex
	uint32_t ___controllerIndex_0;
	// VRTK.VRTK_ControllerReference VRTK.PlayerClimbEventArgs::controllerReference
	VRTK_ControllerReference_t2614677003 * ___controllerReference_1;
	// UnityEngine.GameObject VRTK.PlayerClimbEventArgs::target
	GameObject_t4215223176 * ___target_2;

public:
	inline static int32_t get_offset_of_controllerIndex_0() { return static_cast<int32_t>(offsetof(PlayerClimbEventArgs_t577284162, ___controllerIndex_0)); }
	inline uint32_t get_controllerIndex_0() const { return ___controllerIndex_0; }
	inline uint32_t* get_address_of_controllerIndex_0() { return &___controllerIndex_0; }
	inline void set_controllerIndex_0(uint32_t value)
	{
		___controllerIndex_0 = value;
	}

	inline static int32_t get_offset_of_controllerReference_1() { return static_cast<int32_t>(offsetof(PlayerClimbEventArgs_t577284162, ___controllerReference_1)); }
	inline VRTK_ControllerReference_t2614677003 * get_controllerReference_1() const { return ___controllerReference_1; }
	inline VRTK_ControllerReference_t2614677003 ** get_address_of_controllerReference_1() { return &___controllerReference_1; }
	inline void set_controllerReference_1(VRTK_ControllerReference_t2614677003 * value)
	{
		___controllerReference_1 = value;
		Il2CppCodeGenWriteBarrier((&___controllerReference_1), value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(PlayerClimbEventArgs_t577284162, ___target_2)); }
	inline GameObject_t4215223176 * get_target_2() const { return ___target_2; }
	inline GameObject_t4215223176 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t4215223176 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.PlayerClimbEventArgs
struct PlayerClimbEventArgs_t577284162_marshaled_pinvoke
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t2614677003 * ___controllerReference_1;
	GameObject_t4215223176 * ___target_2;
};
// Native definition for COM marshalling of VRTK.PlayerClimbEventArgs
struct PlayerClimbEventArgs_t577284162_marshaled_com
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t2614677003 * ___controllerReference_1;
	GameObject_t4215223176 * ___target_2;
};
#endif // PLAYERCLIMBEVENTARGS_T577284162_H
#ifndef VRTKTRACKEDCONTROLLEREVENTARGS_T785002706_H
#define VRTKTRACKEDCONTROLLEREVENTARGS_T785002706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.VRTKTrackedControllerEventArgs
struct  VRTKTrackedControllerEventArgs_t785002706 
{
public:
	// System.UInt32 VRTK.VRTKTrackedControllerEventArgs::currentIndex
	uint32_t ___currentIndex_0;
	// System.UInt32 VRTK.VRTKTrackedControllerEventArgs::previousIndex
	uint32_t ___previousIndex_1;

public:
	inline static int32_t get_offset_of_currentIndex_0() { return static_cast<int32_t>(offsetof(VRTKTrackedControllerEventArgs_t785002706, ___currentIndex_0)); }
	inline uint32_t get_currentIndex_0() const { return ___currentIndex_0; }
	inline uint32_t* get_address_of_currentIndex_0() { return &___currentIndex_0; }
	inline void set_currentIndex_0(uint32_t value)
	{
		___currentIndex_0 = value;
	}

	inline static int32_t get_offset_of_previousIndex_1() { return static_cast<int32_t>(offsetof(VRTKTrackedControllerEventArgs_t785002706, ___previousIndex_1)); }
	inline uint32_t get_previousIndex_1() const { return ___previousIndex_1; }
	inline uint32_t* get_address_of_previousIndex_1() { return &___previousIndex_1; }
	inline void set_previousIndex_1(uint32_t value)
	{
		___previousIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRTKTRACKEDCONTROLLEREVENTARGS_T785002706_H
#ifndef UIDRAGGABLEITEMEVENTARGS_T2510069089_H
#define UIDRAGGABLEITEMEVENTARGS_T2510069089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.UIDraggableItemEventArgs
struct  UIDraggableItemEventArgs_t2510069089 
{
public:
	// UnityEngine.GameObject VRTK.UIDraggableItemEventArgs::target
	GameObject_t4215223176 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(UIDraggableItemEventArgs_t2510069089, ___target_0)); }
	inline GameObject_t4215223176 * get_target_0() const { return ___target_0; }
	inline GameObject_t4215223176 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t4215223176 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.UIDraggableItemEventArgs
struct UIDraggableItemEventArgs_t2510069089_marshaled_pinvoke
{
	GameObject_t4215223176 * ___target_0;
};
// Native definition for COM marshalling of VRTK.UIDraggableItemEventArgs
struct UIDraggableItemEventArgs_t2510069089_marshaled_com
{
	GameObject_t4215223176 * ___target_0;
};
#endif // UIDRAGGABLEITEMEVENTARGS_T2510069089_H
#ifndef SPRITESTATE_T3387707414_H
#define SPRITESTATE_T3387707414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t3387707414 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t1099096164 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t1099096164 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t1099096164 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t3387707414, ___m_HighlightedSprite_0)); }
	inline Sprite_t1099096164 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t1099096164 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t1099096164 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t3387707414, ___m_PressedSprite_1)); }
	inline Sprite_t1099096164 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t1099096164 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t1099096164 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t3387707414, ___m_DisabledSprite_2)); }
	inline Sprite_t1099096164 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t1099096164 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t1099096164 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t3387707414_marshaled_pinvoke
{
	Sprite_t1099096164 * ___m_HighlightedSprite_0;
	Sprite_t1099096164 * ___m_PressedSprite_1;
	Sprite_t1099096164 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t3387707414_marshaled_com
{
	Sprite_t1099096164 * ___m_HighlightedSprite_0;
	Sprite_t1099096164 * ___m_PressedSprite_1;
	Sprite_t1099096164 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T3387707414_H
#ifndef ANIMATORCLIPINFO_T1225374243_H
#define ANIMATORCLIPINFO_T1225374243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t1225374243 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t1225374243, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t1225374243, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCLIPINFO_T1225374243_H
#ifndef COLOR32_T878733194_H
#define COLOR32_T878733194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct ALIGN_TYPE(4) Color32_t878733194 
{
public:
	// System.Byte UnityEngine.Color32::r
	uint8_t ___r_0;
	// System.Byte UnityEngine.Color32::g
	uint8_t ___g_1;
	// System.Byte UnityEngine.Color32::b
	uint8_t ___b_2;
	// System.Byte UnityEngine.Color32::a
	uint8_t ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color32_t878733194, ___r_0)); }
	inline uint8_t get_r_0() const { return ___r_0; }
	inline uint8_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(uint8_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color32_t878733194, ___g_1)); }
	inline uint8_t get_g_1() const { return ___g_1; }
	inline uint8_t* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(uint8_t value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color32_t878733194, ___b_2)); }
	inline uint8_t get_b_2() const { return ___b_2; }
	inline uint8_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(uint8_t value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color32_t878733194, ___a_3)); }
	inline uint8_t get_a_3() const { return ___a_3; }
	inline uint8_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(uint8_t value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T878733194_H
#ifndef VECTOR4_T763214274_H
#define VECTOR4_T763214274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t763214274 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t763214274, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t763214274, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t763214274, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t763214274, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t763214274_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t763214274  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t763214274  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t763214274  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t763214274  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t763214274_StaticFields, ___zeroVector_5)); }
	inline Vector4_t763214274  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t763214274 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t763214274  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t763214274_StaticFields, ___oneVector_6)); }
	inline Vector4_t763214274  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t763214274 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t763214274  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t763214274_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t763214274  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t763214274 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t763214274  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t763214274_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t763214274  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t763214274 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t763214274  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T763214274_H
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
#ifndef MATRIX4X4_T3835147092_H
#define MATRIX4X4_T3835147092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t3835147092 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t3835147092_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t3835147092  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t3835147092  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t3835147092  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t3835147092 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t3835147092  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t3835147092_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t3835147092  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t3835147092 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t3835147092  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T3835147092_H
#ifndef PHOTONMESSAGEINFO_T1468897564_H
#define PHOTONMESSAGEINFO_T1468897564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonMessageInfo
struct  PhotonMessageInfo_t1468897564 
{
public:
	// System.Int32 PhotonMessageInfo::timeInt
	int32_t ___timeInt_0;
	// PhotonPlayer PhotonMessageInfo::sender
	PhotonPlayer_t2856026751 * ___sender_1;
	// PhotonView PhotonMessageInfo::photonView
	PhotonView_t1244555896 * ___photonView_2;

public:
	inline static int32_t get_offset_of_timeInt_0() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_t1468897564, ___timeInt_0)); }
	inline int32_t get_timeInt_0() const { return ___timeInt_0; }
	inline int32_t* get_address_of_timeInt_0() { return &___timeInt_0; }
	inline void set_timeInt_0(int32_t value)
	{
		___timeInt_0 = value;
	}

	inline static int32_t get_offset_of_sender_1() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_t1468897564, ___sender_1)); }
	inline PhotonPlayer_t2856026751 * get_sender_1() const { return ___sender_1; }
	inline PhotonPlayer_t2856026751 ** get_address_of_sender_1() { return &___sender_1; }
	inline void set_sender_1(PhotonPlayer_t2856026751 * value)
	{
		___sender_1 = value;
		Il2CppCodeGenWriteBarrier((&___sender_1), value);
	}

	inline static int32_t get_offset_of_photonView_2() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_t1468897564, ___photonView_2)); }
	inline PhotonView_t1244555896 * get_photonView_2() const { return ___photonView_2; }
	inline PhotonView_t1244555896 ** get_address_of_photonView_2() { return &___photonView_2; }
	inline void set_photonView_2(PhotonView_t1244555896 * value)
	{
		___photonView_2 = value;
		Il2CppCodeGenWriteBarrier((&___photonView_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of PhotonMessageInfo
struct PhotonMessageInfo_t1468897564_marshaled_pinvoke
{
	int32_t ___timeInt_0;
	PhotonPlayer_t2856026751 * ___sender_1;
	PhotonView_t1244555896 * ___photonView_2;
};
// Native definition for COM marshalling of PhotonMessageInfo
struct PhotonMessageInfo_t1468897564_marshaled_com
{
	int32_t ___timeInt_0;
	PhotonPlayer_t2856026751 * ___sender_1;
	PhotonView_t1244555896 * ___photonView_2;
};
#endif // PHOTONMESSAGEINFO_T1468897564_H
#ifndef QUATERNION_T1126259656_H
#define QUATERNION_T1126259656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t1126259656 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t1126259656, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t1126259656, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t1126259656, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t1126259656, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t1126259656_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t1126259656  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t1126259656_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t1126259656  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t1126259656 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t1126259656  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T1126259656_H
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
#ifndef KEYVALUEPAIR_2_T502778303_H
#define KEYVALUEPAIR_2_T502778303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t502778303 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t502778303, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t502778303, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T502778303_H
#ifndef OPCODE_T3550328684_H
#define OPCODE_T3550328684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCode
struct  OpCode_t3550328684 
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
	inline static int32_t get_offset_of_op1_0() { return static_cast<int32_t>(offsetof(OpCode_t3550328684, ___op1_0)); }
	inline uint8_t get_op1_0() const { return ___op1_0; }
	inline uint8_t* get_address_of_op1_0() { return &___op1_0; }
	inline void set_op1_0(uint8_t value)
	{
		___op1_0 = value;
	}

	inline static int32_t get_offset_of_op2_1() { return static_cast<int32_t>(offsetof(OpCode_t3550328684, ___op2_1)); }
	inline uint8_t get_op2_1() const { return ___op2_1; }
	inline uint8_t* get_address_of_op2_1() { return &___op2_1; }
	inline void set_op2_1(uint8_t value)
	{
		___op2_1 = value;
	}

	inline static int32_t get_offset_of_push_2() { return static_cast<int32_t>(offsetof(OpCode_t3550328684, ___push_2)); }
	inline uint8_t get_push_2() const { return ___push_2; }
	inline uint8_t* get_address_of_push_2() { return &___push_2; }
	inline void set_push_2(uint8_t value)
	{
		___push_2 = value;
	}

	inline static int32_t get_offset_of_pop_3() { return static_cast<int32_t>(offsetof(OpCode_t3550328684, ___pop_3)); }
	inline uint8_t get_pop_3() const { return ___pop_3; }
	inline uint8_t* get_address_of_pop_3() { return &___pop_3; }
	inline void set_pop_3(uint8_t value)
	{
		___pop_3 = value;
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(OpCode_t3550328684, ___size_4)); }
	inline uint8_t get_size_4() const { return ___size_4; }
	inline uint8_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(uint8_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(OpCode_t3550328684, ___type_5)); }
	inline uint8_t get_type_5() const { return ___type_5; }
	inline uint8_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(uint8_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_args_6() { return static_cast<int32_t>(offsetof(OpCode_t3550328684, ___args_6)); }
	inline uint8_t get_args_6() const { return ___args_6; }
	inline uint8_t* get_address_of_args_6() { return &___args_6; }
	inline void set_args_6(uint8_t value)
	{
		___args_6 = value;
	}

	inline static int32_t get_offset_of_flow_7() { return static_cast<int32_t>(offsetof(OpCode_t3550328684, ___flow_7)); }
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
#endif // OPCODE_T3550328684_H
#ifndef LABEL_T3812463628_H
#define LABEL_T3812463628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.Label
struct  Label_t3812463628 
{
public:
	// System.Int32 System.Reflection.Emit.Label::label
	int32_t ___label_0;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(Label_t3812463628, ___label_0)); }
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
#endif // LABEL_T3812463628_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t675704942 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t675704942 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t675704942 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t675704942 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t675704942 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t675704942 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t675704942 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t675704942 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T2249195713_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T2249195713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t2249195713 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2249195713, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2249195713, ___value_1)); }
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
struct CustomAttributeTypedArgument_t2249195713_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2249195713_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T2249195713_H
#ifndef TIMESPAN_T826320999_H
#define TIMESPAN_T826320999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t826320999 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t826320999, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t826320999_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t826320999  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t826320999  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t826320999  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t826320999_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t826320999  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t826320999 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t826320999  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t826320999_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t826320999  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t826320999 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t826320999  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t826320999_StaticFields, ___Zero_7)); }
	inline TimeSpan_t826320999  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t826320999 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t826320999  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T826320999_H
#ifndef DECIMAL_T400234769_H
#define DECIMAL_T400234769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t400234769 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t400234769, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t400234769, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t400234769, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t400234769, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t400234769_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t400234769  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t400234769  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t400234769  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t400234769  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t400234769  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t400234769_StaticFields, ___MinValue_0)); }
	inline Decimal_t400234769  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t400234769 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t400234769  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t400234769_StaticFields, ___MaxValue_1)); }
	inline Decimal_t400234769  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t400234769 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t400234769  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t400234769_StaticFields, ___MinusOne_2)); }
	inline Decimal_t400234769  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t400234769 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t400234769  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t400234769_StaticFields, ___One_3)); }
	inline Decimal_t400234769  get_One_3() const { return ___One_3; }
	inline Decimal_t400234769 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t400234769  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t400234769_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t400234769  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t400234769 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t400234769  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T400234769_H
#ifndef RANGE_T807979434_H
#define RANGE_T807979434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Range
struct  Range_t807979434 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t807979434, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t807979434, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGE_T807979434_H
#ifndef RECT_T2599958881_H
#define RECT_T2599958881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2599958881 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2599958881, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2599958881, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2599958881, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2599958881, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2599958881_H
#ifndef VECTOR3_T192642699_H
#define VECTOR3_T192642699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t192642699 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t192642699, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t192642699, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t192642699, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t192642699_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t192642699  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t192642699  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t192642699  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t192642699  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t192642699  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t192642699  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t192642699  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t192642699  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t192642699  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t192642699  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t192642699_StaticFields, ___zeroVector_4)); }
	inline Vector3_t192642699  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t192642699 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t192642699  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t192642699_StaticFields, ___oneVector_5)); }
	inline Vector3_t192642699  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t192642699 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t192642699  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t192642699_StaticFields, ___upVector_6)); }
	inline Vector3_t192642699  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t192642699 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t192642699  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t192642699_StaticFields, ___downVector_7)); }
	inline Vector3_t192642699  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t192642699 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t192642699  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t192642699_StaticFields, ___leftVector_8)); }
	inline Vector3_t192642699  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t192642699 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t192642699  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t192642699_StaticFields, ___rightVector_9)); }
	inline Vector3_t192642699  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t192642699 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t192642699  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t192642699_StaticFields, ___forwardVector_10)); }
	inline Vector3_t192642699  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t192642699 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t192642699  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t192642699_StaticFields, ___backVector_11)); }
	inline Vector3_t192642699  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t192642699 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t192642699  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t192642699_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t192642699  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t192642699 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t192642699  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t192642699_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t192642699  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t192642699 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t192642699  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T192642699_H
#ifndef VECTOR2_T2882533997_H
#define VECTOR2_T2882533997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2882533997 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2882533997, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2882533997, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2882533997_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2882533997  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2882533997  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2882533997  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2882533997  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2882533997  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2882533997  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2882533997  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2882533997  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2882533997_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2882533997  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2882533997 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2882533997  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2882533997_StaticFields, ___oneVector_3)); }
	inline Vector2_t2882533997  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2882533997 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2882533997  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2882533997_StaticFields, ___upVector_4)); }
	inline Vector2_t2882533997  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2882533997 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2882533997  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2882533997_StaticFields, ___downVector_5)); }
	inline Vector2_t2882533997  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2882533997 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2882533997  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2882533997_StaticFields, ___leftVector_6)); }
	inline Vector2_t2882533997  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2882533997 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2882533997  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2882533997_StaticFields, ___rightVector_7)); }
	inline Vector2_t2882533997  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2882533997 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2882533997  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2882533997_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2882533997  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2882533997 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2882533997  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2882533997_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2882533997  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2882533997 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2882533997  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2882533997_H
#ifndef DICTIONARYENTRY_T2462515351_H
#define DICTIONARYENTRY_T2462515351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t2462515351 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t2462515351, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t2462515351, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t2462515351_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t2462515351_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_T2462515351_H
#ifndef COLOR_T1974625752_H
#define COLOR_T1974625752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t1974625752 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t1974625752, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t1974625752, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t1974625752, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t1974625752, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T1974625752_H
#ifndef UILINEINFO_T2069869154_H
#define UILINEINFO_T2069869154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UILineInfo
struct  UILineInfo_t2069869154 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_t2069869154, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_t2069869154, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_t2069869154, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_t2069869154, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UILINEINFO_T2069869154_H
#ifndef RSAPARAMETERS_T3526599052_H
#define RSAPARAMETERS_T3526599052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAParameters
struct  RSAParameters_t3526599052 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_t2293224833* ___P_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_t2293224833* ___Q_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_t2293224833* ___D_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_t2293224833* ___DP_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_t2293224833* ___DQ_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_t2293224833* ___InverseQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_t2293224833* ___Modulus_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_t2293224833* ___Exponent_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(RSAParameters_t3526599052, ___P_0)); }
	inline ByteU5BU5D_t2293224833* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t2293224833** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t2293224833* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(RSAParameters_t3526599052, ___Q_1)); }
	inline ByteU5BU5D_t2293224833* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t2293224833** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t2293224833* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_D_2() { return static_cast<int32_t>(offsetof(RSAParameters_t3526599052, ___D_2)); }
	inline ByteU5BU5D_t2293224833* get_D_2() const { return ___D_2; }
	inline ByteU5BU5D_t2293224833** get_address_of_D_2() { return &___D_2; }
	inline void set_D_2(ByteU5BU5D_t2293224833* value)
	{
		___D_2 = value;
		Il2CppCodeGenWriteBarrier((&___D_2), value);
	}

	inline static int32_t get_offset_of_DP_3() { return static_cast<int32_t>(offsetof(RSAParameters_t3526599052, ___DP_3)); }
	inline ByteU5BU5D_t2293224833* get_DP_3() const { return ___DP_3; }
	inline ByteU5BU5D_t2293224833** get_address_of_DP_3() { return &___DP_3; }
	inline void set_DP_3(ByteU5BU5D_t2293224833* value)
	{
		___DP_3 = value;
		Il2CppCodeGenWriteBarrier((&___DP_3), value);
	}

	inline static int32_t get_offset_of_DQ_4() { return static_cast<int32_t>(offsetof(RSAParameters_t3526599052, ___DQ_4)); }
	inline ByteU5BU5D_t2293224833* get_DQ_4() const { return ___DQ_4; }
	inline ByteU5BU5D_t2293224833** get_address_of_DQ_4() { return &___DQ_4; }
	inline void set_DQ_4(ByteU5BU5D_t2293224833* value)
	{
		___DQ_4 = value;
		Il2CppCodeGenWriteBarrier((&___DQ_4), value);
	}

	inline static int32_t get_offset_of_InverseQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_t3526599052, ___InverseQ_5)); }
	inline ByteU5BU5D_t2293224833* get_InverseQ_5() const { return ___InverseQ_5; }
	inline ByteU5BU5D_t2293224833** get_address_of_InverseQ_5() { return &___InverseQ_5; }
	inline void set_InverseQ_5(ByteU5BU5D_t2293224833* value)
	{
		___InverseQ_5 = value;
		Il2CppCodeGenWriteBarrier((&___InverseQ_5), value);
	}

	inline static int32_t get_offset_of_Modulus_6() { return static_cast<int32_t>(offsetof(RSAParameters_t3526599052, ___Modulus_6)); }
	inline ByteU5BU5D_t2293224833* get_Modulus_6() const { return ___Modulus_6; }
	inline ByteU5BU5D_t2293224833** get_address_of_Modulus_6() { return &___Modulus_6; }
	inline void set_Modulus_6(ByteU5BU5D_t2293224833* value)
	{
		___Modulus_6 = value;
		Il2CppCodeGenWriteBarrier((&___Modulus_6), value);
	}

	inline static int32_t get_offset_of_Exponent_7() { return static_cast<int32_t>(offsetof(RSAParameters_t3526599052, ___Exponent_7)); }
	inline ByteU5BU5D_t2293224833* get_Exponent_7() const { return ___Exponent_7; }
	inline ByteU5BU5D_t2293224833** get_address_of_Exponent_7() { return &___Exponent_7; }
	inline void set_Exponent_7(ByteU5BU5D_t2293224833* value)
	{
		___Exponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___Exponent_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t3526599052_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t3526599052_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
#endif // RSAPARAMETERS_T3526599052_H
#ifndef DSAPARAMETERS_T1642555212_H
#define DSAPARAMETERS_T1642555212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t1642555212 
{
public:
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_t2293224833* ___G_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_t2293224833* ___J_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_t2293224833* ___P_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_t2293224833* ___Q_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_t2293224833* ___Seed_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_t2293224833* ___X_6;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_t2293224833* ___Y_7;

public:
	inline static int32_t get_offset_of_Counter_0() { return static_cast<int32_t>(offsetof(DSAParameters_t1642555212, ___Counter_0)); }
	inline int32_t get_Counter_0() const { return ___Counter_0; }
	inline int32_t* get_address_of_Counter_0() { return &___Counter_0; }
	inline void set_Counter_0(int32_t value)
	{
		___Counter_0 = value;
	}

	inline static int32_t get_offset_of_G_1() { return static_cast<int32_t>(offsetof(DSAParameters_t1642555212, ___G_1)); }
	inline ByteU5BU5D_t2293224833* get_G_1() const { return ___G_1; }
	inline ByteU5BU5D_t2293224833** get_address_of_G_1() { return &___G_1; }
	inline void set_G_1(ByteU5BU5D_t2293224833* value)
	{
		___G_1 = value;
		Il2CppCodeGenWriteBarrier((&___G_1), value);
	}

	inline static int32_t get_offset_of_J_2() { return static_cast<int32_t>(offsetof(DSAParameters_t1642555212, ___J_2)); }
	inline ByteU5BU5D_t2293224833* get_J_2() const { return ___J_2; }
	inline ByteU5BU5D_t2293224833** get_address_of_J_2() { return &___J_2; }
	inline void set_J_2(ByteU5BU5D_t2293224833* value)
	{
		___J_2 = value;
		Il2CppCodeGenWriteBarrier((&___J_2), value);
	}

	inline static int32_t get_offset_of_P_3() { return static_cast<int32_t>(offsetof(DSAParameters_t1642555212, ___P_3)); }
	inline ByteU5BU5D_t2293224833* get_P_3() const { return ___P_3; }
	inline ByteU5BU5D_t2293224833** get_address_of_P_3() { return &___P_3; }
	inline void set_P_3(ByteU5BU5D_t2293224833* value)
	{
		___P_3 = value;
		Il2CppCodeGenWriteBarrier((&___P_3), value);
	}

	inline static int32_t get_offset_of_Q_4() { return static_cast<int32_t>(offsetof(DSAParameters_t1642555212, ___Q_4)); }
	inline ByteU5BU5D_t2293224833* get_Q_4() const { return ___Q_4; }
	inline ByteU5BU5D_t2293224833** get_address_of_Q_4() { return &___Q_4; }
	inline void set_Q_4(ByteU5BU5D_t2293224833* value)
	{
		___Q_4 = value;
		Il2CppCodeGenWriteBarrier((&___Q_4), value);
	}

	inline static int32_t get_offset_of_Seed_5() { return static_cast<int32_t>(offsetof(DSAParameters_t1642555212, ___Seed_5)); }
	inline ByteU5BU5D_t2293224833* get_Seed_5() const { return ___Seed_5; }
	inline ByteU5BU5D_t2293224833** get_address_of_Seed_5() { return &___Seed_5; }
	inline void set_Seed_5(ByteU5BU5D_t2293224833* value)
	{
		___Seed_5 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_5), value);
	}

	inline static int32_t get_offset_of_X_6() { return static_cast<int32_t>(offsetof(DSAParameters_t1642555212, ___X_6)); }
	inline ByteU5BU5D_t2293224833* get_X_6() const { return ___X_6; }
	inline ByteU5BU5D_t2293224833** get_address_of_X_6() { return &___X_6; }
	inline void set_X_6(ByteU5BU5D_t2293224833* value)
	{
		___X_6 = value;
		Il2CppCodeGenWriteBarrier((&___X_6), value);
	}

	inline static int32_t get_offset_of_Y_7() { return static_cast<int32_t>(offsetof(DSAParameters_t1642555212, ___Y_7)); }
	inline ByteU5BU5D_t2293224833* get_Y_7() const { return ___Y_7; }
	inline ByteU5BU5D_t2293224833** get_address_of_Y_7() { return &___Y_7; }
	inline void set_Y_7(ByteU5BU5D_t2293224833* value)
	{
		___Y_7 = value;
		Il2CppCodeGenWriteBarrier((&___Y_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t1642555212_marshaled_pinvoke
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t1642555212_marshaled_com
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
#endif // DSAPARAMETERS_T1642555212_H
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
#ifndef DATETIMEKIND_T3068478332_H
#define DATETIMEKIND_T3068478332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3068478332 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3068478332, ___value___1)); }
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
#endif // DATETIMEKIND_T3068478332_H
#ifndef COMBINEINSTANCE_T259662778_H
#define COMBINEINSTANCE_T259662778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CombineInstance
struct  CombineInstance_t259662778 
{
public:
	// System.Int32 UnityEngine.CombineInstance::m_MeshInstanceID
	int32_t ___m_MeshInstanceID_0;
	// System.Int32 UnityEngine.CombineInstance::m_SubMeshIndex
	int32_t ___m_SubMeshIndex_1;
	// UnityEngine.Matrix4x4 UnityEngine.CombineInstance::m_Transform
	Matrix4x4_t3835147092  ___m_Transform_2;
	// UnityEngine.Vector4 UnityEngine.CombineInstance::m_LightmapScaleOffset
	Vector4_t763214274  ___m_LightmapScaleOffset_3;
	// UnityEngine.Vector4 UnityEngine.CombineInstance::m_RealtimeLightmapScaleOffset
	Vector4_t763214274  ___m_RealtimeLightmapScaleOffset_4;

public:
	inline static int32_t get_offset_of_m_MeshInstanceID_0() { return static_cast<int32_t>(offsetof(CombineInstance_t259662778, ___m_MeshInstanceID_0)); }
	inline int32_t get_m_MeshInstanceID_0() const { return ___m_MeshInstanceID_0; }
	inline int32_t* get_address_of_m_MeshInstanceID_0() { return &___m_MeshInstanceID_0; }
	inline void set_m_MeshInstanceID_0(int32_t value)
	{
		___m_MeshInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_SubMeshIndex_1() { return static_cast<int32_t>(offsetof(CombineInstance_t259662778, ___m_SubMeshIndex_1)); }
	inline int32_t get_m_SubMeshIndex_1() const { return ___m_SubMeshIndex_1; }
	inline int32_t* get_address_of_m_SubMeshIndex_1() { return &___m_SubMeshIndex_1; }
	inline void set_m_SubMeshIndex_1(int32_t value)
	{
		___m_SubMeshIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Transform_2() { return static_cast<int32_t>(offsetof(CombineInstance_t259662778, ___m_Transform_2)); }
	inline Matrix4x4_t3835147092  get_m_Transform_2() const { return ___m_Transform_2; }
	inline Matrix4x4_t3835147092 * get_address_of_m_Transform_2() { return &___m_Transform_2; }
	inline void set_m_Transform_2(Matrix4x4_t3835147092  value)
	{
		___m_Transform_2 = value;
	}

	inline static int32_t get_offset_of_m_LightmapScaleOffset_3() { return static_cast<int32_t>(offsetof(CombineInstance_t259662778, ___m_LightmapScaleOffset_3)); }
	inline Vector4_t763214274  get_m_LightmapScaleOffset_3() const { return ___m_LightmapScaleOffset_3; }
	inline Vector4_t763214274 * get_address_of_m_LightmapScaleOffset_3() { return &___m_LightmapScaleOffset_3; }
	inline void set_m_LightmapScaleOffset_3(Vector4_t763214274  value)
	{
		___m_LightmapScaleOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_RealtimeLightmapScaleOffset_4() { return static_cast<int32_t>(offsetof(CombineInstance_t259662778, ___m_RealtimeLightmapScaleOffset_4)); }
	inline Vector4_t763214274  get_m_RealtimeLightmapScaleOffset_4() const { return ___m_RealtimeLightmapScaleOffset_4; }
	inline Vector4_t763214274 * get_address_of_m_RealtimeLightmapScaleOffset_4() { return &___m_RealtimeLightmapScaleOffset_4; }
	inline void set_m_RealtimeLightmapScaleOffset_4(Vector4_t763214274  value)
	{
		___m_RealtimeLightmapScaleOffset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMBINEINSTANCE_T259662778_H
#ifndef STREAMINGCONTEXTSTATES_T2037010963_H
#define STREAMINGCONTEXTSTATES_T2037010963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t2037010963 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t2037010963, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T2037010963_H
#ifndef PLAYABLEHANDLE_T1888561930_H
#define PLAYABLEHANDLE_T1888561930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t1888561930 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t1888561930, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t1888561930, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T1888561930_H
#ifndef TOUCHPHASE_T838507145_H
#define TOUCHPHASE_T838507145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t838507145 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t838507145, ___value___1)); }
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
#endif // TOUCHPHASE_T838507145_H
#ifndef TOUCHTYPE_T535132390_H
#define TOUCHTYPE_T535132390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t535132390 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t535132390, ___value___1)); }
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
#endif // TOUCHTYPE_T535132390_H
#ifndef TOOLTIPBUTTONS_T44962000_H
#define TOOLTIPBUTTONS_T44962000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.VRTK_ControllerTooltips/TooltipButtons
struct  TooltipButtons_t44962000 
{
public:
	// System.Int32 VRTK.VRTK_ControllerTooltips/TooltipButtons::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TooltipButtons_t44962000, ___value___1)); }
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
#endif // TOOLTIPBUTTONS_T44962000_H
#ifndef COLORBLOCK_T2905999369_H
#define COLORBLOCK_T2905999369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2905999369 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t1974625752  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t1974625752  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t1974625752  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t1974625752  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2905999369, ___m_NormalColor_0)); }
	inline Color_t1974625752  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t1974625752 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t1974625752  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2905999369, ___m_HighlightedColor_1)); }
	inline Color_t1974625752  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t1974625752 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t1974625752  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2905999369, ___m_PressedColor_2)); }
	inline Color_t1974625752  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t1974625752 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t1974625752  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2905999369, ___m_DisabledColor_3)); }
	inline Color_t1974625752  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t1974625752 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t1974625752  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2905999369, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2905999369, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2905999369_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T1944453582_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T1944453582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t1944453582 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t2249195713  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t1944453582, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t2249195713  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t2249195713 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t2249195713  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t1944453582, ___memberInfo_1)); }
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
struct CustomAttributeNamedArgument_t1944453582_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t2249195713_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t1944453582_marshaled_com
{
	CustomAttributeTypedArgument_t2249195713_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T1944453582_H
#ifndef RAYCASTRESULT_T2031701131_H
#define RAYCASTRESULT_T2031701131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t2031701131 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t4215223176 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t525921075 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t192642699  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t192642699  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2882533997  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t2031701131, ___m_GameObject_0)); }
	inline GameObject_t4215223176 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t4215223176 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t4215223176 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t2031701131, ___module_1)); }
	inline BaseRaycaster_t525921075 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t525921075 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t525921075 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t2031701131, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t2031701131, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t2031701131, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t2031701131, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t2031701131, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t2031701131, ___worldPosition_7)); }
	inline Vector3_t192642699  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t192642699 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t192642699  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t2031701131, ___worldNormal_8)); }
	inline Vector3_t192642699  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t192642699 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t192642699  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t2031701131, ___screenPosition_9)); }
	inline Vector2_t2882533997  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2882533997 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2882533997  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t2031701131_marshaled_pinvoke
{
	GameObject_t4215223176 * ___m_GameObject_0;
	BaseRaycaster_t525921075 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t192642699  ___worldPosition_7;
	Vector3_t192642699  ___worldNormal_8;
	Vector2_t2882533997  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t2031701131_marshaled_com
{
	GameObject_t4215223176 * ___m_GameObject_0;
	BaseRaycaster_t525921075 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t192642699  ___worldPosition_7;
	Vector3_t192642699  ___worldNormal_8;
	Vector2_t2882533997  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T2031701131_H
#ifndef MODE_T1344196659_H
#define MODE_T1344196659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1344196659 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1344196659, ___value___1)); }
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
#endif // MODE_T1344196659_H
#ifndef RUNTIMETYPEHANDLE_T199074045_H
#define RUNTIMETYPEHANDLE_T199074045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t199074045 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t199074045, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T199074045_H
#ifndef CONTROLLERINTERACTIONEVENTARGS_T3279460322_H
#define CONTROLLERINTERACTIONEVENTARGS_T3279460322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.ControllerInteractionEventArgs
struct  ControllerInteractionEventArgs_t3279460322 
{
public:
	// System.UInt32 VRTK.ControllerInteractionEventArgs::controllerIndex
	uint32_t ___controllerIndex_0;
	// VRTK.VRTK_ControllerReference VRTK.ControllerInteractionEventArgs::controllerReference
	VRTK_ControllerReference_t2614677003 * ___controllerReference_1;
	// System.Single VRTK.ControllerInteractionEventArgs::buttonPressure
	float ___buttonPressure_2;
	// UnityEngine.Vector2 VRTK.ControllerInteractionEventArgs::touchpadAxis
	Vector2_t2882533997  ___touchpadAxis_3;
	// System.Single VRTK.ControllerInteractionEventArgs::touchpadAngle
	float ___touchpadAngle_4;

public:
	inline static int32_t get_offset_of_controllerIndex_0() { return static_cast<int32_t>(offsetof(ControllerInteractionEventArgs_t3279460322, ___controllerIndex_0)); }
	inline uint32_t get_controllerIndex_0() const { return ___controllerIndex_0; }
	inline uint32_t* get_address_of_controllerIndex_0() { return &___controllerIndex_0; }
	inline void set_controllerIndex_0(uint32_t value)
	{
		___controllerIndex_0 = value;
	}

	inline static int32_t get_offset_of_controllerReference_1() { return static_cast<int32_t>(offsetof(ControllerInteractionEventArgs_t3279460322, ___controllerReference_1)); }
	inline VRTK_ControllerReference_t2614677003 * get_controllerReference_1() const { return ___controllerReference_1; }
	inline VRTK_ControllerReference_t2614677003 ** get_address_of_controllerReference_1() { return &___controllerReference_1; }
	inline void set_controllerReference_1(VRTK_ControllerReference_t2614677003 * value)
	{
		___controllerReference_1 = value;
		Il2CppCodeGenWriteBarrier((&___controllerReference_1), value);
	}

	inline static int32_t get_offset_of_buttonPressure_2() { return static_cast<int32_t>(offsetof(ControllerInteractionEventArgs_t3279460322, ___buttonPressure_2)); }
	inline float get_buttonPressure_2() const { return ___buttonPressure_2; }
	inline float* get_address_of_buttonPressure_2() { return &___buttonPressure_2; }
	inline void set_buttonPressure_2(float value)
	{
		___buttonPressure_2 = value;
	}

	inline static int32_t get_offset_of_touchpadAxis_3() { return static_cast<int32_t>(offsetof(ControllerInteractionEventArgs_t3279460322, ___touchpadAxis_3)); }
	inline Vector2_t2882533997  get_touchpadAxis_3() const { return ___touchpadAxis_3; }
	inline Vector2_t2882533997 * get_address_of_touchpadAxis_3() { return &___touchpadAxis_3; }
	inline void set_touchpadAxis_3(Vector2_t2882533997  value)
	{
		___touchpadAxis_3 = value;
	}

	inline static int32_t get_offset_of_touchpadAngle_4() { return static_cast<int32_t>(offsetof(ControllerInteractionEventArgs_t3279460322, ___touchpadAngle_4)); }
	inline float get_touchpadAngle_4() const { return ___touchpadAngle_4; }
	inline float* get_address_of_touchpadAngle_4() { return &___touchpadAngle_4; }
	inline void set_touchpadAngle_4(float value)
	{
		___touchpadAngle_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.ControllerInteractionEventArgs
struct ControllerInteractionEventArgs_t3279460322_marshaled_pinvoke
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t2614677003 * ___controllerReference_1;
	float ___buttonPressure_2;
	Vector2_t2882533997  ___touchpadAxis_3;
	float ___touchpadAngle_4;
};
// Native definition for COM marshalling of VRTK.ControllerInteractionEventArgs
struct ControllerInteractionEventArgs_t3279460322_marshaled_com
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t2614677003 * ___controllerReference_1;
	float ___buttonPressure_2;
	Vector2_t2882533997  ___touchpadAxis_3;
	float ___touchpadAngle_4;
};
#endif // CONTROLLERINTERACTIONEVENTARGS_T3279460322_H
#ifndef RUNTIMEFIELDHANDLE_T69137431_H
#define RUNTIMEFIELDHANDLE_T69137431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t69137431 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t69137431, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T69137431_H
#ifndef RUNTIMEMETHODHANDLE_T47106738_H
#define RUNTIMEMETHODHANDLE_T47106738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t47106738 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t47106738, ___value_0)); }
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
#endif // RUNTIMEMETHODHANDLE_T47106738_H
#ifndef SCRIPTABLERENDERCONTEXT_T2229222279_H
#define SCRIPTABLERENDERCONTEXT_T2229222279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t2229222279 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.ScriptableRenderContext::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t2229222279, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTABLERENDERCONTEXT_T2229222279_H
#ifndef RAYCASTHIT_T1730847655_H
#define RAYCASTHIT_T1730847655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1730847655 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t192642699  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t192642699  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2882533997  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t3285233152 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1730847655, ___m_Point_0)); }
	inline Vector3_t192642699  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t192642699 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t192642699  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1730847655, ___m_Normal_1)); }
	inline Vector3_t192642699  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t192642699 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t192642699  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1730847655, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1730847655, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1730847655, ___m_UV_4)); }
	inline Vector2_t2882533997  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2882533997 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2882533997  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1730847655, ___m_Collider_5)); }
	inline Collider_t3285233152 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t3285233152 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t3285233152 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1730847655_marshaled_pinvoke
{
	Vector3_t192642699  ___m_Point_0;
	Vector3_t192642699  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2882533997  ___m_UV_4;
	Collider_t3285233152 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1730847655_marshaled_com
{
	Vector3_t192642699  ___m_Point_0;
	Vector3_t192642699  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2882533997  ___m_UV_4;
	Collider_t3285233152 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T1730847655_H
#ifndef NULLABLE_1_T1330912796_H
#define NULLABLE_1_T1330912796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<UnityEngine.Quaternion>
struct  Nullable_1_t1330912796 
{
public:
	// T System.Nullable`1::value
	Quaternion_t1126259656  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1330912796, ___value_0)); }
	inline Quaternion_t1126259656  get_value_0() const { return ___value_0; }
	inline Quaternion_t1126259656 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Quaternion_t1126259656  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1330912796, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1330912796_H
#ifndef PLAYABLEGRAPH_T1385956480_H
#define PLAYABLEGRAPH_T1385956480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t1385956480 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t1385956480, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t1385956480, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T1385956480_H
#ifndef NULLABLE_1_T2179278892_H
#define NULLABLE_1_T2179278892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<UnityEngine.Color>
struct  Nullable_1_t2179278892 
{
public:
	// T System.Nullable`1::value
	Color_t1974625752  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2179278892, ___value_0)); }
	inline Color_t1974625752  get_value_0() const { return ___value_0; }
	inline Color_t1974625752 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Color_t1974625752  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2179278892, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2179278892_H
#ifndef RAY_T489471416_H
#define RAY_T489471416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t489471416 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t192642699  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t192642699  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t489471416, ___m_Origin_0)); }
	inline Vector3_t192642699  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t192642699 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t192642699  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t489471416, ___m_Direction_1)); }
	inline Vector3_t192642699  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t192642699 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t192642699  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T489471416_H
#ifndef UIVERTEX_T244360722_H
#define UIVERTEX_T244360722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIVertex
struct  UIVertex_t244360722 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t192642699  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t192642699  ___normal_1;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t878733194  ___color_2;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_t2882533997  ___uv0_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_t2882533997  ___uv1_4;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv2
	Vector2_t2882533997  ___uv2_5;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv3
	Vector2_t2882533997  ___uv3_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t763214274  ___tangent_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t244360722, ___position_0)); }
	inline Vector3_t192642699  get_position_0() const { return ___position_0; }
	inline Vector3_t192642699 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t192642699  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t244360722, ___normal_1)); }
	inline Vector3_t192642699  get_normal_1() const { return ___normal_1; }
	inline Vector3_t192642699 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t192642699  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(UIVertex_t244360722, ___color_2)); }
	inline Color32_t878733194  get_color_2() const { return ___color_2; }
	inline Color32_t878733194 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color32_t878733194  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_uv0_3() { return static_cast<int32_t>(offsetof(UIVertex_t244360722, ___uv0_3)); }
	inline Vector2_t2882533997  get_uv0_3() const { return ___uv0_3; }
	inline Vector2_t2882533997 * get_address_of_uv0_3() { return &___uv0_3; }
	inline void set_uv0_3(Vector2_t2882533997  value)
	{
		___uv0_3 = value;
	}

	inline static int32_t get_offset_of_uv1_4() { return static_cast<int32_t>(offsetof(UIVertex_t244360722, ___uv1_4)); }
	inline Vector2_t2882533997  get_uv1_4() const { return ___uv1_4; }
	inline Vector2_t2882533997 * get_address_of_uv1_4() { return &___uv1_4; }
	inline void set_uv1_4(Vector2_t2882533997  value)
	{
		___uv1_4 = value;
	}

	inline static int32_t get_offset_of_uv2_5() { return static_cast<int32_t>(offsetof(UIVertex_t244360722, ___uv2_5)); }
	inline Vector2_t2882533997  get_uv2_5() const { return ___uv2_5; }
	inline Vector2_t2882533997 * get_address_of_uv2_5() { return &___uv2_5; }
	inline void set_uv2_5(Vector2_t2882533997  value)
	{
		___uv2_5 = value;
	}

	inline static int32_t get_offset_of_uv3_6() { return static_cast<int32_t>(offsetof(UIVertex_t244360722, ___uv3_6)); }
	inline Vector2_t2882533997  get_uv3_6() const { return ___uv3_6; }
	inline Vector2_t2882533997 * get_address_of_uv3_6() { return &___uv3_6; }
	inline void set_uv3_6(Vector2_t2882533997  value)
	{
		___uv3_6 = value;
	}

	inline static int32_t get_offset_of_tangent_7() { return static_cast<int32_t>(offsetof(UIVertex_t244360722, ___tangent_7)); }
	inline Vector4_t763214274  get_tangent_7() const { return ___tangent_7; }
	inline Vector4_t763214274 * get_address_of_tangent_7() { return &___tangent_7; }
	inline void set_tangent_7(Vector4_t763214274  value)
	{
		___tangent_7 = value;
	}
};

struct UIVertex_t244360722_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t878733194  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t763214274  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t244360722  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_t244360722_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_t878733194  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_t878733194 * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_t878733194  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_t244360722_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t763214274  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t763214274 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t763214274  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_t244360722_StaticFields, ___simpleVert_10)); }
	inline UIVertex_t244360722  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_t244360722 * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_t244360722  value)
	{
		___simpleVert_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIVERTEX_T244360722_H
#ifndef UICHARINFO_T2938273849_H
#define UICHARINFO_T2938273849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UICharInfo
struct  UICharInfo_t2938273849 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_t2882533997  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_t2938273849, ___cursorPos_0)); }
	inline Vector2_t2882533997  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_t2882533997 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_t2882533997  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_t2938273849, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICHARINFO_T2938273849_H
#ifndef POSITIONREWINDEVENTARGS_T3756258084_H
#define POSITIONREWINDEVENTARGS_T3756258084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.PositionRewindEventArgs
struct  PositionRewindEventArgs_t3756258084 
{
public:
	// UnityEngine.Vector3 VRTK.PositionRewindEventArgs::collidedPosition
	Vector3_t192642699  ___collidedPosition_0;
	// UnityEngine.Vector3 VRTK.PositionRewindEventArgs::resetPosition
	Vector3_t192642699  ___resetPosition_1;

public:
	inline static int32_t get_offset_of_collidedPosition_0() { return static_cast<int32_t>(offsetof(PositionRewindEventArgs_t3756258084, ___collidedPosition_0)); }
	inline Vector3_t192642699  get_collidedPosition_0() const { return ___collidedPosition_0; }
	inline Vector3_t192642699 * get_address_of_collidedPosition_0() { return &___collidedPosition_0; }
	inline void set_collidedPosition_0(Vector3_t192642699  value)
	{
		___collidedPosition_0 = value;
	}

	inline static int32_t get_offset_of_resetPosition_1() { return static_cast<int32_t>(offsetof(PositionRewindEventArgs_t3756258084, ___resetPosition_1)); }
	inline Vector3_t192642699  get_resetPosition_1() const { return ___resetPosition_1; }
	inline Vector3_t192642699 * get_address_of_resetPosition_1() { return &___resetPosition_1; }
	inline void set_resetPosition_1(Vector3_t192642699  value)
	{
		___resetPosition_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONREWINDEVENTARGS_T3756258084_H
#ifndef OBJECTCONTROLEVENTARGS_T1724175878_H
#define OBJECTCONTROLEVENTARGS_T1724175878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.ObjectControlEventArgs
struct  ObjectControlEventArgs_t1724175878 
{
public:
	// UnityEngine.GameObject VRTK.ObjectControlEventArgs::controlledGameObject
	GameObject_t4215223176 * ___controlledGameObject_0;
	// UnityEngine.Transform VRTK.ObjectControlEventArgs::directionDevice
	Transform_t2732716350 * ___directionDevice_1;
	// UnityEngine.Vector3 VRTK.ObjectControlEventArgs::axisDirection
	Vector3_t192642699  ___axisDirection_2;
	// System.Single VRTK.ObjectControlEventArgs::axis
	float ___axis_3;
	// System.Single VRTK.ObjectControlEventArgs::deadzone
	float ___deadzone_4;
	// System.Boolean VRTK.ObjectControlEventArgs::currentlyFalling
	bool ___currentlyFalling_5;
	// System.Boolean VRTK.ObjectControlEventArgs::modifierActive
	bool ___modifierActive_6;

public:
	inline static int32_t get_offset_of_controlledGameObject_0() { return static_cast<int32_t>(offsetof(ObjectControlEventArgs_t1724175878, ___controlledGameObject_0)); }
	inline GameObject_t4215223176 * get_controlledGameObject_0() const { return ___controlledGameObject_0; }
	inline GameObject_t4215223176 ** get_address_of_controlledGameObject_0() { return &___controlledGameObject_0; }
	inline void set_controlledGameObject_0(GameObject_t4215223176 * value)
	{
		___controlledGameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___controlledGameObject_0), value);
	}

	inline static int32_t get_offset_of_directionDevice_1() { return static_cast<int32_t>(offsetof(ObjectControlEventArgs_t1724175878, ___directionDevice_1)); }
	inline Transform_t2732716350 * get_directionDevice_1() const { return ___directionDevice_1; }
	inline Transform_t2732716350 ** get_address_of_directionDevice_1() { return &___directionDevice_1; }
	inline void set_directionDevice_1(Transform_t2732716350 * value)
	{
		___directionDevice_1 = value;
		Il2CppCodeGenWriteBarrier((&___directionDevice_1), value);
	}

	inline static int32_t get_offset_of_axisDirection_2() { return static_cast<int32_t>(offsetof(ObjectControlEventArgs_t1724175878, ___axisDirection_2)); }
	inline Vector3_t192642699  get_axisDirection_2() const { return ___axisDirection_2; }
	inline Vector3_t192642699 * get_address_of_axisDirection_2() { return &___axisDirection_2; }
	inline void set_axisDirection_2(Vector3_t192642699  value)
	{
		___axisDirection_2 = value;
	}

	inline static int32_t get_offset_of_axis_3() { return static_cast<int32_t>(offsetof(ObjectControlEventArgs_t1724175878, ___axis_3)); }
	inline float get_axis_3() const { return ___axis_3; }
	inline float* get_address_of_axis_3() { return &___axis_3; }
	inline void set_axis_3(float value)
	{
		___axis_3 = value;
	}

	inline static int32_t get_offset_of_deadzone_4() { return static_cast<int32_t>(offsetof(ObjectControlEventArgs_t1724175878, ___deadzone_4)); }
	inline float get_deadzone_4() const { return ___deadzone_4; }
	inline float* get_address_of_deadzone_4() { return &___deadzone_4; }
	inline void set_deadzone_4(float value)
	{
		___deadzone_4 = value;
	}

	inline static int32_t get_offset_of_currentlyFalling_5() { return static_cast<int32_t>(offsetof(ObjectControlEventArgs_t1724175878, ___currentlyFalling_5)); }
	inline bool get_currentlyFalling_5() const { return ___currentlyFalling_5; }
	inline bool* get_address_of_currentlyFalling_5() { return &___currentlyFalling_5; }
	inline void set_currentlyFalling_5(bool value)
	{
		___currentlyFalling_5 = value;
	}

	inline static int32_t get_offset_of_modifierActive_6() { return static_cast<int32_t>(offsetof(ObjectControlEventArgs_t1724175878, ___modifierActive_6)); }
	inline bool get_modifierActive_6() const { return ___modifierActive_6; }
	inline bool* get_address_of_modifierActive_6() { return &___modifierActive_6; }
	inline void set_modifierActive_6(bool value)
	{
		___modifierActive_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.ObjectControlEventArgs
struct ObjectControlEventArgs_t1724175878_marshaled_pinvoke
{
	GameObject_t4215223176 * ___controlledGameObject_0;
	Transform_t2732716350 * ___directionDevice_1;
	Vector3_t192642699  ___axisDirection_2;
	float ___axis_3;
	float ___deadzone_4;
	int32_t ___currentlyFalling_5;
	int32_t ___modifierActive_6;
};
// Native definition for COM marshalling of VRTK.ObjectControlEventArgs
struct ObjectControlEventArgs_t1724175878_marshaled_com
{
	GameObject_t4215223176 * ___controlledGameObject_0;
	Transform_t2732716350 * ___directionDevice_1;
	Vector3_t192642699  ___axisDirection_2;
	float ___axis_3;
	float ___deadzone_4;
	int32_t ___currentlyFalling_5;
	int32_t ___modifierActive_6;
};
#endif // OBJECTCONTROLEVENTARGS_T1724175878_H
#ifndef ARHITTESTRESULTTYPE_T3744001260_H
#define ARHITTESTRESULTTYPE_T3744001260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResultType
struct  ARHitTestResultType_t3744001260 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARHitTestResultType::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARHitTestResultType_t3744001260, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARHITTESTRESULTTYPE_T3744001260_H
#ifndef DESTINATIONMARKEREVENTARGS_T560765082_H
#define DESTINATIONMARKEREVENTARGS_T560765082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.DestinationMarkerEventArgs
struct  DestinationMarkerEventArgs_t560765082 
{
public:
	// System.Single VRTK.DestinationMarkerEventArgs::distance
	float ___distance_0;
	// UnityEngine.Transform VRTK.DestinationMarkerEventArgs::target
	Transform_t2732716350 * ___target_1;
	// UnityEngine.RaycastHit VRTK.DestinationMarkerEventArgs::raycastHit
	RaycastHit_t1730847655  ___raycastHit_2;
	// UnityEngine.Vector3 VRTK.DestinationMarkerEventArgs::destinationPosition
	Vector3_t192642699  ___destinationPosition_3;
	// System.Nullable`1<UnityEngine.Quaternion> VRTK.DestinationMarkerEventArgs::destinationRotation
	Nullable_1_t1330912796  ___destinationRotation_4;
	// System.Boolean VRTK.DestinationMarkerEventArgs::forceDestinationPosition
	bool ___forceDestinationPosition_5;
	// System.Boolean VRTK.DestinationMarkerEventArgs::enableTeleport
	bool ___enableTeleport_6;
	// System.UInt32 VRTK.DestinationMarkerEventArgs::controllerIndex
	uint32_t ___controllerIndex_7;
	// VRTK.VRTK_ControllerReference VRTK.DestinationMarkerEventArgs::controllerReference
	VRTK_ControllerReference_t2614677003 * ___controllerReference_8;

public:
	inline static int32_t get_offset_of_distance_0() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t560765082, ___distance_0)); }
	inline float get_distance_0() const { return ___distance_0; }
	inline float* get_address_of_distance_0() { return &___distance_0; }
	inline void set_distance_0(float value)
	{
		___distance_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t560765082, ___target_1)); }
	inline Transform_t2732716350 * get_target_1() const { return ___target_1; }
	inline Transform_t2732716350 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Transform_t2732716350 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((&___target_1), value);
	}

	inline static int32_t get_offset_of_raycastHit_2() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t560765082, ___raycastHit_2)); }
	inline RaycastHit_t1730847655  get_raycastHit_2() const { return ___raycastHit_2; }
	inline RaycastHit_t1730847655 * get_address_of_raycastHit_2() { return &___raycastHit_2; }
	inline void set_raycastHit_2(RaycastHit_t1730847655  value)
	{
		___raycastHit_2 = value;
	}

	inline static int32_t get_offset_of_destinationPosition_3() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t560765082, ___destinationPosition_3)); }
	inline Vector3_t192642699  get_destinationPosition_3() const { return ___destinationPosition_3; }
	inline Vector3_t192642699 * get_address_of_destinationPosition_3() { return &___destinationPosition_3; }
	inline void set_destinationPosition_3(Vector3_t192642699  value)
	{
		___destinationPosition_3 = value;
	}

	inline static int32_t get_offset_of_destinationRotation_4() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t560765082, ___destinationRotation_4)); }
	inline Nullable_1_t1330912796  get_destinationRotation_4() const { return ___destinationRotation_4; }
	inline Nullable_1_t1330912796 * get_address_of_destinationRotation_4() { return &___destinationRotation_4; }
	inline void set_destinationRotation_4(Nullable_1_t1330912796  value)
	{
		___destinationRotation_4 = value;
	}

	inline static int32_t get_offset_of_forceDestinationPosition_5() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t560765082, ___forceDestinationPosition_5)); }
	inline bool get_forceDestinationPosition_5() const { return ___forceDestinationPosition_5; }
	inline bool* get_address_of_forceDestinationPosition_5() { return &___forceDestinationPosition_5; }
	inline void set_forceDestinationPosition_5(bool value)
	{
		___forceDestinationPosition_5 = value;
	}

	inline static int32_t get_offset_of_enableTeleport_6() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t560765082, ___enableTeleport_6)); }
	inline bool get_enableTeleport_6() const { return ___enableTeleport_6; }
	inline bool* get_address_of_enableTeleport_6() { return &___enableTeleport_6; }
	inline void set_enableTeleport_6(bool value)
	{
		___enableTeleport_6 = value;
	}

	inline static int32_t get_offset_of_controllerIndex_7() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t560765082, ___controllerIndex_7)); }
	inline uint32_t get_controllerIndex_7() const { return ___controllerIndex_7; }
	inline uint32_t* get_address_of_controllerIndex_7() { return &___controllerIndex_7; }
	inline void set_controllerIndex_7(uint32_t value)
	{
		___controllerIndex_7 = value;
	}

	inline static int32_t get_offset_of_controllerReference_8() { return static_cast<int32_t>(offsetof(DestinationMarkerEventArgs_t560765082, ___controllerReference_8)); }
	inline VRTK_ControllerReference_t2614677003 * get_controllerReference_8() const { return ___controllerReference_8; }
	inline VRTK_ControllerReference_t2614677003 ** get_address_of_controllerReference_8() { return &___controllerReference_8; }
	inline void set_controllerReference_8(VRTK_ControllerReference_t2614677003 * value)
	{
		___controllerReference_8 = value;
		Il2CppCodeGenWriteBarrier((&___controllerReference_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.DestinationMarkerEventArgs
struct DestinationMarkerEventArgs_t560765082_marshaled_pinvoke
{
	float ___distance_0;
	Transform_t2732716350 * ___target_1;
	RaycastHit_t1730847655_marshaled_pinvoke ___raycastHit_2;
	Vector3_t192642699  ___destinationPosition_3;
	Nullable_1_t1330912796  ___destinationRotation_4;
	int32_t ___forceDestinationPosition_5;
	int32_t ___enableTeleport_6;
	uint32_t ___controllerIndex_7;
	VRTK_ControllerReference_t2614677003 * ___controllerReference_8;
};
// Native definition for COM marshalling of VRTK.DestinationMarkerEventArgs
struct DestinationMarkerEventArgs_t560765082_marshaled_com
{
	float ___distance_0;
	Transform_t2732716350 * ___target_1;
	RaycastHit_t1730847655_marshaled_com ___raycastHit_2;
	Vector3_t192642699  ___destinationPosition_3;
	Nullable_1_t1330912796  ___destinationRotation_4;
	int32_t ___forceDestinationPosition_5;
	int32_t ___enableTeleport_6;
	uint32_t ___controllerIndex_7;
	VRTK_ControllerReference_t2614677003 * ___controllerReference_8;
};
#endif // DESTINATIONMARKEREVENTARGS_T560765082_H
#ifndef STREAMINGCONTEXT_T1243830184_H
#define STREAMINGCONTEXT_T1243830184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t1243830184 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t1243830184, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t1243830184, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1243830184_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1243830184_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T1243830184_H
#ifndef CONTROLLERTOOLTIPSEVENTARGS_T148396764_H
#define CONTROLLERTOOLTIPSEVENTARGS_T148396764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.ControllerTooltipsEventArgs
struct  ControllerTooltipsEventArgs_t148396764 
{
public:
	// VRTK.VRTK_ControllerTooltips/TooltipButtons VRTK.ControllerTooltipsEventArgs::element
	int32_t ___element_0;

public:
	inline static int32_t get_offset_of_element_0() { return static_cast<int32_t>(offsetof(ControllerTooltipsEventArgs_t148396764, ___element_0)); }
	inline int32_t get_element_0() const { return ___element_0; }
	inline int32_t* get_address_of_element_0() { return &___element_0; }
	inline void set_element_0(int32_t value)
	{
		___element_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLERTOOLTIPSEVENTARGS_T148396764_H
#ifndef ARHITTESTRESULT_T3990592403_H
#define ARHITTESTRESULT_T3990592403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResult
struct  ARHitTestResult_t3990592403 
{
public:
	// UnityEngine.XR.iOS.ARHitTestResultType UnityEngine.XR.iOS.ARHitTestResult::type
	int64_t ___type_0;
	// System.Double UnityEngine.XR.iOS.ARHitTestResult::distance
	double ___distance_1;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARHitTestResult::localTransform
	Matrix4x4_t3835147092  ___localTransform_2;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARHitTestResult::worldTransform
	Matrix4x4_t3835147092  ___worldTransform_3;
	// System.String UnityEngine.XR.iOS.ARHitTestResult::anchorIdentifier
	String_t* ___anchorIdentifier_4;
	// System.Boolean UnityEngine.XR.iOS.ARHitTestResult::isValid
	bool ___isValid_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(ARHitTestResult_t3990592403, ___type_0)); }
	inline int64_t get_type_0() const { return ___type_0; }
	inline int64_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int64_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_distance_1() { return static_cast<int32_t>(offsetof(ARHitTestResult_t3990592403, ___distance_1)); }
	inline double get_distance_1() const { return ___distance_1; }
	inline double* get_address_of_distance_1() { return &___distance_1; }
	inline void set_distance_1(double value)
	{
		___distance_1 = value;
	}

	inline static int32_t get_offset_of_localTransform_2() { return static_cast<int32_t>(offsetof(ARHitTestResult_t3990592403, ___localTransform_2)); }
	inline Matrix4x4_t3835147092  get_localTransform_2() const { return ___localTransform_2; }
	inline Matrix4x4_t3835147092 * get_address_of_localTransform_2() { return &___localTransform_2; }
	inline void set_localTransform_2(Matrix4x4_t3835147092  value)
	{
		___localTransform_2 = value;
	}

	inline static int32_t get_offset_of_worldTransform_3() { return static_cast<int32_t>(offsetof(ARHitTestResult_t3990592403, ___worldTransform_3)); }
	inline Matrix4x4_t3835147092  get_worldTransform_3() const { return ___worldTransform_3; }
	inline Matrix4x4_t3835147092 * get_address_of_worldTransform_3() { return &___worldTransform_3; }
	inline void set_worldTransform_3(Matrix4x4_t3835147092  value)
	{
		___worldTransform_3 = value;
	}

	inline static int32_t get_offset_of_anchorIdentifier_4() { return static_cast<int32_t>(offsetof(ARHitTestResult_t3990592403, ___anchorIdentifier_4)); }
	inline String_t* get_anchorIdentifier_4() const { return ___anchorIdentifier_4; }
	inline String_t** get_address_of_anchorIdentifier_4() { return &___anchorIdentifier_4; }
	inline void set_anchorIdentifier_4(String_t* value)
	{
		___anchorIdentifier_4 = value;
		Il2CppCodeGenWriteBarrier((&___anchorIdentifier_4), value);
	}

	inline static int32_t get_offset_of_isValid_5() { return static_cast<int32_t>(offsetof(ARHitTestResult_t3990592403, ___isValid_5)); }
	inline bool get_isValid_5() const { return ___isValid_5; }
	inline bool* get_address_of_isValid_5() { return &___isValid_5; }
	inline void set_isValid_5(bool value)
	{
		___isValid_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARHitTestResult
struct ARHitTestResult_t3990592403_marshaled_pinvoke
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t3835147092  ___localTransform_2;
	Matrix4x4_t3835147092  ___worldTransform_3;
	char* ___anchorIdentifier_4;
	int32_t ___isValid_5;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARHitTestResult
struct ARHitTestResult_t3990592403_marshaled_com
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t3835147092  ___localTransform_2;
	Matrix4x4_t3835147092  ___worldTransform_3;
	Il2CppChar* ___anchorIdentifier_4;
	int32_t ___isValid_5;
};
#endif // ARHITTESTRESULT_T3990592403_H
#ifndef DATETIME_T274681254_H
#define DATETIME_T274681254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t274681254 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t826320999  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t274681254, ___ticks_10)); }
	inline TimeSpan_t826320999  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t826320999 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t826320999  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t274681254, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t274681254_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t274681254  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t274681254  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t513271263* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t513271263* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t513271263* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t513271263* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t513271263* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t513271263* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t513271263* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t302413437* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t302413437* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t274681254_StaticFields, ___MaxValue_12)); }
	inline DateTime_t274681254  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t274681254 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t274681254  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t274681254_StaticFields, ___MinValue_13)); }
	inline DateTime_t274681254  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t274681254 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t274681254  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t274681254_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t513271263* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t513271263** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t513271263* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t274681254_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t513271263* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t513271263** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t513271263* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t274681254_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t513271263* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t513271263** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t513271263* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t274681254_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t513271263* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t513271263** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t513271263* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t274681254_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t513271263* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t513271263** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t513271263* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t274681254_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t513271263* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t513271263** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t513271263* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t274681254_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t513271263* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t513271263** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t513271263* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t274681254_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t302413437* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t302413437** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t302413437* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t274681254_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t302413437* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t302413437** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t302413437* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t274681254_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t274681254_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T274681254_H
#ifndef HEADSETCONTROLLERAWAREEVENTARGS_T1561819546_H
#define HEADSETCONTROLLERAWAREEVENTARGS_T1561819546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.HeadsetControllerAwareEventArgs
struct  HeadsetControllerAwareEventArgs_t1561819546 
{
public:
	// UnityEngine.RaycastHit VRTK.HeadsetControllerAwareEventArgs::raycastHit
	RaycastHit_t1730847655  ___raycastHit_0;
	// System.UInt32 VRTK.HeadsetControllerAwareEventArgs::controllerIndex
	uint32_t ___controllerIndex_1;
	// VRTK.VRTK_ControllerReference VRTK.HeadsetControllerAwareEventArgs::controllerReference
	VRTK_ControllerReference_t2614677003 * ___controllerReference_2;

public:
	inline static int32_t get_offset_of_raycastHit_0() { return static_cast<int32_t>(offsetof(HeadsetControllerAwareEventArgs_t1561819546, ___raycastHit_0)); }
	inline RaycastHit_t1730847655  get_raycastHit_0() const { return ___raycastHit_0; }
	inline RaycastHit_t1730847655 * get_address_of_raycastHit_0() { return &___raycastHit_0; }
	inline void set_raycastHit_0(RaycastHit_t1730847655  value)
	{
		___raycastHit_0 = value;
	}

	inline static int32_t get_offset_of_controllerIndex_1() { return static_cast<int32_t>(offsetof(HeadsetControllerAwareEventArgs_t1561819546, ___controllerIndex_1)); }
	inline uint32_t get_controllerIndex_1() const { return ___controllerIndex_1; }
	inline uint32_t* get_address_of_controllerIndex_1() { return &___controllerIndex_1; }
	inline void set_controllerIndex_1(uint32_t value)
	{
		___controllerIndex_1 = value;
	}

	inline static int32_t get_offset_of_controllerReference_2() { return static_cast<int32_t>(offsetof(HeadsetControllerAwareEventArgs_t1561819546, ___controllerReference_2)); }
	inline VRTK_ControllerReference_t2614677003 * get_controllerReference_2() const { return ___controllerReference_2; }
	inline VRTK_ControllerReference_t2614677003 ** get_address_of_controllerReference_2() { return &___controllerReference_2; }
	inline void set_controllerReference_2(VRTK_ControllerReference_t2614677003 * value)
	{
		___controllerReference_2 = value;
		Il2CppCodeGenWriteBarrier((&___controllerReference_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.HeadsetControllerAwareEventArgs
struct HeadsetControllerAwareEventArgs_t1561819546_marshaled_pinvoke
{
	RaycastHit_t1730847655_marshaled_pinvoke ___raycastHit_0;
	uint32_t ___controllerIndex_1;
	VRTK_ControllerReference_t2614677003 * ___controllerReference_2;
};
// Native definition for COM marshalling of VRTK.HeadsetControllerAwareEventArgs
struct HeadsetControllerAwareEventArgs_t1561819546_marshaled_com
{
	RaycastHit_t1730847655_marshaled_com ___raycastHit_0;
	uint32_t ___controllerIndex_1;
	VRTK_ControllerReference_t2614677003 * ___controllerReference_2;
};
#endif // HEADSETCONTROLLERAWAREEVENTARGS_T1561819546_H
#ifndef PLAYABLE_T3876908639_H
#define PLAYABLE_T3876908639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t3876908639 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t1888561930  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t3876908639, ___m_Handle_0)); }
	inline PlayableHandle_t1888561930  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1888561930 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1888561930  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t3876908639_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t3876908639  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t3876908639_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t3876908639  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t3876908639 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t3876908639  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T3876908639_H
#ifndef NAVIGATION_T2865879238_H
#define NAVIGATION_T2865879238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t2865879238 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3369345471 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3369345471 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3369345471 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3369345471 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t2865879238, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t2865879238, ___m_SelectOnUp_1)); }
	inline Selectable_t3369345471 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3369345471 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3369345471 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t2865879238, ___m_SelectOnDown_2)); }
	inline Selectable_t3369345471 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3369345471 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3369345471 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t2865879238, ___m_SelectOnLeft_3)); }
	inline Selectable_t3369345471 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3369345471 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3369345471 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t2865879238, ___m_SelectOnRight_4)); }
	inline Selectable_t3369345471 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3369345471 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3369345471 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t2865879238_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3369345471 * ___m_SelectOnUp_1;
	Selectable_t3369345471 * ___m_SelectOnDown_2;
	Selectable_t3369345471 * ___m_SelectOnLeft_3;
	Selectable_t3369345471 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t2865879238_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3369345471 * ___m_SelectOnUp_1;
	Selectable_t3369345471 * ___m_SelectOnDown_2;
	Selectable_t3369345471 * ___m_SelectOnLeft_3;
	Selectable_t3369345471 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T2865879238_H
#ifndef UIPOINTEREVENTARGS_T1734767371_H
#define UIPOINTEREVENTARGS_T1734767371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRTK.UIPointerEventArgs
struct  UIPointerEventArgs_t1734767371 
{
public:
	// System.UInt32 VRTK.UIPointerEventArgs::controllerIndex
	uint32_t ___controllerIndex_0;
	// VRTK.VRTK_ControllerReference VRTK.UIPointerEventArgs::controllerReference
	VRTK_ControllerReference_t2614677003 * ___controllerReference_1;
	// System.Boolean VRTK.UIPointerEventArgs::isActive
	bool ___isActive_2;
	// UnityEngine.GameObject VRTK.UIPointerEventArgs::currentTarget
	GameObject_t4215223176 * ___currentTarget_3;
	// UnityEngine.GameObject VRTK.UIPointerEventArgs::previousTarget
	GameObject_t4215223176 * ___previousTarget_4;
	// UnityEngine.EventSystems.RaycastResult VRTK.UIPointerEventArgs::raycastResult
	RaycastResult_t2031701131  ___raycastResult_5;

public:
	inline static int32_t get_offset_of_controllerIndex_0() { return static_cast<int32_t>(offsetof(UIPointerEventArgs_t1734767371, ___controllerIndex_0)); }
	inline uint32_t get_controllerIndex_0() const { return ___controllerIndex_0; }
	inline uint32_t* get_address_of_controllerIndex_0() { return &___controllerIndex_0; }
	inline void set_controllerIndex_0(uint32_t value)
	{
		___controllerIndex_0 = value;
	}

	inline static int32_t get_offset_of_controllerReference_1() { return static_cast<int32_t>(offsetof(UIPointerEventArgs_t1734767371, ___controllerReference_1)); }
	inline VRTK_ControllerReference_t2614677003 * get_controllerReference_1() const { return ___controllerReference_1; }
	inline VRTK_ControllerReference_t2614677003 ** get_address_of_controllerReference_1() { return &___controllerReference_1; }
	inline void set_controllerReference_1(VRTK_ControllerReference_t2614677003 * value)
	{
		___controllerReference_1 = value;
		Il2CppCodeGenWriteBarrier((&___controllerReference_1), value);
	}

	inline static int32_t get_offset_of_isActive_2() { return static_cast<int32_t>(offsetof(UIPointerEventArgs_t1734767371, ___isActive_2)); }
	inline bool get_isActive_2() const { return ___isActive_2; }
	inline bool* get_address_of_isActive_2() { return &___isActive_2; }
	inline void set_isActive_2(bool value)
	{
		___isActive_2 = value;
	}

	inline static int32_t get_offset_of_currentTarget_3() { return static_cast<int32_t>(offsetof(UIPointerEventArgs_t1734767371, ___currentTarget_3)); }
	inline GameObject_t4215223176 * get_currentTarget_3() const { return ___currentTarget_3; }
	inline GameObject_t4215223176 ** get_address_of_currentTarget_3() { return &___currentTarget_3; }
	inline void set_currentTarget_3(GameObject_t4215223176 * value)
	{
		___currentTarget_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentTarget_3), value);
	}

	inline static int32_t get_offset_of_previousTarget_4() { return static_cast<int32_t>(offsetof(UIPointerEventArgs_t1734767371, ___previousTarget_4)); }
	inline GameObject_t4215223176 * get_previousTarget_4() const { return ___previousTarget_4; }
	inline GameObject_t4215223176 ** get_address_of_previousTarget_4() { return &___previousTarget_4; }
	inline void set_previousTarget_4(GameObject_t4215223176 * value)
	{
		___previousTarget_4 = value;
		Il2CppCodeGenWriteBarrier((&___previousTarget_4), value);
	}

	inline static int32_t get_offset_of_raycastResult_5() { return static_cast<int32_t>(offsetof(UIPointerEventArgs_t1734767371, ___raycastResult_5)); }
	inline RaycastResult_t2031701131  get_raycastResult_5() const { return ___raycastResult_5; }
	inline RaycastResult_t2031701131 * get_address_of_raycastResult_5() { return &___raycastResult_5; }
	inline void set_raycastResult_5(RaycastResult_t2031701131  value)
	{
		___raycastResult_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VRTK.UIPointerEventArgs
struct UIPointerEventArgs_t1734767371_marshaled_pinvoke
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t2614677003 * ___controllerReference_1;
	int32_t ___isActive_2;
	GameObject_t4215223176 * ___currentTarget_3;
	GameObject_t4215223176 * ___previousTarget_4;
	RaycastResult_t2031701131_marshaled_pinvoke ___raycastResult_5;
};
// Native definition for COM marshalling of VRTK.UIPointerEventArgs
struct UIPointerEventArgs_t1734767371_marshaled_com
{
	uint32_t ___controllerIndex_0;
	VRTK_ControllerReference_t2614677003 * ___controllerReference_1;
	int32_t ___isActive_2;
	GameObject_t4215223176 * ___currentTarget_3;
	GameObject_t4215223176 * ___previousTarget_4;
	RaycastResult_t2031701131_marshaled_com ___raycastResult_5;
};
#endif // UIPOINTEREVENTARGS_T1734767371_H
#ifndef TOUCH_T2486073171_H
#define TOUCH_T2486073171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t2486073171 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2882533997  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2882533997  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2882533997  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t2486073171, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t2486073171, ___m_Position_1)); }
	inline Vector2_t2882533997  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2882533997 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2882533997  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t2486073171, ___m_RawPosition_2)); }
	inline Vector2_t2882533997  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2882533997 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2882533997  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t2486073171, ___m_PositionDelta_3)); }
	inline Vector2_t2882533997  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2882533997 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2882533997  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t2486073171, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t2486073171, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t2486073171, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t2486073171, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t2486073171, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t2486073171, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t2486073171, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t2486073171, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t2486073171, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t2486073171, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T2486073171_H
#ifndef DATETIMEOFFSET_T2859316990_H
#define DATETIMEOFFSET_T2859316990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t2859316990 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t274681254  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t826320999  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2859316990, ___dt_2)); }
	inline DateTime_t274681254  get_dt_2() const { return ___dt_2; }
	inline DateTime_t274681254 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t274681254  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2859316990, ___utc_offset_3)); }
	inline TimeSpan_t826320999  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t826320999 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t826320999  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t2859316990_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t2859316990  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t2859316990  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2859316990_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t2859316990  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t2859316990 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t2859316990  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2859316990_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t2859316990  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t2859316990 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t2859316990  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T2859316990_H



static  int32_t UnresolvedVirtualCall_0 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_1 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_2 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_3 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_4 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_5 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_6 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_7 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_8 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_9 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_10 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_11 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, int32_t ___Int325, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_12 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_13 (RuntimeObject * __this, RSAParameters_t3526599052  ___RSAParameters1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_14 (RuntimeObject * __this, DSAParameters_t1642555212  ___DSAParameters1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RSAParameters_t3526599052  UnresolvedVirtualCall_15 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DSAParameters_t1642555212  UnresolvedVirtualCall_16 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_17 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_18 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_19 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_20 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_21 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_22 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_23 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_24 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_25 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_26 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_27 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_28 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_29 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_30 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_31 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DictionaryEntry_t2462515351  UnresolvedVirtualCall_32 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_33 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_34 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t274681254  UnresolvedVirtualCall_35 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Decimal_t400234769  UnresolvedVirtualCall_36 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  double UnresolvedVirtualCall_37 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_38 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_39 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_40 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_41 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_42 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_43 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_44 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_45 (RuntimeObject * __this, DateTime_t274681254  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t274681254  UnresolvedVirtualCall_46 (RuntimeObject * __this, DateTime_t274681254  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  TimeSpan_t826320999  UnresolvedVirtualCall_47 (RuntimeObject * __this, DateTime_t274681254  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_48 (RuntimeObject * __this, DateTime_t274681254  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_49 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, int32_t ___Int325, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_50 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, int32_t ___Int325, int32_t ___Int326, int32_t ___Int327, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_51 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_52 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_53 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_54 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_55 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_56 (RuntimeObject * __this, int64_t ___Int641, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_57 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_58 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_59 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_60 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_61 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_62 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_63 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, RuntimeObject * ___Object7, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  double UnresolvedVirtualCall_64 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_65 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CustomAttributeTypedArgument_t2249195713  UnresolvedVirtualCall_66 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CustomAttributeNamedArgument_t1944453582  UnresolvedVirtualCall_67 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_68 (RuntimeObject * __this, OpCode_t3550328684  ___OpCode1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_69 (RuntimeObject * __this, IntPtr_t ___IntPtr1, RuntimeObject * ___Object2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_70 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_71 (RuntimeObject * __this, OpCode_t3550328684  ___OpCode1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_72 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, RuntimeObject * ___Object7, RuntimeObject * ___Object8, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeTypeHandle_t199074045  UnresolvedVirtualCall_73 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_74 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_75 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_76 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_77 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_78 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_79 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_80 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Decimal_t400234769  UnresolvedVirtualCall_81 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_82 (RuntimeObject * __this, TimeSpan_t826320999  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_83 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_84 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_85 (RuntimeObject * __this, RuntimeObject * ___Object1, StreamingContext_t1243830184  ___StreamingContext2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_86 (RuntimeObject * __this, RuntimeObject * ___Object1, StreamingContext_t1243830184  ___StreamingContext2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_87 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_88 (RuntimeObject * __this, OpCode_t3550328684  ___OpCode1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_89 (RuntimeObject * __this, OpCode_t3550328684  ___OpCode1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Label_t3812463628  UnresolvedVirtualCall_90 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_91 (RuntimeObject * __this, OpCode_t3550328684  ___OpCode1, Label_t3812463628  ___Label2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_92 (RuntimeObject * __this, OpCode_t3550328684  ___OpCode1, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_93 (RuntimeObject * __this, Label_t3812463628  ___Label1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_94 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_95 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_96 (RuntimeObject * __this, StreamingContext_t1243830184  ___StreamingContext1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_97 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_98 (RuntimeObject * __this, int64_t ___Int641, RuntimeObject * ___Object2, int64_t ___Int643, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_99 (RuntimeObject * __this, int64_t ___Int641, int32_t ___Int322, int64_t ___Int643, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_100 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_101 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_102 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, StreamingContext_t1243830184  ___StreamingContext3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_103 (RuntimeObject * __this, Decimal_t400234769  ___Decimal1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_104 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_105 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_106 (RuntimeObject * __this, uint16_t ___UInt161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_107 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_108 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, StreamingContext_t1243830184  ___StreamingContext3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeFieldHandle_t69137431  UnresolvedVirtualCall_109 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeMethodHandle_t47106738  UnresolvedVirtualCall_110 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_111 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t274681254  UnresolvedVirtualCall_112 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_113 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_114 (RuntimeObject * __this, int16_t ___Int161, int16_t ___Int162, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_115 (RuntimeObject * __this, int16_t ___Int161, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_116 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_117 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_118 (RuntimeObject * __this, IntPtr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  IntPtr_t UnresolvedVirtualCall_119 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_120 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, int32_t ___Int324, RuntimeObject * ___Object5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_121 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_122 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_123 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_124 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_125 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_126 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_127 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int8_t ___SByte3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_128 (RuntimeObject * __this, int16_t ___Int161, RuntimeObject * ___Object2, int8_t ___SByte3, int8_t ___SByte4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_129 (RuntimeObject * __this, int16_t ___Int161, int8_t ___SByte2, int8_t ___SByte3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_130 (RuntimeObject * __this, int16_t ___Int161, int16_t ___Int162, int8_t ___SByte3, int8_t ___SByte4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_131 (RuntimeObject * __this, uint16_t ___UInt161, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_132 (RuntimeObject * __this, int32_t ___Int321, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_133 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_134 (RuntimeObject * __this, int8_t ___SByte1, int32_t ___Int322, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_135 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_136 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_137 (RuntimeObject * __this, uint8_t ___Byte1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_138 (RuntimeObject * __this, int32_t ___Int321, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_139 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_140 (RuntimeObject * __this, ScriptableRenderContext_t2229222279  ___ScriptableRenderContext1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_141 (RuntimeObject * __this, float ___Single1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_142 (RuntimeObject * __this, Guid_t  ___Guid1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_143 (RuntimeObject * __this, Guid_t  ___Guid1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Playable_t3876908639  UnresolvedVirtualCall_144 (RuntimeObject * __this, PlayableGraph_t1385956480  ___PlayableGraph1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Range_t807979434  UnresolvedVirtualCall_145 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Rect_t2599958881  UnresolvedVirtualCall_146 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_147 (RuntimeObject * __this, uint8_t ___Byte1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_148 (RuntimeObject * __this, uint8_t ___Byte1, RuntimeObject * ___Object2, uint8_t ___Byte3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_149 (RuntimeObject * __this, RuntimeObject * ___Object1, uint8_t ___Byte2, RuntimeObject * ___Object3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_150 (RuntimeObject * __this, RuntimeObject * ___Object1, uint8_t ___Byte2, int8_t ___SByte3, uint8_t ___Byte4, int8_t ___SByte5, uint8_t ___Byte6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_151 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_152 (RuntimeObject * __this, uint8_t ___Byte1, RuntimeObject * ___Object2, int8_t ___SByte3, uint8_t ___Byte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_153 (RuntimeObject * __this, RuntimeObject * ___Object1, int16_t ___Int162, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_154 (RuntimeObject * __this, RuntimeObject * ___Object1, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_155 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector2_t2882533997  UnresolvedVirtualCall_156 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Touch_t2486073171  UnresolvedVirtualCall_157 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_158 (RuntimeObject * __this, float ___Single1, float ___Single2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_159 (RuntimeObject * __this, int32_t ___Int321, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_160 (RuntimeObject * __this, Color_t1974625752  ___Color1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color_t1974625752  UnresolvedVirtualCall_161 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_162 (RuntimeObject * __this, Vector2_t2882533997  ___Vector21, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_163 (RuntimeObject * __this, Color_t1974625752  ___Color1, float ___Single2, int8_t ___SByte3, int8_t ___SByte4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UILineInfo_t2069869154  UnresolvedVirtualCall_164 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UICharInfo_t2938273849  UnresolvedVirtualCall_165 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_166 (RuntimeObject * __this, Vector2_t2882533997  ___Vector21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_167 (RuntimeObject * __this, Rect_t2599958881  ___Rect1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_168 (RuntimeObject * __this, float ___Single1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_169 (RuntimeObject * __this, Color_t1974625752  ___Color1, float ___Single2, int8_t ___SByte3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_170 (RuntimeObject * __this, float ___Single1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UIVertex_t244360722  UnresolvedVirtualCall_171 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_172 (RuntimeObject * __this, float ___Single1, float ___Single2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t502778303  UnresolvedVirtualCall_173 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_174 (RuntimeObject * __this, uint8_t ___Byte1, RuntimeObject * ___Object2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_175 (RuntimeObject * __this, uint8_t ___Byte1, RuntimeObject * ___Object2, int8_t ___SByte3, uint8_t ___Byte4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_176 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int8_t ___SByte3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_177 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_178 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, int32_t ___Int325, uint8_t ___Byte6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_179 (RuntimeObject * __this, uint8_t ___Byte1, RuntimeObject * ___Object2, int8_t ___SByte3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_180 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_181 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector3_t192642699  ___Vector32, Quaternion_t1126259656  ___Quaternion3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_182 (RuntimeObject * __this, RuntimeObject * ___Object1, PhotonMessageInfo_t1468897564  ___PhotonMessageInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_183 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DestinationMarkerEventArgs_t560765082  UnresolvedVirtualCall_184 (RuntimeObject * __this, float ___Single1, RuntimeObject * ___Object2, RaycastHit_t1730847655  ___RaycastHit3, Vector3_t192642699  ___Vector34, RuntimeObject * ___Object5, int8_t ___SByte6, Nullable_1_t1330912796  ___Nullable_17, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_185 (RuntimeObject * __this, DestinationMarkerEventArgs_t560765082  ___DestinationMarkerEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_186 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_187 (RuntimeObject * __this, int8_t ___SByte1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_188 (RuntimeObject * __this, int32_t ___Int321, Color_t1974625752  ___Color2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_189 (RuntimeObject * __this, Color_t1974625752  ___Color1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_190 (RuntimeObject * __this, int8_t ___SByte1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_191 (RuntimeObject * __this, Nullable_1_t2179278892  ___Nullable_11, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_192 (RuntimeObject * __this, RuntimeObject * ___Object1, Color_t1974625752  ___Color2, Color_t1974625752  ___Color3, float ___Single4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_193 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, Color_t1974625752  ___Color3, float ___Single4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_194 (RuntimeObject * __this, uint32_t ___UInt321, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_195 (RuntimeObject * __this, uint32_t ___UInt321, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_196 (RuntimeObject * __this, float ___Single1, float ___Single2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_197 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_198 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, Vector3_t192642699  ___Vector33, float ___Single4, float ___Single5, int8_t ___SByte6, int8_t ___SByte7, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t192642699  UnresolvedVirtualCall_199 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_200 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_201 (RuntimeObject * __this, Color_t1974625752  ___Color1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_202 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector3_t192642699  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_203 (RuntimeObject * __this, int8_t ___SByte1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_204 (RuntimeObject * __this, RaycastHit_t1730847655  ___RaycastHit1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RaycastHit_t1730847655  UnresolvedVirtualCall_205 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_206 (RuntimeObject * __this, int8_t ___SByte1, Vector3_t192642699  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_207 (RuntimeObject * __this, RuntimeObject * ___Object1, DestinationMarkerEventArgs_t560765082  ___DestinationMarkerEventArgs2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DestinationMarkerEventArgs_t560765082  UnresolvedVirtualCall_208 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector3_t192642699  ___Vector32, Nullable_1_t1330912796  ___Nullable_13, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_209 (RuntimeObject * __this, float ___Single1, Vector3_t192642699  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Quaternion_t1126259656  UnresolvedVirtualCall_210 (RuntimeObject * __this, Nullable_1_t1330912796  ___Nullable_11, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_211 (RuntimeObject * __this, RuntimeObject * ___Object1, DestinationMarkerEventArgs_t560765082  ___DestinationMarkerEventArgs2, Vector3_t192642699  ___Vector33, Quaternion_t1126259656  ___Quaternion4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t192642699  UnresolvedVirtualCall_212 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, RuntimeObject * ___Object2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_213 (RuntimeObject * __this, int32_t ___Int321, float ___Single2, RuntimeObject * ___Object3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_214 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, Color_t1974625752  ___Color3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t192642699  UnresolvedVirtualCall_215 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t192642699  UnresolvedVirtualCall_216 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_217 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, Vector3_t192642699  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_218 (RuntimeObject * __this, RuntimeObject * ___Object1, Color_t1974625752  ___Color2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_219 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, int8_t ___SByte3, int32_t ___Int324, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  BodyPhysicsEventArgs_t2782781156  UnresolvedVirtualCall_220 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_221 (RuntimeObject * __this, BodyPhysicsEventArgs_t2782781156  ___BodyPhysicsEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_222 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, float ___Single2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_223 (RuntimeObject * __this, float ___Single1, RaycastHit_t1730847655  ___RaycastHit2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_224 (RuntimeObject * __this, RuntimeObject * ___Object1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_225 (RuntimeObject * __this, RaycastHit_t1730847655  ___RaycastHit1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_226 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_227 (RuntimeObject * __this, int8_t ___SByte1, RaycastHit_t1730847655  ___RaycastHit2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_228 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Control3DEventArgs_t1329496489  UnresolvedVirtualCall_229 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_230 (RuntimeObject * __this, Control3DEventArgs_t1329496489  ___Control3DEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ObjectControlEventArgs_t1724175878  UnresolvedVirtualCall_231 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, float ___Single2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_232 (RuntimeObject * __this, ObjectControlEventArgs_t1724175878  ___ObjectControlEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_233 (RuntimeObject * __this, int8_t ___SByte1, int32_t ___Int322, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_234 (RuntimeObject * __this, int32_t ___Int321, int8_t ___SByte2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CollisionTrackerEventArgs_t1671502100  UnresolvedVirtualCall_235 (RuntimeObject * __this, int8_t ___SByte1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ControlValueRange_t1484964184  UnresolvedVirtualCall_236 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ControllerActionsEventArgs_t430656062  UnresolvedVirtualCall_237 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_238 (RuntimeObject * __this, ControllerActionsEventArgs_t430656062  ___ControllerActionsEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_239 (RuntimeObject * __this, int8_t ___SByte1, int32_t ___Int322, Nullable_1_t2179278892  ___Nullable_13, float ___Single4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ControllerInteractionEventArgs_t3279460322  UnresolvedVirtualCall_240 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_241 (RuntimeObject * __this, Vector2_t2882533997  ___Vector21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_242 (RuntimeObject * __this, int8_t ___SByte1, int32_t ___Int322, int8_t ___SByte3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_243 (RuntimeObject * __this, ControllerInteractionEventArgs_t3279460322  ___ControllerInteractionEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_244 (RuntimeObject * __this, int32_t ___Int321, int8_t ___SByte2, float ___Single3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ControllerInteractionEventArgs_t3279460322  UnresolvedVirtualCall_245 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_246 (RuntimeObject * __this, RuntimeObject * ___Object1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_247 (RuntimeObject * __this, RuntimeObject * ___Object1, float ___Single2, float ___Single3, float ___Single4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_248 (RuntimeObject * __this, RuntimeObject * ___Object1, float ___Single2, float ___Single3, float ___Single4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_249 (RuntimeObject * __this, Nullable_1_t2179278892  ___Nullable_11, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_250 (RuntimeObject * __this, int32_t ___Int321, Color_t1974625752  ___Color2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color_t1974625752  UnresolvedVirtualCall_251 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_252 (RuntimeObject * __this, Color_t1974625752  ___Color1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_253 (RuntimeObject * __this, ControllerRigidbodyActivatorEventArgs_t1851152386  ___ControllerRigidbodyActivatorEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_254 (RuntimeObject * __this, ControllerTooltipsEventArgs_t148396764  ___ControllerTooltipsEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t192642699  UnresolvedVirtualCall_255 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_256 (RuntimeObject * __this, int32_t ___Int321, Vector3_t192642699  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_257 (RuntimeObject * __this, RuntimeObject * ___Object1, Color_t1974625752  ___Color2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_258 (RuntimeObject * __this, int32_t ___Int321, Vector3_t192642699  ___Vector32, RuntimeObject * ___Object3, Color_t1974625752  ___Color4, float ___Single5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_259 (RuntimeObject * __this, Ray_t489471416  ___Ray1, RuntimeObject * ___Object2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_260 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, Vector3_t192642699  ___Vector32, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_261 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, Vector3_t192642699  ___Vector32, float ___Single3, Vector3_t192642699  ___Vector34, float ___Single5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_262 (RuntimeObject * __this, RuntimeObject * ___Object1, DestinationMarkerEventArgs_t560765082  ___DestinationMarkerEventArgs2, Vector3_t192642699  ___Vector33, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DashTeleportEventArgs_t1410175322  UnresolvedVirtualCall_263 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_264 (RuntimeObject * __this, DashTeleportEventArgs_t1410175322  ___DashTeleportEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Nullable_1_t1330912796  UnresolvedVirtualCall_265 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_266 (RuntimeObject * __this, DestinationMarkerEventArgs_t560765082  ___DestinationMarkerEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t192642699  UnresolvedVirtualCall_267 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  HeadsetCollisionEventArgs_t1124612885  UnresolvedVirtualCall_268 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_269 (RuntimeObject * __this, HeadsetCollisionEventArgs_t1124612885  ___HeadsetCollisionEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_270 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, RaycastHit_t1730847655  ___RaycastHit3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  HeadsetControllerAwareEventArgs_t1561819546  UnresolvedVirtualCall_271 (RuntimeObject * __this, RaycastHit_t1730847655  ___RaycastHit1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_272 (RuntimeObject * __this, HeadsetControllerAwareEventArgs_t1561819546  ___HeadsetControllerAwareEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  HeadsetFadeEventArgs_t2140906877  UnresolvedVirtualCall_273 (RuntimeObject * __this, RuntimeObject * ___Object1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_274 (RuntimeObject * __this, HeadsetFadeEventArgs_t2140906877  ___HeadsetFadeEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_275 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector3_t192642699  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_276 (RuntimeObject * __this, float ___Single1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_277 (RuntimeObject * __this, InteractableObjectEventArgs_t2436369074  ___InteractableObjectEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_278 (RuntimeObject * __this, int8_t ___SByte1, InteractableObjectEventArgs_t2436369074  ___InteractableObjectEventArgs2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_279 (RuntimeObject * __this, int8_t ___SByte1, float ___Single2, InteractableObjectEventArgs_t2436369074  ___InteractableObjectEventArgs3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_280 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, Vector3_t192642699  ___Vector32, Vector3_t192642699  ___Vector33, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_281 (RuntimeObject * __this, RuntimeObject * ___Object1, InteractableObjectEventArgs_t2436369074  ___InteractableObjectEventArgs2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_282 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  SnapDropZoneEventArgs_t60463308  UnresolvedVirtualCall_283 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_284 (RuntimeObject * __this, SnapDropZoneEventArgs_t60463308  ___SnapDropZoneEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_285 (RuntimeObject * __this, int8_t ___SByte1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, float ___Single4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  InteractControllerAppearanceEventArgs_t895611834  UnresolvedVirtualCall_286 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_287 (RuntimeObject * __this, InteractControllerAppearanceEventArgs_t895611834  ___InteractControllerAppearanceEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_288 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_289 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_290 (RuntimeObject * __this, int8_t ___SByte1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ObjectInteractEventArgs_t560748097  UnresolvedVirtualCall_291 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_292 (RuntimeObject * __this, ObjectInteractEventArgs_t560748097  ___ObjectInteractEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  InteractHapticsEventArgs_t1131202885  UnresolvedVirtualCall_293 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_294 (RuntimeObject * __this, InteractHapticsEventArgs_t1131202885  ___InteractHapticsEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_295 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, RuntimeObject * ___Object3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_296 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Quaternion_t1126259656  UnresolvedVirtualCall_297 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_298 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector3_t192642699  ___Vector32, Vector3_t192642699  ___Vector33, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Quaternion_t1126259656  UnresolvedVirtualCall_299 (RuntimeObject * __this, Quaternion_t1126259656  ___Quaternion1, Quaternion_t1126259656  ___Quaternion2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_300 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_301 (RuntimeObject * __this, RuntimeObject * ___Object1, float ___Single2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_302 (RuntimeObject * __this, RuntimeObject * ___Object1, Nullable_1_t2179278892  ___Nullable_12, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_303 (RuntimeObject * __this, Quaternion_t1126259656  ___Quaternion1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ObjectTooltipEventArgs_t840852757  UnresolvedVirtualCall_304 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_305 (RuntimeObject * __this, ObjectTooltipEventArgs_t840852757  ___ObjectTooltipEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_306 (RuntimeObject * __this, ControllerInteractionEventArgs_t3279460322  ___ControllerInteractionEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_307 (RuntimeObject * __this, float ___Single1, float ___Single2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_308 (RuntimeObject * __this, float ___Single1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PanelMenuItemControllerEventArgs_t3920619084  UnresolvedVirtualCall_309 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_310 (RuntimeObject * __this, PanelMenuItemControllerEventArgs_t3920619084  ___PanelMenuItemControllerEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PlayAreaCursorEventArgs_t3732259145  UnresolvedVirtualCall_311 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_312 (RuntimeObject * __this, PlayAreaCursorEventArgs_t3732259145  ___PlayAreaCursorEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_313 (RuntimeObject * __this, int32_t ___Int321, float ___Single2, float ___Single3, float ___Single4, float ___Single5, float ___Single6, Vector3_t192642699  ___Vector37, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PlayerClimbEventArgs_t577284162  UnresolvedVirtualCall_314 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_315 (RuntimeObject * __this, PlayerClimbEventArgs_t577284162  ___PlayerClimbEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DestinationMarkerEventArgs_t560765082  UnresolvedVirtualCall_316 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_317 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, float ___Single3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_318 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PositionRewindEventArgs_t3756258084  UnresolvedVirtualCall_319 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_320 (RuntimeObject * __this, PositionRewindEventArgs_t3756258084  ___PositionRewindEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_321 (RuntimeObject * __this, float ___Single1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_322 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_323 (RuntimeObject * __this, uint32_t ___UInt321, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_324 (RuntimeObject * __this, int8_t ___SByte1, Vector2_t2882533997  ___Vector22, Vector2_t2882533997  ___Vector23, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector2_t2882533997  UnresolvedVirtualCall_325 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_326 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_327 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_328 (RuntimeObject * __this, Color_t1974625752  ___Color1, float ___Single2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_329 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t192642699  UnresolvedVirtualCall_330 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_331 (RuntimeObject * __this, float ___Single1, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_332 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, Vector3_t192642699  ___Vector33, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_t192642699  UnresolvedVirtualCall_333 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, Vector3_t192642699  ___Vector32, float ___Single3, float ___Single4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_334 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, Vector3_t192642699  ___Vector33, float ___Single4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_335 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_336 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_337 (RuntimeObject * __this, int8_t ___SByte1, RaycastHit_t1730847655  ___RaycastHit2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_338 (RuntimeObject * __this, float ___Single1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  VRTKTrackedControllerEventArgs_t785002706  UnresolvedVirtualCall_339 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_340 (RuntimeObject * __this, VRTKTrackedControllerEventArgs_t785002706  ___VRTKTrackedControllerEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_341 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector2_t2882533997  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_342 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector2_t2882533997  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UIPointerEventArgs_t1734767371  UnresolvedVirtualCall_343 (RuntimeObject * __this, RaycastResult_t2031701131  ___RaycastResult1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_344 (RuntimeObject * __this, UIPointerEventArgs_t1734767371  ___UIPointerEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UIDraggableItemEventArgs_t2510069089  UnresolvedVirtualCall_345 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_346 (RuntimeObject * __this, UIDraggableItemEventArgs_t2510069089  ___UIDraggableItemEventArgs1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_347 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, Ray_t489471416  ___Ray3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_348 (RuntimeObject * __this, Ray_t489471416  ___Ray1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_349 (RuntimeObject * __this, int8_t ___SByte1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_350 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, Vector3_t192642699  ___Vector33, float ___Single4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_351 (RuntimeObject * __this, uint8_t ___Byte1, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_352 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_353 (RuntimeObject * __this, int16_t ___Int161, int16_t ___Int162, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_354 (RuntimeObject * __this, ColorBlock_t2905999369  ___ColorBlock1, ColorBlock_t2905999369  ___ColorBlock2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_355 (RuntimeObject * __this, Navigation_t2865879238  ___Navigation1, Navigation_t2865879238  ___Navigation2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_356 (RuntimeObject * __this, SpriteState_t3387707414  ___SpriteState1, SpriteState_t3387707414  ___SpriteState2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_357 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_358 (RuntimeObject * __this, int8_t ___SByte1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_359 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_360 (RuntimeObject * __this, uint8_t ___Byte1, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_361 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_362 (RuntimeObject * __this, CustomAttributeNamedArgument_t1944453582  ___CustomAttributeNamedArgument1, CustomAttributeNamedArgument_t1944453582  ___CustomAttributeNamedArgument2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_363 (RuntimeObject * __this, CustomAttributeNamedArgument_t1944453582  ___CustomAttributeNamedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_364 (RuntimeObject * __this, CustomAttributeTypedArgument_t2249195713  ___CustomAttributeTypedArgument1, CustomAttributeTypedArgument_t2249195713  ___CustomAttributeTypedArgument2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_365 (RuntimeObject * __this, CustomAttributeTypedArgument_t2249195713  ___CustomAttributeTypedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_366 (RuntimeObject * __this, float ___Single1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_367 (RuntimeObject * __this, AnimatorClipInfo_t1225374243  ___AnimatorClipInfo1, AnimatorClipInfo_t1225374243  ___AnimatorClipInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_368 (RuntimeObject * __this, AnimatorClipInfo_t1225374243  ___AnimatorClipInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_369 (RuntimeObject * __this, Color32_t878733194  ___Color321, Color32_t878733194  ___Color322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_370 (RuntimeObject * __this, Color32_t878733194  ___Color321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_371 (RuntimeObject * __this, CombineInstance_t259662778  ___CombineInstance1, CombineInstance_t259662778  ___CombineInstance2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_372 (RuntimeObject * __this, CombineInstance_t259662778  ___CombineInstance1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_373 (RuntimeObject * __this, RaycastResult_t2031701131  ___RaycastResult1, RaycastResult_t2031701131  ___RaycastResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_374 (RuntimeObject * __this, RaycastResult_t2031701131  ___RaycastResult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_375 (RuntimeObject * __this, UICharInfo_t2938273849  ___UICharInfo1, UICharInfo_t2938273849  ___UICharInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_376 (RuntimeObject * __this, UICharInfo_t2938273849  ___UICharInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_377 (RuntimeObject * __this, UILineInfo_t2069869154  ___UILineInfo1, UILineInfo_t2069869154  ___UILineInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_378 (RuntimeObject * __this, UILineInfo_t2069869154  ___UILineInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_379 (RuntimeObject * __this, UIVertex_t244360722  ___UIVertex1, UIVertex_t244360722  ___UIVertex2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_380 (RuntimeObject * __this, UIVertex_t244360722  ___UIVertex1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_381 (RuntimeObject * __this, Vector2_t2882533997  ___Vector21, Vector2_t2882533997  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_382 (RuntimeObject * __this, Vector2_t2882533997  ___Vector21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_383 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, Vector3_t192642699  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_384 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_385 (RuntimeObject * __this, Vector4_t763214274  ___Vector41, Vector4_t763214274  ___Vector42, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_386 (RuntimeObject * __this, Vector4_t763214274  ___Vector41, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_387 (RuntimeObject * __this, ARHitTestResult_t3990592403  ___ARHitTestResult1, ARHitTestResult_t3990592403  ___ARHitTestResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_388 (RuntimeObject * __this, ARHitTestResult_t3990592403  ___ARHitTestResult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_389 (RuntimeObject * __this, CustomAttributeNamedArgument_t1944453582  ___CustomAttributeNamedArgument1, CustomAttributeNamedArgument_t1944453582  ___CustomAttributeNamedArgument2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_390 (RuntimeObject * __this, CustomAttributeTypedArgument_t2249195713  ___CustomAttributeTypedArgument1, CustomAttributeTypedArgument_t2249195713  ___CustomAttributeTypedArgument2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_391 (RuntimeObject * __this, AnimatorClipInfo_t1225374243  ___AnimatorClipInfo1, AnimatorClipInfo_t1225374243  ___AnimatorClipInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_392 (RuntimeObject * __this, Color32_t878733194  ___Color321, Color32_t878733194  ___Color322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_393 (RuntimeObject * __this, CombineInstance_t259662778  ___CombineInstance1, CombineInstance_t259662778  ___CombineInstance2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_394 (RuntimeObject * __this, RaycastResult_t2031701131  ___RaycastResult1, RaycastResult_t2031701131  ___RaycastResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_395 (RuntimeObject * __this, UICharInfo_t2938273849  ___UICharInfo1, UICharInfo_t2938273849  ___UICharInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_396 (RuntimeObject * __this, UILineInfo_t2069869154  ___UILineInfo1, UILineInfo_t2069869154  ___UILineInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_397 (RuntimeObject * __this, UIVertex_t244360722  ___UIVertex1, UIVertex_t244360722  ___UIVertex2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_398 (RuntimeObject * __this, Vector2_t2882533997  ___Vector21, Vector2_t2882533997  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_399 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, Vector3_t192642699  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_400 (RuntimeObject * __this, Vector4_t763214274  ___Vector41, Vector4_t763214274  ___Vector42, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_401 (RuntimeObject * __this, ARHitTestResult_t3990592403  ___ARHitTestResult1, ARHitTestResult_t3990592403  ___ARHitTestResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_402 (RuntimeObject * __this, DateTimeOffset_t2859316990  ___DateTimeOffset1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_403 (RuntimeObject * __this, Guid_t  ___Guid1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_404 (RuntimeObject * __this, TimeSpan_t826320999  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_405 (RuntimeObject * __this, DateTime_t274681254  ___DateTime1, DateTime_t274681254  ___DateTime2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_406 (RuntimeObject * __this, DateTimeOffset_t2859316990  ___DateTimeOffset1, DateTimeOffset_t2859316990  ___DateTimeOffset2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_407 (RuntimeObject * __this, Guid_t  ___Guid1, Guid_t  ___Guid2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_408 (RuntimeObject * __this, TimeSpan_t826320999  ___TimeSpan1, TimeSpan_t826320999  ___TimeSpan2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_409 (RuntimeObject * __this, IntPtr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_410 (RuntimeObject * __this, IntPtr_t ___IntPtr1, IntPtr_t ___IntPtr2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_411 (RuntimeObject * __this, DemoData_t2176410490  ___DemoData1, DemoData_t2176410490  ___DemoData2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_412 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_413 (RuntimeObject * __this, uint32_t ___UInt321, uint32_t ___UInt322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_414 (RuntimeObject * __this, Color_t1974625752  ___Color1, Color_t1974625752  ___Color2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_415 (RuntimeObject * __this, DemoData_t2176410490  ___DemoData1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_416 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_417 (RuntimeObject * __this, DateTime_t274681254  ___DateTime1, DateTime_t274681254  ___DateTime2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_418 (RuntimeObject * __this, DateTimeOffset_t2859316990  ___DateTimeOffset1, DateTimeOffset_t2859316990  ___DateTimeOffset2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_419 (RuntimeObject * __this, Guid_t  ___Guid1, Guid_t  ___Guid2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_420 (RuntimeObject * __this, TimeSpan_t826320999  ___TimeSpan1, TimeSpan_t826320999  ___TimeSpan2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_421 (RuntimeObject * __this, Color_t1974625752  ___Color1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_422 (RuntimeObject * __this, ColorBlock_t2905999369  ___ColorBlock1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_423 (RuntimeObject * __this, Navigation_t2865879238  ___Navigation1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_424 (RuntimeObject * __this, SpriteState_t3387707414  ___SpriteState1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CustomAttributeNamedArgument_t1944453582  UnresolvedVirtualCall_425 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CustomAttributeTypedArgument_t2249195713  UnresolvedVirtualCall_426 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  AnimatorClipInfo_t1225374243  UnresolvedVirtualCall_427 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color32_t878733194  UnresolvedVirtualCall_428 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CombineInstance_t259662778  UnresolvedVirtualCall_429 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RaycastResult_t2031701131  UnresolvedVirtualCall_430 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UICharInfo_t2938273849  UnresolvedVirtualCall_431 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UILineInfo_t2069869154  UnresolvedVirtualCall_432 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UIVertex_t244360722  UnresolvedVirtualCall_433 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector4_t763214274  UnresolvedVirtualCall_434 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ARHitTestResult_t3990592403  UnresolvedVirtualCall_435 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_436 (RuntimeObject * __this, int32_t ___Int321, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_437 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_438 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_439 (RuntimeObject * __this, int32_t ___Int321, CustomAttributeNamedArgument_t1944453582  ___CustomAttributeNamedArgument2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_440 (RuntimeObject * __this, CustomAttributeNamedArgument_t1944453582  ___CustomAttributeNamedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_441 (RuntimeObject * __this, int32_t ___Int321, CustomAttributeTypedArgument_t2249195713  ___CustomAttributeTypedArgument2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_442 (RuntimeObject * __this, CustomAttributeTypedArgument_t2249195713  ___CustomAttributeTypedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_443 (RuntimeObject * __this, int32_t ___Int321, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_444 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_445 (RuntimeObject * __this, int32_t ___Int321, AnimatorClipInfo_t1225374243  ___AnimatorClipInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_446 (RuntimeObject * __this, AnimatorClipInfo_t1225374243  ___AnimatorClipInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  AnimatorClipInfo_t1225374243  UnresolvedVirtualCall_447 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_448 (RuntimeObject * __this, int32_t ___Int321, Color32_t878733194  ___Color322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_449 (RuntimeObject * __this, Color32_t878733194  ___Color321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color32_t878733194  UnresolvedVirtualCall_450 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_451 (RuntimeObject * __this, int32_t ___Int321, CombineInstance_t259662778  ___CombineInstance2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_452 (RuntimeObject * __this, CombineInstance_t259662778  ___CombineInstance1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CombineInstance_t259662778  UnresolvedVirtualCall_453 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_454 (RuntimeObject * __this, int32_t ___Int321, RaycastResult_t2031701131  ___RaycastResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_455 (RuntimeObject * __this, RaycastResult_t2031701131  ___RaycastResult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RaycastResult_t2031701131  UnresolvedVirtualCall_456 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_457 (RuntimeObject * __this, int32_t ___Int321, UICharInfo_t2938273849  ___UICharInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_458 (RuntimeObject * __this, UICharInfo_t2938273849  ___UICharInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_459 (RuntimeObject * __this, int32_t ___Int321, UILineInfo_t2069869154  ___UILineInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_460 (RuntimeObject * __this, UILineInfo_t2069869154  ___UILineInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_461 (RuntimeObject * __this, int32_t ___Int321, UIVertex_t244360722  ___UIVertex2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_462 (RuntimeObject * __this, UIVertex_t244360722  ___UIVertex1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_463 (RuntimeObject * __this, int32_t ___Int321, Vector2_t2882533997  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_464 (RuntimeObject * __this, Vector2_t2882533997  ___Vector21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector2_t2882533997  UnresolvedVirtualCall_465 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_466 (RuntimeObject * __this, Vector3_t192642699  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_467 (RuntimeObject * __this, int32_t ___Int321, Vector4_t763214274  ___Vector42, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_468 (RuntimeObject * __this, Vector4_t763214274  ___Vector41, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector4_t763214274  UnresolvedVirtualCall_469 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_470 (RuntimeObject * __this, int32_t ___Int321, ARHitTestResult_t3990592403  ___ARHitTestResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_471 (RuntimeObject * __this, ARHitTestResult_t3990592403  ___ARHitTestResult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ARHitTestResult_t3990592403  UnresolvedVirtualCall_472 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

extern const Il2CppMethodPointer g_UnresolvedVirtualMethodPointers[473] = 
{
	(const Il2CppMethodPointer) UnresolvedVirtualCall_0,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_1,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_2,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_3,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_4,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_5,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_6,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_7,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_8,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_9,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_10,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_11,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_12,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_13,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_14,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_15,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_16,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_17,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_18,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_19,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_20,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_21,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_22,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_23,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_24,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_25,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_26,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_27,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_28,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_29,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_30,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_31,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_32,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_33,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_34,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_35,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_36,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_37,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_38,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_39,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_40,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_41,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_42,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_43,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_44,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_45,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_46,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_47,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_48,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_49,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_50,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_51,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_52,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_53,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_54,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_55,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_56,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_57,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_58,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_59,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_60,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_61,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_62,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_63,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_64,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_65,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_66,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_67,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_68,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_69,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_70,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_71,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_72,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_73,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_74,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_75,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_76,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_77,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_78,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_79,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_80,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_81,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_82,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_83,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_84,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_85,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_86,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_87,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_88,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_89,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_90,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_91,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_92,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_93,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_94,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_95,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_96,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_97,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_98,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_99,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_100,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_101,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_102,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_103,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_104,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_105,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_106,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_107,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_108,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_109,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_110,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_111,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_112,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_113,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_114,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_115,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_116,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_117,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_118,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_119,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_120,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_121,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_122,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_123,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_124,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_125,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_126,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_127,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_128,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_129,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_130,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_131,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_132,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_133,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_134,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_135,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_136,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_137,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_138,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_139,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_140,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_141,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_142,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_143,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_144,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_145,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_146,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_147,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_148,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_149,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_150,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_151,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_152,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_153,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_154,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_155,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_156,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_157,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_158,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_159,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_160,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_161,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_162,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_163,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_164,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_165,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_166,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_167,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_168,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_169,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_170,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_171,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_172,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_173,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_174,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_175,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_176,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_177,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_178,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_179,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_180,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_181,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_182,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_183,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_184,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_185,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_186,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_187,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_188,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_189,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_190,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_191,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_192,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_193,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_194,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_195,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_196,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_197,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_198,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_199,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_200,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_201,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_202,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_203,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_204,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_205,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_206,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_207,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_208,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_209,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_210,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_211,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_212,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_213,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_214,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_215,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_216,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_217,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_218,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_219,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_220,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_221,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_222,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_223,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_224,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_225,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_226,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_227,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_228,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_229,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_230,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_231,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_232,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_233,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_234,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_235,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_236,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_237,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_238,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_239,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_240,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_241,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_242,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_243,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_244,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_245,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_246,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_247,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_248,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_249,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_250,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_251,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_252,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_253,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_254,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_255,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_256,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_257,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_258,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_259,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_260,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_261,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_262,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_263,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_264,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_265,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_266,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_267,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_268,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_269,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_270,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_271,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_272,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_273,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_274,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_275,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_276,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_277,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_278,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_279,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_280,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_281,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_282,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_283,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_284,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_285,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_286,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_287,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_288,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_289,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_290,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_291,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_292,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_293,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_294,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_295,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_296,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_297,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_298,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_299,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_300,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_301,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_302,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_303,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_304,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_305,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_306,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_307,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_308,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_309,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_310,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_311,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_312,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_313,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_314,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_315,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_316,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_317,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_318,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_319,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_320,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_321,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_322,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_323,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_324,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_325,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_326,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_327,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_328,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_329,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_330,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_331,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_332,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_333,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_334,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_335,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_336,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_337,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_338,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_339,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_340,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_341,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_342,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_343,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_344,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_345,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_346,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_347,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_348,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_349,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_350,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_351,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_352,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_353,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_354,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_355,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_356,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_357,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_358,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_359,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_360,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_361,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_362,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_363,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_364,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_365,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_366,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_367,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_368,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_369,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_370,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_371,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_372,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_373,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_374,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_375,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_376,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_377,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_378,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_379,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_380,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_381,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_382,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_383,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_384,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_385,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_386,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_387,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_388,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_389,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_390,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_391,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_392,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_393,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_394,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_395,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_396,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_397,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_398,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_399,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_400,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_401,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_402,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_403,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_404,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_405,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_406,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_407,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_408,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_409,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_410,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_411,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_412,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_413,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_414,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_415,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_416,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_417,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_418,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_419,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_420,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_421,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_422,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_423,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_424,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_425,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_426,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_427,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_428,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_429,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_430,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_431,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_432,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_433,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_434,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_435,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_436,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_437,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_438,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_439,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_440,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_441,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_442,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_443,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_444,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_445,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_446,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_447,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_448,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_449,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_450,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_451,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_452,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_453,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_454,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_455,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_456,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_457,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_458,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_459,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_460,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_461,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_462,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_463,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_464,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_465,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_466,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_467,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_468,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_469,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_470,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_471,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_472,
};
