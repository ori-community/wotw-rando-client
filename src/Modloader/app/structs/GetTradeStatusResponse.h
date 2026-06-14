#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetTradeStatusResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetTradeStatusResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTradeStatusResponse_DEFINED)
#include <Modloader/app/structs/GetTradeStatusResponse__Fields.h>
#if defined(IL2CPP_STRUCT_GetTradeStatusResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_GetTradeStatusResponse_DEFINED
struct GetTradeStatusResponse__Class;
struct GetTradeStatusResponse {
    struct GetTradeStatusResponse__Class* klass;
    MonitorData* monitor;
    struct GetTradeStatusResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetTradeStatusResponse_FWDDECL)
#define IL2CPP_STRUCT_GetTradeStatusResponse_FWDDECL
#include <Modloader/app/structs/GetTradeStatusResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_GetTradeStatusResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTradeStatusResponse_DEFINED) && !defined(IL2CPP_STRUCT_GetTradeStatusResponse_FWDDECL)
#include <Modloader/app/structs/GetTradeStatusResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetTradeStatusResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
