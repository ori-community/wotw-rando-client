#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RockyEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RockyEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemy_DEFINED)
#include <Modloader/app/structs/RockyEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_RockyEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_RockyEnemy_DEFINED
struct RockyEnemy__Class;
struct RockyEnemy {
    struct RockyEnemy__Class* klass;
    MonitorData* monitor;
    struct RockyEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RockyEnemy_FWDDECL)
#define IL2CPP_STRUCT_RockyEnemy_FWDDECL
#include <Modloader/app/structs/RockyEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_RockyEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemy_DEFINED) && !defined(IL2CPP_STRUCT_RockyEnemy_FWDDECL)
#include <Modloader/app/structs/RockyEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RockyEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
