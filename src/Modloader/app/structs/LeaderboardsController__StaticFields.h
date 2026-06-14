#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardsController__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardsController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardsController__StaticFields_DEFINED)
#define IL2CPP_STRUCT_LeaderboardsController__StaticFields_DEFINED
struct LeaderboardsController;
struct LeaderboardsController__StaticFields {
    struct LeaderboardsController* s_instance;
    bool AutoUpload;
    int64_t Int52Max;
    float m_lastScoreUploadTime;
    int32_t LeaderboardVersion;
};
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardsController__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardsController__StaticFields_FWDDECL
#include <Modloader/app/structs/LeaderboardsController.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardsController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardsController__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardsController__StaticFields_FWDDECL)
#include <Modloader/app/structs/LeaderboardsController__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardsController__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
