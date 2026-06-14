#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AcceptTradeResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AcceptTradeResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcceptTradeResponse_DEFINED)
#include <Modloader/app/structs/AcceptTradeResponse__Fields.h>
#if defined(IL2CPP_STRUCT_AcceptTradeResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_AcceptTradeResponse_DEFINED
struct AcceptTradeResponse__Class;
struct AcceptTradeResponse {
    struct AcceptTradeResponse__Class* klass;
    MonitorData* monitor;
    struct AcceptTradeResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AcceptTradeResponse_FWDDECL)
#define IL2CPP_STRUCT_AcceptTradeResponse_FWDDECL
#include <Modloader/app/structs/AcceptTradeResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_AcceptTradeResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcceptTradeResponse_DEFINED) && !defined(IL2CPP_STRUCT_AcceptTradeResponse_FWDDECL)
#include <Modloader/app/structs/AcceptTradeResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AcceptTradeResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
