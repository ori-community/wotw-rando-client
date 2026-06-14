#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderGradient__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderGradient__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderGradient__Fields_DEFINED)
#include <Modloader/app/structs/UberShaderProperty__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderGradient__Fields_DEFINED
struct Gradient;
struct Texture2D;
struct UberShaderGradient__Fields {
    struct UberShaderProperty__Fields _;
    struct Gradient* m_gradient;
    struct Texture2D* m_texture;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderGradient__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderGradient__Fields_FWDDECL
#include <Modloader/app/structs/Gradient.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_UberShaderGradient__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderGradient__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderGradient__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderGradient__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderGradient__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
