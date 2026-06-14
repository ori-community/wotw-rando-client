#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneTracking_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneTracking_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneTracking_DEFINED)
#include <Modloader/app/structs/SceneTracking__Fields.h>
#if defined(IL2CPP_STRUCT_SceneTracking__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneTracking_DEFINED
struct SceneTracking__Class;
struct SceneTracking {
    struct SceneTracking__Class* klass;
    MonitorData* monitor;
    struct SceneTracking__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneTracking_FWDDECL)
#define IL2CPP_STRUCT_SceneTracking_FWDDECL
#include <Modloader/app/structs/SceneTracking__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneTracking_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneTracking_DEFINED) && !defined(IL2CPP_STRUCT_SceneTracking_FWDDECL)
#include <Modloader/app/structs/SceneTracking.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneTracking.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
