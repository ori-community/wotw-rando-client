#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameSession__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameSession__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSession__Fields_DEFINED)
#define IL2CPP_STRUCT_GameSession__Fields_DEFINED
struct String;
struct Dictionary_2_System_String_List_1_Moon_Telemetry_DataPoint_;
struct List_1_Moon_Telemetry_DataPoint_;
struct __declspec(align(8)) GameSession__Fields {
    struct String* m_key;
    struct String* m_time;
    int32_t m_number;
    struct Dictionary_2_System_String_List_1_Moon_Telemetry_DataPoint_* m_levelPoints;
    struct List_1_Moon_Telemetry_DataPoint_* m_allPoints;
};
#endif
#if !defined(IL2CPP_STRUCT_GameSession__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameSession__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_List_1_Moon_Telemetry_DataPoint_.h>
#include <Modloader/app/structs/List_1_Moon_Telemetry_DataPoint_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GameSession__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSession__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameSession__Fields_FWDDECL)
#include <Modloader/app/structs/GameSession__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameSession__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
