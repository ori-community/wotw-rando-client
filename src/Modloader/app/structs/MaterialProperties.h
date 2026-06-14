#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaterialProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaterialProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialProperties_DEFINED)
#include <Modloader/app/structs/MaterialProperties__Fields.h>
#if defined(IL2CPP_STRUCT_MaterialProperties__Fields_DEFINED)
#define IL2CPP_STRUCT_MaterialProperties_DEFINED
struct MaterialProperties__Class;
struct MaterialProperties {
    struct MaterialProperties__Class* klass;
    MonitorData* monitor;
    struct MaterialProperties__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaterialProperties_FWDDECL)
#define IL2CPP_STRUCT_MaterialProperties_FWDDECL
#include <Modloader/app/structs/MaterialProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_MaterialProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialProperties_DEFINED) && !defined(IL2CPP_STRUCT_MaterialProperties_FWDDECL)
#include <Modloader/app/structs/MaterialProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaterialProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
