#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneScreenshot__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneScreenshot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneScreenshot__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SceneScreenshot__Fields_DEFINED
struct SceneMetaData;
struct Texture;
struct SceneScreenshot__Fields {
    struct MonoBehaviour__Fields _;
    struct SceneMetaData* SceneMetaData;
    bool Exclude;
    struct Texture* Texture;
    struct Color ColorHack;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneScreenshot__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneScreenshot__Fields_FWDDECL
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/Texture.h>
#endif
#undef IL2CPP_STRUCT_SceneScreenshot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneScreenshot__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneScreenshot__Fields_FWDDECL)
#include <Modloader/app/structs/SceneScreenshot__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneScreenshot__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
