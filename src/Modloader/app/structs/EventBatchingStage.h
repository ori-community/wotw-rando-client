#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventBatchingStage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventBatchingStage_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventBatchingStage_DEFINED)
#include <Modloader/app/structs/EventBatchingStage__Fields.h>
#if defined(IL2CPP_STRUCT_EventBatchingStage__Fields_DEFINED)
#define IL2CPP_STRUCT_EventBatchingStage_DEFINED
struct EventBatchingStage__Class;
struct EventBatchingStage {
    struct EventBatchingStage__Class* klass;
    MonitorData* monitor;
    struct EventBatchingStage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventBatchingStage_FWDDECL)
#define IL2CPP_STRUCT_EventBatchingStage_FWDDECL
#include <Modloader/app/structs/EventBatchingStage__Class.h>
#endif
#undef IL2CPP_STRUCT_EventBatchingStage_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventBatchingStage_DEFINED) && !defined(IL2CPP_STRUCT_EventBatchingStage_FWDDECL)
#include <Modloader/app/structs/EventBatchingStage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventBatchingStage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
