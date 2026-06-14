#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NestedContainer_Site_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NestedContainer_Site_INITIALIZING
#if !defined(IL2CPP_STRUCT_NestedContainer_Site_DEFINED)
#include <Modloader/app/structs/NestedContainer_Site__Fields.h>
#if defined(IL2CPP_STRUCT_NestedContainer_Site__Fields_DEFINED)
#define IL2CPP_STRUCT_NestedContainer_Site_DEFINED
struct NestedContainer_Site__Class;
struct NestedContainer_Site {
    struct NestedContainer_Site__Class* klass;
    MonitorData* monitor;
    struct NestedContainer_Site__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NestedContainer_Site_FWDDECL)
#define IL2CPP_STRUCT_NestedContainer_Site_FWDDECL
#include <Modloader/app/structs/NestedContainer_Site__Class.h>
#endif
#undef IL2CPP_STRUCT_NestedContainer_Site_INITIALIZING
#if !defined(IL2CPP_STRUCT_NestedContainer_Site_DEFINED) && !defined(IL2CPP_STRUCT_NestedContainer_Site_FWDDECL)
#include <Modloader/app/structs/NestedContainer_Site.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NestedContainer_Site.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
