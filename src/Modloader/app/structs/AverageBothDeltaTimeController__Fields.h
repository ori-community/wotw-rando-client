#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AverageBothDeltaTimeController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AverageBothDeltaTimeController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AverageBothDeltaTimeController__Fields_DEFINED)
#define IL2CPP_STRUCT_AverageBothDeltaTimeController__Fields_DEFINED
struct DeltaTimeManager_DeltaTimeFrameHistory__Array;
struct __declspec(align(8)) AverageBothDeltaTimeController__Fields {
    struct DeltaTimeManager_DeltaTimeFrameHistory__Array* m_history;
};
#endif
#if !defined(IL2CPP_STRUCT_AverageBothDeltaTimeController__Fields_FWDDECL)
#define IL2CPP_STRUCT_AverageBothDeltaTimeController__Fields_FWDDECL
#include <Modloader/app/structs/DeltaTimeManager_DeltaTimeFrameHistory__Array.h>
#endif
#undef IL2CPP_STRUCT_AverageBothDeltaTimeController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AverageBothDeltaTimeController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AverageBothDeltaTimeController__Fields_FWDDECL)
#include <Modloader/app/structs/AverageBothDeltaTimeController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AverageBothDeltaTimeController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
