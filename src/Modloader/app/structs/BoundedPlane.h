#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BoundedPlane_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BoundedPlane_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoundedPlane_DEFINED)
#include <Modloader/app/structs/PlaneAlignment__Enum.h>
#include <Modloader/app/structs/Pose.h>
#include <Modloader/app/structs/TrackableId.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TrackableId_DEFINED) && defined(IL2CPP_STRUCT_Pose_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_PlaneAlignment__Enum_DEFINED)
#define IL2CPP_STRUCT_BoundedPlane_DEFINED
struct BoundedPlane {
    uint32_t m_InstanceId;
    struct TrackableId _Id_k__BackingField;
    struct TrackableId _SubsumedById_k__BackingField;
    struct Pose _Pose_k__BackingField;
    struct Vector3 _Center_k__BackingField;
    struct Vector2 _Size_k__BackingField;
    PlaneAlignment__Enum _Alignment_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BoundedPlane_FWDDECL)
#define IL2CPP_STRUCT_BoundedPlane_FWDDECL
#endif
#undef IL2CPP_STRUCT_BoundedPlane_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoundedPlane_DEFINED) && !defined(IL2CPP_STRUCT_BoundedPlane_FWDDECL)
#include <Modloader/app/structs/BoundedPlane.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BoundedPlane.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
