#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugEnemy_DEFINED)
#include <Modloader/app/structs/DropSlugEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_DropSlugEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugEnemy_DEFINED
struct DropSlugEnemy__Class;
struct DropSlugEnemy {
    struct DropSlugEnemy__Class* klass;
    MonitorData* monitor;
    struct DropSlugEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropSlugEnemy_FWDDECL)
#define IL2CPP_STRUCT_DropSlugEnemy_FWDDECL
#include <Modloader/app/structs/DropSlugEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_DropSlugEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugEnemy_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugEnemy_FWDDECL)
#include <Modloader/app/structs/DropSlugEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
