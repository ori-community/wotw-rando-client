#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinController3D_EventId__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinController3D_EventId__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinController3D_EventId__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinController3D_EventId__Enum_DEFINED
enum class SeinController3D_EventId__Enum : int32_t {
    AttackBegin = 0x00000000,
    AttackEnd = 0x00000001,
    ComboMoveEnd = 0x00000002,
    AttackCycleStart = 0x00000003,
    SpawnAttackEffect = 0x00000004,
    AllowComboContinuation = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_SeinController3D_EventId__Enum_FWDDECL)
#define IL2CPP_STRUCT_SeinController3D_EventId__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SeinController3D_EventId__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinController3D_EventId__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SeinController3D_EventId__Enum_FWDDECL)
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
