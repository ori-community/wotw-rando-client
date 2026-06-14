#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpikeSlugLocomotion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpikeSlugLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeSlugLocomotion_DEFINED)
#include <Modloader/app/structs/SpikeSlugLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_SpikeSlugLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_SpikeSlugLocomotion_DEFINED
struct SpikeSlugLocomotion__Class;
struct SpikeSlugLocomotion {
    struct SpikeSlugLocomotion__Class* klass;
    MonitorData* monitor;
    struct SpikeSlugLocomotion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpikeSlugLocomotion_FWDDECL)
#define IL2CPP_STRUCT_SpikeSlugLocomotion_FWDDECL
#include <Modloader/app/structs/SpikeSlugLocomotion__Class.h>
#endif
#undef IL2CPP_STRUCT_SpikeSlugLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeSlugLocomotion_DEFINED) && !defined(IL2CPP_STRUCT_SpikeSlugLocomotion_FWDDECL)
#include <Modloader/app/structs/SpikeSlugLocomotion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpikeSlugLocomotion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
