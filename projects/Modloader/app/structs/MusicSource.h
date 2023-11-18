#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MusicSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MusicSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicSource_DEFINED)
#include <Modloader/app/structs/MusicSource__Fields.h>
#if defined(IL2CPP_STRUCT_MusicSource__Fields_DEFINED)
#define IL2CPP_STRUCT_MusicSource_DEFINED
struct MusicSource__Class;
struct MusicSource {
    struct MusicSource__Class* klass;
    MonitorData* monitor;
    struct MusicSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MusicSource_FWDDECL)
#define IL2CPP_STRUCT_MusicSource_FWDDECL
#include <Modloader/app/structs/MusicSource__Class.h>
#endif
#undef IL2CPP_STRUCT_MusicSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicSource_DEFINED) && !defined(IL2CPP_STRUCT_MusicSource_FWDDECL)
#include <Modloader/app/structs/MusicSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MusicSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
