#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabyWorm_BabySandwormState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabyWorm_BabySandwormState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyWorm_BabySandwormState__Enum_DEFINED)
#define IL2CPP_STRUCT_BabyWorm_BabySandwormState__Enum_DEFINED
enum class BabyWorm_BabySandwormState__Enum : int32_t {
    Resting = 0x00000000,
    Spawning = 0x00000001,
    Patrol = 0x00000002,
    Chase = 0x00000003,
    Dash = 0x00000004,
    OutOfSand = 0x00000005,
    Dead = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_BabyWorm_BabySandwormState__Enum_FWDDECL)
#define IL2CPP_STRUCT_BabyWorm_BabySandwormState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BabyWorm_BabySandwormState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyWorm_BabySandwormState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BabyWorm_BabySandwormState__Enum_FWDDECL)
#include <Modloader/app/structs/BabyWorm_BabySandwormState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabyWorm_BabySandwormState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
