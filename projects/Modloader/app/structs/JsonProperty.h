#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonProperty_DEFINED)
#include <Modloader/app/structs/JsonProperty__Fields.h>
#if defined(IL2CPP_STRUCT_JsonProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonProperty_DEFINED
struct JsonProperty__Class;
struct JsonProperty {
    struct JsonProperty__Class* klass;
    MonitorData* monitor;
    struct JsonProperty__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonProperty_FWDDECL)
#define IL2CPP_STRUCT_JsonProperty_FWDDECL
#include <Modloader/app/structs/JsonProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonProperty_DEFINED) && !defined(IL2CPP_STRUCT_JsonProperty_FWDDECL)
#include <Modloader/app/structs/JsonProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
