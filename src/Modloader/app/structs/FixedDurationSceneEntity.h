#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedDurationSceneEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedDurationSceneEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedDurationSceneEntity_DEFINED)
#include <Modloader/app/structs/FixedDurationSceneEntity__Fields.h>
#if defined(IL2CPP_STRUCT_FixedDurationSceneEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_FixedDurationSceneEntity_DEFINED
struct FixedDurationSceneEntity__Class;
struct FixedDurationSceneEntity {
    struct FixedDurationSceneEntity__Class* klass;
    MonitorData* monitor;
    struct FixedDurationSceneEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixedDurationSceneEntity_FWDDECL)
#define IL2CPP_STRUCT_FixedDurationSceneEntity_FWDDECL
#include <Modloader/app/structs/FixedDurationSceneEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_FixedDurationSceneEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedDurationSceneEntity_DEFINED) && !defined(IL2CPP_STRUCT_FixedDurationSceneEntity_FWDDECL)
#include <Modloader/app/structs/FixedDurationSceneEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedDurationSceneEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
