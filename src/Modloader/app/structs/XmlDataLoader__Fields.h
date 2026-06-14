#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDataLoader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDataLoader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDataLoader__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlDataLoader__Fields_DEFINED
struct DataSet;
struct XmlToDatasetMap;
struct Hashtable;
struct Stack;
struct XmlElement;
struct DataTable;
struct XmlReader;
struct Object;
struct __declspec(align(8)) XmlDataLoader__Fields {
    struct DataSet* _dataSet;
    struct XmlToDatasetMap* _nodeToSchemaMap;
    struct Hashtable* _nodeToRowMap;
    struct Stack* _childRowsStack;
    struct Hashtable* _htableExcludedNS;
    bool _fIsXdr;
    bool _isDiffgram;
    struct XmlElement* _topMostNode;
    bool _ignoreSchema;
    struct DataTable* _dataTable;
    bool _isTableLevel;
    bool _fromInference;
    struct XmlReader* _dataReader;
    struct Object* _XSD_XMLNS_NS;
    struct Object* _XDR_SCHEMA;
    struct Object* _XDRNS;
    struct Object* _SQL_SYNC;
    struct Object* _UPDGNS;
    struct Object* _XSD_SCHEMA;
    struct Object* _XSDNS;
    struct Object* _DFFNS;
    struct Object* _MSDNS;
    struct Object* _DIFFID;
    struct Object* _HASCHANGES;
    struct Object* _ROWORDER;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlDataLoader__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlDataLoader__Fields_FWDDECL
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stack.h>
#include <Modloader/app/structs/XmlElement.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlToDatasetMap.h>
#endif
#undef IL2CPP_STRUCT_XmlDataLoader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDataLoader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlDataLoader__Fields_FWDDECL)
#include <Modloader/app/structs/XmlDataLoader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDataLoader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
