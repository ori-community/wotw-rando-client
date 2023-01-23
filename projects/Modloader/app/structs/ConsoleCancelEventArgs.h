#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConsoleCancelEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConsoleCancelEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleCancelEventArgs_DEFINED)
#include <Modloader/app/structs/ConsoleCancelEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_ConsoleCancelEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_ConsoleCancelEventArgs_DEFINED
struct ConsoleCancelEventArgs__Class;
struct ConsoleCancelEventArgs {
    struct ConsoleCancelEventArgs__Class* klass;
    MonitorData* monitor;
    struct ConsoleCancelEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConsoleCancelEventArgs_FWDDECL)
#define IL2CPP_STRUCT_ConsoleCancelEventArgs_FWDDECL
#include <Modloader/app/structs/ConsoleCancelEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_ConsoleCancelEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleCancelEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_ConsoleCancelEventArgs_FWDDECL)
#include <Modloader/app/structs/ConsoleCancelEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConsoleCancelEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
