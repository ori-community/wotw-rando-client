#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneInspector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneInspector_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneInspector_DEFINED)
#include <Modloader/app/structs/SceneInspector__Fields.h>
#if defined(IL2CPP_STRUCT_SceneInspector__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneInspector_DEFINED
struct SceneInspector__Class;
struct SceneInspector {
    struct SceneInspector__Class* klass;
    MonitorData* monitor;
    struct SceneInspector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneInspector_FWDDECL)
#define IL2CPP_STRUCT_SceneInspector_FWDDECL
#include <Modloader/app/structs/SceneInspector__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneInspector_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneInspector_DEFINED) && !defined(IL2CPP_STRUCT_SceneInspector_FWDDECL)
#include <Modloader/app/structs/SceneInspector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneInspector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
