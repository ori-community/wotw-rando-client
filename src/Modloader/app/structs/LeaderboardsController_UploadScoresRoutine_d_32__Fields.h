#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardsController_UploadScoresRoutine_d_32__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardsController_UploadScoresRoutine_d_32__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardsController_UploadScoresRoutine_d_32__Fields_DEFINED)
#include <Modloader/app/structs/DifficultyMode__Enum.h>
#if defined(IL2CPP_STRUCT_DifficultyMode__Enum_DEFINED)
#define IL2CPP_STRUCT_LeaderboardsController_UploadScoresRoutine_d_32__Fields_DEFINED
struct Object;
struct __declspec(align(8)) LeaderboardsController_UploadScoresRoutine_d_32__Fields {
    int32_t __1__state;
    struct Object* __2__current;
    int32_t time;
    int32_t deathCount;
    int32_t completionPercentage;
    DifficultyMode__Enum difficulty;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardsController_UploadScoresRoutine_d_32__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardsController_UploadScoresRoutine_d_32__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardsController_UploadScoresRoutine_d_32__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardsController_UploadScoresRoutine_d_32__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardsController_UploadScoresRoutine_d_32__Fields_FWDDECL)
#include <Modloader/app/structs/LeaderboardsController_UploadScoresRoutine_d_32__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardsController_UploadScoresRoutine_d_32__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
