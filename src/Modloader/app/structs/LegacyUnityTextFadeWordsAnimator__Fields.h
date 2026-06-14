#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyUnityTextFadeWordsAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyUnityTextFadeWordsAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyUnityTextFadeWordsAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyUnityTextFadeWordsAnimator__Fields_DEFINED
struct TextMesh;
struct AnimationCurve;
struct List_1_System_String_;
struct LegacyUnityTextFadeWordsAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct TextMesh* m_textMesh;
    struct AnimationCurve* WordFade;
    struct List_1_System_String_* m_text;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyUnityTextFadeWordsAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyUnityTextFadeWordsAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/TextMesh.h>
#endif
#undef IL2CPP_STRUCT_LegacyUnityTextFadeWordsAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyUnityTextFadeWordsAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyUnityTextFadeWordsAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyUnityTextFadeWordsAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyUnityTextFadeWordsAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
