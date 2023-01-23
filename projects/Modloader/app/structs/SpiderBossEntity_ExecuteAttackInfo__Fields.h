#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossEntity_ExecuteAttackInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossEntity_ExecuteAttackInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossEntity_ExecuteAttackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBossEntity_ExecuteAttackInfo__Fields_DEFINED
struct SpiderBossBaseBehaviour;
struct __declspec(align(8)) SpiderBossEntity_ExecuteAttackInfo__Fields {
    struct SpiderBossBaseBehaviour* Behaviour;
    float Timer;
};
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossEntity_ExecuteAttackInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossEntity_ExecuteAttackInfo__Fields_FWDDECL
#include <Modloader/app/structs/SpiderBossBaseBehaviour.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossEntity_ExecuteAttackInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossEntity_ExecuteAttackInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossEntity_ExecuteAttackInfo__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossEntity_ExecuteAttackInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossEntity_ExecuteAttackInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
