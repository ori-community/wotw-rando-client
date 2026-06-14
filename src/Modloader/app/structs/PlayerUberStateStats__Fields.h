#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateStats__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateStats__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateStats__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateStats__Fields_DEFINED
struct Action;
struct __declspec(align(8)) PlayerUberStateStats__Fields {
    float m_health;
    int32_t m_maxHealth;
    float m_energy;
    float m_maxEnergy;
    int32_t m_completion;
    int32_t m_hours;
    int32_t m_minutes;
    int32_t m_seconds;
    bool m_completed;
    bool m_wasKilled;
    bool m_completedWithEverything;
    int32_t _MinRespawnHealth_k__BackingField;
    struct Action* m_setDirtyCallback;
    bool m_statsFoldout;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateStats__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateStats__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateStats__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateStats__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateStats__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateStats__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateStats__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
