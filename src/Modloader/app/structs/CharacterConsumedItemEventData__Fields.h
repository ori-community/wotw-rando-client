#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterConsumedItemEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterConsumedItemEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterConsumedItemEventData__Fields_DEFINED)
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterConsumedItemEventData__Fields_DEFINED
struct String;
struct CharacterConsumedItemEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* CatalogVersion;
    struct String* ItemId;
    struct String* ItemInstanceId;
    struct String* PlayerId;
    uint32_t PreviousUsesRemaining;
    struct String* TitleId;
    uint32_t UsesRemaining;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterConsumedItemEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterConsumedItemEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CharacterConsumedItemEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterConsumedItemEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterConsumedItemEventData__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterConsumedItemEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterConsumedItemEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
