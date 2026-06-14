#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderAnimatorEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderAnimatorEntity_DEFINED)
#include <Modloader/app/structs/RecorderAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_RecorderAnimatorEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderAnimatorEntity_DEFINED
struct RecorderAnimatorEntity__Class;
struct RecorderAnimatorEntity {
    struct RecorderAnimatorEntity__Class* klass;
    MonitorData* monitor;
    struct RecorderAnimatorEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderAnimatorEntity_FWDDECL)
#define IL2CPP_STRUCT_RecorderAnimatorEntity_FWDDECL
#include <Modloader/app/structs/RecorderAnimatorEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderAnimatorEntity_DEFINED) && !defined(IL2CPP_STRUCT_RecorderAnimatorEntity_FWDDECL)
#include <Modloader/app/structs/RecorderAnimatorEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderAnimatorEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
