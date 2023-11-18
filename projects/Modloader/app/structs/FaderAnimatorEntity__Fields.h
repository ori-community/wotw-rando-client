#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FaderAnimatorEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FaderAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderAnimatorEntity__Fields_DEFINED)
#include <Modloader/app/structs/FaderAnimatorEntity_FaderType__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_FaderAnimatorEntity_FaderType__Enum_DEFINED)
#define IL2CPP_STRUCT_FaderAnimatorEntity__Fields_DEFINED
struct AnimationCurve;
struct FaderAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    struct AnimationCurve* FaderAnimationCurve;
    FaderAnimatorEntity_FaderType__Enum Type;

    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FaderAnimatorEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_FaderAnimatorEntity__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_FaderAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderAnimatorEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FaderAnimatorEntity__Fields_FWDDECL)
#include <Modloader/app/structs/FaderAnimatorEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FaderAnimatorEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
