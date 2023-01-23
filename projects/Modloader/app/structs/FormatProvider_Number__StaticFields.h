#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FormatProvider_Number__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FormatProvider_Number__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatProvider_Number__StaticFields_DEFINED)
#define IL2CPP_STRUCT_FormatProvider_Number__StaticFields_DEFINED
struct String__Array;
struct String;
struct FormatProvider_Number__StaticFields {
    struct String__Array* s_posCurrencyFormats;
    struct String__Array* s_negCurrencyFormats;
    struct String__Array* s_posPercentFormats;
    struct String__Array* s_negPercentFormats;
    struct String__Array* s_negNumberFormats;
    struct String* s_posNumberFormat;
};
#endif
#if !defined(IL2CPP_STRUCT_FormatProvider_Number__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_FormatProvider_Number__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_FormatProvider_Number__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatProvider_Number__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_FormatProvider_Number__StaticFields_FWDDECL)
#include <Modloader/app/structs/FormatProvider_Number__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FormatProvider_Number__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
