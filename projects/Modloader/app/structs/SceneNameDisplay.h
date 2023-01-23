#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneNameDisplay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneNameDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneNameDisplay_DEFINED)
#include <Modloader/app/structs/SceneNameDisplay__Fields.h>
#if defined(IL2CPP_STRUCT_SceneNameDisplay__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneNameDisplay_DEFINED
struct SceneNameDisplay__Class;
struct SceneNameDisplay {
    struct SceneNameDisplay__Class* klass;
    MonitorData* monitor;
    struct SceneNameDisplay__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneNameDisplay_FWDDECL)
#define IL2CPP_STRUCT_SceneNameDisplay_FWDDECL
#include <Modloader/app/structs/SceneNameDisplay__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneNameDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneNameDisplay_DEFINED) && !defined(IL2CPP_STRUCT_SceneNameDisplay_FWDDECL)
#include <Modloader/app/structs/SceneNameDisplay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneNameDisplay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
