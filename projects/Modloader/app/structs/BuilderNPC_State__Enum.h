#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuilderNPC_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuilderNPC_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderNPC_State__Enum_DEFINED)
#define IL2CPP_STRUCT_BuilderNPC_State__Enum_DEFINED
enum class BuilderNPC_State__Enum : int32_t {
    Idle = 0x00000000,
    Purchase = 0x00000001,
    FixCannon = 0x00000002,
    ResumeAfterFix = 0x00000003,
    CanonFixed = 0x00000004,
    HubOffer = 0x00000005,
    ResumeAfterHubFix = 0x00000006,
    ResumeAfterLiftFix = 0x00000007,
    ResumeAfterSaveFix = 0x00000008,
    ShowingMessageAfterSaveFix = 0x00000009,
    ShowingMessageAfterListFix = 0x0000000a,
    HubFixed = 0x0000000b,
};
#endif
#if !defined(IL2CPP_STRUCT_BuilderNPC_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_BuilderNPC_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BuilderNPC_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderNPC_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BuilderNPC_State__Enum_FWDDECL)
#include <Modloader/app/structs/BuilderNPC_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuilderNPC_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
