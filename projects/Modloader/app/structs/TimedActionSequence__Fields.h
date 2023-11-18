#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimedActionSequence__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimedActionSequence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedActionSequence__Fields_DEFINED)
#include <Modloader/app/structs/ActionWithDuration__Fields.h>
#if defined(IL2CPP_STRUCT_ActionWithDuration__Fields_DEFINED)
#define IL2CPP_STRUCT_TimedActionSequence__Fields_DEFINED
struct List_1_TimedActionExecuter_;
struct TimedActionSequence__Fields {
    struct ActionWithDuration__Fields _;
    struct List_1_TimedActionExecuter_* Actions;
    float _SequenceCurrentTime_k__BackingField;
    bool _IsSequenceRunning_k__BackingField;
    int32_t _Pause_k__BackingField;
    bool ShowCreateActions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimedActionSequence__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimedActionSequence__Fields_FWDDECL
#include <Modloader/app/structs/List_1_TimedActionExecuter_.h>
#endif
#undef IL2CPP_STRUCT_TimedActionSequence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedActionSequence__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimedActionSequence__Fields_FWDDECL)
#include <Modloader/app/structs/TimedActionSequence__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimedActionSequence__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
