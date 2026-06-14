#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MixerSnapshot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MixerSnapshot_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerSnapshot_DEFINED)
#include <Modloader/app/structs/MixerSnapshot__Fields.h>
#if defined(IL2CPP_STRUCT_MixerSnapshot__Fields_DEFINED)
#define IL2CPP_STRUCT_MixerSnapshot_DEFINED
struct MixerSnapshot__Class;
struct MixerSnapshot {
    struct MixerSnapshot__Class* klass;
    MonitorData* monitor;
    struct MixerSnapshot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MixerSnapshot_FWDDECL)
#define IL2CPP_STRUCT_MixerSnapshot_FWDDECL
#include <Modloader/app/structs/MixerSnapshot__Class.h>
#endif
#undef IL2CPP_STRUCT_MixerSnapshot_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerSnapshot_DEFINED) && !defined(IL2CPP_STRUCT_MixerSnapshot_FWDDECL)
#include <Modloader/app/structs/MixerSnapshot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MixerSnapshot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
