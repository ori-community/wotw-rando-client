#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonException_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonException_DEFINED)
#include <Modloader/app/structs/JsonException__Fields.h>
#if defined(IL2CPP_STRUCT_JsonException__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonException_DEFINED
struct JsonException__Class;
struct JsonException {
    struct JsonException__Class* klass;
    MonitorData* monitor;
    struct JsonException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonException_FWDDECL)
#define IL2CPP_STRUCT_JsonException_FWDDECL
#include <Modloader/app/structs/JsonException__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonException_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonException_DEFINED) && !defined(IL2CPP_STRUCT_JsonException_FWDDECL)
#include <Modloader/app/structs/JsonException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
