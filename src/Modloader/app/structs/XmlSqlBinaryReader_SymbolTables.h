#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSqlBinaryReader_SymbolTables_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_SymbolTables_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_SymbolTables_DEFINED)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_SymbolTables_DEFINED
struct String__Array;
struct XmlSqlBinaryReader_QName__Array;
struct XmlSqlBinaryReader_SymbolTables {
    struct String__Array* symtable;
    int32_t symCount;
    struct XmlSqlBinaryReader_QName__Array* qnametable;
    int32_t qnameCount;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_SymbolTables_FWDDECL)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_SymbolTables_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_QName__Array.h>
#endif
#undef IL2CPP_STRUCT_XmlSqlBinaryReader_SymbolTables_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_SymbolTables_DEFINED) && !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_SymbolTables_FWDDECL)
#include <Modloader/app/structs/XmlSqlBinaryReader_SymbolTables.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSqlBinaryReader_SymbolTables.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
