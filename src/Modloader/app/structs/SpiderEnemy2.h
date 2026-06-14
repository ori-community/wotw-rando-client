#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderEnemy2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderEnemy2_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderEnemy2_DEFINED)
#include <Modloader/app/structs/SpiderEnemy2__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderEnemy2__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderEnemy2_DEFINED
struct SpiderEnemy2__Class;
struct SpiderEnemy2 {
    struct SpiderEnemy2__Class* klass;
    MonitorData* monitor;
    struct SpiderEnemy2__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderEnemy2_FWDDECL)
#define IL2CPP_STRUCT_SpiderEnemy2_FWDDECL
#include <Modloader/app/structs/SpiderEnemy2__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiderEnemy2_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderEnemy2_DEFINED) && !defined(IL2CPP_STRUCT_SpiderEnemy2_FWDDECL)
#include <Modloader/app/structs/SpiderEnemy2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderEnemy2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
