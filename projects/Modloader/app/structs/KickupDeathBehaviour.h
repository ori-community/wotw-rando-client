#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KickupDeathBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KickupDeathBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_KickupDeathBehaviour_DEFINED)
#include <Modloader/app/structs/KickupDeathBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_KickupDeathBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KickupDeathBehaviour_DEFINED
struct KickupDeathBehaviour__Class;
struct KickupDeathBehaviour {
    struct KickupDeathBehaviour__Class* klass;
    MonitorData* monitor;
    struct KickupDeathBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KickupDeathBehaviour_FWDDECL)
#define IL2CPP_STRUCT_KickupDeathBehaviour_FWDDECL
#include <Modloader/app/structs/KickupDeathBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_KickupDeathBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_KickupDeathBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_KickupDeathBehaviour_FWDDECL)
#include <Modloader/app/structs/KickupDeathBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KickupDeathBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
