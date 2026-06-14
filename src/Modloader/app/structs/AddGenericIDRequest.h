#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddGenericIDRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddGenericIDRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddGenericIDRequest_DEFINED)
#include <Modloader/app/structs/AddGenericIDRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AddGenericIDRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AddGenericIDRequest_DEFINED
struct AddGenericIDRequest__Class;
struct AddGenericIDRequest {
    struct AddGenericIDRequest__Class* klass;
    MonitorData* monitor;
    struct AddGenericIDRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddGenericIDRequest_FWDDECL)
#define IL2CPP_STRUCT_AddGenericIDRequest_FWDDECL
#include <Modloader/app/structs/AddGenericIDRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AddGenericIDRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddGenericIDRequest_DEFINED) && !defined(IL2CPP_STRUCT_AddGenericIDRequest_FWDDECL)
#include <Modloader/app/structs/AddGenericIDRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddGenericIDRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
