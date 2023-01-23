#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCommunicationSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCommunicationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommunicationSettings_DEFINED)
#include <Modloader/app/structs/AkCommunicationSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkCommunicationSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCommunicationSettings_DEFINED
struct AkCommunicationSettings__Class;
struct AkCommunicationSettings {
    struct AkCommunicationSettings__Class* klass;
    MonitorData* monitor;
    struct AkCommunicationSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkCommunicationSettings_FWDDECL)
#define IL2CPP_STRUCT_AkCommunicationSettings_FWDDECL
#include <Modloader/app/structs/AkCommunicationSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkCommunicationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommunicationSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkCommunicationSettings_FWDDECL)
#include <Modloader/app/structs/AkCommunicationSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCommunicationSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
