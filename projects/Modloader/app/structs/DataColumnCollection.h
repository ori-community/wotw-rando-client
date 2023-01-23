#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataColumnCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataColumnCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumnCollection_DEFINED)
#include <Modloader/app/structs/DataColumnCollection__Fields.h>
#if defined(IL2CPP_STRUCT_DataColumnCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_DataColumnCollection_DEFINED
struct DataColumnCollection__Class;
struct DataColumnCollection {
    struct DataColumnCollection__Class* klass;
    MonitorData* monitor;
    struct DataColumnCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataColumnCollection_FWDDECL)
#define IL2CPP_STRUCT_DataColumnCollection_FWDDECL
#include <Modloader/app/structs/DataColumnCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_DataColumnCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumnCollection_DEFINED) && !defined(IL2CPP_STRUCT_DataColumnCollection_FWDDECL)
#include <Modloader/app/structs/DataColumnCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataColumnCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
