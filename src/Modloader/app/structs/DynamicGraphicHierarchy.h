#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicGraphicHierarchy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicGraphicHierarchy_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicGraphicHierarchy_DEFINED)
#include <Modloader/app/structs/DynamicGraphicHierarchy__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicGraphicHierarchy__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicGraphicHierarchy_DEFINED
struct DynamicGraphicHierarchy__Class;
struct DynamicGraphicHierarchy {
    struct DynamicGraphicHierarchy__Class* klass;
    MonitorData* monitor;
    struct DynamicGraphicHierarchy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicGraphicHierarchy_FWDDECL)
#define IL2CPP_STRUCT_DynamicGraphicHierarchy_FWDDECL
#include <Modloader/app/structs/DynamicGraphicHierarchy__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicGraphicHierarchy_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicGraphicHierarchy_DEFINED) && !defined(IL2CPP_STRUCT_DynamicGraphicHierarchy_FWDDECL)
#include <Modloader/app/structs/DynamicGraphicHierarchy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicGraphicHierarchy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
