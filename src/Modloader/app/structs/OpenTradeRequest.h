#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpenTradeRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpenTradeRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenTradeRequest_DEFINED)
#include <Modloader/app/structs/OpenTradeRequest__Fields.h>
#if defined(IL2CPP_STRUCT_OpenTradeRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_OpenTradeRequest_DEFINED
struct OpenTradeRequest__Class;
struct OpenTradeRequest {
    struct OpenTradeRequest__Class* klass;
    MonitorData* monitor;
    struct OpenTradeRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OpenTradeRequest_FWDDECL)
#define IL2CPP_STRUCT_OpenTradeRequest_FWDDECL
#include <Modloader/app/structs/OpenTradeRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_OpenTradeRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenTradeRequest_DEFINED) && !defined(IL2CPP_STRUCT_OpenTradeRequest_FWDDECL)
#include <Modloader/app/structs/OpenTradeRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpenTradeRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
