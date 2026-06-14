#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataContractAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataContractAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataContractAttribute_DEFINED)
#include <Modloader/app/structs/DataContractAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DataContractAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DataContractAttribute_DEFINED
struct DataContractAttribute__Class;
struct DataContractAttribute {
    struct DataContractAttribute__Class* klass;
    MonitorData* monitor;
    struct DataContractAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataContractAttribute_FWDDECL)
#define IL2CPP_STRUCT_DataContractAttribute_FWDDECL
#include <Modloader/app/structs/DataContractAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DataContractAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataContractAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DataContractAttribute_FWDDECL)
#include <Modloader/app/structs/DataContractAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataContractAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
