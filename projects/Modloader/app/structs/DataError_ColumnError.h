#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataError_ColumnError_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataError_ColumnError_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataError_ColumnError_DEFINED)
#define IL2CPP_STRUCT_DataError_ColumnError_DEFINED
struct DataColumn;
struct String;
struct DataError_ColumnError {
    struct DataColumn* _column;
    struct String* _error;
};
#endif
#if !defined(IL2CPP_STRUCT_DataError_ColumnError_FWDDECL)
#define IL2CPP_STRUCT_DataError_ColumnError_FWDDECL
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DataError_ColumnError_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataError_ColumnError_DEFINED) && !defined(IL2CPP_STRUCT_DataError_ColumnError_FWDDECL)
#include <Modloader/app/structs/DataError_ColumnError.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataError_ColumnError.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
