#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FirstChanceExceptionEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FirstChanceExceptionEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_FirstChanceExceptionEventArgs_DEFINED)
#define IL2CPP_STRUCT_FirstChanceExceptionEventArgs_DEFINED
struct FirstChanceExceptionEventArgs__Class;
struct FirstChanceExceptionEventArgs {
    struct FirstChanceExceptionEventArgs__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FirstChanceExceptionEventArgs_FWDDECL)
#define IL2CPP_STRUCT_FirstChanceExceptionEventArgs_FWDDECL
#include <Modloader/app/structs/FirstChanceExceptionEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_FirstChanceExceptionEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_FirstChanceExceptionEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_FirstChanceExceptionEventArgs_FWDDECL)
#include <Modloader/app/structs/FirstChanceExceptionEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FirstChanceExceptionEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
