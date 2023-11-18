#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentaclePlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentaclePlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentaclePlaceholder_DEFINED)
#include <Modloader/app/structs/TentaclePlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_TentaclePlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_TentaclePlaceholder_DEFINED
struct TentaclePlaceholder__Class;
struct TentaclePlaceholder {
    struct TentaclePlaceholder__Class* klass;
    MonitorData* monitor;
    struct TentaclePlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentaclePlaceholder_FWDDECL)
#define IL2CPP_STRUCT_TentaclePlaceholder_FWDDECL
#include <Modloader/app/structs/TentaclePlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_TentaclePlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentaclePlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_TentaclePlaceholder_FWDDECL)
#include <Modloader/app/structs/TentaclePlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentaclePlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
