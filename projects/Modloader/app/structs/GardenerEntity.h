#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GardenerEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GardenerEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_GardenerEntity_DEFINED)
#include <Modloader/app/structs/GardenerEntity__Fields.h>
#if defined(IL2CPP_STRUCT_GardenerEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_GardenerEntity_DEFINED
struct GardenerEntity__Class;
struct GardenerEntity {
    struct GardenerEntity__Class* klass;
    MonitorData* monitor;
    struct GardenerEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GardenerEntity_FWDDECL)
#define IL2CPP_STRUCT_GardenerEntity_FWDDECL
#include <Modloader/app/structs/GardenerEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_GardenerEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_GardenerEntity_DEFINED) && !defined(IL2CPP_STRUCT_GardenerEntity_FWDDECL)
#include <Modloader/app/structs/GardenerEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GardenerEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
