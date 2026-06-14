#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererEntity_DEFINED)
#include <Modloader/app/structs/WandererEntity__Fields.h>
#if defined(IL2CPP_STRUCT_WandererEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_WandererEntity_DEFINED
struct WandererEntity__Class;
struct WandererEntity {
    struct WandererEntity__Class* klass;
    MonitorData* monitor;
    struct WandererEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererEntity_FWDDECL)
#define IL2CPP_STRUCT_WandererEntity_FWDDECL
#include <Modloader/app/structs/WandererEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_WandererEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererEntity_DEFINED) && !defined(IL2CPP_STRUCT_WandererEntity_FWDDECL)
#include <Modloader/app/structs/WandererEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
