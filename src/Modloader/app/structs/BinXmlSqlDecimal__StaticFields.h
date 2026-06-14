#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinXmlSqlDecimal__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinXmlSqlDecimal__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinXmlSqlDecimal__StaticFields_DEFINED)
#define IL2CPP_STRUCT_BinXmlSqlDecimal__StaticFields_DEFINED
struct UInt32__Array;
struct Byte__Array;
struct BinXmlSqlDecimal__StaticFields {
    uint8_t NUMERIC_MAX_PRECISION;
    uint8_t MaxPrecision;
    uint8_t MaxScale;
    int32_t x_cNumeMax;
    int64_t x_lInt32Base;
    uint64_t x_ulInt32Base;
    uint64_t x_ulInt32BaseForMod;
    uint64_t x_llMax;
    double DUINT_BASE;
    double DUINT_BASE2;
    double DUINT_BASE3;
    struct UInt32__Array* x_rgulShiftBase;
    struct Byte__Array* rgCLenFromPrec;
};
#endif
#if !defined(IL2CPP_STRUCT_BinXmlSqlDecimal__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_BinXmlSqlDecimal__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_BinXmlSqlDecimal__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinXmlSqlDecimal__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_BinXmlSqlDecimal__StaticFields_FWDDECL)
#include <Modloader/app/structs/BinXmlSqlDecimal__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinXmlSqlDecimal__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
