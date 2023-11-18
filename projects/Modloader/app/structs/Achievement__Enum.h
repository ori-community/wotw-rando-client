#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Achievement__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Achievement__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Achievement__Enum_DEFINED)
#define IL2CPP_STRUCT_Achievement__Enum_DEFINED
enum class Achievement__Enum : int32_t {
    UNKNOWN_ACHIEVEMENT = -1,
    FoundOri = 0x00000004,
    MapReader = 0x00000005,
    LeverOperator = 0x00000006,
    DoorsAreOpening = 0x00000007,
    SpentFirstSkillPoint = 0x00000008,
    LevelUp = 0x00000009,
};
#endif
#if !defined(IL2CPP_STRUCT_Achievement__Enum_FWDDECL)
#define IL2CPP_STRUCT_Achievement__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Achievement__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Achievement__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Achievement__Enum_FWDDECL)
#include <Modloader/app/structs/Achievement__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Achievement__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
