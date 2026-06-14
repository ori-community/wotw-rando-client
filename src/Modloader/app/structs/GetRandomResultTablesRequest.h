#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetRandomResultTablesRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetRandomResultTablesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetRandomResultTablesRequest_DEFINED)
#include <Modloader/app/structs/GetRandomResultTablesRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetRandomResultTablesRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetRandomResultTablesRequest_DEFINED
struct GetRandomResultTablesRequest__Class;
struct GetRandomResultTablesRequest {
    struct GetRandomResultTablesRequest__Class* klass;
    MonitorData* monitor;
    struct GetRandomResultTablesRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetRandomResultTablesRequest_FWDDECL)
#define IL2CPP_STRUCT_GetRandomResultTablesRequest_FWDDECL
#include <Modloader/app/structs/GetRandomResultTablesRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetRandomResultTablesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetRandomResultTablesRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetRandomResultTablesRequest_FWDDECL)
#include <Modloader/app/structs/GetRandomResultTablesRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetRandomResultTablesRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
