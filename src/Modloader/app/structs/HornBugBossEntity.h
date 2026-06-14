#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugBossEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugBossEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugBossEntity_DEFINED)
#include <Modloader/app/structs/HornBugBossEntity__Fields.h>
#if defined(IL2CPP_STRUCT_HornBugBossEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_HornBugBossEntity_DEFINED
struct HornBugBossEntity__Class;
struct HornBugBossEntity {
    struct HornBugBossEntity__Class* klass;
    MonitorData* monitor;
    struct HornBugBossEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugBossEntity_FWDDECL)
#define IL2CPP_STRUCT_HornBugBossEntity_FWDDECL
#include <Modloader/app/structs/HornBugBossEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_HornBugBossEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugBossEntity_DEFINED) && !defined(IL2CPP_STRUCT_HornBugBossEntity_FWDDECL)
#include <Modloader/app/structs/HornBugBossEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugBossEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
