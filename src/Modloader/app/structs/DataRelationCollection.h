#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRelationCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRelationCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelationCollection_DEFINED)
#include <Modloader/app/structs/DataRelationCollection__Fields.h>
#if defined(IL2CPP_STRUCT_DataRelationCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRelationCollection_DEFINED
struct DataRelationCollection__Class;
struct DataRelationCollection {
    struct DataRelationCollection__Class* klass;
    MonitorData* monitor;
    struct DataRelationCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRelationCollection_FWDDECL)
#define IL2CPP_STRUCT_DataRelationCollection_FWDDECL
#include <Modloader/app/structs/DataRelationCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_DataRelationCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelationCollection_DEFINED) && !defined(IL2CPP_STRUCT_DataRelationCollection_FWDDECL)
#include <Modloader/app/structs/DataRelationCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRelationCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
