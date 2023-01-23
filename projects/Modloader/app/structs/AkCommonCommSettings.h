#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCommonCommSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCommonCommSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonCommSettings_DEFINED)
#include <Modloader/app/structs/AkCommonCommSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkCommonCommSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCommonCommSettings_DEFINED
struct AkCommonCommSettings__Class;
struct AkCommonCommSettings {
    struct AkCommonCommSettings__Class* klass;
    MonitorData* monitor;
    struct AkCommonCommSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkCommonCommSettings_FWDDECL)
#define IL2CPP_STRUCT_AkCommonCommSettings_FWDDECL
#include <Modloader/app/structs/AkCommonCommSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkCommonCommSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonCommSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkCommonCommSettings_FWDDECL)
#include <Modloader/app/structs/AkCommonCommSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCommonCommSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
