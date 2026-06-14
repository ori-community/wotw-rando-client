#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnloadTexturesTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnloadTexturesTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnloadTexturesTask_DEFINED)
#include <Modloader/app/structs/UnloadTexturesTask__Fields.h>
#if defined(IL2CPP_STRUCT_UnloadTexturesTask__Fields_DEFINED)
#define IL2CPP_STRUCT_UnloadTexturesTask_DEFINED
struct UnloadTexturesTask__Class;
struct UnloadTexturesTask {
    struct UnloadTexturesTask__Class* klass;
    MonitorData* monitor;
    struct UnloadTexturesTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnloadTexturesTask_FWDDECL)
#define IL2CPP_STRUCT_UnloadTexturesTask_FWDDECL
#include <Modloader/app/structs/UnloadTexturesTask__Class.h>
#endif
#undef IL2CPP_STRUCT_UnloadTexturesTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnloadTexturesTask_DEFINED) && !defined(IL2CPP_STRUCT_UnloadTexturesTask_FWDDECL)
#include <Modloader/app/structs/UnloadTexturesTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnloadTexturesTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
