#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingTest_DEFINED
struct SceneLoadingTest__Class;
struct SceneLoadingTest {
    struct SceneLoadingTest__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingTest_FWDDECL
#include <Modloader/app/structs/SceneLoadingTest__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingTest_FWDDECL)
#include <Modloader/app/structs/SceneLoadingTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
