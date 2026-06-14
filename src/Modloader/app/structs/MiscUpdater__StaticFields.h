#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MiscUpdater__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MiscUpdater__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MiscUpdater__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MiscUpdater__StaticFields_DEFINED
struct List_1_CollisionSoundSource_;
struct List_1_LimitedLifetime_;
struct List_1_ParticleSystemEmissionRateOverDistance_;
struct List_1_ProtectiveLightRadial_;
struct List_1_UnparentTrailRenderer_;
struct MiscUpdater;
struct MiscUpdater__StaticFields {
    struct List_1_CollisionSoundSource_* s_allCollisionSoundSources;
    struct List_1_LimitedLifetime_* s_allLimitedLifetimes;
    struct List_1_ParticleSystemEmissionRateOverDistance_* s_allParticleSystemEmissionRateOverDistances;
    struct List_1_ProtectiveLightRadial_* s_allProtectiveLightRadials;
    struct List_1_UnparentTrailRenderer_* s_allUnparentTrailRenderers;
    struct MiscUpdater* _Instance_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_MiscUpdater__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MiscUpdater__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_CollisionSoundSource_.h>
#include <Modloader/app/structs/List_1_LimitedLifetime_.h>
#include <Modloader/app/structs/List_1_ParticleSystemEmissionRateOverDistance_.h>
#include <Modloader/app/structs/List_1_ProtectiveLightRadial_.h>
#include <Modloader/app/structs/List_1_UnparentTrailRenderer_.h>
#include <Modloader/app/structs/MiscUpdater.h>
#endif
#undef IL2CPP_STRUCT_MiscUpdater__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MiscUpdater__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MiscUpdater__StaticFields_FWDDECL)
#include <Modloader/app/structs/MiscUpdater__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MiscUpdater__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
