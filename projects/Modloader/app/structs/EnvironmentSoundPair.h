#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvironmentSoundPair_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvironmentSoundPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentSoundPair_DEFINED)
#include <Modloader/app/structs/EnvironmentSoundPair__Fields.h>
#if defined(IL2CPP_STRUCT_EnvironmentSoundPair__Fields_DEFINED)
#define IL2CPP_STRUCT_EnvironmentSoundPair_DEFINED
struct EnvironmentSoundPair__Class;
struct EnvironmentSoundPair {
    struct EnvironmentSoundPair__Class* klass;
    MonitorData* monitor;
    struct EnvironmentSoundPair__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnvironmentSoundPair_FWDDECL)
#define IL2CPP_STRUCT_EnvironmentSoundPair_FWDDECL
#include <Modloader/app/structs/EnvironmentSoundPair__Class.h>
#endif
#undef IL2CPP_STRUCT_EnvironmentSoundPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentSoundPair_DEFINED) && !defined(IL2CPP_STRUCT_EnvironmentSoundPair_FWDDECL)
#include <Modloader/app/structs/EnvironmentSoundPair.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvironmentSoundPair.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
