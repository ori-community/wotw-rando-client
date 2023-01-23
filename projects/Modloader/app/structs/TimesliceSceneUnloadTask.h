#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimesliceSceneUnloadTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimesliceSceneUnloadTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceSceneUnloadTask_DEFINED)
#include <Modloader/app/structs/TimesliceSceneUnloadTask__Fields.h>
#if defined(IL2CPP_STRUCT_TimesliceSceneUnloadTask__Fields_DEFINED)
#define IL2CPP_STRUCT_TimesliceSceneUnloadTask_DEFINED
struct TimesliceSceneUnloadTask__Class;
struct TimesliceSceneUnloadTask {
    struct TimesliceSceneUnloadTask__Class* klass;
    MonitorData* monitor;
    struct TimesliceSceneUnloadTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimesliceSceneUnloadTask_FWDDECL)
#define IL2CPP_STRUCT_TimesliceSceneUnloadTask_FWDDECL
#include <Modloader/app/structs/TimesliceSceneUnloadTask__Class.h>
#endif
#undef IL2CPP_STRUCT_TimesliceSceneUnloadTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceSceneUnloadTask_DEFINED) && !defined(IL2CPP_STRUCT_TimesliceSceneUnloadTask_FWDDECL)
#include <Modloader/app/structs/TimesliceSceneUnloadTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimesliceSceneUnloadTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
