#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderProperties__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderProperties__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderProperties__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UberShaderProperties__StaticFields_DEFINED
struct Int32__Array;
struct UberShaderProperties__StaticFields {
    struct Int32__Array* TextureBindings;
    struct Int32__Array* Texture_US_ST_Bindings;
    struct Int32__Array* Texture_US_ATLAS_Bindings;
    struct Int32__Array* Texture_US_ATLAS_ST_Bindings;
    struct Int32__Array* TextureParralaxBindings;
    struct Int32__Array* TexturePolarBindings;
    struct Int32__Array* ColorBindings;
    struct Int32__Array* VectorBindings;
    struct Int32__Array* FloatBindings;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderProperties__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderProperties__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_UberShaderProperties__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderProperties__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderProperties__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberShaderProperties__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderProperties__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
