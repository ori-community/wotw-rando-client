#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionAnimatorEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionAnimatorEntity_DEFINED)
#include <Modloader/app/structs/PositionAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_PositionAnimatorEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_PositionAnimatorEntity_DEFINED
struct PositionAnimatorEntity__Class;
struct PositionAnimatorEntity {
    struct PositionAnimatorEntity__Class* klass;
    MonitorData* monitor;
    struct PositionAnimatorEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionAnimatorEntity_FWDDECL)
#define IL2CPP_STRUCT_PositionAnimatorEntity_FWDDECL
#include <Modloader/app/structs/PositionAnimatorEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_PositionAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionAnimatorEntity_DEFINED) && !defined(IL2CPP_STRUCT_PositionAnimatorEntity_FWDDECL)
#include <Modloader/app/structs/PositionAnimatorEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionAnimatorEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
