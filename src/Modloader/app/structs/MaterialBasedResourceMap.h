#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaterialBasedResourceMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaterialBasedResourceMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialBasedResourceMap_DEFINED)
#include <Modloader/app/structs/MaterialBasedResourceMap__Fields.h>
#if defined(IL2CPP_STRUCT_MaterialBasedResourceMap__Fields_DEFINED)
#define IL2CPP_STRUCT_MaterialBasedResourceMap_DEFINED
struct MaterialBasedResourceMap__Class;
struct MaterialBasedResourceMap {
    struct MaterialBasedResourceMap__Class* klass;
    MonitorData* monitor;
    struct MaterialBasedResourceMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaterialBasedResourceMap_FWDDECL)
#define IL2CPP_STRUCT_MaterialBasedResourceMap_FWDDECL
#include <Modloader/app/structs/MaterialBasedResourceMap__Class.h>
#endif
#undef IL2CPP_STRUCT_MaterialBasedResourceMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialBasedResourceMap_DEFINED) && !defined(IL2CPP_STRUCT_MaterialBasedResourceMap_FWDDECL)
#include <Modloader/app/structs/MaterialBasedResourceMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaterialBasedResourceMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
