#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodyInertiaModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodyInertiaModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyInertiaModifier_DEFINED)
#include <Modloader/app/structs/RigidbodyInertiaModifier__Fields.h>
#if defined(IL2CPP_STRUCT_RigidbodyInertiaModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_RigidbodyInertiaModifier_DEFINED
struct RigidbodyInertiaModifier__Class;
struct RigidbodyInertiaModifier {
    struct RigidbodyInertiaModifier__Class* klass;
    MonitorData* monitor;
    struct RigidbodyInertiaModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodyInertiaModifier_FWDDECL)
#define IL2CPP_STRUCT_RigidbodyInertiaModifier_FWDDECL
#include <Modloader/app/structs/RigidbodyInertiaModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_RigidbodyInertiaModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyInertiaModifier_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodyInertiaModifier_FWDDECL)
#include <Modloader/app/structs/RigidbodyInertiaModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodyInertiaModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
