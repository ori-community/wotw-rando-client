#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuildRegion_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuildRegion_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildRegion_1__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_AzureRegion_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_AzureRegion__DEFINED)
#define IL2CPP_STRUCT_BuildRegion_1__Fields_DEFINED
struct __declspec(align(8)) BuildRegion_1__Fields {
    int32_t MaxServers;
    struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ Region_1;
    int32_t StandbyServers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuildRegion_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_BuildRegion_1__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_BuildRegion_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildRegion_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BuildRegion_1__Fields_FWDDECL)
#include <Modloader/app/structs/BuildRegion_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuildRegion_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
