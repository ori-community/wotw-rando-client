#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncProtocolRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncProtocolRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncProtocolRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncProtocolRequest__Fields_DEFINED
struct MobileAuthenticatedStream;
struct Object;
struct __declspec(align(8)) AsyncProtocolRequest__Fields {
    struct MobileAuthenticatedStream* _Parent_k__BackingField;
    bool _RunSynchronously_k__BackingField;
    int32_t _UserResult_k__BackingField;
    int32_t Started;
    int32_t RequestedSize;
    int32_t WriteRequested;
    struct Object* locker;
};
#endif
#if !defined(IL2CPP_STRUCT_AsyncProtocolRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_AsyncProtocolRequest__Fields_FWDDECL
#include <Modloader/app/structs/MobileAuthenticatedStream.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_AsyncProtocolRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncProtocolRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AsyncProtocolRequest__Fields_FWDDECL)
#include <Modloader/app/structs/AsyncProtocolRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncProtocolRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
