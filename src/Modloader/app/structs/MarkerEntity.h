#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MarkerEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MarkerEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarkerEntity_DEFINED)
#include <Modloader/app/structs/MarkerEntity__Fields.h>
#if defined(IL2CPP_STRUCT_MarkerEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_MarkerEntity_DEFINED
struct MarkerEntity__Class;
struct MarkerEntity {
    struct MarkerEntity__Class* klass;
    MonitorData* monitor;
    struct MarkerEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MarkerEntity_FWDDECL)
#define IL2CPP_STRUCT_MarkerEntity_FWDDECL
#include <Modloader/app/structs/MarkerEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_MarkerEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarkerEntity_DEFINED) && !defined(IL2CPP_STRUCT_MarkerEntity_FWDDECL)
#include <Modloader/app/structs/MarkerEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MarkerEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
