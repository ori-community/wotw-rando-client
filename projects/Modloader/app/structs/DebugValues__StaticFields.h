#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugValues__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugValues__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugValues__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DebugValues__StaticFields_DEFINED
struct GameObject__Array;
struct List_1_UnityEngine_GameObject_;
struct DebugValues__StaticFields {
    bool UnlockAllCutscenes;
    bool MuteMusic;
    bool MuteAmbience;
    bool MuteSoundEffects;
    bool ShowAchievementHint;
    bool IsFullyInstalledDebugOverride;
    bool IsBlindForestMode;
    bool Active;
    bool DebugControlsEnabled;
    struct GameObject__Array* m_enemies;
    struct List_1_UnityEngine_GameObject_* m_particleSystems;
    struct GameObject__Array* m_art;
};
#endif
#if !defined(IL2CPP_STRUCT_DebugValues__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DebugValues__StaticFields_FWDDECL
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_DebugValues__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugValues__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DebugValues__StaticFields_FWDDECL)
#include <Modloader/app/structs/DebugValues__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugValues__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
