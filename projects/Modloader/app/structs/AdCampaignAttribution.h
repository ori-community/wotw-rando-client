#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AdCampaignAttribution_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AdCampaignAttribution_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdCampaignAttribution_DEFINED)
#include <Modloader/app/structs/AdCampaignAttribution__Fields.h>
#if defined(IL2CPP_STRUCT_AdCampaignAttribution__Fields_DEFINED)
#define IL2CPP_STRUCT_AdCampaignAttribution_DEFINED
struct AdCampaignAttribution__Class;
struct AdCampaignAttribution {
    struct AdCampaignAttribution__Class* klass;
    MonitorData* monitor;
    struct AdCampaignAttribution__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AdCampaignAttribution_FWDDECL)
#define IL2CPP_STRUCT_AdCampaignAttribution_FWDDECL
#include <Modloader/app/structs/AdCampaignAttribution__Class.h>
#endif
#undef IL2CPP_STRUCT_AdCampaignAttribution_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdCampaignAttribution_DEFINED) && !defined(IL2CPP_STRUCT_AdCampaignAttribution_FWDDECL)
#include <Modloader/app/structs/AdCampaignAttribution.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AdCampaignAttribution.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
