#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateWwiseStateManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateWwiseStateManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateWwiseStateManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateWwiseStateManager__Fields_DEFINED
struct UberStateToWwiseData;
struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_;
struct IUberState__Array;
struct UberStateWwiseStateManager__Fields {
    struct MonoBehaviour__Fields _;
    struct UberStateToWwiseData* UberStateToWwiseData;
    struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_* DefaultWwiseStatesToSet;
    struct IUberState__Array* _AffectingUberStates_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateWwiseStateManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberStateWwiseStateManager__Fields_FWDDECL
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_.h>
#include <Modloader/app/structs/UberStateToWwiseData.h>
#endif
#undef IL2CPP_STRUCT_UberStateWwiseStateManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateWwiseStateManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberStateWwiseStateManager__Fields_FWDDECL)
#include <Modloader/app/structs/UberStateWwiseStateManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateWwiseStateManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
