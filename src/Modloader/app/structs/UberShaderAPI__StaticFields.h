#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderAPI__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderAPI__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAPI__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UberShaderAPI__StaticFields_DEFINED
struct MaterialPropertyBlock;
struct UberShaderAPI__StaticFields {
    struct MaterialPropertyBlock* block;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderAPI__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderAPI__StaticFields_FWDDECL
#include <Modloader/app/structs/MaterialPropertyBlock.h>
#endif
#undef IL2CPP_STRUCT_UberShaderAPI__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAPI__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderAPI__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberShaderAPI__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderAPI__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
