#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Atlas__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Atlas__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Atlas__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#include <Modloader/app/structs/UberScreenMode__Enum.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_UberScreenMode__Enum_DEFINED)
#define IL2CPP_STRUCT_Atlas__Fields_DEFINED
struct Texture2D;
struct List_1_AtlasSpriteTexture_;
struct String;
struct Dictionary_2_MoonGuid_System_Int32_;
struct Atlas__Fields {
    struct ScriptableObject__Fields _;
    float Width;
    float Height;
    struct Texture2D* Texture;
    UberScreenMode__Enum ScreenMode;

    float UberScreenTweak;
    struct List_1_AtlasSpriteTexture_* SpriteTextures;
    struct String* _TexturePath_k__BackingField;
    struct Dictionary_2_MoonGuid_System_Int32_* m_atlasCache;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Atlas__Fields_FWDDECL)
#define IL2CPP_STRUCT_Atlas__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_MoonGuid_System_Int32_.h>
#include <Modloader/app/structs/List_1_AtlasSpriteTexture_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_Atlas__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Atlas__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Atlas__Fields_FWDDECL)
#include <Modloader/app/structs/Atlas__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Atlas__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
