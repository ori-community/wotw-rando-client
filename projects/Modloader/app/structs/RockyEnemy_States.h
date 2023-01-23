#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RockyEnemy_States_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RockyEnemy_States_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemy_States_DEFINED)
#include <Modloader/app/structs/RockyEnemy_States__Fields.h>
#if defined(IL2CPP_STRUCT_RockyEnemy_States__Fields_DEFINED)
#define IL2CPP_STRUCT_RockyEnemy_States_DEFINED
struct RockyEnemy_States__Class;
struct RockyEnemy_States {
    struct RockyEnemy_States__Class* klass;
    MonitorData* monitor;
    struct RockyEnemy_States__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RockyEnemy_States_FWDDECL)
#define IL2CPP_STRUCT_RockyEnemy_States_FWDDECL
#include <Modloader/app/structs/RockyEnemy_States__Class.h>
#endif
#undef IL2CPP_STRUCT_RockyEnemy_States_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemy_States_DEFINED) && !defined(IL2CPP_STRUCT_RockyEnemy_States_FWDDECL)
#include <Modloader/app/structs/RockyEnemy_States.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RockyEnemy_States.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
