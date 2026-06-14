#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrailAnimatorEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrailAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrailAnimatorEntity_DEFINED)
#include <Modloader/app/structs/TrailAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TrailAnimatorEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_TrailAnimatorEntity_DEFINED
struct TrailAnimatorEntity__Class;
struct TrailAnimatorEntity {
    struct TrailAnimatorEntity__Class* klass;
    MonitorData* monitor;
    struct TrailAnimatorEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TrailAnimatorEntity_FWDDECL)
#define IL2CPP_STRUCT_TrailAnimatorEntity_FWDDECL
#include <Modloader/app/structs/TrailAnimatorEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_TrailAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrailAnimatorEntity_DEFINED) && !defined(IL2CPP_STRUCT_TrailAnimatorEntity_FWDDECL)
#include <Modloader/app/structs/TrailAnimatorEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrailAnimatorEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
