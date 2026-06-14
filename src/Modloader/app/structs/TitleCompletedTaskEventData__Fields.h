#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleCompletedTaskEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleCompletedTaskEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleCompletedTaskEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus__DEFINED)
#define IL2CPP_STRUCT_TitleCompletedTaskEventData__Fields_DEFINED
struct Object;
struct String;
struct TitleCompletedTaskEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct Nullable_1_DateTime_ AbortedAt;
    bool IsAborted;
    struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus_ Result;
    struct Object* Summary;
    struct String* TaskInstanceId;
    struct String* TaskType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleCompletedTaskEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_TitleCompletedTaskEventData__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TitleCompletedTaskEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleCompletedTaskEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TitleCompletedTaskEventData__Fields_FWDDECL)
#include <Modloader/app/structs/TitleCompletedTaskEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleCompletedTaskEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
