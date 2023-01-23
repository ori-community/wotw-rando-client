#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadingBoostController_BoostModeSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadingBoostController_BoostModeSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBoostController_BoostModeSettings__Fields_DEFINED)
#include <Modloader/app/structs/ThreadPriority__Enum_1.h>
#if defined(IL2CPP_STRUCT_ThreadPriority__Enum_1_DEFINED)
#define IL2CPP_STRUCT_LoadingBoostController_BoostModeSettings__Fields_DEFINED
struct __declspec(align(8)) LoadingBoostController_BoostModeSettings__Fields {
    double TimeslicedIntegrationBudget;
    float TimeslicedEnableBudget;
    int32_t AsyncUploadBudget;
    ThreadPriority__Enum_1 BackgroundLoadingThreadPriority;

    float TimesliceBudget;
    bool SwitchCPUBoost;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadingBoostController_BoostModeSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_LoadingBoostController_BoostModeSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_LoadingBoostController_BoostModeSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBoostController_BoostModeSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LoadingBoostController_BoostModeSettings__Fields_FWDDECL)
#include <Modloader/app/structs/LoadingBoostController_BoostModeSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadingBoostController_BoostModeSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
