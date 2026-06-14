#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardRowUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardRowUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardRowUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderboardRowUI__Fields_DEFINED
struct MessageBox;
struct BaseAnimator;
struct String;
struct LeaderboardRowUI__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBox* Rank;
    struct MessageBox* Tag;
    struct MessageBox* Deaths;
    struct MessageBox* Time;
    struct MessageBox* Completion;
    struct BaseAnimator* Glow;
    bool IsLiveEntry;
    struct String* m_userHandle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardRowUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardRowUI__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardRowUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardRowUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardRowUI__Fields_FWDDECL)
#include <Modloader/app/structs/LeaderboardRowUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardRowUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
