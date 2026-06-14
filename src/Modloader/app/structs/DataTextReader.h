#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataTextReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataTextReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTextReader_DEFINED)
#include <Modloader/app/structs/DataTextReader__Fields.h>
#if defined(IL2CPP_STRUCT_DataTextReader__Fields_DEFINED)
#define IL2CPP_STRUCT_DataTextReader_DEFINED
struct DataTextReader__Class;
struct DataTextReader {
    struct DataTextReader__Class* klass;
    MonitorData* monitor;
    struct DataTextReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataTextReader_FWDDECL)
#define IL2CPP_STRUCT_DataTextReader_FWDDECL
#include <Modloader/app/structs/DataTextReader__Class.h>
#endif
#undef IL2CPP_STRUCT_DataTextReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTextReader_DEFINED) && !defined(IL2CPP_STRUCT_DataTextReader_FWDDECL)
#include <Modloader/app/structs/DataTextReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataTextReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
