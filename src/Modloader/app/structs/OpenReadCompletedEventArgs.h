#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpenReadCompletedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpenReadCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenReadCompletedEventArgs_DEFINED)
#include <Modloader/app/structs/OpenReadCompletedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_OpenReadCompletedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_OpenReadCompletedEventArgs_DEFINED
struct OpenReadCompletedEventArgs__Class;
struct OpenReadCompletedEventArgs {
    struct OpenReadCompletedEventArgs__Class* klass;
    MonitorData* monitor;
    struct OpenReadCompletedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OpenReadCompletedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_OpenReadCompletedEventArgs_FWDDECL
#include <Modloader/app/structs/OpenReadCompletedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_OpenReadCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenReadCompletedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_OpenReadCompletedEventArgs_FWDDECL)
#include <Modloader/app/structs/OpenReadCompletedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpenReadCompletedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
