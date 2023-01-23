#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInRangeCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInRangeCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInRangeCondition_DEFINED)
#define IL2CPP_STRUCT_PlayerInRangeCondition_DEFINED
struct PlayerInRangeCondition__Class;
struct PlayerInRangeCondition {
    struct PlayerInRangeCondition__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerInRangeCondition_FWDDECL)
#define IL2CPP_STRUCT_PlayerInRangeCondition_FWDDECL
#include <Modloader/app/structs/PlayerInRangeCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerInRangeCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInRangeCondition_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInRangeCondition_FWDDECL)
#include <Modloader/app/structs/PlayerInRangeCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInRangeCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
