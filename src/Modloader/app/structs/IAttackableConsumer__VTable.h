#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAttackableConsumer__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAttackableConsumer__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAttackableConsumer__VTable_DEFINED)
#define IL2CPP_STRUCT_IAttackableConsumer__VTable_DEFINED
struct IAttackableConsumer__VTable {
    VirtualInvokeData IsAttackableInteresting;
    VirtualInvokeData RemovingAttackable;
    VirtualInvokeData get_AttackableConsumerID;
    VirtualInvokeData set_AttackableConsumerID;
};
#endif
#if !defined(IL2CPP_STRUCT_IAttackableConsumer__VTable_FWDDECL)
#define IL2CPP_STRUCT_IAttackableConsumer__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IAttackableConsumer__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAttackableConsumer__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IAttackableConsumer__VTable_FWDDECL)
#include <Modloader/app/structs/IAttackableConsumer__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAttackableConsumer__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
