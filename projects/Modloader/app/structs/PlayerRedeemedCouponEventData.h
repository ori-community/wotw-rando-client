#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerRedeemedCouponEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerRedeemedCouponEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerRedeemedCouponEventData_DEFINED)
#include <Modloader/app/structs/PlayerRedeemedCouponEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerRedeemedCouponEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerRedeemedCouponEventData_DEFINED
struct PlayerRedeemedCouponEventData__Class;
struct PlayerRedeemedCouponEventData {
    struct PlayerRedeemedCouponEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerRedeemedCouponEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerRedeemedCouponEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerRedeemedCouponEventData_FWDDECL
#include <Modloader/app/structs/PlayerRedeemedCouponEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerRedeemedCouponEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerRedeemedCouponEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerRedeemedCouponEventData_FWDDECL)
#include <Modloader/app/structs/PlayerRedeemedCouponEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerRedeemedCouponEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
