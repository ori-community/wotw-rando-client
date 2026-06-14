#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CsvReader_Cell_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CsvReader_Cell_INITIALIZING
#if !defined(IL2CPP_STRUCT_CsvReader_Cell_DEFINED)
#define IL2CPP_STRUCT_CsvReader_Cell_DEFINED
struct String;
struct CsvReader_Cell {
    int32_t Column;
    int32_t Row;
    struct String* Value;
};
#endif
#if !defined(IL2CPP_STRUCT_CsvReader_Cell_FWDDECL)
#define IL2CPP_STRUCT_CsvReader_Cell_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CsvReader_Cell_INITIALIZING
#if !defined(IL2CPP_STRUCT_CsvReader_Cell_DEFINED) && !defined(IL2CPP_STRUCT_CsvReader_Cell_FWDDECL)
#include <Modloader/app/structs/CsvReader_Cell.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CsvReader_Cell.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
