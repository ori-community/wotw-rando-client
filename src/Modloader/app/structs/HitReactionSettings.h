#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitReactionSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitReactionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReactionSettings_DEFINED)
#include <Modloader/app/structs/HitReactionSettings__Fields.h>
#if defined(IL2CPP_STRUCT_HitReactionSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_HitReactionSettings_DEFINED
struct HitReactionSettings__Class;
struct HitReactionSettings {
    struct HitReactionSettings__Class* klass;
    MonitorData* monitor;
    struct HitReactionSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitReactionSettings_FWDDECL)
#define IL2CPP_STRUCT_HitReactionSettings_FWDDECL
#include <Modloader/app/structs/HitReactionSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_HitReactionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReactionSettings_DEFINED) && !defined(IL2CPP_STRUCT_HitReactionSettings_FWDDECL)
#include <Modloader/app/structs/HitReactionSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitReactionSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
