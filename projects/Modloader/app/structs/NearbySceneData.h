#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NearbySceneData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NearbySceneData_INITIALIZING
#if !defined(IL2CPP_STRUCT_NearbySceneData_DEFINED)
#define IL2CPP_STRUCT_NearbySceneData_DEFINED
struct MoonGuid;
struct RuntimeSceneMetaData;
struct NearbySceneData {
    struct MoonGuid* SceneGuid;
    struct RuntimeSceneMetaData* MetaData;
    int32_t Hops;
};
#endif
#if !defined(IL2CPP_STRUCT_NearbySceneData_FWDDECL)
#define IL2CPP_STRUCT_NearbySceneData_FWDDECL
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_NearbySceneData_INITIALIZING
#if !defined(IL2CPP_STRUCT_NearbySceneData_DEFINED) && !defined(IL2CPP_STRUCT_NearbySceneData_FWDDECL)
#include <Modloader/app/structs/NearbySceneData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NearbySceneData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
