#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateCharacterStatisticsRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateCharacterStatisticsRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateCharacterStatisticsRequest__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateCharacterStatisticsRequest__Fields_DEFINED
struct String;
struct Dictionary_2_System_String_System_Int32_;
struct UpdateCharacterStatisticsRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* CharacterId;
    struct Dictionary_2_System_String_System_Int32_* CharacterStatistics;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateCharacterStatisticsRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_UpdateCharacterStatisticsRequest__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UpdateCharacterStatisticsRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateCharacterStatisticsRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UpdateCharacterStatisticsRequest__Fields_FWDDECL)
#include <Modloader/app/structs/UpdateCharacterStatisticsRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateCharacterStatisticsRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
