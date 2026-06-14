#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRApplicationTransitionState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRApplicationTransitionState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRApplicationTransitionState__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRApplicationTransitionState__Enum_DEFINED
enum class EVRApplicationTransitionState__Enum : int32_t {
    VRApplicationTransition_None = 0x00000000,
    VRApplicationTransition_OldAppQuitSent = 0x0000000a,
    VRApplicationTransition_WaitingForExternalLaunch = 0x0000000b,
    VRApplicationTransition_NewAppLaunched = 0x00000014,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRApplicationTransitionState__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRApplicationTransitionState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRApplicationTransitionState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRApplicationTransitionState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRApplicationTransitionState__Enum_FWDDECL)
#include <Modloader/app/structs/EVRApplicationTransitionState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRApplicationTransitionState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
