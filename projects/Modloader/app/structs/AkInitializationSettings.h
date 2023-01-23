#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkInitializationSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkInitializationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkInitializationSettings_DEFINED)
#include <Modloader/app/structs/AkInitializationSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkInitializationSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkInitializationSettings_DEFINED
struct AkInitializationSettings__Class;
struct AkInitializationSettings {
    struct AkInitializationSettings__Class* klass;
    MonitorData* monitor;
    struct AkInitializationSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkInitializationSettings_FWDDECL)
#define IL2CPP_STRUCT_AkInitializationSettings_FWDDECL
#include <Modloader/app/structs/AkInitializationSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkInitializationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkInitializationSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkInitializationSettings_FWDDECL)
#include <Modloader/app/structs/AkInitializationSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkInitializationSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
