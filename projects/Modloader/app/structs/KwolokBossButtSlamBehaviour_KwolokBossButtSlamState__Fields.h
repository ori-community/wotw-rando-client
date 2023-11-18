#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields_DEFINED
struct KwolokBossButtSlamBehaviour;
struct StateMachine_2;
struct KwolokBossButtSlamBehaviour_States;
struct KwolokBossEntity;
struct __declspec(align(8)) KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields {
    struct KwolokBossButtSlamBehaviour* m_behaviour;
    struct StateMachine_2* m_stateMachine;
    struct KwolokBossButtSlamBehaviour_States* m_states;
    struct KwolokBossEntity* m_entity;
};
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields_FWDDECL
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour.h>
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_States.h>
#include <Modloader/app/structs/KwolokBossEntity.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
