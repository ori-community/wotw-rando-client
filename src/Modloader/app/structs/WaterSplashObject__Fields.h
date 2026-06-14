#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterSplashObject__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterSplashObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashObject__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_WaterSplashObject__Fields_DEFINED
struct WaterSplashControl;
struct Transform;
struct Mesh;
struct WaterSplashObject_SplashPoint__Array;
struct WaterSplashObject__Fields {
    struct MonoBehaviour__Fields _;
    struct WaterSplashControl* control;
    struct Transform* follow;
    struct Vector3 localPos;
    struct Mesh* mesh;
    float WaveRadius;
    float WavePower;
    float debugProb;
    bool debugAlwaysSplash;
    bool debugAlwaysDrip;
    bool debugAlwaysWave;
    bool debugDrawPoints;
    struct Transform* m_transform;
    struct WaterSplashObject_SplashPoint__Array* m_points;
    struct Vector3 m_lastPos;
    struct Quaternion m_lastRot;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterSplashObject__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterSplashObject__Fields_FWDDECL
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/WaterSplashControl.h>
#include <Modloader/app/structs/WaterSplashObject_SplashPoint__Array.h>
#endif
#undef IL2CPP_STRUCT_WaterSplashObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashObject__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterSplashObject__Fields_FWDDECL)
#include <Modloader/app/structs/WaterSplashObject__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterSplashObject__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
