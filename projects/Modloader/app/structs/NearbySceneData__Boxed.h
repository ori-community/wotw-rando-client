#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NearbySceneData__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NearbySceneData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_NearbySceneData__Boxed_DEFINED)
#include <Modloader/app/structs/NearbySceneData.h>
#if defined(IL2CPP_STRUCT_NearbySceneData_DEFINED)
#define IL2CPP_STRUCT_NearbySceneData__Boxed_DEFINED
struct NearbySceneData__Class;
struct NearbySceneData__Boxed {
    struct NearbySceneData__Class* klass;
    MonitorData* monitor;
    struct NearbySceneData fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NearbySceneData__Boxed_FWDDECL)
#define IL2CPP_STRUCT_NearbySceneData__Boxed_FWDDECL
#include <Modloader/app/structs/NearbySceneData__Class.h>
#endif
#undef IL2CPP_STRUCT_NearbySceneData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_NearbySceneData__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_NearbySceneData__Boxed_FWDDECL)
#include <Modloader/app/structs/NearbySceneData__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NearbySceneData__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
