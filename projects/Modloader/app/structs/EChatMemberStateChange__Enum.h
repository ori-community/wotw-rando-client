#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EChatMemberStateChange__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EChatMemberStateChange__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EChatMemberStateChange__Enum_DEFINED)
#define IL2CPP_STRUCT_EChatMemberStateChange__Enum_DEFINED
enum class EChatMemberStateChange__Enum : int32_t {
    k_EChatMemberStateChangeEntered = 0x00000001,
    k_EChatMemberStateChangeLeft = 0x00000002,
    k_EChatMemberStateChangeDisconnected = 0x00000004,
    k_EChatMemberStateChangeKicked = 0x00000008,
    k_EChatMemberStateChangeBanned = 0x00000010,
};
#endif
#if !defined(IL2CPP_STRUCT_EChatMemberStateChange__Enum_FWDDECL)
#define IL2CPP_STRUCT_EChatMemberStateChange__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EChatMemberStateChange__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EChatMemberStateChange__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EChatMemberStateChange__Enum_FWDDECL)
#include <Modloader/app/structs/EChatMemberStateChange__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EChatMemberStateChange__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
