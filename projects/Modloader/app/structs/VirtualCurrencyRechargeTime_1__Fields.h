#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VirtualCurrencyRechargeTime_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VirtualCurrencyRechargeTime_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualCurrencyRechargeTime_1__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_VirtualCurrencyRechargeTime_1__Fields_DEFINED
struct __declspec(align(8)) VirtualCurrencyRechargeTime_1__Fields {
    int32_t RechargeMax;
    struct DateTime RechargeTime;
    int32_t SecondsToRecharge;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VirtualCurrencyRechargeTime_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_VirtualCurrencyRechargeTime_1__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_VirtualCurrencyRechargeTime_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualCurrencyRechargeTime_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VirtualCurrencyRechargeTime_1__Fields_FWDDECL)
#include <Modloader/app/structs/VirtualCurrencyRechargeTime_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VirtualCurrencyRechargeTime_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
