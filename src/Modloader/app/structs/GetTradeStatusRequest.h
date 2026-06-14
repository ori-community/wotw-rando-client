#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetTradeStatusRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetTradeStatusRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTradeStatusRequest_DEFINED)
#include <Modloader/app/structs/GetTradeStatusRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetTradeStatusRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetTradeStatusRequest_DEFINED
struct GetTradeStatusRequest__Class;
struct GetTradeStatusRequest {
    struct GetTradeStatusRequest__Class* klass;
    MonitorData* monitor;
    struct GetTradeStatusRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetTradeStatusRequest_FWDDECL)
#define IL2CPP_STRUCT_GetTradeStatusRequest_FWDDECL
#include <Modloader/app/structs/GetTradeStatusRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetTradeStatusRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTradeStatusRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetTradeStatusRequest_FWDDECL)
#include <Modloader/app/structs/GetTradeStatusRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetTradeStatusRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
