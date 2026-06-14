#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EffectSpawn__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EffectSpawn__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EffectSpawn__Boxed_DEFINED)
#include <Modloader/app/structs/EffectSpawn.h>
#if defined(IL2CPP_STRUCT_EffectSpawn_DEFINED)
#define IL2CPP_STRUCT_EffectSpawn__Boxed_DEFINED
struct EffectSpawn__Class;
struct EffectSpawn__Boxed {
    struct EffectSpawn__Class* klass;
    MonitorData* monitor;
    struct EffectSpawn fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EffectSpawn__Boxed_FWDDECL)
#define IL2CPP_STRUCT_EffectSpawn__Boxed_FWDDECL
#include <Modloader/app/structs/EffectSpawn__Class.h>
#endif
#undef IL2CPP_STRUCT_EffectSpawn__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EffectSpawn__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_EffectSpawn__Boxed_FWDDECL)
#include <Modloader/app/structs/EffectSpawn__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EffectSpawn__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
