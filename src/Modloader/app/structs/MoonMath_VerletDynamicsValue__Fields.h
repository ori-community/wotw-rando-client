#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonMath_VerletDynamicsValue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonMath_VerletDynamicsValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonMath_VerletDynamicsValue__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonMath_VerletDynamicsValue__Fields_DEFINED
struct __declspec(align(8)) MoonMath_VerletDynamicsValue__Fields {
    float X;
    float oldX;
    float targetX;
    float K;
    float Friction;
    float maxSpeed;
    float minX;
    float maxX;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonMath_VerletDynamicsValue__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonMath_VerletDynamicsValue__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonMath_VerletDynamicsValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonMath_VerletDynamicsValue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonMath_VerletDynamicsValue__Fields_FWDDECL)
#include <Modloader/app/structs/MoonMath_VerletDynamicsValue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonMath_VerletDynamicsValue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
