#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLinkedAccount_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLinkedAccount_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLinkedAccount_DEFINED)
#include <Modloader/app/structs/PlayerLinkedAccount__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerLinkedAccount__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerLinkedAccount_DEFINED
struct PlayerLinkedAccount__Class;
struct PlayerLinkedAccount {
    struct PlayerLinkedAccount__Class* klass;
    MonitorData* monitor;
    struct PlayerLinkedAccount__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerLinkedAccount_FWDDECL)
#define IL2CPP_STRUCT_PlayerLinkedAccount_FWDDECL
#include <Modloader/app/structs/PlayerLinkedAccount__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerLinkedAccount_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLinkedAccount_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLinkedAccount_FWDDECL)
#include <Modloader/app/structs/PlayerLinkedAccount.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLinkedAccount.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
