#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingTest_Context_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingTest_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_Context_DEFINED)
#include <Modloader/app/structs/SceneLoadingTest_Context__Fields.h>
#if defined(IL2CPP_STRUCT_SceneLoadingTest_Context__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingTest_Context_DEFINED
struct SceneLoadingTest_Context__Class;
struct SceneLoadingTest_Context {
    struct SceneLoadingTest_Context__Class* klass;
    MonitorData* monitor;
    struct SceneLoadingTest_Context__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_Context_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingTest_Context_FWDDECL
#include <Modloader/app/structs/SceneLoadingTest_Context__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingTest_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_Context_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingTest_Context_FWDDECL)
#include <Modloader/app/structs/SceneLoadingTest_Context.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingTest_Context.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
