#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MocupAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MocupAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MocupAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_MocupAnimator__Fields_DEFINED
struct MocupAnimator_Curve__Array;
struct String;
struct MocupAnimator__Fields {
    struct BaseAnimator__Fields _;
    float MinDuration;
    struct Color ClipColor;
    bool ShowClipContent;
    struct MocupAnimator_Curve__Array* Curves;
    struct String* StartConstraintLabel;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MocupAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_MocupAnimator__Fields_FWDDECL
#include <Modloader/app/structs/MocupAnimator_Curve__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MocupAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MocupAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MocupAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/MocupAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MocupAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
