#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DiscoverAreasEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DiscoverAreasEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_DiscoverAreasEntity_DEFINED)
#include <Modloader/app/structs/DiscoverAreasEntity__Fields.h>
#if defined(IL2CPP_STRUCT_DiscoverAreasEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_DiscoverAreasEntity_DEFINED
struct DiscoverAreasEntity__Class;
struct DiscoverAreasEntity {
    struct DiscoverAreasEntity__Class* klass;
    MonitorData* monitor;
    struct DiscoverAreasEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DiscoverAreasEntity_FWDDECL)
#define IL2CPP_STRUCT_DiscoverAreasEntity_FWDDECL
#include <Modloader/app/structs/DiscoverAreasEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_DiscoverAreasEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_DiscoverAreasEntity_DEFINED) && !defined(IL2CPP_STRUCT_DiscoverAreasEntity_FWDDECL)
#include <Modloader/app/structs/DiscoverAreasEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DiscoverAreasEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
