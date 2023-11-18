#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRRenderModels_GetComponentStateUnion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRRenderModels_GetComponentStateUnion_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRRenderModels_GetComponentStateUnion_DEFINED)
#define IL2CPP_STRUCT_CVRRenderModels_GetComponentStateUnion_DEFINED
struct IVRRenderModels_GetComponentState;
struct CVRRenderModels_GetComponentStatePacked;
struct CVRRenderModels_GetComponentStateUnion {
    struct IVRRenderModels_GetComponentState* pGetComponentState;
    struct CVRRenderModels_GetComponentStatePacked* pGetComponentStatePacked;
};
#endif
#if !defined(IL2CPP_STRUCT_CVRRenderModels_GetComponentStateUnion_FWDDECL)
#define IL2CPP_STRUCT_CVRRenderModels_GetComponentStateUnion_FWDDECL
#include <Modloader/app/structs/CVRRenderModels_GetComponentStatePacked.h>
#include <Modloader/app/structs/IVRRenderModels_GetComponentState.h>
#endif
#undef IL2CPP_STRUCT_CVRRenderModels_GetComponentStateUnion_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRRenderModels_GetComponentStateUnion_DEFINED) && !defined(IL2CPP_STRUCT_CVRRenderModels_GetComponentStateUnion_FWDDECL)
#include <Modloader/app/structs/CVRRenderModels_GetComponentStateUnion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRRenderModels_GetComponentStateUnion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
