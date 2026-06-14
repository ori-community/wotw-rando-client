#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderColor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderColor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderColor__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/UberShaderProperty__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderProperty__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_UberShaderColor__Fields_DEFINED
struct UberShaderColor__Fields {
    struct UberShaderProperty__Fields _;
    struct Color m_color;
    float BindMultiply;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderColor__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderColor__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberShaderColor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderColor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderColor__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderColor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderColor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
