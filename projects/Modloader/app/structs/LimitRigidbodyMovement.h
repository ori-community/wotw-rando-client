#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LimitRigidbodyMovement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LimitRigidbodyMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_LimitRigidbodyMovement_DEFINED)
#include <Modloader/app/structs/LimitRigidbodyMovement__Fields.h>
#if defined(IL2CPP_STRUCT_LimitRigidbodyMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_LimitRigidbodyMovement_DEFINED
struct LimitRigidbodyMovement__Class;
struct LimitRigidbodyMovement {
    struct LimitRigidbodyMovement__Class* klass;
    MonitorData* monitor;
    struct LimitRigidbodyMovement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LimitRigidbodyMovement_FWDDECL)
#define IL2CPP_STRUCT_LimitRigidbodyMovement_FWDDECL
#include <Modloader/app/structs/LimitRigidbodyMovement__Class.h>
#endif
#undef IL2CPP_STRUCT_LimitRigidbodyMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_LimitRigidbodyMovement_DEFINED) && !defined(IL2CPP_STRUCT_LimitRigidbodyMovement_FWDDECL)
#include <Modloader/app/structs/LimitRigidbodyMovement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LimitRigidbodyMovement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
