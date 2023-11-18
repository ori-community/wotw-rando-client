#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpenTradeResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpenTradeResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenTradeResponse_DEFINED)
#include <Modloader/app/structs/OpenTradeResponse__Fields.h>
#if defined(IL2CPP_STRUCT_OpenTradeResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_OpenTradeResponse_DEFINED
struct OpenTradeResponse__Class;
struct OpenTradeResponse {
    struct OpenTradeResponse__Class* klass;
    MonitorData* monitor;
    struct OpenTradeResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OpenTradeResponse_FWDDECL)
#define IL2CPP_STRUCT_OpenTradeResponse_FWDDECL
#include <Modloader/app/structs/OpenTradeResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_OpenTradeResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenTradeResponse_DEFINED) && !defined(IL2CPP_STRUCT_OpenTradeResponse_FWDDECL)
#include <Modloader/app/structs/OpenTradeResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpenTradeResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
