#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraInfluencePositionZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraInfluencePositionZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraInfluencePositionZone__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraInfluencePositionZone__Fields_DEFINED
struct AnimationCurve;
struct CameraInfluencePositionZone__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve* DistanceInfluenceCurve;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraInfluencePositionZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraInfluencePositionZone__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_CameraInfluencePositionZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraInfluencePositionZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraInfluencePositionZone__Fields_FWDDECL)
#include <Modloader/app/structs/CameraInfluencePositionZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraInfluencePositionZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
