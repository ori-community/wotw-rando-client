#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Locomotion_StateTransitionEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Locomotion_StateTransitionEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_Locomotion_StateTransitionEntry_DEFINED)
#define IL2CPP_STRUCT_Locomotion_StateTransitionEntry_DEFINED
struct EntityLocomotionTask;
struct Func_1_Boolean_;
struct Locomotion_StateTransitionEntry {
    struct EntityLocomotionTask* TargetTask;
    struct Func_1_Boolean_* Condition;
};
#endif
#if !defined(IL2CPP_STRUCT_Locomotion_StateTransitionEntry_FWDDECL)
#define IL2CPP_STRUCT_Locomotion_StateTransitionEntry_FWDDECL
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_Locomotion_StateTransitionEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_Locomotion_StateTransitionEntry_DEFINED) && !defined(IL2CPP_STRUCT_Locomotion_StateTransitionEntry_FWDDECL)
#include <Modloader/app/structs/Locomotion_StateTransitionEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Locomotion_StateTransitionEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
