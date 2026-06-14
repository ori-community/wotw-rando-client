#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCommonUserSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCommonUserSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonUserSettings_DEFINED)
#include <Modloader/app/structs/AkCommonUserSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkCommonUserSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCommonUserSettings_DEFINED
struct AkCommonUserSettings__Class;
struct AkCommonUserSettings {
    struct AkCommonUserSettings__Class* klass;
    MonitorData* monitor;
    struct AkCommonUserSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkCommonUserSettings_FWDDECL)
#define IL2CPP_STRUCT_AkCommonUserSettings_FWDDECL
#include <Modloader/app/structs/AkCommonUserSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkCommonUserSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonUserSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkCommonUserSettings_FWDDECL)
#include <Modloader/app/structs/AkCommonUserSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCommonUserSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
