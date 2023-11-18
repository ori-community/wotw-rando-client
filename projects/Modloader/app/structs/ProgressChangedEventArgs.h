#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProgressChangedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProgressChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProgressChangedEventArgs_DEFINED)
#include <Modloader/app/structs/ProgressChangedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_ProgressChangedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_ProgressChangedEventArgs_DEFINED
struct ProgressChangedEventArgs__Class;
struct ProgressChangedEventArgs {
    struct ProgressChangedEventArgs__Class* klass;
    MonitorData* monitor;
    struct ProgressChangedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProgressChangedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_ProgressChangedEventArgs_FWDDECL
#include <Modloader/app/structs/ProgressChangedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_ProgressChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProgressChangedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_ProgressChangedEventArgs_FWDDECL)
#include <Modloader/app/structs/ProgressChangedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProgressChangedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
