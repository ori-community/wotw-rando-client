#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumperEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumperEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEntity__Fields_DEFINED)
#include <Modloader/app/structs/FloatFraction.h>
#include <Modloader/app/structs/GroundMovingEntity__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_GroundMovingEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_FloatFraction_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_JumperEntity__Fields_DEFINED
struct Transform;
struct IKLimb__Array;
struct Collider;
struct JumperEntity__Fields {
    struct GroundMovingEntity__Fields _;
    struct Transform* agent;
    bool isOnScreen;
    float onScreenDelay;
    float m_onScreenTime;
    struct FloatFraction AggroTimer;
    struct FloatFraction Stamina;
    float StaminaRegenRate;
    struct Vector2 damageSpeed;
    struct IKLimb__Array* limbsIK;
    struct Collider* Collider;
    struct LayerMask obstacleMask;
    float IKWeight;
    bool _Aggro_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumperEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_JumperEntity__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/IKLimb__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_JumperEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JumperEntity__Fields_FWDDECL)
#include <Modloader/app/structs/JumperEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumperEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
