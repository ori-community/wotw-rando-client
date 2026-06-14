#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RestoreHealthAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RestoreHealthAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestoreHealthAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_RestoreHealthAction__Fields_DEFINED
struct SoundPlayer;
struct RestoreHealthAction__Fields {
    struct ActionMethod__Fields _;
    float FillDurationPerUnit;
    float m_startHealth;
    float m_startEnergy;
    float m_time;
    struct SoundPlayer* m_fillSound;
    float m_soundDuration;
    float m_healthDuration;
    float m_energyDuration;
    float m_healthTime;
    float m_energyTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RestoreHealthAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_RestoreHealthAction__Fields_FWDDECL
#include <Modloader/app/structs/SoundPlayer.h>
#endif
#undef IL2CPP_STRUCT_RestoreHealthAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestoreHealthAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RestoreHealthAction__Fields_FWDDECL)
#include <Modloader/app/structs/RestoreHealthAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RestoreHealthAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
