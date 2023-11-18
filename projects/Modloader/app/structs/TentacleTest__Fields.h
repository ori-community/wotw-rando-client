#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleTest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleTest__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleTest__Fields_DEFINED
struct List_1_TentacleTest_Segment_;
struct Transform;
struct LineRenderer;
struct TentacleTest__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_TentacleTest_Segment_* Segments;
    struct Transform* Base;
    struct Transform* Target;
    struct LineRenderer* Renderer;
    float MinLength;
    float MaxLength;
    float Gravity;
    float Drag;
    int32_t SolverIterations;
    float SidewaysAcceleration;
    float HeadCo;
    float HeadAngle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleTest__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleTest__Fields_FWDDECL
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/List_1_TentacleTest_Segment_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TentacleTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleTest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleTest__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleTest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleTest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
