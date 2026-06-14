#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BatEnemy_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BatEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatEnemy_States__Fields_DEFINED)
#define IL2CPP_STRUCT_BatEnemy_States__Fields_DEFINED
struct IBehaviourState;
struct __declspec(align(8)) BatEnemy_States__Fields {
    struct IBehaviourState* Idle;
    struct IBehaviourState* Seek;
    struct IBehaviourState* Attack;
    struct IBehaviourState* Flee;
    struct IBehaviourState* Frozen;
    struct IBehaviourState* CarryStickyMine;
};
#endif
#if !defined(IL2CPP_STRUCT_BatEnemy_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_BatEnemy_States__Fields_FWDDECL
#include <Modloader/app/structs/IBehaviourState.h>
#endif
#undef IL2CPP_STRUCT_BatEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatEnemy_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BatEnemy_States__Fields_FWDDECL)
#include <Modloader/app/structs/BatEnemy_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BatEnemy_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
