#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShrineCombat_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShrineCombat_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineCombat_States__Fields_DEFINED)
#define IL2CPP_STRUCT_ShrineCombat_States__Fields_DEFINED
struct ShrineCombat_ShrineCombatState;
struct __declspec(align(8)) ShrineCombat_States__Fields {
    struct ShrineCombat_ShrineCombatState* Idle;
    struct ShrineCombat_ShrineCombatState* Running;
};
#endif
#if !defined(IL2CPP_STRUCT_ShrineCombat_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShrineCombat_States__Fields_FWDDECL
#include <Modloader/app/structs/ShrineCombat_ShrineCombatState.h>
#endif
#undef IL2CPP_STRUCT_ShrineCombat_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineCombat_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShrineCombat_States__Fields_FWDDECL)
#include <Modloader/app/structs/ShrineCombat_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShrineCombat_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
