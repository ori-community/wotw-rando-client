#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AVProWindowsMediaMovie__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AVProWindowsMediaMovie__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaMovie__Fields_DEFINED)
#include <Modloader/app/structs/AVProWindowsMediaMovie_ColourFormat__Enum.h>
#include <Modloader/app/structs/FilterMode__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/TextureWrapMode__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AVProWindowsMediaMovie_ColourFormat__Enum_DEFINED) && defined(IL2CPP_STRUCT_FilterMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_TextureWrapMode__Enum_DEFINED)
#define IL2CPP_STRUCT_AVProWindowsMediaMovie__Fields_DEFINED
struct String;
struct AVProWindowsMedia;
struct List_1_AVProWindowsMediaMovieClip_;
struct Dictionary_2_System_String_AVProWindowsMediaMovieClip_;
struct AVProWindowsMediaMovieClip;
struct AVProWindowsMediaMovie__Fields {
    struct MonoBehaviour__Fields _;
    struct String* _folder;
    struct String* _filename;
    bool _useStreamingAssetsPath;
    bool _loop;
    AVProWindowsMediaMovie_ColourFormat__Enum _colourFormat;

    bool _allowAudio;
    bool _useAudioDelay;
    bool _useAudioMixer;
    bool _useDisplaySync;
    bool _loadOnStart;
    bool _playOnStart;
    bool _editorPreview;
    bool _ignoreFlips;
    float _volume;
    FilterMode__Enum _textureFilterMode;

    TextureWrapMode__Enum _textureWrapMode;

    struct AVProWindowsMedia* _moviePlayer;
    struct List_1_AVProWindowsMediaMovieClip_* _clips;
    struct Dictionary_2_System_String_AVProWindowsMediaMovieClip_* _clipLookup;
    struct AVProWindowsMediaMovieClip* _currentClip;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaMovie__Fields_FWDDECL)
#define IL2CPP_STRUCT_AVProWindowsMediaMovie__Fields_FWDDECL
#include <Modloader/app/structs/AVProWindowsMedia.h>
#include <Modloader/app/structs/AVProWindowsMediaMovieClip.h>
#include <Modloader/app/structs/Dictionary_2_System_String_AVProWindowsMediaMovieClip_.h>
#include <Modloader/app/structs/List_1_AVProWindowsMediaMovieClip_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AVProWindowsMediaMovie__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaMovie__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AVProWindowsMediaMovie__Fields_FWDDECL)
#include <Modloader/app/structs/AVProWindowsMediaMovie__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AVProWindowsMediaMovie__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
