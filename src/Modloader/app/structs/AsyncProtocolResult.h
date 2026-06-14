#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncProtocolResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncProtocolResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncProtocolResult_DEFINED)
#include <Modloader/app/structs/AsyncProtocolResult__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncProtocolResult__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncProtocolResult_DEFINED
struct AsyncProtocolResult__Class;
struct AsyncProtocolResult {
    struct AsyncProtocolResult__Class* klass;
    MonitorData* monitor;
    struct AsyncProtocolResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncProtocolResult_FWDDECL)
#define IL2CPP_STRUCT_AsyncProtocolResult_FWDDECL
#include <Modloader/app/structs/AsyncProtocolResult__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncProtocolResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncProtocolResult_DEFINED) && !defined(IL2CPP_STRUCT_AsyncProtocolResult_FWDDECL)
#include <Modloader/app/structs/AsyncProtocolResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncProtocolResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
