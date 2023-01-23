#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRSystem_GetControllerStateUnion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRSystem_GetControllerStateUnion_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRSystem_GetControllerStateUnion_DEFINED)
#define IL2CPP_STRUCT_CVRSystem_GetControllerStateUnion_DEFINED
struct IVRSystem_GetControllerState;
struct CVRSystem_GetControllerStatePacked;
struct CVRSystem_GetControllerStateUnion {
    struct IVRSystem_GetControllerState* pGetControllerState;
    struct CVRSystem_GetControllerStatePacked* pGetControllerStatePacked;
};
#endif
#if !defined(IL2CPP_STRUCT_CVRSystem_GetControllerStateUnion_FWDDECL)
#define IL2CPP_STRUCT_CVRSystem_GetControllerStateUnion_FWDDECL
#include <Modloader/app/structs/CVRSystem_GetControllerStatePacked.h>
#include <Modloader/app/structs/IVRSystem_GetControllerState.h>
#endif
#undef IL2CPP_STRUCT_CVRSystem_GetControllerStateUnion_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRSystem_GetControllerStateUnion_DEFINED) && !defined(IL2CPP_STRUCT_CVRSystem_GetControllerStateUnion_FWDDECL)
#include <Modloader/app/structs/CVRSystem_GetControllerStateUnion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRSystem_GetControllerStateUnion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
