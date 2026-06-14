#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageBasedSoundProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageBasedSoundProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageBasedSoundProvider_DEFINED)
#include <Modloader/app/structs/DamageBasedSoundProvider__Fields.h>
#if defined(IL2CPP_STRUCT_DamageBasedSoundProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageBasedSoundProvider_DEFINED
struct DamageBasedSoundProvider__Class;
struct DamageBasedSoundProvider {
    struct DamageBasedSoundProvider__Class* klass;
    MonitorData* monitor;
    struct DamageBasedSoundProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageBasedSoundProvider_FWDDECL)
#define IL2CPP_STRUCT_DamageBasedSoundProvider_FWDDECL
#include <Modloader/app/structs/DamageBasedSoundProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageBasedSoundProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageBasedSoundProvider_DEFINED) && !defined(IL2CPP_STRUCT_DamageBasedSoundProvider_FWDDECL)
#include <Modloader/app/structs/DamageBasedSoundProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageBasedSoundProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
