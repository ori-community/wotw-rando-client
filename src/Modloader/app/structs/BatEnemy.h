#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BatEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BatEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatEnemy_DEFINED)
#include <Modloader/app/structs/BatEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_BatEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_BatEnemy_DEFINED
struct BatEnemy__Class;
struct BatEnemy {
    struct BatEnemy__Class* klass;
    MonitorData* monitor;
    struct BatEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BatEnemy_FWDDECL)
#define IL2CPP_STRUCT_BatEnemy_FWDDECL
#include <Modloader/app/structs/BatEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_BatEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatEnemy_DEFINED) && !defined(IL2CPP_STRUCT_BatEnemy_FWDDECL)
#include <Modloader/app/structs/BatEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BatEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
