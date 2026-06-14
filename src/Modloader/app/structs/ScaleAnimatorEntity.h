#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScaleAnimatorEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScaleAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleAnimatorEntity_DEFINED)
#include <Modloader/app/structs/ScaleAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_ScaleAnimatorEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ScaleAnimatorEntity_DEFINED
struct ScaleAnimatorEntity__Class;
struct ScaleAnimatorEntity {
    struct ScaleAnimatorEntity__Class* klass;
    MonitorData* monitor;
    struct ScaleAnimatorEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScaleAnimatorEntity_FWDDECL)
#define IL2CPP_STRUCT_ScaleAnimatorEntity_FWDDECL
#include <Modloader/app/structs/ScaleAnimatorEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_ScaleAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleAnimatorEntity_DEFINED) && !defined(IL2CPP_STRUCT_ScaleAnimatorEntity_FWDDECL)
#include <Modloader/app/structs/ScaleAnimatorEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScaleAnimatorEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
