#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataObjectMethodAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataObjectMethodAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataObjectMethodAttribute_DEFINED)
#include <Modloader/app/structs/DataObjectMethodAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DataObjectMethodAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DataObjectMethodAttribute_DEFINED
struct DataObjectMethodAttribute__Class;
struct DataObjectMethodAttribute {
    struct DataObjectMethodAttribute__Class* klass;
    MonitorData* monitor;
    struct DataObjectMethodAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataObjectMethodAttribute_FWDDECL)
#define IL2CPP_STRUCT_DataObjectMethodAttribute_FWDDECL
#include <Modloader/app/structs/DataObjectMethodAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DataObjectMethodAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataObjectMethodAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DataObjectMethodAttribute_FWDDECL)
#include <Modloader/app/structs/DataObjectMethodAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataObjectMethodAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
