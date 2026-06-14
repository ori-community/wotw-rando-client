#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformBehaviour_DEFINED)
#include <Modloader/app/structs/PlatformBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_PlatformBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformBehaviour_DEFINED
struct PlatformBehaviour__Class;
struct PlatformBehaviour {
    struct PlatformBehaviour__Class* klass;
    MonitorData* monitor;
    struct PlatformBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformBehaviour_FWDDECL)
#define IL2CPP_STRUCT_PlatformBehaviour_FWDDECL
#include <Modloader/app/structs/PlatformBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_PlatformBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_PlatformBehaviour_FWDDECL)
#include <Modloader/app/structs/PlatformBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
