#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonSerializerInternalWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonSerializerInternalWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalWriter_DEFINED)
#include <Modloader/app/structs/JsonSerializerInternalWriter__Fields.h>
#if defined(IL2CPP_STRUCT_JsonSerializerInternalWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonSerializerInternalWriter_DEFINED
struct JsonSerializerInternalWriter__Class;
struct JsonSerializerInternalWriter {
    struct JsonSerializerInternalWriter__Class* klass;
    MonitorData* monitor;
    struct JsonSerializerInternalWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalWriter_FWDDECL)
#define IL2CPP_STRUCT_JsonSerializerInternalWriter_FWDDECL
#include <Modloader/app/structs/JsonSerializerInternalWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonSerializerInternalWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalWriter_DEFINED) && !defined(IL2CPP_STRUCT_JsonSerializerInternalWriter_FWDDECL)
#include <Modloader/app/structs/JsonSerializerInternalWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonSerializerInternalWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
