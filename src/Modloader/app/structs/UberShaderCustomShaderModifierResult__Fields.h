#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderCustomShaderModifierResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderCustomShaderModifierResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderCustomShaderModifierResult__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderCustomShaderModifierResult__Fields_DEFINED
struct CustomShaderModifier;
struct Type;
struct __declspec(align(8)) UberShaderCustomShaderModifierResult__Fields {
    struct CustomShaderModifier* Attribute;
    struct Type* LinkedType;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderCustomShaderModifierResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderCustomShaderModifierResult__Fields_FWDDECL
#include <Modloader/app/structs/CustomShaderModifier.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_UberShaderCustomShaderModifierResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderCustomShaderModifierResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderCustomShaderModifierResult__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderCustomShaderModifierResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderCustomShaderModifierResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
