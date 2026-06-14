#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberGhostTrailMeshUpdate_TextureInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberGhostTrailMeshUpdate_TextureInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGhostTrailMeshUpdate_TextureInfo_DEFINED)
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_UberGhostTrailMeshUpdate_TextureInfo_DEFINED
struct Texture;
struct UberGhostTrailMeshUpdate_TextureInfo {
    struct Texture* Texture;
    struct Vector4 Screen;
    struct Vector4 ScreenMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberGhostTrailMeshUpdate_TextureInfo_FWDDECL)
#define IL2CPP_STRUCT_UberGhostTrailMeshUpdate_TextureInfo_FWDDECL
#include <Modloader/app/structs/Texture.h>
#endif
#undef IL2CPP_STRUCT_UberGhostTrailMeshUpdate_TextureInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGhostTrailMeshUpdate_TextureInfo_DEFINED) && !defined(IL2CPP_STRUCT_UberGhostTrailMeshUpdate_TextureInfo_FWDDECL)
#include <Modloader/app/structs/UberGhostTrailMeshUpdate_TextureInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberGhostTrailMeshUpdate_TextureInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
