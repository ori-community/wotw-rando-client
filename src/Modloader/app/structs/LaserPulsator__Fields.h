#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserPulsator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserPulsator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserPulsator__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_LaserPulsator__Fields_DEFINED
struct AnimationCurve;
struct BlockableLaser;
struct LaserPulsator__Fields {
    struct SaveSerialize__Fields _;
    struct AnimationCurve* LaserCurve;
    struct AnimationCurve* AnticipationCurve;
    struct BlockableLaser* BlockableLaser;
    float Offset;
    float Speed;
    float m_time;
    bool m_shouldPlayAnticipation;
    float m_previousAnticipationValue;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserPulsator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserPulsator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BlockableLaser.h>
#endif
#undef IL2CPP_STRUCT_LaserPulsator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserPulsator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserPulsator__Fields_FWDDECL)
#include <Modloader/app/structs/LaserPulsator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserPulsator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
