#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrivenAlpha__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrivenAlpha__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivenAlpha__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DrivenAlpha__Fields_DEFINED
struct MoonReference_1_UnityEngine_Renderer_;
struct MoonReference_1_ITweenLerpInputProvider_;
struct ITweenLerpInputProvider;
struct LerpFloatTweenable;
struct Renderer;
struct DrivenAlpha__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_UnityEngine_Renderer_* Target;
    float InitialAlpha;
    float EndAlpha;
    struct MoonReference_1_ITweenLerpInputProvider_* InputProvider;
    struct ITweenLerpInputProvider* m_resolvedInputProvider;
    struct LerpFloatTweenable* m_tweenAlpha;
    float m_currentAlpha;
    struct Renderer* m_targetRenderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrivenAlpha__Fields_FWDDECL)
#define IL2CPP_STRUCT_DrivenAlpha__Fields_FWDDECL
#include <Modloader/app/structs/ITweenLerpInputProvider.h>
#include <Modloader/app/structs/LerpFloatTweenable.h>
#include <Modloader/app/structs/MoonReference_1_ITweenLerpInputProvider_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_DrivenAlpha__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivenAlpha__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DrivenAlpha__Fields_FWDDECL)
#include <Modloader/app/structs/DrivenAlpha__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrivenAlpha__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
