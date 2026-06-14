#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AcidSlugEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AcidSlugEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcidSlugEnemy_DEFINED)
#include <Modloader/app/structs/AcidSlugEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_AcidSlugEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_AcidSlugEnemy_DEFINED
struct AcidSlugEnemy__Class;
struct AcidSlugEnemy {
    struct AcidSlugEnemy__Class* klass;
    MonitorData* monitor;
    struct AcidSlugEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AcidSlugEnemy_FWDDECL)
#define IL2CPP_STRUCT_AcidSlugEnemy_FWDDECL
#include <Modloader/app/structs/AcidSlugEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_AcidSlugEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcidSlugEnemy_DEFINED) && !defined(IL2CPP_STRUCT_AcidSlugEnemy_FWDDECL)
#include <Modloader/app/structs/AcidSlugEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AcidSlugEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
