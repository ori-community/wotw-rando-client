#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HandledEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HandledEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandledEventArgs_DEFINED)
#include <Modloader/app/structs/HandledEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_HandledEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_HandledEventArgs_DEFINED
struct HandledEventArgs__Class;
struct HandledEventArgs {
    struct HandledEventArgs__Class* klass;
    MonitorData* monitor;
    struct HandledEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HandledEventArgs_FWDDECL)
#define IL2CPP_STRUCT_HandledEventArgs_FWDDECL
#include <Modloader/app/structs/HandledEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_HandledEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandledEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_HandledEventArgs_FWDDECL)
#include <Modloader/app/structs/HandledEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HandledEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
