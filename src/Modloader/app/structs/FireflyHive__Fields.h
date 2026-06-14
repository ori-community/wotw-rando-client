#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FireflyHive__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FireflyHive__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FireflyHive__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Entity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Entity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_FireflyHive__Fields_DEFINED
struct MoonTimeline;
struct DamageReceiver;
struct GameObject;
struct CageStructureTool;
struct EntityTargetting;
struct HashSet_1_DamageType_;
struct Firefly;
struct FireflyHive__Fields {
    struct Entity__Fields _;
    struct MoonTimeline* ReadyTimeline;
    struct MoonTimeline* ReleaseFireflyTimeline;
    struct MoonTimeline* NotReadyTimeline;
    struct MoonTimeline* BecomeReadyTimeline;
    struct DamageReceiver* Hitbox;
    struct GameObject* Firefly;
    struct CageStructureTool* Path;
    float Speed;
    struct EntityTargetting* m_entityTargetting;
    int32_t m_previusPathNodeCount;
    bool m_isActivated;
    struct HashSet_1_DamageType_* m_notAllowedDamageTypes;
    struct Firefly* m_fireflyInstance;
    struct Vector3 m_fromPoint;
    struct Vector3 m_toPoint;
    float m_moveTimer;
    float m_moveDuration;
    int32_t m_pointIndex;
    bool m_insideFrustum;
    struct Bounds m_bounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FireflyHive__Fields_FWDDECL)
#define IL2CPP_STRUCT_FireflyHive__Fields_FWDDECL
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/Firefly.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_DamageType_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_FireflyHive__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FireflyHive__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FireflyHive__Fields_FWDDECL)
#include <Modloader/app/structs/FireflyHive__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FireflyHive__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
