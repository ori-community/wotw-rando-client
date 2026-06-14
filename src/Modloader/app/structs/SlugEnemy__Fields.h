#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlugEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlugEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugEnemy__Fields_DEFINED)
#include <Modloader/app/structs/Enemy2D__Fields.h>
#if defined(IL2CPP_STRUCT_Enemy2D__Fields_DEFINED)
#define IL2CPP_STRUCT_SlugEnemy__Fields_DEFINED
struct TraceGroundMovement;
struct AnimationCurve;
struct SlugEnemy__Fields {
    struct Enemy2D__Fields _;
    struct TraceGroundMovement* Movement;
    struct AnimationCurve* AnimationFromBend;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlugEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_SlugEnemy__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/TraceGroundMovement.h>
#endif
#undef IL2CPP_STRUCT_SlugEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SlugEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/SlugEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlugEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
