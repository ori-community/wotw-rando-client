#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardEntryData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardEntryData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardEntryData__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderboardEntryData__Fields_DEFINED
struct ExtractedIntFromInt64;
struct __declspec(align(8)) LeaderboardEntryData__Fields {
    struct ExtractedIntFromInt64* m_time;
    struct ExtractedIntFromInt64* m_deathCount;
    struct ExtractedIntFromInt64* m_completionPercentage;
};
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardEntryData__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardEntryData__Fields_FWDDECL
#include <Modloader/app/structs/ExtractedIntFromInt64.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardEntryData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardEntryData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardEntryData__Fields_FWDDECL)
#include <Modloader/app/structs/LeaderboardEntryData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardEntryData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
