#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformingFXFunctionality__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformingFXFunctionality__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformingFXFunctionality__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformingFXFunctionality__Fields_DEFINED
struct TimeDistanceGate;
struct __declspec(align(8)) PlatformingFXFunctionality__Fields {
    float DistanceCooldown;
    float TimeCooldown;
    struct TimeDistanceGate* m_cooldownGate;
    struct TimeDistanceGate* m_footstepDetailsCooldownGate;
};
#endif
#if !defined(IL2CPP_STRUCT_PlatformingFXFunctionality__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlatformingFXFunctionality__Fields_FWDDECL
#include <Modloader/app/structs/TimeDistanceGate.h>
#endif
#undef IL2CPP_STRUCT_PlatformingFXFunctionality__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformingFXFunctionality__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlatformingFXFunctionality__Fields_FWDDECL)
#include <Modloader/app/structs/PlatformingFXFunctionality__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformingFXFunctionality__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
