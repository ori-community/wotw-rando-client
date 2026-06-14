#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HiddenAreaMesh_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HiddenAreaMesh_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HiddenAreaMesh_t_DEFINED)
#define IL2CPP_STRUCT_HiddenAreaMesh_t_DEFINED
struct HiddenAreaMesh_t {
    void* pVertexData;
    uint32_t unTriangleCount;
};
#endif
#if !defined(IL2CPP_STRUCT_HiddenAreaMesh_t_FWDDECL)
#define IL2CPP_STRUCT_HiddenAreaMesh_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_HiddenAreaMesh_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HiddenAreaMesh_t_DEFINED) && !defined(IL2CPP_STRUCT_HiddenAreaMesh_t_FWDDECL)
#include <Modloader/app/structs/HiddenAreaMesh_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HiddenAreaMesh_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
