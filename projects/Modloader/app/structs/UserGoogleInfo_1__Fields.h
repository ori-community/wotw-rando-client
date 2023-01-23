#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserGoogleInfo_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserGoogleInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserGoogleInfo_1__Fields_DEFINED)
#define IL2CPP_STRUCT_UserGoogleInfo_1__Fields_DEFINED
struct String;
struct __declspec(align(8)) UserGoogleInfo_1__Fields {
    struct String* GoogleEmail;
    struct String* GoogleGender;
    struct String* GoogleId;
    struct String* GoogleLocale;
};
#endif
#if !defined(IL2CPP_STRUCT_UserGoogleInfo_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_UserGoogleInfo_1__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UserGoogleInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserGoogleInfo_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UserGoogleInfo_1__Fields_FWDDECL)
#include <Modloader/app/structs/UserGoogleInfo_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserGoogleInfo_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
