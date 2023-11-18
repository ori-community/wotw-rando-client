#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ElectricFieldSlugBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ElectricFieldSlugBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElectricFieldSlugBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_ElectricSlugEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_ElectricSlugEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_ElectricFieldSlugBehaviour__Fields_DEFINED
struct MoonFloat;
struct MoonTimeline;
struct ElectricFieldSlugBehaviour_SwellTarget__Array;
struct Event_1;
struct ElectricFieldSlugBehaviour__Fields {
    struct EntityBehaviourNode_1_ElectricSlugEntity___Fields _;
    struct MoonFloat* ElectricFieldTriggerRange;
    struct MoonTimeline* ElectricFieldTimeline;
    float SwellAtDistancePercentage;
    struct ElectricFieldSlugBehaviour_SwellTarget__Array* SwellTargets;
    float SwellSpeed;
    struct Event_1* StartElectricFieldEvent;
    struct Event_1* EndElectricFieldEvent;
    struct Event_1* InflateEvent;
    struct Event_1* DeflateEvent;
    float m_range;
    bool m_isInflating;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ElectricFieldSlugBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_ElectricFieldSlugBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/ElectricFieldSlugBehaviour_SwellTarget__Array.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_ElectricFieldSlugBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElectricFieldSlugBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ElectricFieldSlugBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/ElectricFieldSlugBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ElectricFieldSlugBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
