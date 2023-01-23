#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpikeSlugEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpikeSlugEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeSlugEntity_DEFINED)
#include <Modloader/app/structs/SpikeSlugEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SpikeSlugEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SpikeSlugEntity_DEFINED
struct SpikeSlugEntity__Class;
struct SpikeSlugEntity {
    struct SpikeSlugEntity__Class* klass;
    MonitorData* monitor;
    struct SpikeSlugEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpikeSlugEntity_FWDDECL)
#define IL2CPP_STRUCT_SpikeSlugEntity_FWDDECL
#include <Modloader/app/structs/SpikeSlugEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SpikeSlugEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeSlugEntity_DEFINED) && !defined(IL2CPP_STRUCT_SpikeSlugEntity_FWDDECL)
#include <Modloader/app/structs/SpikeSlugEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpikeSlugEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
