#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformAnimatorEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAnimatorEntity_DEFINED)
#include <Modloader/app/structs/TransformAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_TransformAnimatorEntity_DEFINED
struct TransformAnimatorEntity__Class;
struct TransformAnimatorEntity {
    struct TransformAnimatorEntity__Class* klass;
    MonitorData* monitor;
    struct TransformAnimatorEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformAnimatorEntity_FWDDECL)
#define IL2CPP_STRUCT_TransformAnimatorEntity_FWDDECL
#include <Modloader/app/structs/TransformAnimatorEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_TransformAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAnimatorEntity_DEFINED) && !defined(IL2CPP_STRUCT_TransformAnimatorEntity_FWDDECL)
#include <Modloader/app/structs/TransformAnimatorEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformAnimatorEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
