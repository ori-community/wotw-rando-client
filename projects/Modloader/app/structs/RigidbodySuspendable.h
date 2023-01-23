#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodySuspendable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodySuspendable_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodySuspendable_DEFINED)
#include <Modloader/app/structs/RigidbodySuspendable__Fields.h>
#if defined(IL2CPP_STRUCT_RigidbodySuspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_RigidbodySuspendable_DEFINED
struct RigidbodySuspendable__Class;
struct RigidbodySuspendable {
    struct RigidbodySuspendable__Class* klass;
    MonitorData* monitor;
    struct RigidbodySuspendable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodySuspendable_FWDDECL)
#define IL2CPP_STRUCT_RigidbodySuspendable_FWDDECL
#include <Modloader/app/structs/RigidbodySuspendable__Class.h>
#endif
#undef IL2CPP_STRUCT_RigidbodySuspendable_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodySuspendable_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodySuspendable_FWDDECL)
#include <Modloader/app/structs/RigidbodySuspendable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodySuspendable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
