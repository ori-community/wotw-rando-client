#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlLookStateAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlLookStateAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlLookStateAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/PetrifiedOwlLookState__Enum.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_PetrifiedOwlLookState__Enum_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlLookStateAnimator__Fields_DEFINED
struct PetrifiedOwlStats;
struct PetrifiedOwlLookStateAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct PetrifiedOwlStats* Stats;
    PetrifiedOwlLookState__Enum LookState;

    float m_duration;
    PetrifiedOwlLookState__Enum m_originalLookState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlLookStateAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlLookStateAnimator__Fields_FWDDECL
#include <Modloader/app/structs/PetrifiedOwlStats.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlLookStateAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlLookStateAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlLookStateAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlLookStateAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlLookStateAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
