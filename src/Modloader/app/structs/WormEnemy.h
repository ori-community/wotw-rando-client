#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WormEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WormEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormEnemy_DEFINED)
#include <Modloader/app/structs/WormEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_WormEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_WormEnemy_DEFINED
struct WormEnemy__Class;
struct WormEnemy {
    struct WormEnemy__Class* klass;
    MonitorData* monitor;
    struct WormEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WormEnemy_FWDDECL)
#define IL2CPP_STRUCT_WormEnemy_FWDDECL
#include <Modloader/app/structs/WormEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_WormEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormEnemy_DEFINED) && !defined(IL2CPP_STRUCT_WormEnemy_FWDDECL)
#include <Modloader/app/structs/WormEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WormEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
