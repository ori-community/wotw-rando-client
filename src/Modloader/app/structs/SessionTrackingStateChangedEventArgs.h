#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SessionTrackingStateChangedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SessionTrackingStateChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_SessionTrackingStateChangedEventArgs_DEFINED)
#include <Modloader/app/structs/TrackingState__Enum.h>
#if defined(IL2CPP_STRUCT_TrackingState__Enum_DEFINED)
#define IL2CPP_STRUCT_SessionTrackingStateChangedEventArgs_DEFINED
struct XRSessionSubsystem;
struct SessionTrackingStateChangedEventArgs {
    struct XRSessionSubsystem* m_Session;
    TrackingState__Enum _NewState_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SessionTrackingStateChangedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_SessionTrackingStateChangedEventArgs_FWDDECL
#include <Modloader/app/structs/XRSessionSubsystem.h>
#endif
#undef IL2CPP_STRUCT_SessionTrackingStateChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_SessionTrackingStateChangedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_SessionTrackingStateChangedEventArgs_FWDDECL)
#include <Modloader/app/structs/SessionTrackingStateChangedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SessionTrackingStateChangedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
