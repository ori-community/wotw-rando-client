#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoveItemToUserFromCharacterRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoveItemToUserFromCharacterRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveItemToUserFromCharacterRequest__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_MoveItemToUserFromCharacterRequest__Fields_DEFINED
struct String;
struct MoveItemToUserFromCharacterRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* CharacterId;
    struct String* ItemInstanceId;
    struct String* PlayFabId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoveItemToUserFromCharacterRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoveItemToUserFromCharacterRequest__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoveItemToUserFromCharacterRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveItemToUserFromCharacterRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoveItemToUserFromCharacterRequest__Fields_FWDDECL)
#include <Modloader/app/structs/MoveItemToUserFromCharacterRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoveItemToUserFromCharacterRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
