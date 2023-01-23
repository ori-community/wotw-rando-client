#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageReactionSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageReactionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReactionSettings_DEFINED)
#include <Modloader/app/structs/DamageReactionSettings__Fields.h>
#if defined(IL2CPP_STRUCT_DamageReactionSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageReactionSettings_DEFINED
struct DamageReactionSettings__Class;
struct DamageReactionSettings {
    struct DamageReactionSettings__Class* klass;
    MonitorData* monitor;
    struct DamageReactionSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageReactionSettings_FWDDECL)
#define IL2CPP_STRUCT_DamageReactionSettings_FWDDECL
#include <Modloader/app/structs/DamageReactionSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageReactionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReactionSettings_DEFINED) && !defined(IL2CPP_STRUCT_DamageReactionSettings_FWDDECL)
#include <Modloader/app/structs/DamageReactionSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageReactionSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
