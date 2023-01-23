#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AdCampaignAttribution__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AdCampaignAttribution__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdCampaignAttribution__Array_DEFINED)
#define IL2CPP_STRUCT_AdCampaignAttribution__Array_DEFINED
struct AdCampaignAttribution__Array__Class;
struct AdCampaignAttribution;
struct AdCampaignAttribution__Array {
    struct AdCampaignAttribution__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct AdCampaignAttribution* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_AdCampaignAttribution__Array_FWDDECL)
#define IL2CPP_STRUCT_AdCampaignAttribution__Array_FWDDECL
#include <Modloader/app/structs/AdCampaignAttribution.h>
#include <Modloader/app/structs/AdCampaignAttribution__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_AdCampaignAttribution__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdCampaignAttribution__Array_DEFINED) && !defined(IL2CPP_STRUCT_AdCampaignAttribution__Array_FWDDECL)
#include <Modloader/app/structs/AdCampaignAttribution__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AdCampaignAttribution__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
