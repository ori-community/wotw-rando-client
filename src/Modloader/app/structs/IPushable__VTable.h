#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPushable__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPushable__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPushable__VTable_DEFINED)
#define IL2CPP_STRUCT_IPushable__VTable_DEFINED
struct IPushable__VTable {
    VirtualInvokeData get_IsGrabbable;
    VirtualInvokeData get_IsGrabbed;
    VirtualInvokeData OnPushOrPull;
    VirtualInvokeData OnGrabbed;
    VirtualInvokeData OnReleased;
    VirtualInvokeData OnHighlight;
    VirtualInvokeData OnDehighlight;
    VirtualInvokeData CanBeBashed;
    VirtualInvokeData PushableSpeedRatio;
    VirtualInvokeData GetPosition;
    VirtualInvokeData SetPosition;
    VirtualInvokeData GetRigidbody;
};
#endif
#if !defined(IL2CPP_STRUCT_IPushable__VTable_FWDDECL)
#define IL2CPP_STRUCT_IPushable__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IPushable__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPushable__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IPushable__VTable_FWDDECL)
#include <Modloader/app/structs/IPushable__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPushable__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
