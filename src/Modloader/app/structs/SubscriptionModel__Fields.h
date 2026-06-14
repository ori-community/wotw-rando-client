#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SubscriptionModel__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SubscriptionModel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubscriptionModel__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_ClientModels_SubscriptionProviderStatus_.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ClientModels_SubscriptionProviderStatus__DEFINED)
#define IL2CPP_STRUCT_SubscriptionModel__Fields_DEFINED
struct String;
struct __declspec(align(8)) SubscriptionModel__Fields {
    struct DateTime Expiration;
    struct DateTime InitialSubscriptionTime;
    bool IsActive;
    struct Nullable_1_PlayFab_ClientModels_SubscriptionProviderStatus_ Status;
    struct String* SubscriptionId;
    struct String* SubscriptionItemId;
    struct String* SubscriptionProvider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SubscriptionModel__Fields_FWDDECL)
#define IL2CPP_STRUCT_SubscriptionModel__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SubscriptionModel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubscriptionModel__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SubscriptionModel__Fields_FWDDECL)
#include <Modloader/app/structs/SubscriptionModel__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SubscriptionModel__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
