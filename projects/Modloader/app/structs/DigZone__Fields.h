#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DigZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DigZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigZone__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_DigZone__Fields_DEFINED
struct Transform;
struct Action;
struct CageStructureTool;
struct Collider;
struct DigZone__Fields {
    struct MonoBehaviour__Fields _;
    bool LockHorizontalEntrance;
    bool LockVerticalEntrance;
    struct Transform* insideTester;
    struct Vector2 exitPushMultiplier;
    bool autoDashOnExit;
    float TurningSpeedMultiplier;
    struct Action* OnDigStartedInZoneCallback;
    struct CageStructureTool* m_cageStructure;
    bool m_hasInitedCageStructure;
    struct Collider* m_cageCollider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DigZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_DigZone__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DigZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DigZone__Fields_FWDDECL)
#include <Modloader/app/structs/DigZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DigZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
