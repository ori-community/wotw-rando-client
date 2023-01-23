#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLeafParticles_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLeafParticles_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLeafParticles_DEFINED)
#include <Modloader/app/structs/SeinLeafParticles__Fields.h>
#if defined(IL2CPP_STRUCT_SeinLeafParticles__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLeafParticles_DEFINED
struct SeinLeafParticles__Class;
struct SeinLeafParticles {
    struct SeinLeafParticles__Class* klass;
    MonitorData* monitor;
    struct SeinLeafParticles__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLeafParticles_FWDDECL)
#define IL2CPP_STRUCT_SeinLeafParticles_FWDDECL
#include <Modloader/app/structs/SeinLeafParticles__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinLeafParticles_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLeafParticles_DEFINED) && !defined(IL2CPP_STRUCT_SeinLeafParticles_FWDDECL)
#include <Modloader/app/structs/SeinLeafParticles.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLeafParticles.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
