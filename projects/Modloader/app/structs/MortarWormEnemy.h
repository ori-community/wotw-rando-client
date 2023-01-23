#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarWormEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarWormEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormEnemy_DEFINED)
#include <Modloader/app/structs/MortarWormEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_MortarWormEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarWormEnemy_DEFINED
struct MortarWormEnemy__Class;
struct MortarWormEnemy {
    struct MortarWormEnemy__Class* klass;
    MonitorData* monitor;
    struct MortarWormEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarWormEnemy_FWDDECL)
#define IL2CPP_STRUCT_MortarWormEnemy_FWDDECL
#include <Modloader/app/structs/MortarWormEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_MortarWormEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormEnemy_DEFINED) && !defined(IL2CPP_STRUCT_MortarWormEnemy_FWDDECL)
#include <Modloader/app/structs/MortarWormEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarWormEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
