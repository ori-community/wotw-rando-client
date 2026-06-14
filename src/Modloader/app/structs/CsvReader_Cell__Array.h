#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CsvReader_Cell__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CsvReader_Cell__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_CsvReader_Cell__Array_DEFINED)
#include <Modloader/app/structs/CsvReader_Cell.h>
#if defined(IL2CPP_STRUCT_CsvReader_Cell_DEFINED)
#define IL2CPP_STRUCT_CsvReader_Cell__Array_DEFINED
struct CsvReader_Cell__Array__Class;
struct CsvReader_Cell__Array {
    struct CsvReader_Cell__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct CsvReader_Cell vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CsvReader_Cell__Array_FWDDECL)
#define IL2CPP_STRUCT_CsvReader_Cell__Array_FWDDECL
#include <Modloader/app/structs/CsvReader_Cell__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_CsvReader_Cell__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_CsvReader_Cell__Array_DEFINED) && !defined(IL2CPP_STRUCT_CsvReader_Cell__Array_FWDDECL)
#include <Modloader/app/structs/CsvReader_Cell__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CsvReader_Cell__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
