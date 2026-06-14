#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundProvider__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundProvider__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundProvider__Array_DEFINED)
#define IL2CPP_STRUCT_SoundProvider__Array_DEFINED
struct SoundProvider__Array__Class;
struct SoundProvider;
struct SoundProvider__Array {
    struct SoundProvider__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SoundProvider* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_SoundProvider__Array_FWDDECL)
#define IL2CPP_STRUCT_SoundProvider__Array_FWDDECL
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundProvider__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundProvider__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundProvider__Array_DEFINED) && !defined(IL2CPP_STRUCT_SoundProvider__Array_FWDDECL)
#include <Modloader/app/structs/SoundProvider__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundProvider__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
