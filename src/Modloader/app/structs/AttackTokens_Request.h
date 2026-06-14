#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttackTokens_Request_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttackTokens_Request_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackTokens_Request_DEFINED)
#include <Modloader/app/structs/AttackTokenPriority__Enum.h>
#if defined(IL2CPP_STRUCT_AttackTokenPriority__Enum_DEFINED)
#define IL2CPP_STRUCT_AttackTokens_Request_DEFINED
struct IAttackTokenHolder;
struct AttackTokens_Request {
    struct IAttackTokenHolder* Holder;
    AttackTokenPriority__Enum Priority;

    int32_t TokenCount;
    float TimeLastClaimed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttackTokens_Request_FWDDECL)
#define IL2CPP_STRUCT_AttackTokens_Request_FWDDECL
#include <Modloader/app/structs/IAttackTokenHolder.h>
#endif
#undef IL2CPP_STRUCT_AttackTokens_Request_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackTokens_Request_DEFINED) && !defined(IL2CPP_STRUCT_AttackTokens_Request_FWDDECL)
#include <Modloader/app/structs/AttackTokens_Request.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttackTokens_Request.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
