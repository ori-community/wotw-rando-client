#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SubscriptionModel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SubscriptionModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubscriptionModel_DEFINED)
#include <Modloader/app/structs/SubscriptionModel__Fields.h>
#if defined(IL2CPP_STRUCT_SubscriptionModel__Fields_DEFINED)
#define IL2CPP_STRUCT_SubscriptionModel_DEFINED
struct SubscriptionModel__Class;
struct SubscriptionModel {
    struct SubscriptionModel__Class* klass;
    MonitorData* monitor;
    struct SubscriptionModel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SubscriptionModel_FWDDECL)
#define IL2CPP_STRUCT_SubscriptionModel_FWDDECL
#include <Modloader/app/structs/SubscriptionModel__Class.h>
#endif
#undef IL2CPP_STRUCT_SubscriptionModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubscriptionModel_DEFINED) && !defined(IL2CPP_STRUCT_SubscriptionModel_FWDDECL)
#include <Modloader/app/structs/SubscriptionModel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SubscriptionModel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
