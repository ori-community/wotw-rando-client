#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CsvReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CsvReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_CsvReader_DEFINED)
#include <Modloader/app/structs/CsvReader__Fields.h>
#if defined(IL2CPP_STRUCT_CsvReader__Fields_DEFINED)
#define IL2CPP_STRUCT_CsvReader_DEFINED
struct CsvReader__Class;
struct CsvReader {
    struct CsvReader__Class* klass;
    MonitorData* monitor;
    struct CsvReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CsvReader_FWDDECL)
#define IL2CPP_STRUCT_CsvReader_FWDDECL
#include <Modloader/app/structs/CsvReader__Class.h>
#endif
#undef IL2CPP_STRUCT_CsvReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_CsvReader_DEFINED) && !defined(IL2CPP_STRUCT_CsvReader_FWDDECL)
#include <Modloader/app/structs/CsvReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CsvReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
