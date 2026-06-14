#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonSwarmer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonSwarmer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonSwarmer__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonSwarmer__Fields_DEFINED
struct __declspec(align(8)) MoonSwarmer__Fields {
    struct Bounds m_bounds;
    bool m_insideFrustrum;
    float m_noiseTimerSpeed;
    struct Vector2 _Position_k__BackingField;
    struct Vector2 _Velocity_k__BackingField;
    bool m_active;
    struct Vector2 _Separation_k__BackingField;
    struct Vector2 _Alignment_k__BackingField;
    struct Vector2 _Cohesion_k__BackingField;
    struct Vector2 _Wander_k__BackingField;
    struct Vector2 _ObstacleAvoidance_k__BackingField;
    struct Vector2 _GlobalPOI_k__BackingField;
    float _WanderAngle_k__BackingField;
    float _NoiseTimer_k__BackingField;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonSwarmer__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonSwarmer__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonSwarmer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonSwarmer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonSwarmer__Fields_FWDDECL)
#include <Modloader/app/structs/MoonSwarmer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonSwarmer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
