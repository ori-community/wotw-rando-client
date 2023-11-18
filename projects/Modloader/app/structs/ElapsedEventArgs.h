#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ElapsedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ElapsedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElapsedEventArgs_DEFINED)
#include <Modloader/app/structs/ElapsedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_ElapsedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_ElapsedEventArgs_DEFINED
struct ElapsedEventArgs__Class;
struct ElapsedEventArgs {
    struct ElapsedEventArgs__Class* klass;
    MonitorData* monitor;
    struct ElapsedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ElapsedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_ElapsedEventArgs_FWDDECL
#include <Modloader/app/structs/ElapsedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_ElapsedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElapsedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_ElapsedEventArgs_FWDDECL)
#include <Modloader/app/structs/ElapsedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ElapsedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
