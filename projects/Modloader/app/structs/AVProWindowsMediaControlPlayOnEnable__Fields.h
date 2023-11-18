#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AVProWindowsMediaControlPlayOnEnable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AVProWindowsMediaControlPlayOnEnable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaControlPlayOnEnable__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AVProWindowsMediaControlPlayOnEnable__Fields_DEFINED
struct AVProWindowsMediaMovie;
struct AVProWindowsMediaControlPlayOnEnable__Fields {
    struct MonoBehaviour__Fields _;
    struct AVProWindowsMediaMovie* _movie;
    bool _rewindOnDisable;
    int32_t _minFrame;
    int32_t _maxFrame;
    bool _loop;
    bool _enableLoopWhenInRange;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaControlPlayOnEnable__Fields_FWDDECL)
#define IL2CPP_STRUCT_AVProWindowsMediaControlPlayOnEnable__Fields_FWDDECL
#include <Modloader/app/structs/AVProWindowsMediaMovie.h>
#endif
#undef IL2CPP_STRUCT_AVProWindowsMediaControlPlayOnEnable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaControlPlayOnEnable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AVProWindowsMediaControlPlayOnEnable__Fields_FWDDECL)
#include <Modloader/app/structs/AVProWindowsMediaControlPlayOnEnable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AVProWindowsMediaControlPlayOnEnable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
