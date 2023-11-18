#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderTextureCube__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderTextureCube__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderTextureCube__Fields_DEFINED)
#include <Modloader/app/structs/UberShaderTextureBase__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderTextureBase__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderTextureCube__Fields_DEFINED
struct Cubemap;
struct UberShaderTextureCube__Fields {
    struct UberShaderTextureBase__Fields _;
    struct Cubemap* m_texture;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderTextureCube__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderTextureCube__Fields_FWDDECL
#include <Modloader/app/structs/Cubemap.h>
#endif
#undef IL2CPP_STRUCT_UberShaderTextureCube__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderTextureCube__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderTextureCube__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderTextureCube__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderTextureCube__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
