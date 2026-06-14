#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingTester_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTester_DEFINED)
#include <Modloader/app/structs/SceneLoadingTester__Fields.h>
#if defined(IL2CPP_STRUCT_SceneLoadingTester__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingTester_DEFINED
struct SceneLoadingTester__Class;
struct SceneLoadingTester {
    struct SceneLoadingTester__Class* klass;
    MonitorData* monitor;
    struct SceneLoadingTester__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingTester_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingTester_FWDDECL
#include <Modloader/app/structs/SceneLoadingTester__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTester_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingTester_FWDDECL)
#include <Modloader/app/structs/SceneLoadingTester.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingTester.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
