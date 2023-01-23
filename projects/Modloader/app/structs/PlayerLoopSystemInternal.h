#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLoopSystemInternal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLoopSystemInternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLoopSystemInternal_DEFINED)
#define IL2CPP_STRUCT_PlayerLoopSystemInternal_DEFINED
struct Type;
struct PlayerLoopSystem_UpdateFunction;
struct PlayerLoopSystemInternal {
    struct Type* type;
    struct PlayerLoopSystem_UpdateFunction* updateDelegate;
    void* updateFunction;
    void* loopConditionFunction;
    int32_t numSubSystems;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerLoopSystemInternal_FWDDECL)
#define IL2CPP_STRUCT_PlayerLoopSystemInternal_FWDDECL
#include <Modloader/app/structs/PlayerLoopSystem_UpdateFunction.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_PlayerLoopSystemInternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLoopSystemInternal_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLoopSystemInternal_FWDDECL)
#include <Modloader/app/structs/PlayerLoopSystemInternal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLoopSystemInternal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
