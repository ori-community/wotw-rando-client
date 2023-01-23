#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonConverter_DEFINED)
#define IL2CPP_STRUCT_JsonConverter_DEFINED
struct JsonConverter__Class;
struct JsonConverter {
    struct JsonConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_JsonConverter_FWDDECL)
#define IL2CPP_STRUCT_JsonConverter_FWDDECL
#include <Modloader/app/structs/JsonConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonConverter_DEFINED) && !defined(IL2CPP_STRUCT_JsonConverter_FWDDECL)
#include <Modloader/app/structs/JsonConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
