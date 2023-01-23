#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListQosServersResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListQosServersResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListQosServersResponse_DEFINED)
#include <Modloader/app/structs/ListQosServersResponse__Fields.h>
#if defined(IL2CPP_STRUCT_ListQosServersResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_ListQosServersResponse_DEFINED
struct ListQosServersResponse__Class;
struct ListQosServersResponse {
    struct ListQosServersResponse__Class* klass;
    MonitorData* monitor;
    struct ListQosServersResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListQosServersResponse_FWDDECL)
#define IL2CPP_STRUCT_ListQosServersResponse_FWDDECL
#include <Modloader/app/structs/ListQosServersResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_ListQosServersResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListQosServersResponse_DEFINED) && !defined(IL2CPP_STRUCT_ListQosServersResponse_FWDDECL)
#include <Modloader/app/structs/ListQosServersResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListQosServersResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
