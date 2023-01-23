#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberSwarmer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberSwarmer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarmer__Fields_DEFINED)
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_UberSwarmer__Fields_DEFINED
struct UberSwarmerSettings;
struct UberSwarm;
struct __declspec(align(8)) UberSwarmer__Fields {
    struct UberSwarmerSettings* Settings;
    struct UberSwarm* m_swarm;
    struct Vector2 m_separation;
    struct Vector2 m_alignment;
    struct Vector2 m_cohesion;
    struct Vector2 m_wander;
    struct Vector2 m_obstacleAvoidance;
    struct Vector2 m_globalPOI;
    float m_wanderAngle;
    float m_noiseTimer;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberSwarmer__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberSwarmer__Fields_FWDDECL
#include <Modloader/app/structs/UberSwarm.h>
#include <Modloader/app/structs/UberSwarmerSettings.h>
#endif
#undef IL2CPP_STRUCT_UberSwarmer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarmer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberSwarmer__Fields_FWDDECL)
#include <Modloader/app/structs/UberSwarmer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberSwarmer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
