#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterFovController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterFovController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterFovController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CharacterFovController__Fields_DEFINED
struct StateFovModifier__Array;
struct CharacterFovController__Fields {
    struct MonoBehaviour__Fields _;
    float ClampSpeed;
    float TransitionTime;
    bool DebugGUI;
    float MaxSpeedBasedOffset;
    float SpeedForMaxOffset;
    struct StateFovModifier__Array* StateModifiers;
    float m_velocity;
    struct Vector3 m_focalCenter;
    float m_lastTargetOffset;
    float m_currentOffset;
    float m_lastDeltaPassed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterFovController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterFovController__Fields_FWDDECL
#include <Modloader/app/structs/StateFovModifier__Array.h>
#endif
#undef IL2CPP_STRUCT_CharacterFovController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterFovController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterFovController__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterFovController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterFovController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
