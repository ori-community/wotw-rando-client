#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtificialSoundHost__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtificialSoundHost__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtificialSoundHost__Array_DEFINED)
#define IL2CPP_STRUCT_ArtificialSoundHost__Array_DEFINED
struct ArtificialSoundHost__Array__Class;
struct ArtificialSoundHost;
struct ArtificialSoundHost__Array {
    struct ArtificialSoundHost__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct ArtificialSoundHost* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_ArtificialSoundHost__Array_FWDDECL)
#define IL2CPP_STRUCT_ArtificialSoundHost__Array_FWDDECL
#include <Modloader/app/structs/ArtificialSoundHost.h>
#include <Modloader/app/structs/ArtificialSoundHost__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_ArtificialSoundHost__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtificialSoundHost__Array_DEFINED) && !defined(IL2CPP_STRUCT_ArtificialSoundHost__Array_FWDDECL)
#include <Modloader/app/structs/ArtificialSoundHost__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtificialSoundHost__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
