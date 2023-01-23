#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MechSpider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MechSpider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpider__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED)
#define IL2CPP_STRUCT_MechSpider__Fields_DEFINED
struct Transform;
struct MechSpiderLeg__Array;
struct MechSpider__Fields {
    struct MonoBehaviour__Fields _;
    struct LayerMask raycastLayers;
    float scale;
    struct Transform* body;
    struct MechSpiderLeg__Array* legs;
    float legRotationWeight;
    float rootPositionSpeed;
    float rootRotationSpeed;
    float breatheSpeed;
    float breatheMagnitude;
    float height;
    float minHeight;
    float raycastHeight;
    float raycastDistance;
    struct Vector3 lastPosition;
    struct Vector3 defaultBodyLocalPosition;
    float sine;
    struct RaycastHit rootHit;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MechSpider__Fields_FWDDECL)
#define IL2CPP_STRUCT_MechSpider__Fields_FWDDECL
#include <Modloader/app/structs/MechSpiderLeg__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MechSpider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MechSpider__Fields_FWDDECL)
#include <Modloader/app/structs/MechSpider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MechSpider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
