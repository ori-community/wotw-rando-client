#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpitterEnemy_States_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpitterEnemy_States_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemy_States_DEFINED)
#include <Modloader/app/structs/SpitterEnemy_States__Fields.h>
#if defined(IL2CPP_STRUCT_SpitterEnemy_States__Fields_DEFINED)
#define IL2CPP_STRUCT_SpitterEnemy_States_DEFINED
struct SpitterEnemy_States__Class;
struct SpitterEnemy_States {
    struct SpitterEnemy_States__Class* klass;
    MonitorData* monitor;
    struct SpitterEnemy_States__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpitterEnemy_States_FWDDECL)
#define IL2CPP_STRUCT_SpitterEnemy_States_FWDDECL
#include <Modloader/app/structs/SpitterEnemy_States__Class.h>
#endif
#undef IL2CPP_STRUCT_SpitterEnemy_States_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemy_States_DEFINED) && !defined(IL2CPP_STRUCT_SpitterEnemy_States_FWDDECL)
#include <Modloader/app/structs/SpitterEnemy_States.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpitterEnemy_States.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
