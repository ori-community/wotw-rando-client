#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneScreenshot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneScreenshot_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneScreenshot_DEFINED)
#include <Modloader/app/structs/SceneScreenshot__Fields.h>
#if defined(IL2CPP_STRUCT_SceneScreenshot__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneScreenshot_DEFINED
struct SceneScreenshot__Class;
struct SceneScreenshot {
    struct SceneScreenshot__Class* klass;
    MonitorData* monitor;
    struct SceneScreenshot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneScreenshot_FWDDECL)
#define IL2CPP_STRUCT_SceneScreenshot_FWDDECL
#include <Modloader/app/structs/SceneScreenshot__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneScreenshot_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneScreenshot_DEFINED) && !defined(IL2CPP_STRUCT_SceneScreenshot_FWDDECL)
#include <Modloader/app/structs/SceneScreenshot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneScreenshot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
