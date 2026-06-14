#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionSettings_DEFINED)
#include <Modloader/app/structs/InteractionSettings__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionSettings_DEFINED
struct InteractionSettings__Class;
struct InteractionSettings {
    struct InteractionSettings__Class* klass;
    MonitorData* monitor;
    struct InteractionSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionSettings_FWDDECL)
#define IL2CPP_STRUCT_InteractionSettings_FWDDECL
#include <Modloader/app/structs/InteractionSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionSettings_DEFINED) && !defined(IL2CPP_STRUCT_InteractionSettings_FWDDECL)
#include <Modloader/app/structs/InteractionSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
