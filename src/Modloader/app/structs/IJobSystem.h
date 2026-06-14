#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IJobSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IJobSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IJobSystem_DEFINED)
#define IL2CPP_STRUCT_IJobSystem_DEFINED
struct IJobSystem__Class;
struct IJobSystem {
    struct IJobSystem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IJobSystem_FWDDECL)
#define IL2CPP_STRUCT_IJobSystem_FWDDECL
#include <Modloader/app/structs/IJobSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_IJobSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IJobSystem_DEFINED) && !defined(IL2CPP_STRUCT_IJobSystem_FWDDECL)
#include <Modloader/app/structs/IJobSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IJobSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
