#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CancelTradeRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CancelTradeRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancelTradeRequest_DEFINED)
#include <Modloader/app/structs/CancelTradeRequest__Fields.h>
#if defined(IL2CPP_STRUCT_CancelTradeRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_CancelTradeRequest_DEFINED
struct CancelTradeRequest__Class;
struct CancelTradeRequest {
    struct CancelTradeRequest__Class* klass;
    MonitorData* monitor;
    struct CancelTradeRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CancelTradeRequest_FWDDECL)
#define IL2CPP_STRUCT_CancelTradeRequest_FWDDECL
#include <Modloader/app/structs/CancelTradeRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_CancelTradeRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancelTradeRequest_DEFINED) && !defined(IL2CPP_STRUCT_CancelTradeRequest_FWDDECL)
#include <Modloader/app/structs/CancelTradeRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CancelTradeRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
