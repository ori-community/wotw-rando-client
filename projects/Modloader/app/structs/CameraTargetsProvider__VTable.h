#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraTargetsProvider__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraTargetsProvider__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTargetsProvider__VTable_DEFINED)
#define IL2CPP_STRUCT_CameraTargetsProvider__VTable_DEFINED
struct CameraTargetsProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetTargets;
    VirtualInvokeData UpdateTargets;
    VirtualInvokeData ModifyZoomRange;
    VirtualInvokeData ModifyPaddings;
    VirtualInvokeData ModifyLerping;
};
#endif
#if !defined(IL2CPP_STRUCT_CameraTargetsProvider__VTable_FWDDECL)
#define IL2CPP_STRUCT_CameraTargetsProvider__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_CameraTargetsProvider__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTargetsProvider__VTable_DEFINED) && !defined(IL2CPP_STRUCT_CameraTargetsProvider__VTable_FWDDECL)
#include <Modloader/app/structs/CameraTargetsProvider__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraTargetsProvider__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
