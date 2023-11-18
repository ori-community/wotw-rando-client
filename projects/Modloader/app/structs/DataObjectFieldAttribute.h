#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataObjectFieldAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataObjectFieldAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataObjectFieldAttribute_DEFINED)
#include <Modloader/app/structs/DataObjectFieldAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DataObjectFieldAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DataObjectFieldAttribute_DEFINED
struct DataObjectFieldAttribute__Class;
struct DataObjectFieldAttribute {
    struct DataObjectFieldAttribute__Class* klass;
    MonitorData* monitor;
    struct DataObjectFieldAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataObjectFieldAttribute_FWDDECL)
#define IL2CPP_STRUCT_DataObjectFieldAttribute_FWDDECL
#include <Modloader/app/structs/DataObjectFieldAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DataObjectFieldAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataObjectFieldAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DataObjectFieldAttribute_FWDDECL)
#include <Modloader/app/structs/DataObjectFieldAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataObjectFieldAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
