#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneWarning_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneWarning_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneWarning_DEFINED)
#include <Modloader/app/structs/SceneWarning__Fields.h>
#if defined(IL2CPP_STRUCT_SceneWarning__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneWarning_DEFINED
struct SceneWarning__Class;
struct SceneWarning {
    struct SceneWarning__Class* klass;
    MonitorData* monitor;
    struct SceneWarning__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneWarning_FWDDECL)
#define IL2CPP_STRUCT_SceneWarning_FWDDECL
#include <Modloader/app/structs/SceneWarning__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneWarning_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneWarning_DEFINED) && !defined(IL2CPP_STRUCT_SceneWarning_FWDDECL)
#include <Modloader/app/structs/SceneWarning.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneWarning.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
