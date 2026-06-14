#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraPivotZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraPivotZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPivotZone__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_CameraPivotZone__Fields_DEFINED
struct Transform;
struct CameraTarget_TargetLayer;
struct BlendFloat;
struct CameraPivotZone__Fields {
    struct SaveSerialize__Fields _;
    bool FollowX;
    bool FollowY;
    float Weight;
    float Duration;
    struct Transform* Target;
    struct Vector3 MaximumDistance;
    bool m_activated;
    struct CameraTarget_TargetLayer* m_targetLayer;
    struct BlendFloat* m_weight;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraPivotZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraPivotZone__Fields_FWDDECL
#include <Modloader/app/structs/BlendFloat.h>
#include <Modloader/app/structs/CameraTarget_TargetLayer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CameraPivotZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPivotZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraPivotZone__Fields_FWDDECL)
#include <Modloader/app/structs/CameraPivotZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraPivotZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
