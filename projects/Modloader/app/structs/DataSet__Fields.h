#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataSet__Fields_DEFINED)
#include <Modloader/app/structs/MarshalByValueComponent__Fields.h>
#include <Modloader/app/structs/SerializationFormat__Enum_1.h>
#if defined(IL2CPP_STRUCT_MarshalByValueComponent__Fields_DEFINED) && defined(IL2CPP_STRUCT_SerializationFormat__Enum_1_DEFINED)
#define IL2CPP_STRUCT_DataSet__Fields_DEFINED
struct DataViewManager;
struct DataTableCollection;
struct DataRelationCollection;
struct PropertyCollection;
struct String;
struct CultureInfo;
struct Object;
struct PropertyChangedEventHandler;
struct MergeFailedEventHandler;
struct DataRowCreatedEventHandler;
struct DataSetClearEventhandler;
struct EventHandler;
struct DataSet__Fields {
    struct MarshalByValueComponent__Fields _;
    struct DataViewManager* _defaultViewManager;
    struct DataTableCollection* _tableCollection;
    struct DataRelationCollection* _relationCollection;
    struct PropertyCollection* _extendedProperties;
    struct String* _dataSetName;
    struct String* _datasetPrefix;
    struct String* _namespaceURI;
    bool _enforceConstraints;
    bool _caseSensitive;
    struct CultureInfo* _culture;
    bool _cultureUserSet;
    bool _fInReadXml;
    bool _fInLoadDiffgram;
    bool _fTopLevelTable;
    bool _fInitInProgress;
    bool _fEnableCascading;
    bool _fIsSchemaLoading;
    struct String* _mainTableName;
    SerializationFormat__Enum_1 _remotingFormat;

    struct Object* _defaultViewManagerLock;
    int32_t _objectID;
    bool _useDataSetSchemaOnly;
    bool _udtIsWrapped;
    struct PropertyChangedEventHandler* PropertyChanging;
    struct MergeFailedEventHandler* MergeFailed;
    struct DataRowCreatedEventHandler* DataRowCreated;
    struct DataSetClearEventhandler* ClearFunctionCalled;
    struct EventHandler* Initialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataSet__Fields_FWDDECL
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/DataRelationCollection.h>
#include <Modloader/app/structs/DataRowCreatedEventHandler.h>
#include <Modloader/app/structs/DataSetClearEventhandler.h>
#include <Modloader/app/structs/DataTableCollection.h>
#include <Modloader/app/structs/DataViewManager.h>
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/MergeFailedEventHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyChangedEventHandler.h>
#include <Modloader/app/structs/PropertyCollection.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DataSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataSet__Fields_FWDDECL)
#include <Modloader/app/structs/DataSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
