#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugEntity_DEFINED)
#include <Modloader/app/structs/DropSlugEntity__Fields.h>
#if defined(IL2CPP_STRUCT_DropSlugEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugEntity_DEFINED
struct DropSlugEntity__Class;
struct DropSlugEntity {
    struct DropSlugEntity__Class* klass;
    MonitorData* monitor;
    struct DropSlugEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropSlugEntity_FWDDECL)
#define IL2CPP_STRUCT_DropSlugEntity_FWDDECL
#include <Modloader/app/structs/DropSlugEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_DropSlugEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugEntity_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugEntity_FWDDECL)
#include <Modloader/app/structs/DropSlugEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
