#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NumberFormatter__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NumberFormatter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberFormatter__StaticFields_DEFINED)
#define IL2CPP_STRUCT_NumberFormatter__StaticFields_DEFINED
struct NumberFormatter;
struct NumberFormatter__StaticFields {
    uint64_t* MantissaBitsTable;
    int32_t* TensExponentTable;
    uint16_t* DigitLowerTable;
    uint16_t* DigitUpperTable;
    int64_t* TenPowersList;
    int32_t* DecHexDigits;
    struct NumberFormatter* threadNumberFormatter;
    struct NumberFormatter* userFormatProvider;
};
#endif
#if !defined(IL2CPP_STRUCT_NumberFormatter__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_NumberFormatter__StaticFields_FWDDECL
#include <Modloader/app/structs/NumberFormatter.h>
#endif
#undef IL2CPP_STRUCT_NumberFormatter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberFormatter__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_NumberFormatter__StaticFields_FWDDECL)
#include <Modloader/app/structs/NumberFormatter__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NumberFormatter__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
