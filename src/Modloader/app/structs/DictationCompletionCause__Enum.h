#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DictationCompletionCause__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DictationCompletionCause__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DictationCompletionCause__Enum_DEFINED)
#define IL2CPP_STRUCT_DictationCompletionCause__Enum_DEFINED
enum class DictationCompletionCause__Enum : int32_t {
    Complete = 0x00000000,
    AudioQualityFailure = 0x00000001,
    Canceled = 0x00000002,
    TimeoutExceeded = 0x00000003,
    PauseLimitExceeded = 0x00000004,
    NetworkFailure = 0x00000005,
    MicrophoneUnavailable = 0x00000006,
    UnknownError = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_DictationCompletionCause__Enum_FWDDECL)
#define IL2CPP_STRUCT_DictationCompletionCause__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DictationCompletionCause__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DictationCompletionCause__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DictationCompletionCause__Enum_FWDDECL)
#include <Modloader/app/structs/DictationCompletionCause__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DictationCompletionCause__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
