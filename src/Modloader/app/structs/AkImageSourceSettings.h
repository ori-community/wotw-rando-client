#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkImageSourceSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkImageSourceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkImageSourceSettings_DEFINED)
#include <Modloader/app/structs/AkImageSourceSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkImageSourceSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkImageSourceSettings_DEFINED
struct AkImageSourceSettings__Class;
struct AkImageSourceSettings {
    struct AkImageSourceSettings__Class* klass;
    MonitorData* monitor;
    struct AkImageSourceSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkImageSourceSettings_FWDDECL)
#define IL2CPP_STRUCT_AkImageSourceSettings_FWDDECL
#include <Modloader/app/structs/AkImageSourceSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkImageSourceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkImageSourceSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkImageSourceSettings_FWDDECL)
#include <Modloader/app/structs/AkImageSourceSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkImageSourceSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
