#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AVProWindowsMediaGUIDisplay__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AVProWindowsMediaGUIDisplay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaGUIDisplay__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/ScaleMode__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ScaleMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_AVProWindowsMediaGUIDisplay__Fields_DEFINED
struct AVProWindowsMediaMovie;
struct AVProWindowsMediaGUIDisplay__Fields {
    struct MonoBehaviour__Fields _;
    struct AVProWindowsMediaMovie* _movie;
    ScaleMode__Enum _scaleMode;

    struct Color _color;
    bool _alphaBlend;
    bool _fullScreen;
    int32_t _depth;
    float _x;
    float _y;
    float _width;
    float _height;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaGUIDisplay__Fields_FWDDECL)
#define IL2CPP_STRUCT_AVProWindowsMediaGUIDisplay__Fields_FWDDECL
#include <Modloader/app/structs/AVProWindowsMediaMovie.h>
#endif
#undef IL2CPP_STRUCT_AVProWindowsMediaGUIDisplay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaGUIDisplay__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AVProWindowsMediaGUIDisplay__Fields_FWDDECL)
#include <Modloader/app/structs/AVProWindowsMediaGUIDisplay__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AVProWindowsMediaGUIDisplay__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
