#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeSceneMetaData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeSceneMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeSceneMetaData_DEFINED)
#include <Modloader/app/structs/RuntimeSceneMetaData__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeSceneMetaData__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeSceneMetaData_DEFINED
struct RuntimeSceneMetaData__Class;
struct RuntimeSceneMetaData {
    struct RuntimeSceneMetaData__Class* klass;
    MonitorData* monitor;
    struct RuntimeSceneMetaData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeSceneMetaData_FWDDECL)
#define IL2CPP_STRUCT_RuntimeSceneMetaData_FWDDECL
#include <Modloader/app/structs/RuntimeSceneMetaData__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeSceneMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeSceneMetaData_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeSceneMetaData_FWDDECL)
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
