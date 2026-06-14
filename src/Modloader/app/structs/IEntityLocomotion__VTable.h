#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEntityLocomotion__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEntityLocomotion__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntityLocomotion__VTable_DEFINED)
#define IL2CPP_STRUCT_IEntityLocomotion__VTable_DEFINED
struct IEntityLocomotion__VTable {
    VirtualInvokeData MoveToPoint;
    VirtualInvokeData MoveInTheDirection;
    VirtualInvokeData Stop;
    VirtualInvokeData get_TraversalTier;
    VirtualInvokeData set_TraversalTier;
    VirtualInvokeData get_FeetPosition;
    VirtualInvokeData get_HasArrivedAtTarget;
    VirtualInvokeData get_IsMovingToTarget;
    VirtualInvokeData get_GravityDirection;
    VirtualInvokeData OnEntityReset;
};
#endif
#if !defined(IL2CPP_STRUCT_IEntityLocomotion__VTable_FWDDECL)
#define IL2CPP_STRUCT_IEntityLocomotion__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IEntityLocomotion__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntityLocomotion__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IEntityLocomotion__VTable_FWDDECL)
#include <Modloader/app/structs/IEntityLocomotion__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEntityLocomotion__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
