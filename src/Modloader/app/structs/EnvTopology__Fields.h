#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvTopology__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvTopology__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvTopology__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_EnvTopology__Fields_DEFINED
struct Vector3__Array;
struct __declspec(align(8)) EnvTopology__Fields {
    struct Vector2 origin;
    float safeRange;
    struct Vector3__Array* points;
    struct Vector3__Array* normals;
    struct Vector3__Array* tangentsCCW;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnvTopology__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnvTopology__Fields_FWDDECL
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_EnvTopology__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvTopology__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnvTopology__Fields_FWDDECL)
#include <Modloader/app/structs/EnvTopology__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvTopology__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
