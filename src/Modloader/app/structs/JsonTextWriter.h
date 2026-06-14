#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonTextWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonTextWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonTextWriter_DEFINED)
#include <Modloader/app/structs/JsonTextWriter__Fields.h>
#if defined(IL2CPP_STRUCT_JsonTextWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonTextWriter_DEFINED
struct JsonTextWriter__Class;
struct JsonTextWriter {
    struct JsonTextWriter__Class* klass;
    MonitorData* monitor;
    struct JsonTextWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonTextWriter_FWDDECL)
#define IL2CPP_STRUCT_JsonTextWriter_FWDDECL
#include <Modloader/app/structs/JsonTextWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonTextWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonTextWriter_DEFINED) && !defined(IL2CPP_STRUCT_JsonTextWriter_FWDDECL)
#include <Modloader/app/structs/JsonTextWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonTextWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
