#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonSerializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializer_DEFINED)
#include <Modloader/app/structs/JsonSerializer__Fields.h>
#if defined(IL2CPP_STRUCT_JsonSerializer__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonSerializer_DEFINED
struct JsonSerializer__Class;
struct JsonSerializer {
    struct JsonSerializer__Class* klass;
    MonitorData* monitor;
    struct JsonSerializer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonSerializer_FWDDECL)
#define IL2CPP_STRUCT_JsonSerializer_FWDDECL
#include <Modloader/app/structs/JsonSerializer__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializer_DEFINED) && !defined(IL2CPP_STRUCT_JsonSerializer_FWDDECL)
#include <Modloader/app/structs/JsonSerializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonSerializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
