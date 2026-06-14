#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossEntity_DEFINED)
#include <Modloader/app/structs/SpiderBossEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderBossEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBossEntity_DEFINED
struct SpiderBossEntity__Class;
struct SpiderBossEntity {
    struct SpiderBossEntity__Class* klass;
    MonitorData* monitor;
    struct SpiderBossEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossEntity_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossEntity_FWDDECL
#include <Modloader/app/structs/SpiderBossEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossEntity_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossEntity_FWDDECL)
#include <Modloader/app/structs/SpiderBossEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
