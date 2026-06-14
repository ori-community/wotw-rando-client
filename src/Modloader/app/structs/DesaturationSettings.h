#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesaturationSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesaturationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesaturationSettings_DEFINED)
#include <Modloader/app/structs/DesaturationSettings__Fields.h>
#if defined(IL2CPP_STRUCT_DesaturationSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_DesaturationSettings_DEFINED
struct DesaturationSettings__Class;
struct DesaturationSettings {
    struct DesaturationSettings__Class* klass;
    MonitorData* monitor;
    struct DesaturationSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DesaturationSettings_FWDDECL)
#define IL2CPP_STRUCT_DesaturationSettings_FWDDECL
#include <Modloader/app/structs/DesaturationSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_DesaturationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesaturationSettings_DEFINED) && !defined(IL2CPP_STRUCT_DesaturationSettings_FWDDECL)
#include <Modloader/app/structs/DesaturationSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesaturationSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
