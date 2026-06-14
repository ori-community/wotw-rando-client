#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberGaussianBlur__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberGaussianBlur__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGaussianBlur__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UberGaussianBlur__StaticFields_DEFINED
struct Material;
struct UberGaussianBlur__StaticFields {
    struct Material* s_seperableBlurMaterial;
};
#endif
#if !defined(IL2CPP_STRUCT_UberGaussianBlur__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberGaussianBlur__StaticFields_FWDDECL
#include <Modloader/app/structs/Material.h>
#endif
#undef IL2CPP_STRUCT_UberGaussianBlur__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGaussianBlur__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberGaussianBlur__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberGaussianBlur__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberGaussianBlur__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
