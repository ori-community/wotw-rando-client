#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericParameterAttributes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericParameterAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericParameterAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_GenericParameterAttributes__Enum_DEFINED
enum class GenericParameterAttributes__Enum : int32_t {
    None = 0x00000000,
    VarianceMask = 0x00000003,
    Covariant = 0x00000001,
    Contravariant = 0x00000002,
    SpecialConstraintMask = 0x0000001c,
    ReferenceTypeConstraint = 0x00000004,
    NotNullableValueTypeConstraint = 0x00000008,
    DefaultConstructorConstraint = 0x00000010,
};
#endif
#if !defined(IL2CPP_STRUCT_GenericParameterAttributes__Enum_FWDDECL)
#define IL2CPP_STRUCT_GenericParameterAttributes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_GenericParameterAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericParameterAttributes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_GenericParameterAttributes__Enum_FWDDECL)
#include <Modloader/app/structs/GenericParameterAttributes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericParameterAttributes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
