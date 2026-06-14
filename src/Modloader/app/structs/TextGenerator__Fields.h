#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextGenerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextGenerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextGenerator__Fields_DEFINED)
#include <Modloader/app/structs/TextGenerationError__Enum.h>
#include <Modloader/app/structs/TextGenerationSettings.h>
#if defined(IL2CPP_STRUCT_TextGenerationSettings_DEFINED) && defined(IL2CPP_STRUCT_TextGenerationError__Enum_DEFINED)
#define IL2CPP_STRUCT_TextGenerator__Fields_DEFINED
struct String;
struct List_1_UnityEngine_UIVertex_;
struct List_1_UnityEngine_UICharInfo_;
struct List_1_UnityEngine_UILineInfo_;
struct __declspec(align(8)) TextGenerator__Fields {
    void* m_Ptr;
    struct String* m_LastString;
    struct TextGenerationSettings m_LastSettings;
    bool m_HasGenerated;
    TextGenerationError__Enum m_LastValid;

    struct List_1_UnityEngine_UIVertex_* m_Verts;
    struct List_1_UnityEngine_UICharInfo_* m_Characters;
    struct List_1_UnityEngine_UILineInfo_* m_Lines;
    bool m_CachedVerts;
    bool m_CachedCharacters;
    bool m_CachedLines;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextGenerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextGenerator__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_UICharInfo_.h>
#include <Modloader/app/structs/List_1_UnityEngine_UILineInfo_.h>
#include <Modloader/app/structs/List_1_UnityEngine_UIVertex_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TextGenerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextGenerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextGenerator__Fields_FWDDECL)
#include <Modloader/app/structs/TextGenerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextGenerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
