#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCommonAdvancedSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCommonAdvancedSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonAdvancedSettings_DEFINED)
#include <Modloader/app/structs/AkCommonAdvancedSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkCommonAdvancedSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCommonAdvancedSettings_DEFINED
struct AkCommonAdvancedSettings__Class;
struct AkCommonAdvancedSettings {
    struct AkCommonAdvancedSettings__Class* klass;
    MonitorData* monitor;
    struct AkCommonAdvancedSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkCommonAdvancedSettings_FWDDECL)
#define IL2CPP_STRUCT_AkCommonAdvancedSettings_FWDDECL
#include <Modloader/app/structs/AkCommonAdvancedSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkCommonAdvancedSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonAdvancedSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkCommonAdvancedSettings_FWDDECL)
#include <Modloader/app/structs/AkCommonAdvancedSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCommonAdvancedSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
