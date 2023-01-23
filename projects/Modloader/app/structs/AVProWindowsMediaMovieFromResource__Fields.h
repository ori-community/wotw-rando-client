#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AVProWindowsMediaMovieFromResource__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AVProWindowsMediaMovieFromResource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaMovieFromResource__Fields_DEFINED)
#include <Modloader/app/structs/AVProWindowsMediaMovie__Fields.h>
#include <Modloader/app/structs/GCHandle.h>
#if defined(IL2CPP_STRUCT_AVProWindowsMediaMovie__Fields_DEFINED) && defined(IL2CPP_STRUCT_GCHandle_DEFINED)
#define IL2CPP_STRUCT_AVProWindowsMediaMovieFromResource__Fields_DEFINED
struct TextAsset;
struct AVProWindowsMediaMovieFromResource__Fields {
    struct AVProWindowsMediaMovie__Fields _;
    struct TextAsset* _textAsset;
    struct GCHandle _bytesHandle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaMovieFromResource__Fields_FWDDECL)
#define IL2CPP_STRUCT_AVProWindowsMediaMovieFromResource__Fields_FWDDECL
#include <Modloader/app/structs/TextAsset.h>
#endif
#undef IL2CPP_STRUCT_AVProWindowsMediaMovieFromResource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaMovieFromResource__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AVProWindowsMediaMovieFromResource__Fields_FWDDECL)
#include <Modloader/app/structs/AVProWindowsMediaMovieFromResource__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AVProWindowsMediaMovieFromResource__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
