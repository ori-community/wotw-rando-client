#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinInteraction_ThrownKeystone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinInteraction_ThrownKeystone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInteraction_ThrownKeystone__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinInteraction_ThrownKeystone__Fields_DEFINED
struct GameObject;
struct AnimationCurve;
struct __declspec(align(8)) SeinInteraction_ThrownKeystone__Fields {
    struct Vector3 KeystoneTarget;
    struct GameObject* Keystone;
    float KeystoneSpeed;
    struct Vector3 StartPosition;
    float m_value;
    struct AnimationCurve* TrajectoryX;
    struct AnimationCurve* TrajectoryY;
    float Multiplier;
    bool UseLeftHand;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinInteraction_ThrownKeystone__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinInteraction_ThrownKeystone__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_SeinInteraction_ThrownKeystone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInteraction_ThrownKeystone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinInteraction_ThrownKeystone__Fields_FWDDECL)
#include <Modloader/app/structs/SeinInteraction_ThrownKeystone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinInteraction_ThrownKeystone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
