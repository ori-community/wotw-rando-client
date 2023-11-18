#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocationModel_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocationModel_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocationModel_1__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Double_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_ServerModels_ContinentCode_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_ServerModels_CountryCode_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ServerModels_ContinentCode__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ServerModels_CountryCode__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Double__DEFINED)
#define IL2CPP_STRUCT_LocationModel_1__Fields_DEFINED
struct String;
struct __declspec(align(8)) LocationModel_1__Fields {
    struct String* City;
    struct Nullable_1_PlayFab_ServerModels_ContinentCode_ ContinentCode;
    struct Nullable_1_PlayFab_ServerModels_CountryCode_ CountryCode;
    struct Nullable_1_Double_ Latitude;
    struct Nullable_1_Double_ Longitude;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocationModel_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocationModel_1__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LocationModel_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocationModel_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocationModel_1__Fields_FWDDECL)
#include <Modloader/app/structs/LocationModel_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocationModel_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
