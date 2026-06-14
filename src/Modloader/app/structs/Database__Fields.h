#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Database__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Database__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Database__Fields_DEFINED)
#define IL2CPP_STRUCT_Database__Fields_DEFINED
struct Dictionary_2_System_String_Moon_Race_RaceLeaderBoard_;
struct Dictionary_2_System_String_Moon_Race_LeaderBoardEntry_;
struct __declspec(align(8)) Database__Fields {
    struct Dictionary_2_System_String_Moon_Race_RaceLeaderBoard_* LeaderBoards;
    struct Dictionary_2_System_String_Moon_Race_LeaderBoardEntry_* m_bestLocalTimes;
};
#endif
#if !defined(IL2CPP_STRUCT_Database__Fields_FWDDECL)
#define IL2CPP_STRUCT_Database__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_Moon_Race_LeaderBoardEntry_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_Moon_Race_RaceLeaderBoard_.h>
#endif
#undef IL2CPP_STRUCT_Database__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Database__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Database__Fields_FWDDECL)
#include <Modloader/app/structs/Database__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Database__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataBase__Fields_DEFINED)
#define IL2CPP_STRUCT_DataBase__Fields_DEFINED
struct String;
struct __declspec(align(8)) DataBase__Fields {
    struct String* m_playerKey;
    struct String* m_sessionKey;
    struct String* m_time;
};
#endif
#if !defined(IL2CPP_STRUCT_DataBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataBase__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DataBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataBase__Fields_FWDDECL)
#include <Modloader/app/structs/Database__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Database__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
