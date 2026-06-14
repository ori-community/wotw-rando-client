#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataObjectAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataObjectAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataObjectAttribute_DEFINED)
#include <Modloader/app/structs/DataObjectAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DataObjectAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DataObjectAttribute_DEFINED
struct DataObjectAttribute__Class;
struct DataObjectAttribute {
    struct DataObjectAttribute__Class* klass;
    MonitorData* monitor;
    struct DataObjectAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataObjectAttribute_FWDDECL)
#define IL2CPP_STRUCT_DataObjectAttribute_FWDDECL
#include <Modloader/app/structs/DataObjectAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DataObjectAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataObjectAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DataObjectAttribute_FWDDECL)
#include <Modloader/app/structs/DataObjectAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataObjectAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
