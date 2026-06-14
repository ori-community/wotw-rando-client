#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SourceType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SourceType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SourceType__Enum_DEFINED)
#define IL2CPP_STRUCT_SourceType__Enum_DEFINED
enum class SourceType__Enum : int32_t {
    Admin = 0x00000000,
    BackEnd = 0x00000001,
    GameClient = 0x00000002,
    GameServer = 0x00000003,
    Partner = 0x00000004,
    Custom = 0x00000005,
    API = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_SourceType__Enum_FWDDECL)
#define IL2CPP_STRUCT_SourceType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SourceType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SourceType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SourceType__Enum_FWDDECL)
#include <Modloader/app/structs/SourceType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SourceType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
