#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonWriterException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonWriterException_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonWriterException_DEFINED)
#include <Modloader/app/structs/JsonWriterException__Fields.h>
#if defined(IL2CPP_STRUCT_JsonWriterException__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonWriterException_DEFINED
struct JsonWriterException__Class;
struct JsonWriterException {
    struct JsonWriterException__Class* klass;
    MonitorData* monitor;
    struct JsonWriterException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonWriterException_FWDDECL)
#define IL2CPP_STRUCT_JsonWriterException_FWDDECL
#include <Modloader/app/structs/JsonWriterException__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonWriterException_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonWriterException_DEFINED) && !defined(IL2CPP_STRUCT_JsonWriterException_FWDDECL)
#include <Modloader/app/structs/JsonWriterException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonWriterException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
