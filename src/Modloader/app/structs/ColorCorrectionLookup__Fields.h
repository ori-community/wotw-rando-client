#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorCorrectionLookup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorCorrectionLookup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorCorrectionLookup__Fields_DEFINED)
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED)
#define IL2CPP_STRUCT_ColorCorrectionLookup__Fields_DEFINED
struct Shader;
struct Material;
struct Texture3D;
struct String;
struct ColorCorrectionLookup__Fields {
    struct PostEffectsBase__Fields _;
    struct Shader* shader;
    struct Material* material;
    struct Texture3D* converted3DLut;
    struct String* basedOnTempTex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorCorrectionLookup__Fields_FWDDECL)
#define IL2CPP_STRUCT_ColorCorrectionLookup__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture3D.h>
#endif
#undef IL2CPP_STRUCT_ColorCorrectionLookup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorCorrectionLookup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ColorCorrectionLookup__Fields_FWDDECL)
#include <Modloader/app/structs/ColorCorrectionLookup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorCorrectionLookup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
