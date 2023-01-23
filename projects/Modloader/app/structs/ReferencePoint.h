#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReferencePoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReferencePoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferencePoint_DEFINED)
#include <Modloader/app/structs/Pose.h>
#include <Modloader/app/structs/TrackableId.h>
#include <Modloader/app/structs/TrackingState__Enum.h>
#if defined(IL2CPP_STRUCT_TrackableId_DEFINED) && defined(IL2CPP_STRUCT_TrackingState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Pose_DEFINED)
#define IL2CPP_STRUCT_ReferencePoint_DEFINED
struct ReferencePoint {
    struct TrackableId _Id_k__BackingField;
    TrackingState__Enum _TrackingState_k__BackingField;

    struct Pose _Pose_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReferencePoint_FWDDECL)
#define IL2CPP_STRUCT_ReferencePoint_FWDDECL
#endif
#undef IL2CPP_STRUCT_ReferencePoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferencePoint_DEFINED) && !defined(IL2CPP_STRUCT_ReferencePoint_FWDDECL)
#include <Modloader/app/structs/ReferencePoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReferencePoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
