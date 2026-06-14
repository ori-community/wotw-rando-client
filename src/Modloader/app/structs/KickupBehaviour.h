#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KickupBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KickupBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_KickupBehaviour_DEFINED)
#include <Modloader/app/structs/KickupBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_KickupBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KickupBehaviour_DEFINED
struct KickupBehaviour__Class;
struct KickupBehaviour {
    struct KickupBehaviour__Class* klass;
    MonitorData* monitor;
    struct KickupBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KickupBehaviour_FWDDECL)
#define IL2CPP_STRUCT_KickupBehaviour_FWDDECL
#include <Modloader/app/structs/KickupBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_KickupBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_KickupBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_KickupBehaviour_FWDDECL)
#include <Modloader/app/structs/KickupBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KickupBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
