#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVoiceResult__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVoiceResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVoiceResult__Enum_DEFINED)
#define IL2CPP_STRUCT_EVoiceResult__Enum_DEFINED
enum class EVoiceResult__Enum : int32_t {
    k_EVoiceResultOK = 0x00000000,
    k_EVoiceResultNotInitialized = 0x00000001,
    k_EVoiceResultNotRecording = 0x00000002,
    k_EVoiceResultNoData = 0x00000003,
    k_EVoiceResultBufferTooSmall = 0x00000004,
    k_EVoiceResultDataCorrupted = 0x00000005,
    k_EVoiceResultRestricted = 0x00000006,
    k_EVoiceResultUnsupportedCodec = 0x00000007,
    k_EVoiceResultReceiverOutOfDate = 0x00000008,
    k_EVoiceResultReceiverDidNotAnswer = 0x00000009,
};
#endif
#if !defined(IL2CPP_STRUCT_EVoiceResult__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVoiceResult__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVoiceResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVoiceResult__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVoiceResult__Enum_FWDDECL)
#include <Modloader/app/structs/EVoiceResult__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVoiceResult__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
