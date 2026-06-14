#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayJointPostprocess__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayJointPostprocess__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayJointPostprocess__VTable_DEFINED)
#define IL2CPP_STRUCT_DelayJointPostprocess__VTable_DEFINED
struct DelayJointPostprocess__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnAddedToAnimator;
    VirtualInvokeData OnRemovedFromAnimator;
    VirtualInvokeData UpdateAnimatorPostprocessData;
    VirtualInvokeData ConstructPlayable;
    VirtualInvokeData get_IsActive;
    VirtualInvokeData get_IsAllowed;
    VirtualInvokeData AddToAnimator;
    VirtualInvokeData RemoveFromAnimator;
    VirtualInvokeData OnAllocateJobData;
    VirtualInvokeData OnDeallocateJobData;
    VirtualInvokeData OnUpdateAnimatorPostprocessData;
};
#endif
#if !defined(IL2CPP_STRUCT_DelayJointPostprocess__VTable_FWDDECL)
#define IL2CPP_STRUCT_DelayJointPostprocess__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_DelayJointPostprocess__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayJointPostprocess__VTable_DEFINED) && !defined(IL2CPP_STRUCT_DelayJointPostprocess__VTable_FWDDECL)
#include <Modloader/app/structs/DelayJointPostprocess__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayJointPostprocess__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
