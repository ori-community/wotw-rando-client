#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PushNotificationSentToPlayerEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PushNotificationSentToPlayerEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushNotificationSentToPlayerEventData__Fields_DEFINED)
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_PushNotificationSentToPlayerEventData__Fields_DEFINED
struct String;
struct PushNotificationSentToPlayerEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* Body;
    struct String* ErrorMessage;
    struct String* ErrorName;
    struct String* Language;
    struct String* PushNotificationTemplateId;
    struct String* PushNotificationTemplateName;
    struct String* Subject;
    bool Success;
    struct String* TitleId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PushNotificationSentToPlayerEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PushNotificationSentToPlayerEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PushNotificationSentToPlayerEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushNotificationSentToPlayerEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PushNotificationSentToPlayerEventData__Fields_FWDDECL)
#include <Modloader/app/structs/PushNotificationSentToPlayerEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PushNotificationSentToPlayerEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
