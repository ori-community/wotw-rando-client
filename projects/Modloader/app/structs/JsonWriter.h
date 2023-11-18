#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonWriter_DEFINED)
#include <Modloader/app/structs/JsonWriter__Fields.h>
#if defined(IL2CPP_STRUCT_JsonWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonWriter_DEFINED
struct JsonWriter__Class;
struct JsonWriter {
    struct JsonWriter__Class* klass;
    MonitorData* monitor;
    struct JsonWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonWriter_FWDDECL)
#define IL2CPP_STRUCT_JsonWriter_FWDDECL
#include <Modloader/app/structs/JsonWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonWriter_DEFINED) && !defined(IL2CPP_STRUCT_JsonWriter_FWDDECL)
#include <Modloader/app/structs/JsonWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
