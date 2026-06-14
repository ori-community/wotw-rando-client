#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataError__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataError__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataError__Fields_DEFINED)
#define IL2CPP_STRUCT_DataError__Fields_DEFINED
struct String;
struct DataError_ColumnError__Array;
struct __declspec(align(8)) DataError__Fields {
    struct String* _rowError;
    int32_t _count;
    struct DataError_ColumnError__Array* _errorList;
};
#endif
#if !defined(IL2CPP_STRUCT_DataError__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataError__Fields_FWDDECL
#include <Modloader/app/structs/DataError_ColumnError__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DataError__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataError__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataError__Fields_FWDDECL)
#include <Modloader/app/structs/DataError__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataError__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
