#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityControllerSM__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityControllerSM__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityControllerSM__Fields_DEFINED)
#include <Modloader/app/structs/EntityController__Fields.h>
#if defined(IL2CPP_STRUCT_EntityController__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityControllerSM__Fields_DEFINED
struct StateMachine_2;
struct TransitionManager_1;
struct EntityControllerSM__Fields {
    struct EntityController__Fields _;
    struct StateMachine_2* StateMachine;
    struct TransitionManager_1* m_transManager;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityControllerSM__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityControllerSM__Fields_FWDDECL
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/TransitionManager_1.h>
#endif
#undef IL2CPP_STRUCT_EntityControllerSM__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityControllerSM__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityControllerSM__Fields_FWDDECL)
#include <Modloader/app/structs/EntityControllerSM__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityControllerSM__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
