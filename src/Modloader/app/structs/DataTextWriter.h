#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataTextWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataTextWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTextWriter_DEFINED)
#include <Modloader/app/structs/DataTextWriter__Fields.h>
#if defined(IL2CPP_STRUCT_DataTextWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_DataTextWriter_DEFINED
struct DataTextWriter__Class;
struct DataTextWriter {
    struct DataTextWriter__Class* klass;
    MonitorData* monitor;
    struct DataTextWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataTextWriter_FWDDECL)
#define IL2CPP_STRUCT_DataTextWriter_FWDDECL
#include <Modloader/app/structs/DataTextWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_DataTextWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTextWriter_DEFINED) && !defined(IL2CPP_STRUCT_DataTextWriter_FWDDECL)
#include <Modloader/app/structs/DataTextWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataTextWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
