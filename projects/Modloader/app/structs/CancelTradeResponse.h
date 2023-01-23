#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CancelTradeResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CancelTradeResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancelTradeResponse_DEFINED)
#include <Modloader/app/structs/CancelTradeResponse__Fields.h>
#if defined(IL2CPP_STRUCT_CancelTradeResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_CancelTradeResponse_DEFINED
struct CancelTradeResponse__Class;
struct CancelTradeResponse {
    struct CancelTradeResponse__Class* klass;
    MonitorData* monitor;
    struct CancelTradeResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CancelTradeResponse_FWDDECL)
#define IL2CPP_STRUCT_CancelTradeResponse_FWDDECL
#include <Modloader/app/structs/CancelTradeResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_CancelTradeResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancelTradeResponse_DEFINED) && !defined(IL2CPP_STRUCT_CancelTradeResponse_FWDDECL)
#include <Modloader/app/structs/CancelTradeResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CancelTradeResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
