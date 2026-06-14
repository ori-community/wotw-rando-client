#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataStorage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataStorage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataStorage__Fields_DEFINED)
#include <Modloader/app/structs/StorageType__Enum.h>
#if defined(IL2CPP_STRUCT_StorageType__Enum_DEFINED)
#define IL2CPP_STRUCT_DataStorage__Fields_DEFINED
struct DataColumn;
struct DataTable;
struct Type;
struct BitArray;
struct Object;
struct __declspec(align(8)) DataStorage__Fields {
    struct DataColumn* _column;
    struct DataTable* _table;
    struct Type* _dataType;
    StorageType__Enum _storageTypeCode;

    struct BitArray* _dbNullBits;
    struct Object* _defaultValue;
    struct Object* _nullValue;
    bool _isCloneable;
    bool _isCustomDefinedType;
    bool _isStringType;
    bool _isValueType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataStorage__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataStorage__Fields_FWDDECL
#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_DataStorage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataStorage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataStorage__Fields_FWDDECL)
#include <Modloader/app/structs/DataStorage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataStorage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
