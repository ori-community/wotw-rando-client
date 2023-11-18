#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AVProWindowsMedia__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AVProWindowsMedia__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMedia__Fields_DEFINED)
#define IL2CPP_STRUCT_AVProWindowsMedia__Fields_DEFINED
struct AVProWindowsMediaFormatConverter;
struct String;
struct __declspec(align(8)) AVProWindowsMedia__Fields {
    int32_t _movieHandle;
    struct AVProWindowsMediaFormatConverter* _formatConverter;
    struct String* _Filename_k__BackingField;
    int32_t _Width_k__BackingField;
    int32_t _Height_k__BackingField;
    float _FrameRate_k__BackingField;
    float _DurationSeconds_k__BackingField;
    uint32_t _DurationFrames_k__BackingField;
    bool _IsPlaying_k__BackingField;
    bool _isLooping;
    int32_t _audioDelay;
    float _volume;
    bool _RequiresFlipY_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_AVProWindowsMedia__Fields_FWDDECL)
#define IL2CPP_STRUCT_AVProWindowsMedia__Fields_FWDDECL
#include <Modloader/app/structs/AVProWindowsMediaFormatConverter.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AVProWindowsMedia__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMedia__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AVProWindowsMedia__Fields_FWDDECL)
#include <Modloader/app/structs/AVProWindowsMedia__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AVProWindowsMedia__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
