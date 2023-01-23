#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkInitSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkInitSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkInitSettings_DEFINED)
#include <Modloader/app/structs/AkInitSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkInitSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkInitSettings_DEFINED
struct AkInitSettings__Class;
struct AkInitSettings {
    struct AkInitSettings__Class* klass;
    MonitorData* monitor;
    struct AkInitSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkInitSettings_FWDDECL)
#define IL2CPP_STRUCT_AkInitSettings_FWDDECL
#include <Modloader/app/structs/AkInitSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkInitSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkInitSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkInitSettings_FWDDECL)
#include <Modloader/app/structs/AkInitSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkInitSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
