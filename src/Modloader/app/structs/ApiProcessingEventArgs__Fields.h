#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApiProcessingEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApiProcessingEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApiProcessingEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/ApiProcessingEventType__Enum.h>
#if defined(IL2CPP_STRUCT_ApiProcessingEventType__Enum_DEFINED)
#define IL2CPP_STRUCT_ApiProcessingEventArgs__Fields_DEFINED
struct String;
struct PlayFabRequestCommon;
struct PlayFabResultCommon;
struct __declspec(align(8)) ApiProcessingEventArgs__Fields {
    struct String* ApiEndpoint;
    ApiProcessingEventType__Enum EventType;

    struct PlayFabRequestCommon* Request;
    struct PlayFabResultCommon* Result;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ApiProcessingEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_ApiProcessingEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/PlayFabRequestCommon.h>
#include <Modloader/app/structs/PlayFabResultCommon.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ApiProcessingEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApiProcessingEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ApiProcessingEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/ApiProcessingEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApiProcessingEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
