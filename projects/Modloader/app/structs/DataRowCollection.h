#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRowCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRowCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowCollection_DEFINED)
#include <Modloader/app/structs/DataRowCollection__Fields.h>
#if defined(IL2CPP_STRUCT_DataRowCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRowCollection_DEFINED
struct DataRowCollection__Class;
struct DataRowCollection {
    struct DataRowCollection__Class* klass;
    MonitorData* monitor;
    struct DataRowCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRowCollection_FWDDECL)
#define IL2CPP_STRUCT_DataRowCollection_FWDDECL
#include <Modloader/app/structs/DataRowCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_DataRowCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowCollection_DEFINED) && !defined(IL2CPP_STRUCT_DataRowCollection_FWDDECL)
#include <Modloader/app/structs/DataRowCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRowCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
