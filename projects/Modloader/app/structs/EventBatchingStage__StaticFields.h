#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventBatchingStage__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventBatchingStage__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventBatchingStage__StaticFields_DEFINED)
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_EventBatchingStage__StaticFields_DEFINED
struct EventBatchingStage__StaticFields {
    struct TimeSpan DefaultBatchFillTimeout;
    int32_t EventAvailabilityCheckTimeoutInMs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventBatchingStage__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_EventBatchingStage__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventBatchingStage__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventBatchingStage__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_EventBatchingStage__StaticFields_FWDDECL)
#include <Modloader/app/structs/EventBatchingStage__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventBatchingStage__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
