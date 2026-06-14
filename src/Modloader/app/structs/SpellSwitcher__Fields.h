#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellSwitcher__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellSwitcher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellSwitcher__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellSwitcher__Fields_DEFINED
struct AbilityType__Enum__Array;
struct SoundProvider;
struct SpellSwitcher__Fields {
    struct MonoBehaviour__Fields _;
    struct AbilityType__Enum__Array* Spells;
    struct SoundProvider* ChangeSound;
    int32_t m_currentSpellIndex;
    float m_spellDisplayTimeLeft;
    bool m_checkpointRestored;
    bool m_restoreState;
    int32_t m_prevHorizontalDigipad;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellSwitcher__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpellSwitcher__Fields_FWDDECL
#include <Modloader/app/structs/AbilityType__Enum__Array.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SpellSwitcher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellSwitcher__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpellSwitcher__Fields_FWDDECL)
#include <Modloader/app/structs/SpellSwitcher__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellSwitcher__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
