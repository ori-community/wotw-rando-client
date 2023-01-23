#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRelation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRelation_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelation_DEFINED)
#include <Modloader/app/structs/DataRelation__Fields.h>
#if defined(IL2CPP_STRUCT_DataRelation__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRelation_DEFINED
struct DataRelation__Class;
struct DataRelation {
    struct DataRelation__Class* klass;
    MonitorData* monitor;
    struct DataRelation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRelation_FWDDECL)
#define IL2CPP_STRUCT_DataRelation_FWDDECL
#include <Modloader/app/structs/DataRelation__Class.h>
#endif
#undef IL2CPP_STRUCT_DataRelation_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelation_DEFINED) && !defined(IL2CPP_STRUCT_DataRelation_FWDDECL)
#include <Modloader/app/structs/DataRelation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRelation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
