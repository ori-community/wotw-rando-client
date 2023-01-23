#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvrionmentBasedSoundProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvrionmentBasedSoundProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvrionmentBasedSoundProvider_DEFINED)
#include <Modloader/app/structs/EnvrionmentBasedSoundProvider__Fields.h>
#if defined(IL2CPP_STRUCT_EnvrionmentBasedSoundProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_EnvrionmentBasedSoundProvider_DEFINED
struct EnvrionmentBasedSoundProvider__Class;
struct EnvrionmentBasedSoundProvider {
    struct EnvrionmentBasedSoundProvider__Class* klass;
    MonitorData* monitor;
    struct EnvrionmentBasedSoundProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnvrionmentBasedSoundProvider_FWDDECL)
#define IL2CPP_STRUCT_EnvrionmentBasedSoundProvider_FWDDECL
#include <Modloader/app/structs/EnvrionmentBasedSoundProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_EnvrionmentBasedSoundProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvrionmentBasedSoundProvider_DEFINED) && !defined(IL2CPP_STRUCT_EnvrionmentBasedSoundProvider_FWDDECL)
#include <Modloader/app/structs/EnvrionmentBasedSoundProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvrionmentBasedSoundProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
