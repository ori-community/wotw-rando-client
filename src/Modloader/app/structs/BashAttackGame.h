#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BashAttackGame_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BashAttackGame_INITIALIZING
#if !defined(IL2CPP_STRUCT_BashAttackGame_DEFINED)
#include <Modloader/app/structs/BashAttackGame__Fields.h>
#if defined(IL2CPP_STRUCT_BashAttackGame__Fields_DEFINED)
#define IL2CPP_STRUCT_BashAttackGame_DEFINED
struct BashAttackGame__Class;
struct BashAttackGame {
    struct BashAttackGame__Class* klass;
    MonitorData* monitor;
    struct BashAttackGame__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BashAttackGame_FWDDECL)
#define IL2CPP_STRUCT_BashAttackGame_FWDDECL
#include <Modloader/app/structs/BashAttackGame__Class.h>
#endif
#undef IL2CPP_STRUCT_BashAttackGame_INITIALIZING
#if !defined(IL2CPP_STRUCT_BashAttackGame_DEFINED) && !defined(IL2CPP_STRUCT_BashAttackGame_FWDDECL)
#include <Modloader/app/structs/BashAttackGame.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BashAttackGame.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
