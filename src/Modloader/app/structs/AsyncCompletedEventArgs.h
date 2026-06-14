#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncCompletedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncCompletedEventArgs_DEFINED)
#include <Modloader/app/structs/AsyncCompletedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncCompletedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncCompletedEventArgs_DEFINED
struct AsyncCompletedEventArgs__Class;
struct AsyncCompletedEventArgs {
    struct AsyncCompletedEventArgs__Class* klass;
    MonitorData* monitor;
    struct AsyncCompletedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncCompletedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_AsyncCompletedEventArgs_FWDDECL
#include <Modloader/app/structs/AsyncCompletedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncCompletedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_AsyncCompletedEventArgs_FWDDECL)
#include <Modloader/app/structs/AsyncCompletedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncCompletedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
