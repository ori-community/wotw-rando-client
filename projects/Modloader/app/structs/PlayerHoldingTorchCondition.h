#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerHoldingTorchCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerHoldingTorchCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerHoldingTorchCondition_DEFINED)
#include <Modloader/app/structs/PlayerHoldingTorchCondition__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerHoldingTorchCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerHoldingTorchCondition_DEFINED
struct PlayerHoldingTorchCondition__Class;
struct PlayerHoldingTorchCondition {
    struct PlayerHoldingTorchCondition__Class* klass;
    MonitorData* monitor;
    struct PlayerHoldingTorchCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerHoldingTorchCondition_FWDDECL)
#define IL2CPP_STRUCT_PlayerHoldingTorchCondition_FWDDECL
#include <Modloader/app/structs/PlayerHoldingTorchCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerHoldingTorchCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerHoldingTorchCondition_DEFINED) && !defined(IL2CPP_STRUCT_PlayerHoldingTorchCondition_FWDDECL)
#include <Modloader/app/structs/PlayerHoldingTorchCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerHoldingTorchCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
