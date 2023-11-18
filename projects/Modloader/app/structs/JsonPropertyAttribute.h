#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonPropertyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonPropertyAttribute_DEFINED)
#include <Modloader/app/structs/JsonPropertyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_JsonPropertyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonPropertyAttribute_DEFINED
struct JsonPropertyAttribute__Class;
struct JsonPropertyAttribute {
    struct JsonPropertyAttribute__Class* klass;
    MonitorData* monitor;
    struct JsonPropertyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonPropertyAttribute_FWDDECL)
#define IL2CPP_STRUCT_JsonPropertyAttribute_FWDDECL
#include <Modloader/app/structs/JsonPropertyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonPropertyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_JsonPropertyAttribute_FWDDECL)
#include <Modloader/app/structs/JsonPropertyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonPropertyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
