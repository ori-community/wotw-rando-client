#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovieTextureController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovieTextureController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovieTextureController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MovieTextureController__Fields_DEFINED
struct GameObject;
struct Fader;
struct MovieTexture;
struct String;
struct MovieTextureController__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* Fader;
    struct Fader* m_fader;
    struct MovieTexture* m_movieTexture;
    struct GameObject* MovieTextureGameObject;
    struct Vector3 MovieCameraOffset;
    struct String* LevelToLoad;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovieTextureController__Fields_FWDDECL)
#define IL2CPP_STRUCT_MovieTextureController__Fields_FWDDECL
#include <Modloader/app/structs/Fader.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MovieTexture.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MovieTextureController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovieTextureController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MovieTextureController__Fields_FWDDECL)
#include <Modloader/app/structs/MovieTextureController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovieTextureController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
