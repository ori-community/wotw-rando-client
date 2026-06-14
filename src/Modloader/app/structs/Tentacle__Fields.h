#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tentacle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tentacle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tentacle__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_Tentacle__Fields_DEFINED
struct Transform;
struct LineRenderer;
struct VerletBody;
struct Tentacle__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Target;
    struct LineRenderer* Renderer;
    float SegmentRestLength;
    float Gravity;
    int32_t SolverIterations;
    float TargetSeekForce;
    float JointCount;
    float Damping;
    struct VerletBody* m_verletBody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Tentacle__Fields_FWDDECL)
#define IL2CPP_STRUCT_Tentacle__Fields_FWDDECL
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VerletBody.h>
#endif
#undef IL2CPP_STRUCT_Tentacle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tentacle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Tentacle__Fields_FWDDECL)
#include <Modloader/app/structs/Tentacle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tentacle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
