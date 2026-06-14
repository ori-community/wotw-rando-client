#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoWorkEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoWorkEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoWorkEventArgs_DEFINED)
#include <Modloader/app/structs/DoWorkEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_DoWorkEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_DoWorkEventArgs_DEFINED
struct DoWorkEventArgs__Class;
struct DoWorkEventArgs {
    struct DoWorkEventArgs__Class* klass;
    MonitorData* monitor;
    struct DoWorkEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoWorkEventArgs_FWDDECL)
#define IL2CPP_STRUCT_DoWorkEventArgs_FWDDECL
#include <Modloader/app/structs/DoWorkEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_DoWorkEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoWorkEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_DoWorkEventArgs_FWDDECL)
#include <Modloader/app/structs/DoWorkEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoWorkEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
