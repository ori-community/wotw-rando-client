#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegisterGameRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegisterGameRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterGameRequest__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#include <Modloader/app/structs/Region__Enum_2.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Region__Enum_2_DEFINED)
#define IL2CPP_STRUCT_RegisterGameRequest__Fields_DEFINED
struct String;
struct Dictionary_2_System_String_System_String_;
struct RegisterGameRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* Build;
    struct String* GameMode;
    struct String* LobbyId;
    Region__Enum_2 Region_1;

    struct String* ServerIPV4Address;
    struct String* ServerIPV6Address;
    struct String* ServerPort;
    struct String* ServerPublicDNSName;
    struct Dictionary_2_System_String_System_String_* Tags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegisterGameRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegisterGameRequest__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RegisterGameRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterGameRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegisterGameRequest__Fields_FWDDECL)
#include <Modloader/app/structs/RegisterGameRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegisterGameRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
