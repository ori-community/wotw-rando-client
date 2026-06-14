#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabyCrabEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabyCrabEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyCrabEntity_DEFINED)
#include <Modloader/app/structs/BabyCrabEntity__Fields.h>
#if defined(IL2CPP_STRUCT_BabyCrabEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_BabyCrabEntity_DEFINED
struct BabyCrabEntity__Class;
struct BabyCrabEntity {
    struct BabyCrabEntity__Class* klass;
    MonitorData* monitor;
    struct BabyCrabEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabyCrabEntity_FWDDECL)
#define IL2CPP_STRUCT_BabyCrabEntity_FWDDECL
#include <Modloader/app/structs/BabyCrabEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_BabyCrabEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyCrabEntity_DEFINED) && !defined(IL2CPP_STRUCT_BabyCrabEntity_FWDDECL)
#include <Modloader/app/structs/BabyCrabEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabyCrabEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
