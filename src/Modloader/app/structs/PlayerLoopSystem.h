#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLoopSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLoopSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLoopSystem_DEFINED)
#define IL2CPP_STRUCT_PlayerLoopSystem_DEFINED
struct Type;
struct PlayerLoopSystem__Array;
struct PlayerLoopSystem_UpdateFunction;
struct PlayerLoopSystem {
    struct Type* type;
    struct PlayerLoopSystem__Array* subSystemList;
    struct PlayerLoopSystem_UpdateFunction* updateDelegate;
    void* updateFunction;
    void* loopConditionFunction;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerLoopSystem_FWDDECL)
#define IL2CPP_STRUCT_PlayerLoopSystem_FWDDECL
#include <Modloader/app/structs/PlayerLoopSystem_UpdateFunction.h>
#include <Modloader/app/structs/PlayerLoopSystem__Array.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_PlayerLoopSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLoopSystem_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLoopSystem_FWDDECL)
#include <Modloader/app/structs/PlayerLoopSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLoopSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
