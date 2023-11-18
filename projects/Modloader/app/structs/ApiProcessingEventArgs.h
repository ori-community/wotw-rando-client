#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApiProcessingEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApiProcessingEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApiProcessingEventArgs_DEFINED)
#include <Modloader/app/structs/ApiProcessingEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_ApiProcessingEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_ApiProcessingEventArgs_DEFINED
struct ApiProcessingEventArgs__Class;
struct ApiProcessingEventArgs {
    struct ApiProcessingEventArgs__Class* klass;
    MonitorData* monitor;
    struct ApiProcessingEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ApiProcessingEventArgs_FWDDECL)
#define IL2CPP_STRUCT_ApiProcessingEventArgs_FWDDECL
#include <Modloader/app/structs/ApiProcessingEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_ApiProcessingEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApiProcessingEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_ApiProcessingEventArgs_FWDDECL)
#include <Modloader/app/structs/ApiProcessingEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApiProcessingEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
