#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DayThreeTreeSetupController_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DayThreeTreeSetupController_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DayThreeTreeSetupController_State__Enum_DEFINED)
#define IL2CPP_STRUCT_DayThreeTreeSetupController_State__Enum_DEFINED
enum class DayThreeTreeSetupController_State__Enum : int32_t {
    None = 0x00000000,
    BranchIdle = 0x00000001,
    BranchBackwards = 0x00000002,
    BranchReach = 0x00000003,
    Jump = 0x00000004,
    Fall = 0x00000005,
    JumpForward = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_DayThreeTreeSetupController_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_DayThreeTreeSetupController_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DayThreeTreeSetupController_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DayThreeTreeSetupController_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DayThreeTreeSetupController_State__Enum_FWDDECL)
#include <Modloader/app/structs/DayThreeTreeSetupController_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DayThreeTreeSetupController_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
