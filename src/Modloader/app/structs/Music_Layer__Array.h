#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Music_Layer__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Music_Layer__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music_Layer__Array_DEFINED)
#define IL2CPP_STRUCT_Music_Layer__Array_DEFINED
struct Music_Layer__Array__Class;
struct Music_Layer;
struct Music_Layer__Array {
    struct Music_Layer__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Music_Layer* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_Music_Layer__Array_FWDDECL)
#define IL2CPP_STRUCT_Music_Layer__Array_FWDDECL
#include <Modloader/app/structs/Music_Layer.h>
#include <Modloader/app/structs/Music_Layer__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Music_Layer__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music_Layer__Array_DEFINED) && !defined(IL2CPP_STRUCT_Music_Layer__Array_FWDDECL)
#include <Modloader/app/structs/Music_Layer__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Music_Layer__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
