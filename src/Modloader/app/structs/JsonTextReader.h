#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonTextReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonTextReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonTextReader_DEFINED)
#include <Modloader/app/structs/JsonTextReader__Fields.h>
#if defined(IL2CPP_STRUCT_JsonTextReader__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonTextReader_DEFINED
struct JsonTextReader__Class;
struct JsonTextReader {
    struct JsonTextReader__Class* klass;
    MonitorData* monitor;
    struct JsonTextReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonTextReader_FWDDECL)
#define IL2CPP_STRUCT_JsonTextReader_FWDDECL
#include <Modloader/app/structs/JsonTextReader__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonTextReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonTextReader_DEFINED) && !defined(IL2CPP_STRUCT_JsonTextReader_FWDDECL)
#include <Modloader/app/structs/JsonTextReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonTextReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
