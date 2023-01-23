#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FireStick__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FireStick__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FireStick__Fields_DEFINED)
#include <Modloader/app/structs/FireStick_Usability__Enum.h>
#include <Modloader/app/structs/HoldableRigidBody__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/ThrowAnimationType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_HoldableRigidBody__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_ThrowAnimationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_FireStick_Usability__Enum_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_FireStick__Fields_DEFINED
struct SoundProvider;
struct GameObject;
struct MoonAnimation;
struct AnimationPostprocess;
struct Flammable;
struct CollisionBasedPrefabSpawner;
struct BaseAnimator;
struct Transform;
struct ActionSequence;
struct UberDelegate;
struct FireStick__Fields {
    struct HoldableRigidBody__Fields _;
    struct SoundProvider* IgniteSound;
    struct GameObject* Highlight;
    struct GameObject* GraphicsLitRed;
    struct GameObject* GraphicsLitBlue;
    struct GameObject* ExtinguishEffectPrefab;
    struct MoonAnimation* LightTorch;
    struct MoonAnimation* PlaceTorch;
    struct MoonAnimation* LightTorchFinish;
    struct MoonAnimation* PlaceTorchFinish;
    struct AnimationPostprocess* HoldTorchMask;
    float _CurrentHoldMaskTargetWeight_k__BackingField;
    float _CurrentHoldMaskBlendSpeed_k__BackingField;
    float HoldUpMaskTargetWeight;
    float HoldUpMaskBlendSpeed;
    float HoldCloseMaskTargetWeight;
    float HoldCloseMaskBlendSpeed;
    struct Flammable* Flame;
    struct GameObject* RedSparkPrefab;
    struct GameObject* BlueSparkPrefab;
    struct CollisionBasedPrefabSpawner* SparkSpawner;
    struct BaseAnimator* GlowTransparency;
    struct Transform* LightTransform;
    struct Transform* LightReferenceTransform;
    float ThrowVelocityMultiplier;
    struct Vector3 ThrowAngularVelocity;
    float Gravity;
    ThrowAnimationType__Enum ThrowAnimationType;

    float HoldMaskThrowBlendOutSpeed;
    struct SoundProvider* ThrowSoundProvider;
    struct Vector3 StickEulerInThrowingHand;
    struct ActionSequence* OnHitActionSequence;
    struct ActionSequence* OnBreakActionSequence;
    int32_t HitsToBreak;
    struct UberDelegate* OnUsed;
    FireStick_Usability__Enum m_usability;

    struct Vector3 m_interactorPosition;
    int32_t m_currentHits;
    struct Transform* m_previousParent;
    struct Quaternion m_previousRotation;
    struct Vector2 _PreviusPositionForWaterfallInteraction_k__BackingField;
    struct Rect Bounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FireStick__Fields_FWDDECL)
#define IL2CPP_STRUCT_FireStick__Fields_FWDDECL
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/CollisionBasedPrefabSpawner.h>
#include <Modloader/app/structs/Flammable.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberDelegate.h>
#endif
#undef IL2CPP_STRUCT_FireStick__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FireStick__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FireStick__Fields_FWDDECL)
#include <Modloader/app/structs/FireStick__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FireStick__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
