#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PortalB__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PortalB__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PortalB__VTable_DEFINED)
#define IL2CPP_STRUCT_PortalB__VTable_DEFINED
struct PortalB__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Category;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
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
};
#endif
#if !defined(IL2CPP_STRUCT_PortalB__VTable_FWDDECL)
#define IL2CPP_STRUCT_PortalB__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_PortalB__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PortalB__VTable_DEFINED) && !defined(IL2CPP_STRUCT_PortalB__VTable_FWDDECL)
#include <Modloader/app/structs/PortalB__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PortalB__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
