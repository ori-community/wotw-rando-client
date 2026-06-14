#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Grounding_Leg__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Grounding_Leg__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grounding_Leg__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED)
#define IL2CPP_STRUCT_Grounding_Leg__Fields_DEFINED
struct Transform;
struct Grounding;
struct __declspec(align(8)) Grounding_Leg__Fields {
    bool _isGrounded_k__BackingField;
    struct Vector3 _IKPosition_k__BackingField;
    struct Quaternion _rotationOffset_k__BackingField;
    bool _initiated_k__BackingField;
    float _heightFromGround_k__BackingField;
    struct Vector3 _velocity_k__BackingField;
    struct Transform* _transform_k__BackingField;
    float _IKOffset_k__BackingField;
    struct Grounding* grounding;
    float lastTime;
    float deltaTime;
    struct Vector3 lastPosition;
    struct Quaternion toHitNormal;
    struct Quaternion r;
    struct RaycastHit heelHit;
    struct Vector3 up;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Grounding_Leg__Fields_FWDDECL)
#define IL2CPP_STRUCT_Grounding_Leg__Fields_FWDDECL
#include <Modloader/app/structs/Grounding.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Grounding_Leg__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grounding_Leg__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Grounding_Leg__Fields_FWDDECL)
#include <Modloader/app/structs/Grounding_Leg__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Grounding_Leg__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
