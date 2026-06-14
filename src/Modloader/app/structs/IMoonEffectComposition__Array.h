#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoonEffectComposition__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoonEffectComposition__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonEffectComposition__Array_DEFINED)
#define IL2CPP_STRUCT_IMoonEffectComposition__Array_DEFINED
struct IMoonEffectComposition__Array__Class;
struct IMoonEffectComposition;
struct IMoonEffectComposition__Array {
    struct IMoonEffectComposition__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct IMoonEffectComposition* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_IMoonEffectComposition__Array_FWDDECL)
#define IL2CPP_STRUCT_IMoonEffectComposition__Array_FWDDECL
#include <Modloader/app/structs/IMoonEffectComposition.h>
#include <Modloader/app/structs/IMoonEffectComposition__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_IMoonEffectComposition__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonEffectComposition__Array_DEFINED) && !defined(IL2CPP_STRUCT_IMoonEffectComposition__Array_FWDDECL)
#include <Modloader/app/structs/IMoonEffectComposition__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoonEffectComposition__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
