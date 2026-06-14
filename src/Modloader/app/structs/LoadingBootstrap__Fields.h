#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadingBootstrap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadingBootstrap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBootstrap__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadingBootstrap__Fields_DEFINED
struct LegacyTransparencyAnimator;
struct Coroutine;
struct Material;
struct String__Array;
struct LoadingBootstrap__Fields {
    struct MonoBehaviour__Fields _;
    struct LegacyTransparencyAnimator* Fader;
    float FadeDuration;
    struct Coroutine* m_eofCoroutine;
    struct Material* m_material;
    bool m_drawDebugInFinal;
    struct String__Array* m_slotNames;
    int32_t m_nameWidth;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadingBootstrap__Fields_FWDDECL)
#define IL2CPP_STRUCT_LoadingBootstrap__Fields_FWDDECL
#include <Modloader/app/structs/Coroutine.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_LoadingBootstrap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBootstrap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LoadingBootstrap__Fields_FWDDECL)
#include <Modloader/app/structs/LoadingBootstrap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadingBootstrap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
