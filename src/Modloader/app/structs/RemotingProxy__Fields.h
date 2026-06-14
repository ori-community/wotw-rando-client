#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemotingProxy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemotingProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingProxy__Fields_DEFINED)
#include <Modloader/app/structs/RealProxy__Fields.h>
#if defined(IL2CPP_STRUCT_RealProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_RemotingProxy__Fields_DEFINED
struct IMessageSink;
struct ConstructionCall;
struct RemotingProxy__Fields {
    struct RealProxy__Fields _;
    struct IMessageSink* _sink;
    bool _hasEnvoySink;
    struct ConstructionCall* _ctorCall;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemotingProxy__Fields_FWDDECL)
#define IL2CPP_STRUCT_RemotingProxy__Fields_FWDDECL
#include <Modloader/app/structs/ConstructionCall.h>
#include <Modloader/app/structs/IMessageSink.h>
#endif
#undef IL2CPP_STRUCT_RemotingProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingProxy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RemotingProxy__Fields_FWDDECL)
#include <Modloader/app/structs/RemotingProxy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemotingProxy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
