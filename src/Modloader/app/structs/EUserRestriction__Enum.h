#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EUserRestriction__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EUserRestriction__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EUserRestriction__Enum_DEFINED)
#define IL2CPP_STRUCT_EUserRestriction__Enum_DEFINED
enum class EUserRestriction__Enum : int32_t {
    k_nUserRestrictionNone = 0x00000000,
    k_nUserRestrictionUnknown = 0x00000001,
    k_nUserRestrictionAnyChat = 0x00000002,
    k_nUserRestrictionVoiceChat = 0x00000004,
    k_nUserRestrictionGroupChat = 0x00000008,
    k_nUserRestrictionRating = 0x00000010,
    k_nUserRestrictionGameInvites = 0x00000020,
    k_nUserRestrictionTrading = 0x00000040,
};
#endif
#if !defined(IL2CPP_STRUCT_EUserRestriction__Enum_FWDDECL)
#define IL2CPP_STRUCT_EUserRestriction__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EUserRestriction__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EUserRestriction__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EUserRestriction__Enum_FWDDECL)
#include <Modloader/app/structs/EUserRestriction__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EUserRestriction__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
