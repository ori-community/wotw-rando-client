#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderModel_t_Packed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderModel_t_Packed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderModel_t_Packed_DEFINED)
#define IL2CPP_STRUCT_RenderModel_t_Packed_DEFINED
struct RenderModel_t_Packed {
    void* rVertexData;
    uint32_t unVertexCount;
    void* rIndexData;
    uint32_t unTriangleCount;
    int32_t diffuseTextureId;
};
#endif
#if !defined(IL2CPP_STRUCT_RenderModel_t_Packed_FWDDECL)
#define IL2CPP_STRUCT_RenderModel_t_Packed_FWDDECL
#endif
#undef IL2CPP_STRUCT_RenderModel_t_Packed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderModel_t_Packed_DEFINED) && !defined(IL2CPP_STRUCT_RenderModel_t_Packed_FWDDECL)
#include <Modloader/app/structs/RenderModel_t_Packed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderModel_t_Packed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
