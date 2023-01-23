#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaskedTextProvider_CharDescriptor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaskedTextProvider_CharDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskedTextProvider_CharDescriptor__Fields_DEFINED)
#include <Modloader/app/structs/MaskedTextProvider_CaseConversion__Enum.h>
#include <Modloader/app/structs/MaskedTextProvider_CharType__Enum.h>
#if defined(IL2CPP_STRUCT_MaskedTextProvider_CaseConversion__Enum_DEFINED) && defined(IL2CPP_STRUCT_MaskedTextProvider_CharType__Enum_DEFINED)
#define IL2CPP_STRUCT_MaskedTextProvider_CharDescriptor__Fields_DEFINED
struct __declspec(align(8)) MaskedTextProvider_CharDescriptor__Fields {
    int32_t MaskPosition;
    MaskedTextProvider_CaseConversion__Enum CaseConversion;

    MaskedTextProvider_CharType__Enum CharType;

    bool IsAssigned;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaskedTextProvider_CharDescriptor__Fields_FWDDECL)
#define IL2CPP_STRUCT_MaskedTextProvider_CharDescriptor__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_MaskedTextProvider_CharDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskedTextProvider_CharDescriptor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MaskedTextProvider_CharDescriptor__Fields_FWDDECL)
#include <Modloader/app/structs/MaskedTextProvider_CharDescriptor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaskedTextProvider_CharDescriptor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
