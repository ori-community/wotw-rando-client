#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodyVelocityCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodyVelocityCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyVelocityCondition_DEFINED)
#include <Modloader/app/structs/RigidbodyVelocityCondition__Fields.h>
#if defined(IL2CPP_STRUCT_RigidbodyVelocityCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_RigidbodyVelocityCondition_DEFINED
struct RigidbodyVelocityCondition__Class;
struct RigidbodyVelocityCondition {
    struct RigidbodyVelocityCondition__Class* klass;
    MonitorData* monitor;
    struct RigidbodyVelocityCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodyVelocityCondition_FWDDECL)
#define IL2CPP_STRUCT_RigidbodyVelocityCondition_FWDDECL
#include <Modloader/app/structs/RigidbodyVelocityCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_RigidbodyVelocityCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyVelocityCondition_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodyVelocityCondition_FWDDECL)
#include <Modloader/app/structs/RigidbodyVelocityCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodyVelocityCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
