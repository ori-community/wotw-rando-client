#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AcceptTradeRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AcceptTradeRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcceptTradeRequest_DEFINED)
#include <Modloader/app/structs/AcceptTradeRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AcceptTradeRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AcceptTradeRequest_DEFINED
struct AcceptTradeRequest__Class;
struct AcceptTradeRequest {
    struct AcceptTradeRequest__Class* klass;
    MonitorData* monitor;
    struct AcceptTradeRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AcceptTradeRequest_FWDDECL)
#define IL2CPP_STRUCT_AcceptTradeRequest_FWDDECL
#include <Modloader/app/structs/AcceptTradeRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AcceptTradeRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcceptTradeRequest_DEFINED) && !defined(IL2CPP_STRUCT_AcceptTradeRequest_FWDDECL)
#include <Modloader/app/structs/AcceptTradeRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AcceptTradeRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
