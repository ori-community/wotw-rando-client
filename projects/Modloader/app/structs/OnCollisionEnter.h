#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnCollisionEnter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnCollisionEnter_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnCollisionEnter_DEFINED)
#include <Modloader/app/structs/OnCollisionEnter__Fields.h>
#if defined(IL2CPP_STRUCT_OnCollisionEnter__Fields_DEFINED)
#define IL2CPP_STRUCT_OnCollisionEnter_DEFINED
struct OnCollisionEnter__Class;
struct OnCollisionEnter {
    struct OnCollisionEnter__Class* klass;
    MonitorData* monitor;
    struct OnCollisionEnter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnCollisionEnter_FWDDECL)
#define IL2CPP_STRUCT_OnCollisionEnter_FWDDECL
#include <Modloader/app/structs/OnCollisionEnter__Class.h>
#endif
#undef IL2CPP_STRUCT_OnCollisionEnter_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnCollisionEnter_DEFINED) && !defined(IL2CPP_STRUCT_OnCollisionEnter_FWDDECL)
#include <Modloader/app/structs/OnCollisionEnter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnCollisionEnter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
