#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberExplosionActor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberExplosionActor_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberExplosionActor_DEFINED)
#include <Modloader/app/structs/UberExplosionActor__Fields.h>
#if defined(IL2CPP_STRUCT_UberExplosionActor__Fields_DEFINED)
#define IL2CPP_STRUCT_UberExplosionActor_DEFINED
struct UberExplosionActor__Class;
struct UberExplosionActor {
    struct UberExplosionActor__Class* klass;
    MonitorData* monitor;
    struct UberExplosionActor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberExplosionActor_FWDDECL)
#define IL2CPP_STRUCT_UberExplosionActor_FWDDECL
#include <Modloader/app/structs/UberExplosionActor__Class.h>
#endif
#undef IL2CPP_STRUCT_UberExplosionActor_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberExplosionActor_DEFINED) && !defined(IL2CPP_STRUCT_UberExplosionActor_FWDDECL)
#include <Modloader/app/structs/UberExplosionActor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberExplosionActor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
