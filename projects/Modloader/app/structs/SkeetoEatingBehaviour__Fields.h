#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoEatingBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoEatingBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoEatingBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SkeetoEntity___Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SkeetoEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SkeetoEatingBehaviour__Fields_DEFINED
struct EntityReactionBehaviour;
struct SkeetoEatingBehaviour__Fields {
    struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
    struct EntityReactionBehaviour* HitReaction;
    float EatingTime;
    float Deceleration;
    float m_eatingTimer;
    struct Vector3 m_velocity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoEatingBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoEatingBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EntityReactionBehaviour.h>
#endif
#undef IL2CPP_STRUCT_SkeetoEatingBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoEatingBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoEatingBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoEatingBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoEatingBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
