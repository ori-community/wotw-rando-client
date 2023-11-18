#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRNodeState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRNodeState_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRNodeState_DEFINED)
#include <Modloader/app/structs/AvailableTrackingData__Enum.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/XRNode__Enum.h>
#if defined(IL2CPP_STRUCT_XRNode__Enum_DEFINED) && defined(IL2CPP_STRUCT_AvailableTrackingData__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_XRNodeState_DEFINED
struct XRNodeState {
    XRNode__Enum m_Type;

    AvailableTrackingData__Enum m_AvailableFields;

    struct Vector3 m_Position;
    struct Quaternion m_Rotation;
    struct Vector3 m_Velocity;
    struct Vector3 m_AngularVelocity;
    struct Vector3 m_Acceleration;
    struct Vector3 m_AngularAcceleration;
    int32_t m_Tracked;
    uint64_t m_UniqueID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XRNodeState_FWDDECL)
#define IL2CPP_STRUCT_XRNodeState_FWDDECL
#endif
#undef IL2CPP_STRUCT_XRNodeState_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRNodeState_DEFINED) && !defined(IL2CPP_STRUCT_XRNodeState_FWDDECL)
#include <Modloader/app/structs/XRNodeState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRNodeState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
