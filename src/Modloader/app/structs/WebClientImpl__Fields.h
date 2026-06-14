#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebClientImpl__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebClientImpl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebClientImpl__Fields_DEFINED)
#define IL2CPP_STRUCT_WebClientImpl__Fields_DEFINED
struct String;
struct WebClient;
struct Dictionary_2_System_String_System_String_;
struct Byte__Array;
struct Action_1_Moon_Network_Web_WebResponse_;
struct __declspec(align(8)) WebClientImpl__Fields {
    struct String* m_url;
    struct WebClient* m_client;
    struct Dictionary_2_System_String_System_String_* m_requestParams;
    struct Byte__Array* m_requestData;
    struct Action_1_Moon_Network_Web_WebResponse_* m_callback;
};
#endif
#if !defined(IL2CPP_STRUCT_WebClientImpl__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebClientImpl__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Moon_Network_Web_WebResponse_.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WebClient.h>
#endif
#undef IL2CPP_STRUCT_WebClientImpl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebClientImpl__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebClientImpl__Fields_FWDDECL)
#include <Modloader/app/structs/WebClientImpl__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebClientImpl__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
