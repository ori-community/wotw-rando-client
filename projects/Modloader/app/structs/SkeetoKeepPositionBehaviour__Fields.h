#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoKeepPositionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoKeepPositionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoKeepPositionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SkeetoEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SkeetoEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_SkeetoKeepPositionBehaviour__Fields_DEFINED
struct MoonFloat;
struct SkeetoLocomotion;
struct SkeetoKeepPositionBehaviour__Fields {
    struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
    struct MoonFloat* SlowDownRate;
    struct MoonFloat* Duration;
    struct SkeetoLocomotion* m_skeetoLocomotion;
    float m_slowDownRate;
    float m_duration;
    float m_timeLeft;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoKeepPositionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoKeepPositionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SkeetoKeepPositionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoKeepPositionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoKeepPositionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoKeepPositionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoKeepPositionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
