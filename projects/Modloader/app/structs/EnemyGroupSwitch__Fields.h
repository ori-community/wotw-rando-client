#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyGroupSwitch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyGroupSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyGroupSwitch__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemyGroupSwitch__Fields_DEFINED
struct GameObject;
struct Condition_1;
struct TextBox;
struct EnemyGroupSwitch__Fields {
    struct MonoBehaviour__Fields _;
    bool StartState;
    struct GameObject* Target;
    struct GameObject* Hint;
    struct Condition_1* ShowHintCondition;
    struct Condition_1* SwitchCondition;
    struct TextBox* InfoText;
    bool m_showingHint;
    bool m_currentState;
    float m_switchLockTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyGroupSwitch__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnemyGroupSwitch__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/TextBox.h>
#endif
#undef IL2CPP_STRUCT_EnemyGroupSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyGroupSwitch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnemyGroupSwitch__Fields_FWDDECL)
#include <Modloader/app/structs/EnemyGroupSwitch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyGroupSwitch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
