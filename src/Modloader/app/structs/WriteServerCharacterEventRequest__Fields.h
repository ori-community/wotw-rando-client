#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteServerCharacterEventRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteServerCharacterEventRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteServerCharacterEventRequest__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_WriteServerCharacterEventRequest__Fields_DEFINED
struct Dictionary_2_System_String_System_Object_;
struct String;
struct WriteServerCharacterEventRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Dictionary_2_System_String_System_Object_* Body;
    struct String* CharacterId;
    struct String* EventName;
    struct String* PlayFabId;
    struct Nullable_1_DateTime_ Timestamp;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WriteServerCharacterEventRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_WriteServerCharacterEventRequest__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Object_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_WriteServerCharacterEventRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteServerCharacterEventRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WriteServerCharacterEventRequest__Fields_FWDDECL)
#include <Modloader/app/structs/WriteServerCharacterEventRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteServerCharacterEventRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
