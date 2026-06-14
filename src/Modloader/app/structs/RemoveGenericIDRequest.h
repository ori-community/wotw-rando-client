#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoveGenericIDRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoveGenericIDRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveGenericIDRequest_DEFINED)
#include <Modloader/app/structs/RemoveGenericIDRequest__Fields.h>
#if defined(IL2CPP_STRUCT_RemoveGenericIDRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoveGenericIDRequest_DEFINED
struct RemoveGenericIDRequest__Class;
struct RemoveGenericIDRequest {
    struct RemoveGenericIDRequest__Class* klass;
    MonitorData* monitor;
    struct RemoveGenericIDRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoveGenericIDRequest_FWDDECL)
#define IL2CPP_STRUCT_RemoveGenericIDRequest_FWDDECL
#include <Modloader/app/structs/RemoveGenericIDRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoveGenericIDRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveGenericIDRequest_DEFINED) && !defined(IL2CPP_STRUCT_RemoveGenericIDRequest_FWDDECL)
#include <Modloader/app/structs/RemoveGenericIDRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoveGenericIDRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
