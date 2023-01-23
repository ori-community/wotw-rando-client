#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceLeaderboardEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceLeaderboardEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardEntry__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_RaceLeaderboardEntry__Fields_DEFINED
struct MessageBox;
struct String;
struct RaceLeaderboardEntry__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBox* m_rankMessageBox;
    struct MessageBox* m_nameMessageBox;
    struct MessageBox* m_timeMessageBox;
    struct Color m_isSelfColor;
    struct Color m_defaultColor;
    struct String* _PlayerName_k__BackingField;
    bool IsLiveEntry;
    struct String* _UserID_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceLeaderboardEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceLeaderboardEntry__Fields_FWDDECL
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RaceLeaderboardEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceLeaderboardEntry__Fields_FWDDECL)
#include <Modloader/app/structs/RaceLeaderboardEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceLeaderboardEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
