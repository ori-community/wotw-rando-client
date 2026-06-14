#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributesBasedDataReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributesBasedDataReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributesBasedDataReader_DEFINED)
#include <Modloader/app/structs/AttributesBasedDataReader__Fields.h>
#if defined(IL2CPP_STRUCT_AttributesBasedDataReader__Fields_DEFINED)
#define IL2CPP_STRUCT_AttributesBasedDataReader_DEFINED
struct AttributesBasedDataReader__Class;
struct AttributesBasedDataReader {
    struct AttributesBasedDataReader__Class* klass;
    MonitorData* monitor;
    struct AttributesBasedDataReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttributesBasedDataReader_FWDDECL)
#define IL2CPP_STRUCT_AttributesBasedDataReader_FWDDECL
#include <Modloader/app/structs/AttributesBasedDataReader__Class.h>
#endif
#undef IL2CPP_STRUCT_AttributesBasedDataReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributesBasedDataReader_DEFINED) && !defined(IL2CPP_STRUCT_AttributesBasedDataReader_FWDDECL)
#include <Modloader/app/structs/AttributesBasedDataReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributesBasedDataReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
