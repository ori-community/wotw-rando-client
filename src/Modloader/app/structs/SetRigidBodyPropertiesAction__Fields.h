#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetRigidBodyPropertiesAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetRigidBodyPropertiesAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetRigidBodyPropertiesAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_SetRigidBodyPropertiesAction__Fields_DEFINED
struct RopePhysicsSettings;
struct Rigidbody__Array;
struct String;
struct SetRigidBodyPropertiesAction__Fields {
    struct ActionMethod__Fields _;
    struct RopePhysicsSettings* PhysicsSettings;
    float AngularDrag;
    struct Rigidbody__Array* TargetRigidbodies;
    bool IsAffectedByGravity;
    bool ShouldSerializeTheEffect;
    bool ShouldSetLayer;
    struct String* TargetLayerName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetRigidBodyPropertiesAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetRigidBodyPropertiesAction__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody__Array.h>
#include <Modloader/app/structs/RopePhysicsSettings.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SetRigidBodyPropertiesAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetRigidBodyPropertiesAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetRigidBodyPropertiesAction__Fields_FWDDECL)
#include <Modloader/app/structs/SetRigidBodyPropertiesAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetRigidBodyPropertiesAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
