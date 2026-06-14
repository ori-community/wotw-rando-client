#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChaseBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChaseBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChaseBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED)
#define IL2CPP_STRUCT_ChaseBehaviourNew__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonVector3;
struct Locomotion;
struct GameObject;
struct ChaseBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* ChaseTarget;
    float TraversalSpeed;
    struct MoonVector3* LastChaseTargetPosition;
    struct Locomotion* m_locomotion;
    struct GameObject* m_chaseTarget;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChaseBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChaseBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonVector3.h>
#endif
#undef IL2CPP_STRUCT_ChaseBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChaseBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChaseBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/ChaseBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChaseBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
