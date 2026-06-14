#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CsvWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CsvWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CsvWriter_DEFINED)
#include <Modloader/app/structs/CsvWriter__Fields.h>
#if defined(IL2CPP_STRUCT_CsvWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_CsvWriter_DEFINED
struct CsvWriter__Class;
struct CsvWriter {
    struct CsvWriter__Class* klass;
    MonitorData* monitor;
    struct CsvWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CsvWriter_FWDDECL)
#define IL2CPP_STRUCT_CsvWriter_FWDDECL
#include <Modloader/app/structs/CsvWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_CsvWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CsvWriter_DEFINED) && !defined(IL2CPP_STRUCT_CsvWriter_FWDDECL)
#include <Modloader/app/structs/CsvWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CsvWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
