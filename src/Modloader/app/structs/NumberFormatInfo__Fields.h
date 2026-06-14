#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NumberFormatInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NumberFormatInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberFormatInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_NumberFormatInfo__Fields_DEFINED
struct Int32__Array;
struct String;
struct String__Array;
struct __declspec(align(8)) NumberFormatInfo__Fields {
    struct Int32__Array* numberGroupSizes;
    struct Int32__Array* currencyGroupSizes;
    struct Int32__Array* percentGroupSizes;
    struct String* positiveSign;
    struct String* negativeSign;
    struct String* numberDecimalSeparator;
    struct String* numberGroupSeparator;
    struct String* currencyGroupSeparator;
    struct String* currencyDecimalSeparator;
    struct String* currencySymbol;
    struct String* ansiCurrencySymbol;
    struct String* nanSymbol;
    struct String* positiveInfinitySymbol;
    struct String* negativeInfinitySymbol;
    struct String* percentDecimalSeparator;
    struct String* percentGroupSeparator;
    struct String* percentSymbol;
    struct String* perMilleSymbol;
    struct String__Array* nativeDigits;
    int32_t m_dataItem;
    int32_t numberDecimalDigits;
    int32_t currencyDecimalDigits;
    int32_t currencyPositivePattern;
    int32_t currencyNegativePattern;
    int32_t numberNegativePattern;
    int32_t percentPositivePattern;
    int32_t percentNegativePattern;
    int32_t percentDecimalDigits;
    int32_t digitSubstitution;
    bool isReadOnly;
    bool m_useUserOverride;
    bool m_isInvariant;
    bool validForParseAsNumber;
    bool validForParseAsCurrency;
};
#endif
#if !defined(IL2CPP_STRUCT_NumberFormatInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_NumberFormatInfo__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_NumberFormatInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberFormatInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NumberFormatInfo__Fields_FWDDECL)
#include <Modloader/app/structs/NumberFormatInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NumberFormatInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
