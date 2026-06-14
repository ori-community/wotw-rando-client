#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttackTokens__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttackTokens__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackTokens__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AttackTokens__StaticFields_DEFINED
struct AttackTokenPriority__Enum__Array;
struct List_1_AttackTokens_Request_;
struct AttackTokens__StaticFields {
    struct AttackTokenPriority__Enum__Array* AllPriorities;
    bool s_isInitialized;
    struct List_1_AttackTokens_Request_* TokenHolders;
    int32_t s_freeTokens;
};
#endif
#if !defined(IL2CPP_STRUCT_AttackTokens__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AttackTokens__StaticFields_FWDDECL
#include <Modloader/app/structs/AttackTokenPriority__Enum__Array.h>
#include <Modloader/app/structs/List_1_AttackTokens_Request_.h>
#endif
#undef IL2CPP_STRUCT_AttackTokens__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackTokens__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AttackTokens__StaticFields_FWDDECL)
#include <Modloader/app/structs/AttackTokens__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttackTokens__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
