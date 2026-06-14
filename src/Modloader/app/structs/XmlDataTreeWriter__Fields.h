#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDataTreeWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDataTreeWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDataTreeWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlDataTreeWriter__Fields_DEFINED
struct XmlWriter;
struct DataSet;
struct DataTable;
struct ArrayList;
struct DataTable__Array;
struct Hashtable;
struct __declspec(align(8)) XmlDataTreeWriter__Fields {
    struct XmlWriter* _xmlw;
    struct DataSet* _ds_1;
    struct DataTable* _dt;
    struct ArrayList* _dTables;
    struct DataTable__Array* _topLevelTables;
    bool _fFromTable;
    bool _isDiffgram;
    struct Hashtable* _rowsOrder;
    bool _writeHierarchy;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlDataTreeWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlDataTreeWriter__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataTable__Array.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/XmlWriter.h>
#endif
#undef IL2CPP_STRUCT_XmlDataTreeWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDataTreeWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlDataTreeWriter__Fields_FWDDECL)
#include <Modloader/app/structs/XmlDataTreeWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDataTreeWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
