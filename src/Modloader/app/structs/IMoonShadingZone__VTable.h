#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoonShadingZone__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoonShadingZone__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonShadingZone__VTable_DEFINED)
#define IL2CPP_STRUCT_IMoonShadingZone__VTable_DEFINED
struct IMoonShadingZone__VTable {
    VirtualInvokeData OnTargetEnter;
    VirtualInvokeData OnTargetStay;
    VirtualInvokeData OnTargetExit;
    VirtualInvokeData ContainsPoint;
    VirtualInvokeData get_ShadingZoneId;
    VirtualInvokeData get_IsDirtyEditor;
    VirtualInvokeData set_IsDirtyEditor;
    VirtualInvokeData get_IsActive;
    VirtualInvokeData OnEditorUpdate;
};
#endif
#if !defined(IL2CPP_STRUCT_IMoonShadingZone__VTable_FWDDECL)
#define IL2CPP_STRUCT_IMoonShadingZone__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IMoonShadingZone__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonShadingZone__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IMoonShadingZone__VTable_FWDDECL)
#include <Modloader/app/structs/IMoonShadingZone__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoonShadingZone__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
