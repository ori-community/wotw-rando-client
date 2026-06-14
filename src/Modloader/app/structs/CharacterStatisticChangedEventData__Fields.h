#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterStatisticChangedEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterStatisticChangedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterStatisticChangedEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED)
#define IL2CPP_STRUCT_CharacterStatisticChangedEventData__Fields_DEFINED
struct String;
struct CharacterStatisticChangedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* PlayerId;
    struct String* StatisticName;
    struct Nullable_1_Int32_ StatisticPreviousValue;
    int32_t StatisticValue;
    struct String* TitleId;
    uint32_t Version;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterStatisticChangedEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterStatisticChangedEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CharacterStatisticChangedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterStatisticChangedEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterStatisticChangedEventData__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterStatisticChangedEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterStatisticChangedEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
