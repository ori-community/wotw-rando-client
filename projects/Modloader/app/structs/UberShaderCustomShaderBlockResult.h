#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderCustomShaderBlockResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderCustomShaderBlockResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderCustomShaderBlockResult_DEFINED)
#define IL2CPP_STRUCT_UberShaderCustomShaderBlockResult_DEFINED
struct CustomShaderBlock;
struct Type;
struct UberShaderCustomShaderBlockResult {
    struct CustomShaderBlock* Attribute;
    struct Type* LinkedType;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderCustomShaderBlockResult_FWDDECL)
#define IL2CPP_STRUCT_UberShaderCustomShaderBlockResult_FWDDECL
#include <Modloader/app/structs/CustomShaderBlock.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_UberShaderCustomShaderBlockResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderCustomShaderBlockResult_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderCustomShaderBlockResult_FWDDECL)
#include <Modloader/app/structs/UberShaderCustomShaderBlockResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderCustomShaderBlockResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
