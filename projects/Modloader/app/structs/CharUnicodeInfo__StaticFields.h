#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharUnicodeInfo__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharUnicodeInfo__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharUnicodeInfo__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CharUnicodeInfo__StaticFields_DEFINED
struct UInt16__Array;
struct Byte__Array;
struct CharUnicodeInfo__StaticFields {
    struct UInt16__Array* s_pCategoryLevel1Index;
    struct Byte__Array* s_pCategoriesValue;
    struct UInt16__Array* s_pNumericLevel1Index;
    struct Byte__Array* s_pNumericValues;
    struct UInt16__Array* s_pDigitValues;
};
#endif
#if !defined(IL2CPP_STRUCT_CharUnicodeInfo__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CharUnicodeInfo__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt16__Array.h>
#endif
#undef IL2CPP_STRUCT_CharUnicodeInfo__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharUnicodeInfo__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CharUnicodeInfo__StaticFields_FWDDECL)
#include <Modloader/app/structs/CharUnicodeInfo__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharUnicodeInfo__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
