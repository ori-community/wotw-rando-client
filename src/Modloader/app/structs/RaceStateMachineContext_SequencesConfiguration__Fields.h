#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceStateMachineContext_SequencesConfiguration__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceStateMachineContext_SequencesConfiguration__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStateMachineContext_SequencesConfiguration__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceStateMachineContext_SequencesConfiguration__Fields_DEFINED
struct ActionMethod;
struct __declspec(align(8)) RaceStateMachineContext_SequencesConfiguration__Fields {
    struct ActionMethod* OutcomeTimeout;
    struct ActionMethod* OutcomeRegular;
    struct ActionMethod* OutcomeHighScore;
    struct ActionMethod* OutcomeGlobalHighScore;
};
#endif
#if !defined(IL2CPP_STRUCT_RaceStateMachineContext_SequencesConfiguration__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceStateMachineContext_SequencesConfiguration__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#endif
#undef IL2CPP_STRUCT_RaceStateMachineContext_SequencesConfiguration__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStateMachineContext_SequencesConfiguration__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceStateMachineContext_SequencesConfiguration__Fields_FWDDECL)
#include <Modloader/app/structs/RaceStateMachineContext_SequencesConfiguration__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceStateMachineContext_SequencesConfiguration__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
