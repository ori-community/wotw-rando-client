#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRow_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRow_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRow_DEFINED)
#include <Modloader/app/structs/DataRow__Fields.h>
#if defined(IL2CPP_STRUCT_DataRow__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRow_DEFINED
struct DataRow__Class;
struct DataRow {
    struct DataRow__Class* klass;
    MonitorData* monitor;
    struct DataRow__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRow_FWDDECL)
#define IL2CPP_STRUCT_DataRow_FWDDECL
#include <Modloader/app/structs/DataRow__Class.h>
#endif
#undef IL2CPP_STRUCT_DataRow_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRow_DEFINED) && !defined(IL2CPP_STRUCT_DataRow_FWDDECL)
#include <Modloader/app/structs/DataRow.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRow.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
