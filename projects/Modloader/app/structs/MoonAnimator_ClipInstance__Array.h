#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_ClipInstance__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_ClipInstance__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_ClipInstance__Array_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_ClipInstance__Array_DEFINED
struct MoonAnimator_ClipInstance__Array__Class;
struct MoonAnimator_ClipInstance;
struct MoonAnimator_ClipInstance__Array {
    struct MoonAnimator_ClipInstance__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator_ClipInstance* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_ClipInstance__Array_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_ClipInstance__Array_FWDDECL
#include <Modloader/app/structs/MoonAnimator_ClipInstance.h>
#include <Modloader/app/structs/MoonAnimator_ClipInstance__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_ClipInstance__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_ClipInstance__Array_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_ClipInstance__Array_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_ClipInstance__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_ClipInstance__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
