#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonPropertyCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonPropertyCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonPropertyCollection_DEFINED)
#include <Modloader/app/structs/JsonPropertyCollection__Fields.h>
#if defined(IL2CPP_STRUCT_JsonPropertyCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonPropertyCollection_DEFINED
struct JsonPropertyCollection__Class;
struct JsonPropertyCollection {
    struct JsonPropertyCollection__Class* klass;
    MonitorData* monitor;
    struct JsonPropertyCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonPropertyCollection_FWDDECL)
#define IL2CPP_STRUCT_JsonPropertyCollection_FWDDECL
#include <Modloader/app/structs/JsonPropertyCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonPropertyCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonPropertyCollection_DEFINED) && !defined(IL2CPP_STRUCT_JsonPropertyCollection_FWDDECL)
#include <Modloader/app/structs/JsonPropertyCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonPropertyCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
