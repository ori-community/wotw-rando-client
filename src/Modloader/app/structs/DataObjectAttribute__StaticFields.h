#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataObjectAttribute__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataObjectAttribute__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataObjectAttribute__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DataObjectAttribute__StaticFields_DEFINED
struct DataObjectAttribute;
struct DataObjectAttribute__StaticFields {
    struct DataObjectAttribute* DataObject;
    struct DataObjectAttribute* NonDataObject;
    struct DataObjectAttribute* Default;
};
#endif
#if !defined(IL2CPP_STRUCT_DataObjectAttribute__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DataObjectAttribute__StaticFields_FWDDECL
#include <Modloader/app/structs/DataObjectAttribute.h>
#endif
#undef IL2CPP_STRUCT_DataObjectAttribute__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataObjectAttribute__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DataObjectAttribute__StaticFields_FWDDECL)
#include <Modloader/app/structs/DataObjectAttribute__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataObjectAttribute__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
