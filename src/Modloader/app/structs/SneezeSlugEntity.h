#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SneezeSlugEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SneezeSlugEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugEntity_DEFINED)
#include <Modloader/app/structs/SneezeSlugEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SneezeSlugEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SneezeSlugEntity_DEFINED
struct SneezeSlugEntity__Class;
struct SneezeSlugEntity {
    struct SneezeSlugEntity__Class* klass;
    MonitorData* monitor;
    struct SneezeSlugEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SneezeSlugEntity_FWDDECL)
#define IL2CPP_STRUCT_SneezeSlugEntity_FWDDECL
#include <Modloader/app/structs/SneezeSlugEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SneezeSlugEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugEntity_DEFINED) && !defined(IL2CPP_STRUCT_SneezeSlugEntity_FWDDECL)
#include <Modloader/app/structs/SneezeSlugEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SneezeSlugEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
