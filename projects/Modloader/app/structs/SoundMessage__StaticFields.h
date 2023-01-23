#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundMessage__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundMessage__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundMessage__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SoundMessage__StaticFields_DEFINED
struct Texture2D;
struct GUIStyle;
struct SoundMessage__StaticFields {
    struct Texture2D* _staticRectTexture;
    struct GUIStyle* _staticRectStyle;
};
#endif
#if !defined(IL2CPP_STRUCT_SoundMessage__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SoundMessage__StaticFields_FWDDECL
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_SoundMessage__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundMessage__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SoundMessage__StaticFields_FWDDECL)
#include <Modloader/app/structs/SoundMessage__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundMessage__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
