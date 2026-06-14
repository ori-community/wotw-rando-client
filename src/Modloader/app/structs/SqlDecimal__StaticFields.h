#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlDecimal__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlDecimal__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDecimal__StaticFields_DEFINED)
#include <Modloader/app/structs/SqlDecimal.h>
#if defined(IL2CPP_STRUCT_SqlDecimal_DEFINED)
#define IL2CPP_STRUCT_SqlDecimal__StaticFields_DEFINED
struct UInt32__Array;
struct Byte__Array;
struct SqlDecimal__StaticFields {
    uint8_t s_NUMERIC_MAX_PRECISION;
    uint8_t MaxPrecision;
    uint8_t MaxScale;
    uint8_t s_bNullMask;
    uint8_t s_bIsNull;
    uint8_t s_bNotNull;
    uint8_t s_bReverseNullMask;
    uint8_t s_bSignMask;
    uint8_t s_bPositive;
    uint8_t s_bNegative;
    uint8_t s_bReverseSignMask;
    uint32_t s_uiZero;
    int32_t s_cNumeMax;
    int64_t s_lInt32Base;
    uint64_t s_ulInt32Base;
    uint64_t s_ulInt32BaseForMod;
    uint64_t s_llMax;
    uint32_t s_ulBase10;
    double s_DUINT_BASE;
    double s_DUINT_BASE2;
    double s_DUINT_BASE3;
    double s_DMAX_NUME;
    uint32_t s_DBL_DIG;
    uint8_t s_cNumeDivScaleMin;
    struct UInt32__Array* s_rgulShiftBase;
    struct UInt32__Array* s_decimalHelpersLo;
    struct UInt32__Array* s_decimalHelpersMid;
    struct UInt32__Array* s_decimalHelpersHi;
    struct UInt32__Array* s_decimalHelpersHiHi;
    struct Byte__Array* s_rgCLenFromPrec;
    uint32_t s_ulT1;
    uint32_t s_ulT2;
    uint32_t s_ulT3;
    uint32_t s_ulT4;
    uint32_t s_ulT5;
    uint32_t s_ulT6;
    uint32_t s_ulT7;
    uint32_t s_ulT8;
    uint32_t s_ulT9;
    uint64_t s_dwlT10;
    uint64_t s_dwlT11;
    uint64_t s_dwlT12;
    uint64_t s_dwlT13;
    uint64_t s_dwlT14;
    uint64_t s_dwlT15;
    uint64_t s_dwlT16;
    uint64_t s_dwlT17;
    uint64_t s_dwlT18;
    uint64_t s_dwlT19;
    struct SqlDecimal Null;
    struct SqlDecimal MinValue;
    struct SqlDecimal MaxValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlDecimal__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SqlDecimal__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_SqlDecimal__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDecimal__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SqlDecimal__StaticFields_FWDDECL)
#include <Modloader/app/structs/SqlDecimal__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlDecimal__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
