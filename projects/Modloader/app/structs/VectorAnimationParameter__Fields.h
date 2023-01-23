#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VectorAnimationParameter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VectorAnimationParameter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VectorAnimationParameter__Fields_DEFINED)
#include <Modloader/app/structs/AnimationParameter__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_AnimationParameter__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VectorAnimationParameter__Fields_DEFINED
struct VectorAnimationParameter__Fields {
    struct AnimationParameter__Fields _;
    struct Vector3 DefaultValue;
    float SmoothTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VectorAnimationParameter__Fields_FWDDECL)
#define IL2CPP_STRUCT_VectorAnimationParameter__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_VectorAnimationParameter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VectorAnimationParameter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VectorAnimationParameter__Fields_FWDDECL)
#include <Modloader/app/structs/VectorAnimationParameter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VectorAnimationParameter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
