#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RestrictionFacets_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RestrictionFacets_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestrictionFacets_DEFINED)
#include <Modloader/app/structs/RestrictionFacets__Fields.h>
#if defined(IL2CPP_STRUCT_RestrictionFacets__Fields_DEFINED)
#define IL2CPP_STRUCT_RestrictionFacets_DEFINED
struct RestrictionFacets__Class;
struct RestrictionFacets {
    struct RestrictionFacets__Class* klass;
    MonitorData* monitor;
    struct RestrictionFacets__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RestrictionFacets_FWDDECL)
#define IL2CPP_STRUCT_RestrictionFacets_FWDDECL
#include <Modloader/app/structs/RestrictionFacets__Class.h>
#endif
#undef IL2CPP_STRUCT_RestrictionFacets_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestrictionFacets_DEFINED) && !defined(IL2CPP_STRUCT_RestrictionFacets_FWDDECL)
#include <Modloader/app/structs/RestrictionFacets.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RestrictionFacets.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
