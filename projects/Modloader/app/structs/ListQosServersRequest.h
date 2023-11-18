#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListQosServersRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListQosServersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListQosServersRequest_DEFINED)
#include <Modloader/app/structs/ListQosServersRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ListQosServersRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ListQosServersRequest_DEFINED
struct ListQosServersRequest__Class;
struct ListQosServersRequest {
    struct ListQosServersRequest__Class* klass;
    MonitorData* monitor;
    struct ListQosServersRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListQosServersRequest_FWDDECL)
#define IL2CPP_STRUCT_ListQosServersRequest_FWDDECL
#include <Modloader/app/structs/ListQosServersRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ListQosServersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListQosServersRequest_DEFINED) && !defined(IL2CPP_STRUCT_ListQosServersRequest_FWDDECL)
#include <Modloader/app/structs/ListQosServersRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListQosServersRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
