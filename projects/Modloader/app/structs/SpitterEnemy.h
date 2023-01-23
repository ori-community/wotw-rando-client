#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpitterEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpitterEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemy_DEFINED)
#include <Modloader/app/structs/SpitterEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_SpitterEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_SpitterEnemy_DEFINED
struct SpitterEnemy__Class;
struct SpitterEnemy {
    struct SpitterEnemy__Class* klass;
    MonitorData* monitor;
    struct SpitterEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpitterEnemy_FWDDECL)
#define IL2CPP_STRUCT_SpitterEnemy_FWDDECL
#include <Modloader/app/structs/SpitterEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_SpitterEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemy_DEFINED) && !defined(IL2CPP_STRUCT_SpitterEnemy_FWDDECL)
#include <Modloader/app/structs/SpitterEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpitterEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
