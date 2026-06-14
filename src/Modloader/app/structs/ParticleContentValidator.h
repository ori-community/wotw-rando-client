#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleContentValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleContentValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleContentValidator_DEFINED)
#include <Modloader/app/structs/ParticleContentValidator__Fields.h>
#if defined(IL2CPP_STRUCT_ParticleContentValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_ParticleContentValidator_DEFINED
struct ParticleContentValidator__Class;
struct ParticleContentValidator {
    struct ParticleContentValidator__Class* klass;
    MonitorData* monitor;
    struct ParticleContentValidator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleContentValidator_FWDDECL)
#define IL2CPP_STRUCT_ParticleContentValidator_FWDDECL
#include <Modloader/app/structs/ParticleContentValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_ParticleContentValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleContentValidator_DEFINED) && !defined(IL2CPP_STRUCT_ParticleContentValidator_FWDDECL)
#include <Modloader/app/structs/ParticleContentValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleContentValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
