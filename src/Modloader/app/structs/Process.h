#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Process_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Process_INITIALIZING
#if !defined(IL2CPP_STRUCT_Process_DEFINED)
#include <Modloader/app/structs/Process__Fields.h>
#if defined(IL2CPP_STRUCT_Process__Fields_DEFINED)
#define IL2CPP_STRUCT_Process_DEFINED
struct Process__Class;
struct Process {
    struct Process__Class* klass;
    MonitorData* monitor;
    struct Process__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Process_FWDDECL)
#define IL2CPP_STRUCT_Process_FWDDECL
#include <Modloader/app/structs/Process__Class.h>
#endif
#undef IL2CPP_STRUCT_Process_INITIALIZING
#if !defined(IL2CPP_STRUCT_Process_DEFINED) && !defined(IL2CPP_STRUCT_Process_FWDDECL)
#include <Modloader/app/structs/Process.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Process.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
