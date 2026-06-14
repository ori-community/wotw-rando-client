#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRelationPropertyDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRelationPropertyDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelationPropertyDescriptor_DEFINED)
#include <Modloader/app/structs/DataRelationPropertyDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_DataRelationPropertyDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRelationPropertyDescriptor_DEFINED
struct DataRelationPropertyDescriptor__Class;
struct DataRelationPropertyDescriptor {
    struct DataRelationPropertyDescriptor__Class* klass;
    MonitorData* monitor;
    struct DataRelationPropertyDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRelationPropertyDescriptor_FWDDECL)
#define IL2CPP_STRUCT_DataRelationPropertyDescriptor_FWDDECL
#include <Modloader/app/structs/DataRelationPropertyDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_DataRelationPropertyDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelationPropertyDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_DataRelationPropertyDescriptor_FWDDECL)
#include <Modloader/app/structs/DataRelationPropertyDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRelationPropertyDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
