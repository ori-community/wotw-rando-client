#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableBinding__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableBinding__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableBinding__Array_DEFINED)
#include <Modloader/app/structs/PlayableBinding.h>
#if defined(IL2CPP_STRUCT_PlayableBinding_DEFINED)
#define IL2CPP_STRUCT_PlayableBinding__Array_DEFINED
struct PlayableBinding__Array__Class;
struct PlayableBinding__Array {
    struct PlayableBinding__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct PlayableBinding vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayableBinding__Array_FWDDECL)
#define IL2CPP_STRUCT_PlayableBinding__Array_FWDDECL
#include <Modloader/app/structs/PlayableBinding__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayableBinding__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableBinding__Array_DEFINED) && !defined(IL2CPP_STRUCT_PlayableBinding__Array_FWDDECL)
#include <Modloader/app/structs/PlayableBinding__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableBinding__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
