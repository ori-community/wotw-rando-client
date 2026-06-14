#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NoiseAndScratches_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NoiseAndScratches_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoiseAndScratches_DEFINED)
#include <Modloader/app/structs/NoiseAndScratches__Fields.h>
#if defined(IL2CPP_STRUCT_NoiseAndScratches__Fields_DEFINED)
#define IL2CPP_STRUCT_NoiseAndScratches_DEFINED
struct NoiseAndScratches__Class;
struct NoiseAndScratches {
    struct NoiseAndScratches__Class* klass;
    MonitorData* monitor;
    struct NoiseAndScratches__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NoiseAndScratches_FWDDECL)
#define IL2CPP_STRUCT_NoiseAndScratches_FWDDECL
#include <Modloader/app/structs/NoiseAndScratches__Class.h>
#endif
#undef IL2CPP_STRUCT_NoiseAndScratches_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoiseAndScratches_DEFINED) && !defined(IL2CPP_STRUCT_NoiseAndScratches_FWDDECL)
#include <Modloader/app/structs/NoiseAndScratches.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NoiseAndScratches.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
