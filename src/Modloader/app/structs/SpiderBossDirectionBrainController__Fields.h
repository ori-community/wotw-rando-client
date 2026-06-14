#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossDirectionBrainController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossDirectionBrainController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossDirectionBrainController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBossDirectionBrainController__Fields_DEFINED
struct SpiderBossEntity;
struct Enum__Array;
struct SpiderBossDirectionBrainController__Fields {
    struct MonoBehaviour__Fields _;
    struct SpiderBossEntity* Spider;
    struct Enum__Array* Entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossDirectionBrainController__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossDirectionBrainController__Fields_FWDDECL
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/SpiderBossEntity.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossDirectionBrainController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossDirectionBrainController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossDirectionBrainController__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossDirectionBrainController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossDirectionBrainController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
