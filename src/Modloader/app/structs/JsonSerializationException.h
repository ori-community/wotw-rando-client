#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonSerializationException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonSerializationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializationException_DEFINED)
#include <Modloader/app/structs/JsonSerializationException__Fields.h>
#if defined(IL2CPP_STRUCT_JsonSerializationException__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonSerializationException_DEFINED
struct JsonSerializationException__Class;
struct JsonSerializationException {
    struct JsonSerializationException__Class* klass;
    MonitorData* monitor;
    struct JsonSerializationException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonSerializationException_FWDDECL)
#define IL2CPP_STRUCT_JsonSerializationException_FWDDECL
#include <Modloader/app/structs/JsonSerializationException__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonSerializationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializationException_DEFINED) && !defined(IL2CPP_STRUCT_JsonSerializationException_FWDDECL)
#include <Modloader/app/structs/JsonSerializationException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonSerializationException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
