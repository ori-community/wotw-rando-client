#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBowAttackable__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBowAttackable__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBowAttackable__VTable_DEFINED)
#define IL2CPP_STRUCT_IBowAttackable__VTable_DEFINED
struct IBowAttackable__VTable {
    VirtualInvokeData get_BowPriority;
    VirtualInvokeData get_BowEnableAutoTarget;
    VirtualInvokeData ShouldArrowExplode;
    VirtualInvokeData get_BowAutoTargetPosition;
    VirtualInvokeData ShouldArrowBeReflected;
};
#endif
#if !defined(IL2CPP_STRUCT_IBowAttackable__VTable_FWDDECL)
#define IL2CPP_STRUCT_IBowAttackable__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IBowAttackable__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBowAttackable__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IBowAttackable__VTable_FWDDECL)
#include <Modloader/app/structs/IBowAttackable__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBowAttackable__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
