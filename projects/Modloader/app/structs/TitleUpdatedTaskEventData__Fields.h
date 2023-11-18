#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleUpdatedTaskEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleUpdatedTaskEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleUpdatedTaskEventData__Fields_DEFINED)
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleUpdatedTaskEventData__Fields_DEFINED
struct String;
struct NameIdentifier;
struct TitleUpdatedTaskEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* DeveloperId;
    bool HasRenamed;
    struct NameIdentifier* ScheduledTask;
    struct String* UserId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleUpdatedTaskEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_TitleUpdatedTaskEventData__Fields_FWDDECL
#include <Modloader/app/structs/NameIdentifier.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TitleUpdatedTaskEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleUpdatedTaskEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TitleUpdatedTaskEventData__Fields_FWDDECL)
#include <Modloader/app/structs/TitleUpdatedTaskEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleUpdatedTaskEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
