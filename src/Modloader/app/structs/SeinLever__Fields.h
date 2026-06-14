#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLever__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLever__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLever__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinLever__Fields_DEFINED
struct MessageProvider;
struct ILever;
struct MessageBox;
struct SeinLever__Fields {
    struct CharacterState__Fields _;
    struct MessageProvider* PressToGrabMessage;
    struct MessageProvider* PressLeftRightMessage;
    struct ILever* m_lever;
    bool m_moveSeinPosition;
    float m_seinTargetPositionX;
    float m_seinSlidingTimeLeft;
    struct Vector3 m_seinSlidingOrigPos;
    struct MessageBox* m_pressToGrabHint;
    struct MessageBox* m_pressLeftRightHint;
    float m_releaseOnInputLockTimer;
    struct ILever* m_stressTestLever;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLever__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinLever__Fields_FWDDECL
#include <Modloader/app/structs/ILever.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinLever__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLever__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinLever__Fields_FWDDECL)
#include <Modloader/app/structs/SeinLever__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLever__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
