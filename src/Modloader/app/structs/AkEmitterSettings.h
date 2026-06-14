#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkEmitterSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkEmitterSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkEmitterSettings_DEFINED)
#include <Modloader/app/structs/AkEmitterSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkEmitterSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkEmitterSettings_DEFINED
struct AkEmitterSettings__Class;
struct AkEmitterSettings {
    struct AkEmitterSettings__Class* klass;
    MonitorData* monitor;
    struct AkEmitterSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkEmitterSettings_FWDDECL)
#define IL2CPP_STRUCT_AkEmitterSettings_FWDDECL
#include <Modloader/app/structs/AkEmitterSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkEmitterSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkEmitterSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkEmitterSettings_FWDDECL)
#include <Modloader/app/structs/AkEmitterSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkEmitterSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
