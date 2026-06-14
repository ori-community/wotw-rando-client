#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemy_DEFINED)
#include <Modloader/app/structs/FishEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_FishEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_FishEnemy_DEFINED
struct FishEnemy__Class;
struct FishEnemy {
    struct FishEnemy__Class* klass;
    MonitorData* monitor;
    struct FishEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FishEnemy_FWDDECL)
#define IL2CPP_STRUCT_FishEnemy_FWDDECL
#include <Modloader/app/structs/FishEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_FishEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemy_DEFINED) && !defined(IL2CPP_STRUCT_FishEnemy_FWDDECL)
#include <Modloader/app/structs/FishEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
