#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Material_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Material_INITIALIZING
#if !defined(IL2CPP_STRUCT_Material_DEFINED)
#include <Modloader/app/structs/Material__Fields.h>
#if defined(IL2CPP_STRUCT_Material__Fields_DEFINED)
#define IL2CPP_STRUCT_Material_DEFINED
struct Material__Class;
struct Material {
    struct Material__Class* klass;
    MonitorData* monitor;
    struct Material__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Material_FWDDECL)
#define IL2CPP_STRUCT_Material_FWDDECL
#include <Modloader/app/structs/Material__Class.h>
#endif
#undef IL2CPP_STRUCT_Material_INITIALIZING
#if !defined(IL2CPP_STRUCT_Material_DEFINED) && !defined(IL2CPP_STRUCT_Material_FWDDECL)
#include <Modloader/app/structs/Material.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Material.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
