#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FilterCollisionsByContactNormals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FilterCollisionsByContactNormals_INITIALIZING
#if !defined(IL2CPP_STRUCT_FilterCollisionsByContactNormals_DEFINED)
#include <Modloader/app/structs/FilterCollisionsByContactNormals__Fields.h>
#if defined(IL2CPP_STRUCT_FilterCollisionsByContactNormals__Fields_DEFINED)
#define IL2CPP_STRUCT_FilterCollisionsByContactNormals_DEFINED
struct FilterCollisionsByContactNormals__Class;
struct FilterCollisionsByContactNormals {
    struct FilterCollisionsByContactNormals__Class* klass;
    MonitorData* monitor;
    struct FilterCollisionsByContactNormals__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FilterCollisionsByContactNormals_FWDDECL)
#define IL2CPP_STRUCT_FilterCollisionsByContactNormals_FWDDECL
#include <Modloader/app/structs/FilterCollisionsByContactNormals__Class.h>
#endif
#undef IL2CPP_STRUCT_FilterCollisionsByContactNormals_INITIALIZING
#if !defined(IL2CPP_STRUCT_FilterCollisionsByContactNormals_DEFINED) && !defined(IL2CPP_STRUCT_FilterCollisionsByContactNormals_FWDDECL)
#include <Modloader/app/structs/FilterCollisionsByContactNormals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FilterCollisionsByContactNormals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
