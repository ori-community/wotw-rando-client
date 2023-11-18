#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerData__Fields_DEFINED
struct String;
struct Dictionary_2_DataPointType_Dictionary_2_System_String_Moon_Telemetry_GameSession_;
struct Dictionary_2_DataPointType_Dictionary_2_System_Int32_System_String_;
struct Dictionary_2_DataPointType_List_1_System_String_;
struct __declspec(align(8)) PlayerData__Fields {
    struct String* m_key;
    struct Dictionary_2_DataPointType_Dictionary_2_System_String_Moon_Telemetry_GameSession_* m_gameSessions;
    struct Dictionary_2_DataPointType_Dictionary_2_System_Int32_System_String_* m_sessionsOrder;
    struct Dictionary_2_DataPointType_List_1_System_String_* m_sortedGameSessionNumbers;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerData__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_DataPointType_Dictionary_2_System_Int32_System_String_.h>
#include <Modloader/app/structs/Dictionary_2_DataPointType_Dictionary_2_System_String_Moon_Telemetry_GameSession_.h>
#include <Modloader/app/structs/Dictionary_2_DataPointType_List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerData__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
