#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILaunchable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILaunchable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILaunchable_DEFINED)
#define IL2CPP_STRUCT_ILaunchable_DEFINED
struct ILaunchable__Class;
struct ILaunchable {
    struct ILaunchable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILaunchable_FWDDECL)
#define IL2CPP_STRUCT_ILaunchable_FWDDECL
#include <Modloader/app/structs/ILaunchable__Class.h>
#endif
#undef IL2CPP_STRUCT_ILaunchable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILaunchable_DEFINED) && !defined(IL2CPP_STRUCT_ILaunchable_FWDDECL)
#include <Modloader/app/structs/ILaunchable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILaunchable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
