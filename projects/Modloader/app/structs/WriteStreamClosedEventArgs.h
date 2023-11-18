#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteStreamClosedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteStreamClosedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteStreamClosedEventArgs_DEFINED)
#define IL2CPP_STRUCT_WriteStreamClosedEventArgs_DEFINED
struct WriteStreamClosedEventArgs__Class;
struct WriteStreamClosedEventArgs {
    struct WriteStreamClosedEventArgs__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WriteStreamClosedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_WriteStreamClosedEventArgs_FWDDECL
#include <Modloader/app/structs/WriteStreamClosedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_WriteStreamClosedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteStreamClosedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_WriteStreamClosedEventArgs_FWDDECL)
#include <Modloader/app/structs/WriteStreamClosedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteStreamClosedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
