#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MixerSnapshot__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MixerSnapshot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerSnapshot__Fields_DEFINED)
#include <Modloader/app/structs/MixerGroupSettings.h>
#include <Modloader/app/structs/MixerSnapshot_MixerSnapshotState__Enum.h>
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_MixerGroupSettings_DEFINED) && defined(IL2CPP_STRUCT_MixerSnapshot_MixerSnapshotState__Enum_DEFINED)
#define IL2CPP_STRUCT_MixerSnapshot__Fields_DEFINED
struct MixerSnapshot__Fields {
    struct ScriptableObject__Fields _;
    float FadeInTime;
    float FadeOutTime;
    struct MixerGroupSettings SnapshotSettings;
    float m_fadeTime;
    MixerSnapshot_MixerSnapshotState__Enum m_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MixerSnapshot__Fields_FWDDECL)
#define IL2CPP_STRUCT_MixerSnapshot__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_MixerSnapshot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerSnapshot__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MixerSnapshot__Fields_FWDDECL)
#include <Modloader/app/structs/MixerSnapshot__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MixerSnapshot__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
