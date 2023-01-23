#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISoundHost_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISoundHost_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISoundHost_DEFINED)
#define IL2CPP_STRUCT_ISoundHost_DEFINED
struct ISoundHost__Class;
struct ISoundHost {
    struct ISoundHost__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISoundHost_FWDDECL)
#define IL2CPP_STRUCT_ISoundHost_FWDDECL
#include <Modloader/app/structs/ISoundHost__Class.h>
#endif
#undef IL2CPP_STRUCT_ISoundHost_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISoundHost_DEFINED) && !defined(IL2CPP_STRUCT_ISoundHost_FWDDECL)
#include <Modloader/app/structs/ISoundHost.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISoundHost.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
