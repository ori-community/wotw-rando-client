#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBowMark__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBowMark__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBowMark__Fields_DEFINED)
#include <Modloader/app/structs/SeinBowMark_State__Enum.h>
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinBowMark_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinBowMark__Fields_DEFINED
struct AnimationCurve;
struct IAttackable;
struct Transform;
struct SeinBowMark__Fields {
    struct Suspendable__Fields _;
    float AppearTime;
    float DisappearTime;
    float Scale;
    struct AnimationCurve* AppearScaleCurve;
    struct AnimationCurve* DisappearScaleCurve;
    struct IAttackable* Target;
    struct Transform* Mark;
    SeinBowMark_State__Enum m_currentState;

    float m_stateCurrentTime;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinBowMark__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinBowMark__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinBowMark__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBowMark__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinBowMark__Fields_FWDDECL)
#include <Modloader/app/structs/SeinBowMark__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBowMark__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
