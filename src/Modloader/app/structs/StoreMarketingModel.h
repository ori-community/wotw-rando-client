#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StoreMarketingModel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StoreMarketingModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreMarketingModel_DEFINED)
#include <Modloader/app/structs/StoreMarketingModel__Fields.h>
#if defined(IL2CPP_STRUCT_StoreMarketingModel__Fields_DEFINED)
#define IL2CPP_STRUCT_StoreMarketingModel_DEFINED
struct StoreMarketingModel__Class;
struct StoreMarketingModel {
    struct StoreMarketingModel__Class* klass;
    MonitorData* monitor;
    struct StoreMarketingModel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StoreMarketingModel_FWDDECL)
#define IL2CPP_STRUCT_StoreMarketingModel_FWDDECL
#include <Modloader/app/structs/StoreMarketingModel__Class.h>
#endif
#undef IL2CPP_STRUCT_StoreMarketingModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreMarketingModel_DEFINED) && !defined(IL2CPP_STRUCT_StoreMarketingModel_FWDDECL)
#include <Modloader/app/structs/StoreMarketingModel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StoreMarketingModel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
