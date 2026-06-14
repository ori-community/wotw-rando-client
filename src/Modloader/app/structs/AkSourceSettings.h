#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkSourceSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkSourceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSourceSettings_DEFINED)
#include <Modloader/app/structs/AkSourceSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkSourceSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkSourceSettings_DEFINED
struct AkSourceSettings__Class;
struct AkSourceSettings {
    struct AkSourceSettings__Class* klass;
    MonitorData* monitor;
    struct AkSourceSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkSourceSettings_FWDDECL)
#define IL2CPP_STRUCT_AkSourceSettings_FWDDECL
#include <Modloader/app/structs/AkSourceSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkSourceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSourceSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkSourceSettings_FWDDECL)
#include <Modloader/app/structs/AkSourceSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkSourceSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
