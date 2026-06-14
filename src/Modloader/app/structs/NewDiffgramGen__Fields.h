#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewDiffgramGen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewDiffgramGen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewDiffgramGen__Fields_DEFINED)
#define IL2CPP_STRUCT_NewDiffgramGen__Fields_DEFINED
struct XmlDocument;
struct DataSet;
struct DataTable;
struct XmlWriter;
struct Hashtable;
struct ArrayList;
struct __declspec(align(8)) NewDiffgramGen__Fields {
    struct XmlDocument* _doc;
    struct DataSet* _ds_1;
    struct DataTable* _dt;
    struct XmlWriter* _xmlw;
    bool _fBefore;
    bool _fErrors;
    struct Hashtable* _rowsOrder;
    struct ArrayList* _tables;
    bool _writeHierarchy;
};
#endif
#if !defined(IL2CPP_STRUCT_NewDiffgramGen__Fields_FWDDECL)
#define IL2CPP_STRUCT_NewDiffgramGen__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlWriter.h>
#endif
#undef IL2CPP_STRUCT_NewDiffgramGen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewDiffgramGen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NewDiffgramGen__Fields_FWDDECL)
#include <Modloader/app/structs/NewDiffgramGen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewDiffgramGen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
