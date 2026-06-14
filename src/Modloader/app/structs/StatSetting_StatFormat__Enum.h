#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatSetting_StatFormat__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatSetting_StatFormat__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSetting_StatFormat__Enum_DEFINED)
#define IL2CPP_STRUCT_StatSetting_StatFormat__Enum_DEFINED
enum class StatSetting_StatFormat__Enum : int32_t {
    Int = 0x00000000,
    Decimal = 0x00000001,
    Time = 0x00000002,
    Distance = 0x00000003,
    EnemyEnum = 0x00000004,
    SkillEnum = 0x00000005,
    Percentage = 0x00000006,
    Fraction = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_StatSetting_StatFormat__Enum_FWDDECL)
#define IL2CPP_STRUCT_StatSetting_StatFormat__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_StatSetting_StatFormat__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSetting_StatFormat__Enum_DEFINED) && !defined(IL2CPP_STRUCT_StatSetting_StatFormat__Enum_FWDDECL)
#include <Modloader/app/structs/StatSetting_StatFormat__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatSetting_StatFormat__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
