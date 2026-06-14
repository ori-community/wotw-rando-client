#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Lease__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Lease__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lease__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/LeaseState__Enum.h>
#include <Modloader/app/structs/MarshalByRefObject__Fields.h>
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_MarshalByRefObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED) && defined(IL2CPP_STRUCT_LeaseState__Enum_DEFINED) && defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_Lease__Fields_DEFINED
struct ArrayList;
struct Queue;
struct Lease_RenewalDelegate;
struct Lease__Fields {
    struct MarshalByRefObject__Fields _;
    struct DateTime _leaseExpireTime;
    LeaseState__Enum _currentState;

    struct TimeSpan _initialLeaseTime;
    struct TimeSpan _renewOnCallTime;
    struct TimeSpan _sponsorshipTimeout;
    struct ArrayList* _sponsors;
    struct Queue* _renewingSponsors;
    struct Lease_RenewalDelegate* _renewalDelegate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Lease__Fields_FWDDECL)
#define IL2CPP_STRUCT_Lease__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Lease_RenewalDelegate.h>
#include <Modloader/app/structs/Queue.h>
#endif
#undef IL2CPP_STRUCT_Lease__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lease__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Lease__Fields_FWDDECL)
#include <Modloader/app/structs/Lease__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Lease__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
