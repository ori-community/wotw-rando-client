#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabError__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabError__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabError__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabErrorCode__Enum.h>
#if defined(IL2CPP_STRUCT_PlayFabErrorCode__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayFabError__Fields_DEFINED
struct String;
struct Dictionary_2_System_String_List_1_System_String_;
struct Object;
struct __declspec(align(8)) PlayFabError__Fields {
    struct String* ApiEndpoint;
    int32_t HttpCode;
    struct String* HttpStatus;
    PlayFabErrorCode__Enum Error;

    struct String* ErrorMessage;
    struct Dictionary_2_System_String_List_1_System_String_* ErrorDetails;
    struct Object* CustomData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabError__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabError__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_List_1_System_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayFabError__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabError__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabError__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabError__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabError__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
