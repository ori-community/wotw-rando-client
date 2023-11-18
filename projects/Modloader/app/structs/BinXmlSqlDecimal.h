#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinXmlSqlDecimal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinXmlSqlDecimal_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinXmlSqlDecimal_DEFINED)
#define IL2CPP_STRUCT_BinXmlSqlDecimal_DEFINED
struct BinXmlSqlDecimal {
    uint8_t m_bLen;
    uint8_t m_bPrec;
    uint8_t m_bScale;
    uint8_t m_bSign;
    uint32_t m_data1;
    uint32_t m_data2;
    uint32_t m_data3;
    uint32_t m_data4;
};
#endif
#if !defined(IL2CPP_STRUCT_BinXmlSqlDecimal_FWDDECL)
#define IL2CPP_STRUCT_BinXmlSqlDecimal_FWDDECL
#endif
#undef IL2CPP_STRUCT_BinXmlSqlDecimal_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinXmlSqlDecimal_DEFINED) && !defined(IL2CPP_STRUCT_BinXmlSqlDecimal_FWDDECL)
#include <Modloader/app/structs/BinXmlSqlDecimal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinXmlSqlDecimal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
