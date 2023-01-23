#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkOutputSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkOutputSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkOutputSettings_DEFINED)
#include <Modloader/app/structs/AkOutputSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkOutputSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkOutputSettings_DEFINED
struct AkOutputSettings__Class;
struct AkOutputSettings {
    struct AkOutputSettings__Class* klass;
    MonitorData* monitor;
    struct AkOutputSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkOutputSettings_FWDDECL)
#define IL2CPP_STRUCT_AkOutputSettings_FWDDECL
#include <Modloader/app/structs/AkOutputSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkOutputSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkOutputSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkOutputSettings_FWDDECL)
#include <Modloader/app/structs/AkOutputSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkOutputSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
