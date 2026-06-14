#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkStreamMgrSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkStreamMgrSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkStreamMgrSettings_DEFINED)
#include <Modloader/app/structs/AkStreamMgrSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkStreamMgrSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkStreamMgrSettings_DEFINED
struct AkStreamMgrSettings__Class;
struct AkStreamMgrSettings {
    struct AkStreamMgrSettings__Class* klass;
    MonitorData* monitor;
    struct AkStreamMgrSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkStreamMgrSettings_FWDDECL)
#define IL2CPP_STRUCT_AkStreamMgrSettings_FWDDECL
#include <Modloader/app/structs/AkStreamMgrSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkStreamMgrSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkStreamMgrSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkStreamMgrSettings_FWDDECL)
#include <Modloader/app/structs/AkStreamMgrSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkStreamMgrSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
