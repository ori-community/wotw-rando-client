#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StudioUserRemovedEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StudioUserRemovedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StudioUserRemovedEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider__DEFINED)
#define IL2CPP_STRUCT_StudioUserRemovedEventData__Fields_DEFINED
struct String;
struct List_1_System_String_;
struct Dictionary_2_System_String_System_String_;
struct StudioUserRemovedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* AuthenticationId;
    struct Nullable_1_PlayFab_PlayStreamModels_AuthenticationProvider_ AuthenticationProvider;
    struct String* AuthenticationProviderId;
    struct String* PlayFabId;
    struct List_1_System_String_* StudioPermissions;
    struct Dictionary_2_System_String_System_String_* TitlePermissions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StudioUserRemovedEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_StudioUserRemovedEventData__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StudioUserRemovedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StudioUserRemovedEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StudioUserRemovedEventData__Fields_FWDDECL)
#include <Modloader/app/structs/StudioUserRemovedEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StudioUserRemovedEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
