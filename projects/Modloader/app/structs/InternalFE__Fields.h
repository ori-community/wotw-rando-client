#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalFE__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalFE__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalFE__Fields_DEFINED)
#include <Modloader/app/structs/FormatterAssemblyStyle__Enum.h>
#include <Modloader/app/structs/FormatterTypeStyle__Enum.h>
#include <Modloader/app/structs/InternalSerializerTypeE__Enum.h>
#include <Modloader/app/structs/TypeFilterLevel__Enum.h>
#if defined(IL2CPP_STRUCT_FormatterTypeStyle__Enum_DEFINED) && defined(IL2CPP_STRUCT_FormatterAssemblyStyle__Enum_DEFINED) && defined(IL2CPP_STRUCT_TypeFilterLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_InternalSerializerTypeE__Enum_DEFINED)
#define IL2CPP_STRUCT_InternalFE__Fields_DEFINED
struct __declspec(align(8)) InternalFE__Fields {
    FormatterTypeStyle__Enum FEtypeFormat;

    FormatterAssemblyStyle__Enum FEassemblyFormat;

    TypeFilterLevel__Enum FEsecurityLevel;

    InternalSerializerTypeE__Enum FEserializerTypeEnum;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InternalFE__Fields_FWDDECL)
#define IL2CPP_STRUCT_InternalFE__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_InternalFE__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalFE__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InternalFE__Fields_FWDDECL)
#include <Modloader/app/structs/InternalFE__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalFE__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
