#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonSerializerInternalReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonSerializerInternalReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalReader_DEFINED)
#include <Modloader/app/structs/JsonSerializerInternalReader__Fields.h>
#if defined(IL2CPP_STRUCT_JsonSerializerInternalReader__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonSerializerInternalReader_DEFINED
struct JsonSerializerInternalReader__Class;
struct JsonSerializerInternalReader {
    struct JsonSerializerInternalReader__Class* klass;
    MonitorData* monitor;
    struct JsonSerializerInternalReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalReader_FWDDECL)
#define IL2CPP_STRUCT_JsonSerializerInternalReader_FWDDECL
#include <Modloader/app/structs/JsonSerializerInternalReader__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonSerializerInternalReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalReader_DEFINED) && !defined(IL2CPP_STRUCT_JsonSerializerInternalReader_FWDDECL)
#include <Modloader/app/structs/JsonSerializerInternalReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonSerializerInternalReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
