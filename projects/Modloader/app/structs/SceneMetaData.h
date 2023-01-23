#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneMetaData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneMetaData_DEFINED)
#include <Modloader/app/structs/SceneMetaData__Fields.h>
#if defined(IL2CPP_STRUCT_SceneMetaData__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneMetaData_DEFINED
struct SceneMetaData__Class;
struct SceneMetaData {
    struct SceneMetaData__Class* klass;
    MonitorData* monitor;
    struct SceneMetaData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneMetaData_FWDDECL)
#define IL2CPP_STRUCT_SceneMetaData_FWDDECL
#include <Modloader/app/structs/SceneMetaData__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneMetaData_DEFINED) && !defined(IL2CPP_STRUCT_SceneMetaData_FWDDECL)
#include <Modloader/app/structs/SceneMetaData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneMetaData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
