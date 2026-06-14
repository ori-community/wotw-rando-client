#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodyStateModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodyStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyStateModifier_DEFINED)
#include <Modloader/app/structs/RigidbodyStateModifier__Fields.h>
#if defined(IL2CPP_STRUCT_RigidbodyStateModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_RigidbodyStateModifier_DEFINED
struct RigidbodyStateModifier__Class;
struct RigidbodyStateModifier {
    struct RigidbodyStateModifier__Class* klass;
    MonitorData* monitor;
    struct RigidbodyStateModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodyStateModifier_FWDDECL)
#define IL2CPP_STRUCT_RigidbodyStateModifier_FWDDECL
#include <Modloader/app/structs/RigidbodyStateModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_RigidbodyStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyStateModifier_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodyStateModifier_FWDDECL)
#include <Modloader/app/structs/RigidbodyStateModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodyStateModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
