#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonSerializerSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonSerializerSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerSettings_DEFINED)
#include <Modloader/app/structs/JsonSerializerSettings__Fields.h>
#if defined(IL2CPP_STRUCT_JsonSerializerSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonSerializerSettings_DEFINED
struct JsonSerializerSettings__Class;
struct JsonSerializerSettings {
    struct JsonSerializerSettings__Class* klass;
    MonitorData* monitor;
    struct JsonSerializerSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonSerializerSettings_FWDDECL)
#define IL2CPP_STRUCT_JsonSerializerSettings_FWDDECL
#include <Modloader/app/structs/JsonSerializerSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonSerializerSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerSettings_DEFINED) && !defined(IL2CPP_STRUCT_JsonSerializerSettings_FWDDECL)
#include <Modloader/app/structs/JsonSerializerSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonSerializerSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
