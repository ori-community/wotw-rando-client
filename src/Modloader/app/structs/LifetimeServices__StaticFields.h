#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LifetimeServices__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LifetimeServices__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LifetimeServices__StaticFields_DEFINED)
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_LifetimeServices__StaticFields_DEFINED
struct LeaseManager;
struct LifetimeServices__StaticFields {
    struct TimeSpan _leaseManagerPollTime;
    struct TimeSpan _leaseTime;
    struct TimeSpan _renewOnCallTime;
    struct TimeSpan _sponsorshipTimeout;
    struct LeaseManager* _leaseManager;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LifetimeServices__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_LifetimeServices__StaticFields_FWDDECL
#include <Modloader/app/structs/LeaseManager.h>
#endif
#undef IL2CPP_STRUCT_LifetimeServices__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LifetimeServices__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_LifetimeServices__StaticFields_FWDDECL)
#include <Modloader/app/structs/LifetimeServices__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LifetimeServices__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
