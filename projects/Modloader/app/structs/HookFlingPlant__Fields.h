#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HookFlingPlant__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HookFlingPlant__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HookFlingPlant__Fields_DEFINED)
#include <Modloader/app/structs/LegacySpiritLeashHook__Fields.h>
#if defined(IL2CPP_STRUCT_LegacySpiritLeashHook__Fields_DEFINED)
#define IL2CPP_STRUCT_HookFlingPlant__Fields_DEFINED
struct SeinSpiritLeashAbility;
struct Transform;
struct Rigidbody;
struct HookFlingPlant__Fields {
    struct LegacySpiritLeashHook__Fields _;
    struct SeinSpiritLeashAbility* m_leash;
    struct Transform* HookTarget;
    float PullForce;
    float PullForceVerticalScale;
    float OriRequiredDistance;
    struct Rigidbody* m_rigidbody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HookFlingPlant__Fields_FWDDECL)
#define IL2CPP_STRUCT_HookFlingPlant__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_HookFlingPlant__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HookFlingPlant__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HookFlingPlant__Fields_FWDDECL)
#include <Modloader/app/structs/HookFlingPlant__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HookFlingPlant__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
