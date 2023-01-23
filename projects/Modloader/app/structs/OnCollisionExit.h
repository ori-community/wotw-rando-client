#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnCollisionExit_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnCollisionExit_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnCollisionExit_DEFINED)
#include <Modloader/app/structs/OnCollisionExit__Fields.h>
#if defined(IL2CPP_STRUCT_OnCollisionExit__Fields_DEFINED)
#define IL2CPP_STRUCT_OnCollisionExit_DEFINED
struct OnCollisionExit__Class;
struct OnCollisionExit {
    struct OnCollisionExit__Class* klass;
    MonitorData* monitor;
    struct OnCollisionExit__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnCollisionExit_FWDDECL)
#define IL2CPP_STRUCT_OnCollisionExit_FWDDECL
#include <Modloader/app/structs/OnCollisionExit__Class.h>
#endif
#undef IL2CPP_STRUCT_OnCollisionExit_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnCollisionExit_DEFINED) && !defined(IL2CPP_STRUCT_OnCollisionExit_FWDDECL)
#include <Modloader/app/structs/OnCollisionExit.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnCollisionExit.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
