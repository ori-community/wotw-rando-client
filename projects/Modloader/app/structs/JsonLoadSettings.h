#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonLoadSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonLoadSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonLoadSettings_DEFINED)
#include <Modloader/app/structs/JsonLoadSettings__Fields.h>
#if defined(IL2CPP_STRUCT_JsonLoadSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonLoadSettings_DEFINED
struct JsonLoadSettings__Class;
struct JsonLoadSettings {
    struct JsonLoadSettings__Class* klass;
    MonitorData* monitor;
    struct JsonLoadSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonLoadSettings_FWDDECL)
#define IL2CPP_STRUCT_JsonLoadSettings_FWDDECL
#include <Modloader/app/structs/JsonLoadSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonLoadSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonLoadSettings_DEFINED) && !defined(IL2CPP_STRUCT_JsonLoadSettings_FWDDECL)
#include <Modloader/app/structs/JsonLoadSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonLoadSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
