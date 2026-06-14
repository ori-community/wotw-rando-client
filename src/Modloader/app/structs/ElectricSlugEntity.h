#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ElectricSlugEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ElectricSlugEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElectricSlugEntity_DEFINED)
#include <Modloader/app/structs/ElectricSlugEntity__Fields.h>
#if defined(IL2CPP_STRUCT_ElectricSlugEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ElectricSlugEntity_DEFINED
struct ElectricSlugEntity__Class;
struct ElectricSlugEntity {
    struct ElectricSlugEntity__Class* klass;
    MonitorData* monitor;
    struct ElectricSlugEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ElectricSlugEntity_FWDDECL)
#define IL2CPP_STRUCT_ElectricSlugEntity_FWDDECL
#include <Modloader/app/structs/ElectricSlugEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_ElectricSlugEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElectricSlugEntity_DEFINED) && !defined(IL2CPP_STRUCT_ElectricSlugEntity_FWDDECL)
#include <Modloader/app/structs/ElectricSlugEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ElectricSlugEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
