#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BombSlugEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BombSlugEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombSlugEntity_DEFINED)
#include <Modloader/app/structs/BombSlugEntity__Fields.h>
#if defined(IL2CPP_STRUCT_BombSlugEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_BombSlugEntity_DEFINED
struct BombSlugEntity__Class;
struct BombSlugEntity {
    struct BombSlugEntity__Class* klass;
    MonitorData* monitor;
    struct BombSlugEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BombSlugEntity_FWDDECL)
#define IL2CPP_STRUCT_BombSlugEntity_FWDDECL
#include <Modloader/app/structs/BombSlugEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_BombSlugEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombSlugEntity_DEFINED) && !defined(IL2CPP_STRUCT_BombSlugEntity_FWDDECL)
#include <Modloader/app/structs/BombSlugEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BombSlugEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
