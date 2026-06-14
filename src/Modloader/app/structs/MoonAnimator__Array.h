#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator__Array_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator__Array_DEFINED
struct MoonAnimator__Array__Class;
struct MoonAnimator;
struct MoonAnimator__Array {
    struct MoonAnimator__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator__Array_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator__Array_FWDDECL
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonAnimator__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator__Array_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator__Array_FWDDECL)
#include <Modloader/app/structs/MoonAnimator__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
