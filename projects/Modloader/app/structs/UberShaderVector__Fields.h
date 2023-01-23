#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderVector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderVector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderVector__Fields_DEFINED)
#include <Modloader/app/structs/UberShaderProperty__Fields.h>
#include <Modloader/app/structs/UberShaderVector_ScalingMode__Enum.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_UberShaderProperty__Fields_DEFINED) && defined(IL2CPP_STRUCT_UberShaderVector_ScalingMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_UberShaderVector__Fields_DEFINED
struct UberShaderVector__Fields {
    struct UberShaderProperty__Fields _;
    UberShaderVector_ScalingMode__Enum Mode;

    struct Vector4 m_vectorValue;
    struct Vector4 VectorValueScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderVector__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderVector__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberShaderVector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderVector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderVector__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderVector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderVector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
