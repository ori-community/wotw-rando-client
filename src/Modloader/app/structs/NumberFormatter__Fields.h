#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NumberFormatter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NumberFormatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberFormatter__Fields_DEFINED)
#define IL2CPP_STRUCT_NumberFormatter__Fields_DEFINED
struct NumberFormatInfo;
struct Char__Array;
struct __declspec(align(8)) NumberFormatter__Fields {
    struct NumberFormatInfo* _nfi;
    struct Char__Array* _cbuf;
    bool _NaN;
    bool _infinity;
    bool _isCustomFormat;
    bool _specifierIsUpper;
    bool _positive;
    uint16_t _specifier;
    int32_t _precision;
    int32_t _defPrecision;
    int32_t _digitsLen;
    int32_t _offset;
    int32_t _decPointPos;
    uint32_t _val1;
    uint32_t _val2;
    uint32_t _val3;
    uint32_t _val4;
    int32_t _ind;
};
#endif
#if !defined(IL2CPP_STRUCT_NumberFormatter__Fields_FWDDECL)
#define IL2CPP_STRUCT_NumberFormatter__Fields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#endif
#undef IL2CPP_STRUCT_NumberFormatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberFormatter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NumberFormatter__Fields_FWDDECL)
#include <Modloader/app/structs/NumberFormatter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NumberFormatter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
