#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabEventRouter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabEventRouter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEventRouter__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabEventRouter__Fields_DEFINED
struct IDictionary_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline_;
struct ILogger_1;
struct __declspec(align(8)) PlayFabEventRouter__Fields {
    struct IDictionary_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline_* _Pipelines_k__BackingField;
    struct ILogger_1* logger;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabEventRouter__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabEventRouter__Fields_FWDDECL
#include <Modloader/app/structs/IDictionary_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline_.h>
#include <Modloader/app/structs/ILogger_1.h>
#endif
#undef IL2CPP_STRUCT_PlayFabEventRouter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEventRouter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabEventRouter__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabEventRouter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabEventRouter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
