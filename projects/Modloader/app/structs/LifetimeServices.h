#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LifetimeServices_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LifetimeServices_INITIALIZING
#if !defined(IL2CPP_STRUCT_LifetimeServices_DEFINED)
#define IL2CPP_STRUCT_LifetimeServices_DEFINED
struct LifetimeServices__Class;
struct LifetimeServices {
    struct LifetimeServices__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LifetimeServices_FWDDECL)
#define IL2CPP_STRUCT_LifetimeServices_FWDDECL
#include <Modloader/app/structs/LifetimeServices__Class.h>
#endif
#undef IL2CPP_STRUCT_LifetimeServices_INITIALIZING
#if !defined(IL2CPP_STRUCT_LifetimeServices_DEFINED) && !defined(IL2CPP_STRUCT_LifetimeServices_FWDDECL)
#include <Modloader/app/structs/LifetimeServices.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LifetimeServices.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
