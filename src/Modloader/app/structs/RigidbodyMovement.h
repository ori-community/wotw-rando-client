#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodyMovement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodyMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyMovement_DEFINED)
#include <Modloader/app/structs/RigidbodyMovement__Fields.h>
#if defined(IL2CPP_STRUCT_RigidbodyMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_RigidbodyMovement_DEFINED
struct RigidbodyMovement__Class;
struct RigidbodyMovement {
    struct RigidbodyMovement__Class* klass;
    MonitorData* monitor;
    struct RigidbodyMovement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodyMovement_FWDDECL)
#define IL2CPP_STRUCT_RigidbodyMovement_FWDDECL
#include <Modloader/app/structs/RigidbodyMovement__Class.h>
#endif
#undef IL2CPP_STRUCT_RigidbodyMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyMovement_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodyMovement_FWDDECL)
#include <Modloader/app/structs/RigidbodyMovement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodyMovement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
