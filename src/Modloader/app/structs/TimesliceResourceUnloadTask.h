#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimesliceResourceUnloadTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimesliceResourceUnloadTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceResourceUnloadTask_DEFINED)
#include <Modloader/app/structs/TimesliceResourceUnloadTask__Fields.h>
#if defined(IL2CPP_STRUCT_TimesliceResourceUnloadTask__Fields_DEFINED)
#define IL2CPP_STRUCT_TimesliceResourceUnloadTask_DEFINED
struct TimesliceResourceUnloadTask__Class;
struct TimesliceResourceUnloadTask {
    struct TimesliceResourceUnloadTask__Class* klass;
    MonitorData* monitor;
    struct TimesliceResourceUnloadTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimesliceResourceUnloadTask_FWDDECL)
#define IL2CPP_STRUCT_TimesliceResourceUnloadTask_FWDDECL
#include <Modloader/app/structs/TimesliceResourceUnloadTask__Class.h>
#endif
#undef IL2CPP_STRUCT_TimesliceResourceUnloadTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceResourceUnloadTask_DEFINED) && !defined(IL2CPP_STRUCT_TimesliceResourceUnloadTask_FWDDECL)
#include <Modloader/app/structs/TimesliceResourceUnloadTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimesliceResourceUnloadTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
