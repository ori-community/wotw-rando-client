#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinEvents_AbilityEvents__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinEvents_AbilityEvents__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEvents_AbilityEvents__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinEvents_AbilityEvents__Fields_DEFINED
struct Action;
struct __declspec(align(8)) SeinEvents_AbilityEvents__Fields {
    struct Action* OnPreDashPerform;
    struct Action* OnDashPerform;
    struct Action* OnWallJumpPerform;
    struct Action* OnQuickGlowStarted;
    struct Action* OnSpiritLeashEnded;
    struct Action* OnGrabSurface;
    struct Action* OnWentThroughDoor;
    struct Action* OnPreChargeJumpAim;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinEvents_AbilityEvents__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinEvents_AbilityEvents__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_SeinEvents_AbilityEvents__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEvents_AbilityEvents__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinEvents_AbilityEvents__Fields_FWDDECL)
#include <Modloader/app/structs/SeinEvents_AbilityEvents__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinEvents_AbilityEvents__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
