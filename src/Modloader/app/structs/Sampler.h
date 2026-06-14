#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Sampler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Sampler_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sampler_DEFINED)
#include <Modloader/app/structs/Sampler__Fields.h>
#if defined(IL2CPP_STRUCT_Sampler__Fields_DEFINED)
#define IL2CPP_STRUCT_Sampler_DEFINED
struct Sampler__Class;
struct Sampler {
    struct Sampler__Class* klass;
    MonitorData* monitor;
    struct Sampler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Sampler_FWDDECL)
#define IL2CPP_STRUCT_Sampler_FWDDECL
#include <Modloader/app/structs/Sampler__Class.h>
#endif
#undef IL2CPP_STRUCT_Sampler_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sampler_DEFINED) && !defined(IL2CPP_STRUCT_Sampler_FWDDECL)
#include <Modloader/app/structs/Sampler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Sampler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
