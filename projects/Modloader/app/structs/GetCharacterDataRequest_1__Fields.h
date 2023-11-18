#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetCharacterDataRequest_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetCharacterDataRequest_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterDataRequest_1__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_UInt32_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UInt32__DEFINED)
#define IL2CPP_STRUCT_GetCharacterDataRequest_1__Fields_DEFINED
struct String;
struct List_1_System_String_;
struct GetCharacterDataRequest_1__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* CharacterId;
    struct Nullable_1_UInt32_ IfChangedFromDataVersion;
    struct List_1_System_String_* Keys;
    struct String* PlayFabId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetCharacterDataRequest_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetCharacterDataRequest_1__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GetCharacterDataRequest_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterDataRequest_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetCharacterDataRequest_1__Fields_FWDDECL)
#include <Modloader/app/structs/GetCharacterDataRequest_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetCharacterDataRequest_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
