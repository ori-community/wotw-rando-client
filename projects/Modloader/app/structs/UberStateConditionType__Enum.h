#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateConditionType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateConditionType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateConditionType__Enum_DEFINED)
#define IL2CPP_STRUCT_UberStateConditionType__Enum_DEFINED
enum class UberStateConditionType__Enum : int32_t {
    Undefined = 0x00000000,
    BooleanCondition = 0x00000001,
    FloatCondition = 0x00000002,
    AbilityCondition = 0x00000003,
    IntCondition = 0x00000004,
    HoldingTorchCondition = 0x00000005,
    ByteCondition = 0x00000006,
    SceneCondition = 0x00000007,
    GenericCondition = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_UberStateConditionType__Enum_FWDDECL)
#define IL2CPP_STRUCT_UberStateConditionType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberStateConditionType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateConditionType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_UberStateConditionType__Enum_FWDDECL)
#include <Modloader/app/structs/UberStateConditionType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateConditionType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
