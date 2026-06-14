#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MixerManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MixerManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MixerManager__StaticFields_DEFINED
struct Predicate_1_MixerSnapshot_;
struct Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_;
struct AudioMixer;
struct MixerManager;
struct MixerManager__StaticFields {
    bool OptimizeMixerUpdate;
    struct Predicate_1_MixerSnapshot_* CachedIsSnapshotInactivePredicate;
    struct Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_* s_typeToGroup;
    struct AudioMixer* s_cachedMasterMixer;
    struct MixerManager* s_manager;
};
#endif
#if !defined(IL2CPP_STRUCT_MixerManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MixerManager__StaticFields_FWDDECL
#include <Modloader/app/structs/AudioMixer.h>
#include <Modloader/app/structs/Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_.h>
#include <Modloader/app/structs/MixerManager.h>
#include <Modloader/app/structs/Predicate_1_MixerSnapshot_.h>
#endif
#undef IL2CPP_STRUCT_MixerManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MixerManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/MixerManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MixerManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
