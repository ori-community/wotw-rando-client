#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StarSlugEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StarSlugEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugEnemy_DEFINED)
#include <Modloader/app/structs/StarSlugEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_StarSlugEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_StarSlugEnemy_DEFINED
struct StarSlugEnemy__Class;
struct StarSlugEnemy {
    struct StarSlugEnemy__Class* klass;
    MonitorData* monitor;
    struct StarSlugEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StarSlugEnemy_FWDDECL)
#define IL2CPP_STRUCT_StarSlugEnemy_FWDDECL
#include <Modloader/app/structs/StarSlugEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_StarSlugEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugEnemy_DEFINED) && !defined(IL2CPP_STRUCT_StarSlugEnemy_FWDDECL)
#include <Modloader/app/structs/StarSlugEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StarSlugEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
