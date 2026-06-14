#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpenWriteCompletedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpenWriteCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenWriteCompletedEventArgs_DEFINED)
#include <Modloader/app/structs/OpenWriteCompletedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_OpenWriteCompletedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_OpenWriteCompletedEventArgs_DEFINED
struct OpenWriteCompletedEventArgs__Class;
struct OpenWriteCompletedEventArgs {
    struct OpenWriteCompletedEventArgs__Class* klass;
    MonitorData* monitor;
    struct OpenWriteCompletedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OpenWriteCompletedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_OpenWriteCompletedEventArgs_FWDDECL
#include <Modloader/app/structs/OpenWriteCompletedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_OpenWriteCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenWriteCompletedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_OpenWriteCompletedEventArgs_FWDDECL)
#include <Modloader/app/structs/OpenWriteCompletedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpenWriteCompletedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
