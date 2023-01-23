#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_OriAnimator__Fields_DEFINED
struct ClipAnimation;
struct MoonAnimator;
struct IActiveAnimation;
struct OriAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct ClipAnimation* ClipAnimation;
    struct Vector2 EditorPreviewPosition;
    struct MoonAnimator* m_moonAnimator;
    bool m_started;
    struct IActiveAnimation* m_animationState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_OriAnimator__Fields_FWDDECL
#include <Modloader/app/structs/ClipAnimation.h>
#include <Modloader/app/structs/IActiveAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_OriAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OriAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/OriAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
