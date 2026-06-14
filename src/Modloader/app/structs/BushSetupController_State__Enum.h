#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BushSetupController_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BushSetupController_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BushSetupController_State__Enum_DEFINED)
#define IL2CPP_STRUCT_BushSetupController_State__Enum_DEFINED
enum class BushSetupController_State__Enum : int32_t {
    KneelingRock = 0x00000000,
    KneelingRockToLiftSein = 0x00000001,
    LiftSein = 0x00000002,
    LiftSeinToRockReach = 0x00000003,
    RockReach = 0x00000004,
    RockFall = 0x00000005,
    RockReachToLiftSein = 0x00000006,
    NoticeSein = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_BushSetupController_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_BushSetupController_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BushSetupController_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BushSetupController_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BushSetupController_State__Enum_FWDDECL)
#include <Modloader/app/structs/BushSetupController_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BushSetupController_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
