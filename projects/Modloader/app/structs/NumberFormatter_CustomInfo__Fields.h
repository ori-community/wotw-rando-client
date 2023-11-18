#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NumberFormatter_CustomInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NumberFormatter_CustomInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberFormatter_CustomInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_NumberFormatter_CustomInfo__Fields_DEFINED
struct __declspec(align(8)) NumberFormatter_CustomInfo__Fields {
    bool UseGroup;
    int32_t DecimalDigits;
    int32_t DecimalPointPos;
    int32_t DecimalTailSharpDigits;
    int32_t IntegerDigits;
    int32_t IntegerHeadSharpDigits;
    int32_t IntegerHeadPos;
    bool UseExponent;
    int32_t ExponentDigits;
    int32_t ExponentTailSharpDigits;
    bool ExponentNegativeSignOnly;
    int32_t DividePlaces;
    int32_t Percents;
    int32_t Permilles;
};
#endif
#if !defined(IL2CPP_STRUCT_NumberFormatter_CustomInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_NumberFormatter_CustomInfo__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_NumberFormatter_CustomInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberFormatter_CustomInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NumberFormatter_CustomInfo__Fields_FWDDECL)
#include <Modloader/app/structs/NumberFormatter_CustomInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NumberFormatter_CustomInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
