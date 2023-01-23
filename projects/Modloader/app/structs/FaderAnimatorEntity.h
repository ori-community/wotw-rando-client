#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FaderAnimatorEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FaderAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderAnimatorEntity_DEFINED)
#include <Modloader/app/structs/FaderAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_FaderAnimatorEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_FaderAnimatorEntity_DEFINED
struct FaderAnimatorEntity__Class;
struct FaderAnimatorEntity {
    struct FaderAnimatorEntity__Class* klass;
    MonitorData* monitor;
    struct FaderAnimatorEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FaderAnimatorEntity_FWDDECL)
#define IL2CPP_STRUCT_FaderAnimatorEntity_FWDDECL
#include <Modloader/app/structs/FaderAnimatorEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_FaderAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderAnimatorEntity_DEFINED) && !defined(IL2CPP_STRUCT_FaderAnimatorEntity_FWDDECL)
#include <Modloader/app/structs/FaderAnimatorEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FaderAnimatorEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
