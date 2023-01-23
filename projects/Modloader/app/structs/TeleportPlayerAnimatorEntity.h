#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TeleportPlayerAnimatorEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TeleportPlayerAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeleportPlayerAnimatorEntity_DEFINED)
#include <Modloader/app/structs/TeleportPlayerAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TeleportPlayerAnimatorEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_TeleportPlayerAnimatorEntity_DEFINED
struct TeleportPlayerAnimatorEntity__Class;
struct TeleportPlayerAnimatorEntity {
    struct TeleportPlayerAnimatorEntity__Class* klass;
    MonitorData* monitor;
    struct TeleportPlayerAnimatorEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TeleportPlayerAnimatorEntity_FWDDECL)
#define IL2CPP_STRUCT_TeleportPlayerAnimatorEntity_FWDDECL
#include <Modloader/app/structs/TeleportPlayerAnimatorEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_TeleportPlayerAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeleportPlayerAnimatorEntity_DEFINED) && !defined(IL2CPP_STRUCT_TeleportPlayerAnimatorEntity_FWDDECL)
#include <Modloader/app/structs/TeleportPlayerAnimatorEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TeleportPlayerAnimatorEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
