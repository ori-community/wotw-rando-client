#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegionInfo_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegionInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegionInfo_1__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_ClientModels_Region_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ClientModels_Region__DEFINED)
#define IL2CPP_STRUCT_RegionInfo_1__Fields_DEFINED
struct String;
struct __declspec(align(8)) RegionInfo_1__Fields {
    bool Available;
    struct String* Name;
    struct String* PingUrl;
    struct Nullable_1_PlayFab_ClientModels_Region_ Region_1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegionInfo_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegionInfo_1__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RegionInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegionInfo_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegionInfo_1__Fields_FWDDECL)
#include <Modloader/app/structs/RegionInfo_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegionInfo_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
