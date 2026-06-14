#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/LogicUtility_ComparisonType__Enum.h>
#include <Modloader/app/structs/PositionCondition_AxisType__Enum.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_LogicUtility_ComparisonType__Enum_DEFINED) && defined(IL2CPP_STRUCT_PositionCondition_AxisType__Enum_DEFINED)
#define IL2CPP_STRUCT_PositionCondition__Fields_DEFINED
struct Transform;
struct PositionCondition__Fields {
    struct Condition_1__Fields _;
    LogicUtility_ComparisonType__Enum Comparison;

    PositionCondition_AxisType__Enum Axis;

    struct Transform* Target;
    struct Transform* Position;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_PositionCondition__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PositionCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PositionCondition__Fields_FWDDECL)
#include <Modloader/app/structs/PositionCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
