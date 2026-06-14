#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StartGameRequest_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StartGameRequest_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartGameRequest_1__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#include <Modloader/app/structs/Region__Enum_1.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Region__Enum_1_DEFINED)
#define IL2CPP_STRUCT_StartGameRequest_1__Fields_DEFINED
struct String;
struct StartGameRequest_1__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* Build;
    struct String* CustomCommandLineData;
    struct String* ExternalMatchmakerEventEndpoint;
    struct String* GameMode;
    Region__Enum_1 Region_1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StartGameRequest_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_StartGameRequest_1__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StartGameRequest_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartGameRequest_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StartGameRequest_1__Fields_FWDDECL)
#include <Modloader/app/structs/StartGameRequest_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StartGameRequest_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
