#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundSource_DEFINED)
#include <Modloader/app/structs/SoundSource__Fields.h>
#if defined(IL2CPP_STRUCT_SoundSource__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundSource_DEFINED
struct SoundSource__Class;
struct SoundSource {
    struct SoundSource__Class* klass;
    MonitorData* monitor;
    struct SoundSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundSource_FWDDECL)
#define IL2CPP_STRUCT_SoundSource_FWDDECL
#include <Modloader/app/structs/SoundSource__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundSource_DEFINED) && !defined(IL2CPP_STRUCT_SoundSource_FWDDECL)
#include <Modloader/app/structs/SoundSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
