#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRResources_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRResources_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRResources_DEFINED)
#define IL2CPP_STRUCT_IVRResources_DEFINED
struct IVRResources_LoadSharedResource;
struct IVRResources_GetResourceFullPath;
struct IVRResources {
    struct IVRResources_LoadSharedResource* LoadSharedResource;
    struct IVRResources_GetResourceFullPath* GetResourceFullPath;
};
#endif
#if !defined(IL2CPP_STRUCT_IVRResources_FWDDECL)
#define IL2CPP_STRUCT_IVRResources_FWDDECL
#include <Modloader/app/structs/IVRResources_GetResourceFullPath.h>
#include <Modloader/app/structs/IVRResources_LoadSharedResource.h>
#endif
#undef IL2CPP_STRUCT_IVRResources_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRResources_DEFINED) && !defined(IL2CPP_STRUCT_IVRResources_FWDDECL)
#include <Modloader/app/structs/IVRResources.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRResources.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
