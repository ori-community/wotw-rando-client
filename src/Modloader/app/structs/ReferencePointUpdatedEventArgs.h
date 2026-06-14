#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReferencePointUpdatedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReferencePointUpdatedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferencePointUpdatedEventArgs_DEFINED)
#include <Modloader/app/structs/Pose.h>
#include <Modloader/app/structs/ReferencePoint.h>
#include <Modloader/app/structs/TrackingState__Enum.h>
#if defined(IL2CPP_STRUCT_ReferencePoint_DEFINED) && defined(IL2CPP_STRUCT_TrackingState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Pose_DEFINED)
#define IL2CPP_STRUCT_ReferencePointUpdatedEventArgs_DEFINED
struct ReferencePointUpdatedEventArgs {
    struct ReferencePoint _ReferencePoint_k__BackingField;
    TrackingState__Enum _PreviousTrackingState_k__BackingField;

    struct Pose _PreviousPose_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReferencePointUpdatedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_ReferencePointUpdatedEventArgs_FWDDECL
#endif
#undef IL2CPP_STRUCT_ReferencePointUpdatedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferencePointUpdatedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_ReferencePointUpdatedEventArgs_FWDDECL)
#include <Modloader/app/structs/ReferencePointUpdatedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReferencePointUpdatedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
