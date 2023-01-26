#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberGCLogic_GCLogicSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberGCLogic_GCLogicSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGCLogic_GCLogicSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_UberGCLogic_GCLogicSettings__Fields_DEFINED
struct Dictionary_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_;
struct __declspec(align(8)) UberGCLogic_GCLogicSettings__Fields {
    bool DisableAllCleanups;
    float RecheckTimegate;
    bool SimpleFaderGating;
    int32_t DefaultFaderSceneUnloadGate;
    float DefaultFaderCleanupTimegate;
    int32_t PanicSceneUnloadGate;
    float PanicTimeGate;
    bool UsePanicMemoryGate;
    float PanicMemoryGateMegabytes;
    float PanicGcUsageRatioGate;
    float PanicGcTimeGate;
    float DefaultFaderGcUsageRatioGate;
    float GcOnBlackTimegate;
    int32_t ForceCleansAfterTeleporter;
    bool AllowFaderSources;
    struct Dictionary_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_* FaderOverrideActions;
};
#endif
#if !defined(IL2CPP_STRUCT_UberGCLogic_GCLogicSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberGCLogic_GCLogicSettings__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Ube_optimi_g_Uber_CleanupOutsideOfGamepla_Ub_optim_g_Ube_GCLogic_FaderOverri_.h>
#endif
#undef IL2CPP_STRUCT_UberGCLogic_GCLogicSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGCLogic_GCLogicSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberGCLogic_GCLogicSettings__Fields_FWDDECL)
#include <Modloader/app/structs/UberGCLogic_GCLogicSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberGCLogic_GCLogicSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
