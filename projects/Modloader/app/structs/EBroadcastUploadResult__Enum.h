#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EBroadcastUploadResult__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EBroadcastUploadResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EBroadcastUploadResult__Enum_DEFINED)
#define IL2CPP_STRUCT_EBroadcastUploadResult__Enum_DEFINED
enum class EBroadcastUploadResult__Enum : int32_t {
    k_EBroadcastUploadResultNone = 0x00000000,
    k_EBroadcastUploadResultOK = 0x00000001,
    k_EBroadcastUploadResultInitFailed = 0x00000002,
    k_EBroadcastUploadResultFrameFailed = 0x00000003,
    k_EBroadcastUploadResultTimeout = 0x00000004,
    k_EBroadcastUploadResultBandwidthExceeded = 0x00000005,
    k_EBroadcastUploadResultLowFPS = 0x00000006,
    k_EBroadcastUploadResultMissingKeyFrames = 0x00000007,
    k_EBroadcastUploadResultNoConnection = 0x00000008,
    k_EBroadcastUploadResultRelayFailed = 0x00000009,
    k_EBroadcastUploadResultSettingsChanged = 0x0000000a,
    k_EBroadcastUploadResultMissingAudio = 0x0000000b,
    k_EBroadcastUploadResultTooFarBehind = 0x0000000c,
    k_EBroadcastUploadResultTranscodeBehind = 0x0000000d,
    k_EBroadcastUploadResultNotAllowedToPlay = 0x0000000e,
    k_EBroadcastUploadResultBusy = 0x0000000f,
    k_EBroadcastUploadResultBanned = 0x00000010,
    k_EBroadcastUploadResultAlreadyActive = 0x00000011,
    k_EBroadcastUploadResultForcedOff = 0x00000012,
    k_EBroadcastUploadResultAudioBehind = 0x00000013,
    k_EBroadcastUploadResultShutdown = 0x00000014,
    k_EBroadcastUploadResultDisconnect = 0x00000015,
    k_EBroadcastUploadResultVideoInitFailed = 0x00000016,
    k_EBroadcastUploadResultAudioInitFailed = 0x00000017,
};
#endif
#if !defined(IL2CPP_STRUCT_EBroadcastUploadResult__Enum_FWDDECL)
#define IL2CPP_STRUCT_EBroadcastUploadResult__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EBroadcastUploadResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EBroadcastUploadResult__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EBroadcastUploadResult__Enum_FWDDECL)
#include <Modloader/app/structs/EBroadcastUploadResult__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EBroadcastUploadResult__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
