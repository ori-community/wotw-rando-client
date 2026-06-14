#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnapTrapEntity_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnapTrapEntity_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapEntity_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SnapTrapEntity_State__Enum_DEFINED
enum class SnapTrapEntity_State__Enum : int32_t {
    Frozen = 0x00000000,
    Opened = 0x00000001,
    Warning = 0x00000002,
    Closing = 0x00000003,
    Chewing = 0x00000004,
    Missed = 0x00000005,
    Opening = 0x00000006,
    Resting = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_SnapTrapEntity_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_SnapTrapEntity_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SnapTrapEntity_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapEntity_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SnapTrapEntity_State__Enum_FWDDECL)
#include <Modloader/app/structs/SnapTrapEntity_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnapTrapEntity_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
