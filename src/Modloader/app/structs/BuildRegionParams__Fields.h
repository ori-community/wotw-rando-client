#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuildRegionParams__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuildRegionParams__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildRegionParams__Fields_DEFINED)
#include <Modloader/app/structs/AzureRegion__Enum.h>
#if defined(IL2CPP_STRUCT_AzureRegion__Enum_DEFINED)
#define IL2CPP_STRUCT_BuildRegionParams__Fields_DEFINED
struct __declspec(align(8)) BuildRegionParams__Fields {
    int32_t MaxServers;
    AzureRegion__Enum Region_1;

    int32_t StandbyServers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuildRegionParams__Fields_FWDDECL)
#define IL2CPP_STRUCT_BuildRegionParams__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_BuildRegionParams__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildRegionParams__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BuildRegionParams__Fields_FWDDECL)
#include <Modloader/app/structs/BuildRegionParams__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuildRegionParams__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
