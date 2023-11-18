#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordingUnmanagedParticlesTracker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordingUnmanagedParticlesTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordingUnmanagedParticlesTracker__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_TrackingExclusions_DEFINED)
#define IL2CPP_STRUCT_RecordingUnmanagedParticlesTracker__Fields_DEFINED
struct List_1_UnityEngine_ParticleSystem_;
struct RecordingUnmanagedParticlesTracker__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_ParticleSystem_* UnmanagedParticles;
    bool LivesInTheScene;
    struct TrackingExclusions _TrackingExclusions_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecordingUnmanagedParticlesTracker__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecordingUnmanagedParticlesTracker__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_ParticleSystem_.h>
#endif
#undef IL2CPP_STRUCT_RecordingUnmanagedParticlesTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordingUnmanagedParticlesTracker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecordingUnmanagedParticlesTracker__Fields_FWDDECL)
#include <Modloader/app/structs/RecordingUnmanagedParticlesTracker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordingUnmanagedParticlesTracker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
