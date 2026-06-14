#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadKinds__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadKinds__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadKinds__Enum_DEFINED)
#define IL2CPP_STRUCT_ThreadKinds__Enum_DEFINED
enum class ThreadKinds__Enum : int32_t {
    Unknown = 0x00000000,
    User = 0x00000001,
    System = 0x00000002,
    Sync = 0x00000004,
    Async = 0x00000008,
    Timer = 0x00000010,
    CompletionPort = 0x00000020,
    Worker = 0x00000040,
    Finalization = 0x00000080,
    Other = 0x00000100,
    OwnerMask = 0x00000003,
    SyncMask = 0x0000000c,
    SourceMask = 0x000001f0,
    SafeSources = 0x00000160,
    ThreadPool = 0x00000060,
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadKinds__Enum_FWDDECL)
#define IL2CPP_STRUCT_ThreadKinds__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ThreadKinds__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadKinds__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ThreadKinds__Enum_FWDDECL)
#include <Modloader/app/structs/ThreadKinds__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadKinds__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
