#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StormZone_SoundSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StormZone_SoundSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_StormZone_SoundSource_DEFINED)
#include <Modloader/app/structs/StormZone_SoundSource__Fields.h>
#if defined(IL2CPP_STRUCT_StormZone_SoundSource__Fields_DEFINED)
#define IL2CPP_STRUCT_StormZone_SoundSource_DEFINED
struct StormZone_SoundSource__Class;
struct StormZone_SoundSource {
    struct StormZone_SoundSource__Class* klass;
    MonitorData* monitor;
    struct StormZone_SoundSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StormZone_SoundSource_FWDDECL)
#define IL2CPP_STRUCT_StormZone_SoundSource_FWDDECL
#include <Modloader/app/structs/StormZone_SoundSource__Class.h>
#endif
#undef IL2CPP_STRUCT_StormZone_SoundSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_StormZone_SoundSource_DEFINED) && !defined(IL2CPP_STRUCT_StormZone_SoundSource_FWDDECL)
#include <Modloader/app/structs/StormZone_SoundSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StormZone_SoundSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
