#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberSwarmPOI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberSwarmPOI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarmPOI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/UberSwarmPOI_POIShape__Enum.h>
#include <Modloader/app/structs/UberSwarmPOI_POIType__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_UberSwarmPOI_POIType__Enum_DEFINED) && defined(IL2CPP_STRUCT_UberSwarmPOI_POIShape__Enum_DEFINED)
#define IL2CPP_STRUCT_UberSwarmPOI__Fields_DEFINED
struct AnimationCurve;
struct UberSwarmPOI__Fields {
    struct MonoBehaviour__Fields _;
    UberSwarmPOI_POIType__Enum Type;

    UberSwarmPOI_POIShape__Enum Shape;

    float Size;
    struct AnimationCurve* ForceOverDistance;
    float ForceMultiplier;
    bool InheritScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberSwarmPOI__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberSwarmPOI__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_UberSwarmPOI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarmPOI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberSwarmPOI__Fields_FWDDECL)
#include <Modloader/app/structs/UberSwarmPOI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberSwarmPOI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
