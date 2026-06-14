#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputTracking_TrackingStateEventType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputTracking_TrackingStateEventType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputTracking_TrackingStateEventType__Enum_DEFINED)
#define IL2CPP_STRUCT_InputTracking_TrackingStateEventType__Enum_DEFINED
enum class InputTracking_TrackingStateEventType__Enum : int32_t {
    NodeAdded = 0x00000000,
    NodeRemoved = 0x00000001,
    TrackingAcquired = 0x00000002,
    TrackingLost = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_InputTracking_TrackingStateEventType__Enum_FWDDECL)
#define IL2CPP_STRUCT_InputTracking_TrackingStateEventType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_InputTracking_TrackingStateEventType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputTracking_TrackingStateEventType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_InputTracking_TrackingStateEventType__Enum_FWDDECL)
#include <Modloader/app/structs/InputTracking_TrackingStateEventType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputTracking_TrackingStateEventType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
