#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberGCManager_GcCleanupReason__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberGCManager_GcCleanupReason__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGCManager_GcCleanupReason__Enum_DEFINED)
#define IL2CPP_STRUCT_UberGCManager_GcCleanupReason__Enum_DEFINED
enum class UberGCManager_GcCleanupReason__Enum : int32_t {
    Unknown = 0x00000000,
    Automatic = 0x00000001,
    Fader = 0x00000002,
    PanicHint = 0x00000003,
    PanicProbe = 0x00000004,
    PostCleanup = 0x00000005,
    Debug = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_UberGCManager_GcCleanupReason__Enum_FWDDECL)
#define IL2CPP_STRUCT_UberGCManager_GcCleanupReason__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberGCManager_GcCleanupReason__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGCManager_GcCleanupReason__Enum_DEFINED) && !defined(IL2CPP_STRUCT_UberGCManager_GcCleanupReason__Enum_FWDDECL)
#include <Modloader/app/structs/UberGCManager_GcCleanupReason__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberGCManager_GcCleanupReason__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
