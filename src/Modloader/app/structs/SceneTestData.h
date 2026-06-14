#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneTestData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneTestData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneTestData_DEFINED)
#include <Modloader/app/structs/SceneTestData__Fields.h>
#if defined(IL2CPP_STRUCT_SceneTestData__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneTestData_DEFINED
struct SceneTestData__Class;
struct SceneTestData {
    struct SceneTestData__Class* klass;
    MonitorData* monitor;
    struct SceneTestData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneTestData_FWDDECL)
#define IL2CPP_STRUCT_SceneTestData_FWDDECL
#include <Modloader/app/structs/SceneTestData__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneTestData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneTestData_DEFINED) && !defined(IL2CPP_STRUCT_SceneTestData_FWDDECL)
#include <Modloader/app/structs/SceneTestData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneTestData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
