#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AVProWindowsMediaMaterialApply__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AVProWindowsMediaMaterialApply__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaMaterialApply__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AVProWindowsMediaMaterialApply__Fields_DEFINED
struct Material;
struct AVProWindowsMediaMovie;
struct String;
struct Texture2D;
struct AVProWindowsMediaMaterialApply__Fields {
    struct MonoBehaviour__Fields _;
    struct Material* _material;
    struct AVProWindowsMediaMovie* _movie;
    struct String* _textureName;
    struct Texture2D* _defaultTexture;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaMaterialApply__Fields_FWDDECL)
#define IL2CPP_STRUCT_AVProWindowsMediaMaterialApply__Fields_FWDDECL
#include <Modloader/app/structs/AVProWindowsMediaMovie.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_AVProWindowsMediaMaterialApply__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaMaterialApply__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AVProWindowsMediaMaterialApply__Fields_FWDDECL)
#include <Modloader/app/structs/AVProWindowsMediaMaterialApply__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AVProWindowsMediaMaterialApply__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
