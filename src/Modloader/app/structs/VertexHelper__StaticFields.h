#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VertexHelper__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VertexHelper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexHelper__StaticFields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VertexHelper__StaticFields_DEFINED
struct VertexHelper__StaticFields {
    struct Vector4 s_DefaultTangent;
    struct Vector3 s_DefaultNormal;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VertexHelper__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_VertexHelper__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_VertexHelper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexHelper__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_VertexHelper__StaticFields_FWDDECL)
#include <Modloader/app/structs/VertexHelper__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VertexHelper__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
