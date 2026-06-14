#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContrastVignette__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContrastVignette__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastVignette__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ContrastVignette__Fields_DEFINED
struct ContrastVignette__Fields {
    struct BaseEffect__Fields _;
    struct Vector2 Center;
    float Sharpness;
    float Darkness;
    float Contrast;
    struct Vector3 ContrastCoeff;
    float EdgeBlending;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContrastVignette__Fields_FWDDECL)
#define IL2CPP_STRUCT_ContrastVignette__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ContrastVignette__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastVignette__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ContrastVignette__Fields_FWDDECL)
#include <Modloader/app/structs/ContrastVignette__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContrastVignette__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
