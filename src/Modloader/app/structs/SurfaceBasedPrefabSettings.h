#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SurfaceBasedPrefabSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SurfaceBasedPrefabSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceBasedPrefabSettings_DEFINED)
#include <Modloader/app/structs/SurfaceBasedPrefabSettings__Fields.h>
#if defined(IL2CPP_STRUCT_SurfaceBasedPrefabSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_SurfaceBasedPrefabSettings_DEFINED
struct SurfaceBasedPrefabSettings__Class;
struct SurfaceBasedPrefabSettings {
    struct SurfaceBasedPrefabSettings__Class* klass;
    MonitorData* monitor;
    struct SurfaceBasedPrefabSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SurfaceBasedPrefabSettings_FWDDECL)
#define IL2CPP_STRUCT_SurfaceBasedPrefabSettings_FWDDECL
#include <Modloader/app/structs/SurfaceBasedPrefabSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_SurfaceBasedPrefabSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceBasedPrefabSettings_DEFINED) && !defined(IL2CPP_STRUCT_SurfaceBasedPrefabSettings_FWDDECL)
#include <Modloader/app/structs/SurfaceBasedPrefabSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SurfaceBasedPrefabSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
