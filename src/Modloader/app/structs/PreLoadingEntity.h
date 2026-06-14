#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreLoadingEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreLoadingEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreLoadingEntity_DEFINED)
#include <Modloader/app/structs/PreLoadingEntity__Fields.h>
#if defined(IL2CPP_STRUCT_PreLoadingEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_PreLoadingEntity_DEFINED
struct PreLoadingEntity__Class;
struct PreLoadingEntity {
    struct PreLoadingEntity__Class* klass;
    MonitorData* monitor;
    struct PreLoadingEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PreLoadingEntity_FWDDECL)
#define IL2CPP_STRUCT_PreLoadingEntity_FWDDECL
#include <Modloader/app/structs/PreLoadingEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_PreLoadingEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreLoadingEntity_DEFINED) && !defined(IL2CPP_STRUCT_PreLoadingEntity_FWDDECL)
#include <Modloader/app/structs/PreLoadingEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreLoadingEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
