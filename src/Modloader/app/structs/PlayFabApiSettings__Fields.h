#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabApiSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabApiSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabApiSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabApiSettings__Fields_DEFINED
struct Dictionary_2_System_String_System_String_;
struct String;
struct __declspec(align(8)) PlayFabApiSettings__Fields {
    struct Dictionary_2_System_String_System_String_* RequestGetParams;
    struct String* ProductionEnvironmentUrl;
    struct String* VerticalName;
    struct String* EntityToken;
    struct String* ClientSessionTicket;
    struct String* DeveloperSecretKey;
    struct String* TitleId;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabApiSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabApiSettings__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayFabApiSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabApiSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabApiSettings__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabApiSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabApiSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
