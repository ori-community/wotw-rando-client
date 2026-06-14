#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneTrackingChange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneTrackingChange_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneTrackingChange_DEFINED)
#include <Modloader/app/structs/SceneTrackingChange__Fields.h>
#if defined(IL2CPP_STRUCT_SceneTrackingChange__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneTrackingChange_DEFINED
struct SceneTrackingChange__Class;
struct SceneTrackingChange {
    struct SceneTrackingChange__Class* klass;
    MonitorData* monitor;
    struct SceneTrackingChange__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneTrackingChange_FWDDECL)
#define IL2CPP_STRUCT_SceneTrackingChange_FWDDECL
#include <Modloader/app/structs/SceneTrackingChange__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneTrackingChange_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneTrackingChange_DEFINED) && !defined(IL2CPP_STRUCT_SceneTrackingChange_FWDDECL)
#include <Modloader/app/structs/SceneTrackingChange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneTrackingChange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
