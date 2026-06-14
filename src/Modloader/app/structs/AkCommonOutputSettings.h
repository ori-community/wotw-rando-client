#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCommonOutputSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCommonOutputSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonOutputSettings_DEFINED)
#include <Modloader/app/structs/AkCommonOutputSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkCommonOutputSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCommonOutputSettings_DEFINED
struct AkCommonOutputSettings__Class;
struct AkCommonOutputSettings {
    struct AkCommonOutputSettings__Class* klass;
    MonitorData* monitor;
    struct AkCommonOutputSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkCommonOutputSettings_FWDDECL)
#define IL2CPP_STRUCT_AkCommonOutputSettings_FWDDECL
#include <Modloader/app/structs/AkCommonOutputSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkCommonOutputSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonOutputSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkCommonOutputSettings_FWDDECL)
#include <Modloader/app/structs/AkCommonOutputSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCommonOutputSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
