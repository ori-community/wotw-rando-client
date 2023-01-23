#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RopePhysicsSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RopePhysicsSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RopePhysicsSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_RopePhysicsSettings__Fields_DEFINED
struct __declspec(align(8)) RopePhysicsSettings__Fields {
    float AngularSpringDamping;
    float AngularSpringStiffness;
    float LengthSpringDamping;
    float LengthSpringStiffness;
    float AngularMotorDamping;
    float AngularMotorStiffness;
    float LinkDrag;
    float LinkMass;
    int32_t PhysicsIterationCount;
};
#endif
#if !defined(IL2CPP_STRUCT_RopePhysicsSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_RopePhysicsSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_RopePhysicsSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RopePhysicsSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RopePhysicsSettings__Fields_FWDDECL)
#include <Modloader/app/structs/RopePhysicsSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RopePhysicsSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
