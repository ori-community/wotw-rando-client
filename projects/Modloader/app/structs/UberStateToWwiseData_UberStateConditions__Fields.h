#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateToWwiseData_UberStateConditions__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateToWwiseData_UberStateConditions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateToWwiseData_UberStateConditions__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateToWwiseData_UberStateConditions__Fields_DEFINED
struct DesiredUberStateBool__Array;
struct DesiredUberStateFloat__Array;
struct DesiredUberStateInt__Array;
struct DesiredUberStateByte__Array;
struct UberStateToWwiseData_DesiredConditionUberState__Array;
struct __declspec(align(8)) UberStateToWwiseData_UberStateConditions__Fields {
    struct DesiredUberStateBool__Array* BoolRequirements;
    struct DesiredUberStateFloat__Array* FloatRequirements;
    struct DesiredUberStateInt__Array* IntRequirements;
    struct DesiredUberStateByte__Array* ByteRequirements;
    struct UberStateToWwiseData_DesiredConditionUberState__Array* ConditionRequirements;
};
#endif
#if !defined(IL2CPP_STRUCT_UberStateToWwiseData_UberStateConditions__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberStateToWwiseData_UberStateConditions__Fields_FWDDECL
#include <Modloader/app/structs/DesiredUberStateBool__Array.h>
#include <Modloader/app/structs/DesiredUberStateByte__Array.h>
#include <Modloader/app/structs/DesiredUberStateFloat__Array.h>
#include <Modloader/app/structs/DesiredUberStateInt__Array.h>
#include <Modloader/app/structs/UberStateToWwiseData_DesiredConditionUberState__Array.h>
#endif
#undef IL2CPP_STRUCT_UberStateToWwiseData_UberStateConditions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateToWwiseData_UberStateConditions__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberStateToWwiseData_UberStateConditions__Fields_FWDDECL)
#include <Modloader/app/structs/UberStateToWwiseData_UberStateConditions__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateToWwiseData_UberStateConditions__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
