#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleExceededLimitEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleExceededLimitEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleExceededLimitEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_MetricUnit_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_MetricUnit__DEFINED)
#define IL2CPP_STRUCT_TitleExceededLimitEventData__Fields_DEFINED
struct Dictionary_2_System_String_System_Object_;
struct String;
struct TitleExceededLimitEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct Dictionary_2_System_String_System_Object_* Details;
    struct String* LimitDisplayName;
    struct String* LimitId;
    double LimitValue;
    struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit_ Unit;
    double Value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleExceededLimitEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_TitleExceededLimitEventData__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Object_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TitleExceededLimitEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleExceededLimitEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TitleExceededLimitEventData__Fields_FWDDECL)
#include <Modloader/app/structs/TitleExceededLimitEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleExceededLimitEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
