#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberGhostTrailMeshUpdate_Quad_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberGhostTrailMeshUpdate_Quad_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGhostTrailMeshUpdate_Quad_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_UberGhostTrailMeshUpdate_Quad_DEFINED
struct UberGhostTrailMeshUpdate_Quad {
    float X;
    float Y;
    float Vx;
    float Vy;
    struct Vector2 Vert1;
    struct Vector2 Vert2;
    struct Vector2 Vert3;
    struct Vector2 Vert4;
    float UvX;
    float UvY;
    float UvZ;
    float UvW;
    bool Flipped;
    float EmissionTime;
    int32_t Texture;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberGhostTrailMeshUpdate_Quad_FWDDECL)
#define IL2CPP_STRUCT_UberGhostTrailMeshUpdate_Quad_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberGhostTrailMeshUpdate_Quad_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGhostTrailMeshUpdate_Quad_DEFINED) && !defined(IL2CPP_STRUCT_UberGhostTrailMeshUpdate_Quad_FWDDECL)
#include <Modloader/app/structs/UberGhostTrailMeshUpdate_Quad.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberGhostTrailMeshUpdate_Quad.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
