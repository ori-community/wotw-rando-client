#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Task_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Task_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_DEFINED)
#include <Modloader/app/structs/Task__Fields.h>
#if defined(IL2CPP_STRUCT_Task__Fields_DEFINED)
#define IL2CPP_STRUCT_Task_DEFINED
struct Task__Class;
struct Task {
    struct Task__Class* klass;
    MonitorData* monitor;
    struct Task__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Task_FWDDECL)
#define IL2CPP_STRUCT_Task_FWDDECL
#include <Modloader/app/structs/Task__Class.h>
#endif
#undef IL2CPP_STRUCT_Task_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_DEFINED) && !defined(IL2CPP_STRUCT_Task_FWDDECL)
#include <Modloader/app/structs/Task.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Task.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
