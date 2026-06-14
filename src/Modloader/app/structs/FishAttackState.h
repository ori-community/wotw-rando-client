#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishAttackState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishAttackState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishAttackState_DEFINED)
#include <Modloader/app/structs/FishAttackState__Fields.h>
#if defined(IL2CPP_STRUCT_FishAttackState__Fields_DEFINED)
#define IL2CPP_STRUCT_FishAttackState_DEFINED
struct FishAttackState__Class;
struct FishAttackState {
    struct FishAttackState__Class* klass;
    MonitorData* monitor;
    struct FishAttackState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FishAttackState_FWDDECL)
#define IL2CPP_STRUCT_FishAttackState_FWDDECL
#include <Modloader/app/structs/FishAttackState__Class.h>
#endif
#undef IL2CPP_STRUCT_FishAttackState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishAttackState_DEFINED) && !defined(IL2CPP_STRUCT_FishAttackState_FWDDECL)
#include <Modloader/app/structs/FishAttackState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishAttackState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
