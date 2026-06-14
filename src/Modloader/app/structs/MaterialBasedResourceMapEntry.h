#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaterialBasedResourceMapEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaterialBasedResourceMapEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialBasedResourceMapEntry_DEFINED)
#include <Modloader/app/structs/MaterialBasedResourceMapEntry__Fields.h>
#if defined(IL2CPP_STRUCT_MaterialBasedResourceMapEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_MaterialBasedResourceMapEntry_DEFINED
struct MaterialBasedResourceMapEntry__Class;
struct MaterialBasedResourceMapEntry {
    struct MaterialBasedResourceMapEntry__Class* klass;
    MonitorData* monitor;
    struct MaterialBasedResourceMapEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaterialBasedResourceMapEntry_FWDDECL)
#define IL2CPP_STRUCT_MaterialBasedResourceMapEntry_FWDDECL
#include <Modloader/app/structs/MaterialBasedResourceMapEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_MaterialBasedResourceMapEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialBasedResourceMapEntry_DEFINED) && !defined(IL2CPP_STRUCT_MaterialBasedResourceMapEntry_FWDDECL)
#include <Modloader/app/structs/MaterialBasedResourceMapEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaterialBasedResourceMapEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
