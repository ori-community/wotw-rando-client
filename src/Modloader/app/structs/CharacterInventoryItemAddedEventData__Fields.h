#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterInventoryItemAddedEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterInventoryItemAddedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInventoryItemAddedEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_UInt32_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UInt32__DEFINED)
#define IL2CPP_STRUCT_CharacterInventoryItemAddedEventData__Fields_DEFINED
struct String;
struct List_1_System_String_;
struct CharacterInventoryItemAddedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* Annotation;
    struct List_1_System_String_* BundleContents;
    struct String* CatalogVersion;
    struct String* Class;
    struct String* CouponCode;
    struct String* DisplayName;
    struct Nullable_1_DateTime_ Expiration;
    struct String* InstanceId;
    struct String* ItemId;
    struct String* PlayerId;
    struct Nullable_1_UInt32_ RemainingUses;
    struct String* TitleId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterInventoryItemAddedEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterInventoryItemAddedEventData__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CharacterInventoryItemAddedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInventoryItemAddedEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterInventoryItemAddedEventData__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterInventoryItemAddedEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterInventoryItemAddedEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
