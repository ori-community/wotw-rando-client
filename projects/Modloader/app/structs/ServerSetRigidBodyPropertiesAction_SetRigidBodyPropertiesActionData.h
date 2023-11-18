#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData_DEFINED)
#define IL2CPP_STRUCT_ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData_DEFINED
struct RopePhysicsSettings;
struct Int32__Array;
struct String;
struct ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData {
    struct RopePhysicsSettings* PhysicsSettings;
    float AngularDrag;
    struct Int32__Array* TargetRigidbodiesIDs;
    bool IsAffectedByGravity;
    bool ShouldSerializeTheEffect;
    bool ShouldSetLayer;
    struct String* TargetLayerName;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData_FWDDECL)
#define IL2CPP_STRUCT_ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/RopePhysicsSettings.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData_DEFINED) && !defined(IL2CPP_STRUCT_ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData_FWDDECL)
#include <Modloader/app/structs/ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
