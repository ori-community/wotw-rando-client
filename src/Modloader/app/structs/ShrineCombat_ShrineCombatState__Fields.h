#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShrineCombat_ShrineCombatState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShrineCombat_ShrineCombatState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineCombat_ShrineCombatState__Fields_DEFINED)
#define IL2CPP_STRUCT_ShrineCombat_ShrineCombatState__Fields_DEFINED
struct ShrineCombat;
struct StateMachine_2;
struct ShrineCombat_States;
struct __declspec(align(8)) ShrineCombat_ShrineCombatState__Fields {
    struct ShrineCombat* m_shrineCombat;
    struct StateMachine_2* m_stateMachine;
    struct ShrineCombat_States* m_states;
    float m_stateTime;
};
#endif
#if !defined(IL2CPP_STRUCT_ShrineCombat_ShrineCombatState__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShrineCombat_ShrineCombatState__Fields_FWDDECL
#include <Modloader/app/structs/ShrineCombat.h>
#include <Modloader/app/structs/ShrineCombat_States.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_ShrineCombat_ShrineCombatState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineCombat_ShrineCombatState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShrineCombat_ShrineCombatState__Fields_FWDDECL)
#include <Modloader/app/structs/ShrineCombat_ShrineCombatState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShrineCombat_ShrineCombatState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
