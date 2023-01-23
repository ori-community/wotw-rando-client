#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataSet_DEFINED)
#include <Modloader/app/structs/DataSet__Fields.h>
#if defined(IL2CPP_STRUCT_DataSet__Fields_DEFINED)
#define IL2CPP_STRUCT_DataSet_DEFINED
struct DataSet__Class;
struct DataSet {
    struct DataSet__Class* klass;
    MonitorData* monitor;
    struct DataSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataSet_FWDDECL)
#define IL2CPP_STRUCT_DataSet_FWDDECL
#include <Modloader/app/structs/DataSet__Class.h>
#endif
#undef IL2CPP_STRUCT_DataSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataSet_DEFINED) && !defined(IL2CPP_STRUCT_DataSet_FWDDECL)
#include <Modloader/app/structs/DataSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
