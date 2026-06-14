#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttackTokens_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttackTokens_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackTokens_DEFINED)
#define IL2CPP_STRUCT_AttackTokens_DEFINED
struct AttackTokens__Class;
struct AttackTokens {
    struct AttackTokens__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AttackTokens_FWDDECL)
#define IL2CPP_STRUCT_AttackTokens_FWDDECL
#include <Modloader/app/structs/AttackTokens__Class.h>
#endif
#undef IL2CPP_STRUCT_AttackTokens_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackTokens_DEFINED) && !defined(IL2CPP_STRUCT_AttackTokens_FWDDECL)
#include <Modloader/app/structs/AttackTokens.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttackTokens.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
