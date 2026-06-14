#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundMovingEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundMovingEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundMovingEntity_DEFINED)
#include <Modloader/app/structs/GroundMovingEntity__Fields.h>
#if defined(IL2CPP_STRUCT_GroundMovingEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_GroundMovingEntity_DEFINED
struct GroundMovingEntity__Class;
struct GroundMovingEntity {
    struct GroundMovingEntity__Class* klass;
    MonitorData* monitor;
    struct GroundMovingEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundMovingEntity_FWDDECL)
#define IL2CPP_STRUCT_GroundMovingEntity_FWDDECL
#include <Modloader/app/structs/GroundMovingEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_GroundMovingEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundMovingEntity_DEFINED) && !defined(IL2CPP_STRUCT_GroundMovingEntity_FWDDECL)
#include <Modloader/app/structs/GroundMovingEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundMovingEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
