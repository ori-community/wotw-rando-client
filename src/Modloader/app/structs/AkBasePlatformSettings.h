#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkBasePlatformSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkBasePlatformSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBasePlatformSettings_DEFINED)
#include <Modloader/app/structs/AkBasePlatformSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkBasePlatformSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkBasePlatformSettings_DEFINED
struct AkBasePlatformSettings__Class;
struct AkBasePlatformSettings {
    struct AkBasePlatformSettings__Class* klass;
    MonitorData* monitor;
    struct AkBasePlatformSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkBasePlatformSettings_FWDDECL)
#define IL2CPP_STRUCT_AkBasePlatformSettings_FWDDECL
#include <Modloader/app/structs/AkBasePlatformSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkBasePlatformSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkBasePlatformSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkBasePlatformSettings_FWDDECL)
#include <Modloader/app/structs/AkBasePlatformSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkBasePlatformSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
