#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletEdge__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletEdge__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletEdge__Fields_DEFINED)
#include <Modloader/app/structs/SkinningEdge__Fields.h>
#if defined(IL2CPP_STRUCT_SkinningEdge__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletEdge__Fields_DEFINED
struct VerletEdge__Fields {
    struct SkinningEdge__Fields _;
    float spring;
    float length;
    float boneInfluence;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletEdge__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletEdge__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_VerletEdge__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletEdge__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletEdge__Fields_FWDDECL)
#include <Modloader/app/structs/VerletEdge__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletEdge__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
