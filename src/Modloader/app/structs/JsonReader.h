#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonReader_DEFINED)
#include <Modloader/app/structs/JsonReader__Fields.h>
#if defined(IL2CPP_STRUCT_JsonReader__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonReader_DEFINED
struct JsonReader__Class;
struct JsonReader {
    struct JsonReader__Class* klass;
    MonitorData* monitor;
    struct JsonReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonReader_FWDDECL)
#define IL2CPP_STRUCT_JsonReader_FWDDECL
#include <Modloader/app/structs/JsonReader__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonReader_DEFINED) && !defined(IL2CPP_STRUCT_JsonReader_FWDDECL)
#include <Modloader/app/structs/JsonReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
