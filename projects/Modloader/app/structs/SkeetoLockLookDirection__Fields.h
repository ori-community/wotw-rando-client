#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoLockLookDirection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoLockLookDirection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoLockLookDirection__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SkeetoEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SkeetoEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_SkeetoLockLookDirection__Fields_DEFINED
struct MoonVector3;
struct MoonFloat;
struct SkeetoLocomotion;
struct SkeetoLockLookDirection__Fields {
    struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
    bool LockDirection;
    struct MoonVector3* m_targetPosition;
    struct MoonFloat* m_minXDistanceFromTarget;
    struct SkeetoLocomotion* m_skeetoLocomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoLockLookDirection__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoLockLookDirection__Fields_FWDDECL
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SkeetoLockLookDirection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoLockLookDirection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoLockLookDirection__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoLockLookDirection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoLockLookDirection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
