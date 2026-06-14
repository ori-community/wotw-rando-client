#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__VTable_DEFINED)
#define IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__VTable_DEFINED
struct SuspendWhenOutOfFrustrum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnFrustumEnter;
    VirtualInvokeData OnFrustumExit;
    VirtualInvokeData get_InsideFrustum;
    VirtualInvokeData get_Bounds;
    VirtualInvokeData get_AllowCacheBounds;
    VirtualInvokeData get_ShouldDisable;
    VirtualInvokeData get_ShouldEnable;
    VirtualInvokeData get_ShouldChildrenEnable;
    VirtualInvokeData get_ShouldSetMoonReady;
    VirtualInvokeData Prewarm;
    VirtualInvokeData OnFrustumEnter_1;
    VirtualInvokeData OnFrustumExit_1;
    VirtualInvokeData get_Bounds_1;
};
#endif
#if !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__VTable_FWDDECL)
#define IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__VTable_DEFINED) && !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__VTable_FWDDECL)
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
