#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OneDSEventPipelineSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OneDSEventPipelineSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneDSEventPipelineSettings__Fields_DEFINED)
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_OneDSEventPipelineSettings__Fields_DEFINED
struct __declspec(align(8)) OneDSEventPipelineSettings__Fields {
    int32_t batchSize;
    struct TimeSpan batchFillTimeout;
    int32_t _EventBufferSize_k__BackingField;
    int32_t _BatchBufferSize_k__BackingField;
    int32_t _MaxHttpAttempts_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OneDSEventPipelineSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_OneDSEventPipelineSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_OneDSEventPipelineSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneDSEventPipelineSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OneDSEventPipelineSettings__Fields_FWDDECL)
#include <Modloader/app/structs/OneDSEventPipelineSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OneDSEventPipelineSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
