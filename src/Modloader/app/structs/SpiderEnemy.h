#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderEnemy_DEFINED)
#include <Modloader/app/structs/SpiderEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderEnemy_DEFINED
struct SpiderEnemy__Class;
struct SpiderEnemy {
    struct SpiderEnemy__Class* klass;
    MonitorData* monitor;
    struct SpiderEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderEnemy_FWDDECL)
#define IL2CPP_STRUCT_SpiderEnemy_FWDDECL
#include <Modloader/app/structs/SpiderEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiderEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderEnemy_DEFINED) && !defined(IL2CPP_STRUCT_SpiderEnemy_FWDDECL)
#include <Modloader/app/structs/SpiderEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
