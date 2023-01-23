#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NoiseAndGrain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NoiseAndGrain_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoiseAndGrain_DEFINED)
#include <Modloader/app/structs/NoiseAndGrain__Fields.h>
#if defined(IL2CPP_STRUCT_NoiseAndGrain__Fields_DEFINED)
#define IL2CPP_STRUCT_NoiseAndGrain_DEFINED
struct NoiseAndGrain__Class;
struct NoiseAndGrain {
    struct NoiseAndGrain__Class* klass;
    MonitorData* monitor;
    struct NoiseAndGrain__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NoiseAndGrain_FWDDECL)
#define IL2CPP_STRUCT_NoiseAndGrain_FWDDECL
#include <Modloader/app/structs/NoiseAndGrain__Class.h>
#endif
#undef IL2CPP_STRUCT_NoiseAndGrain_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoiseAndGrain_DEFINED) && !defined(IL2CPP_STRUCT_NoiseAndGrain_FWDDECL)
#include <Modloader/app/structs/NoiseAndGrain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NoiseAndGrain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
