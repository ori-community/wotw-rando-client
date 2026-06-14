#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SentEmailEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SentEmailEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SentEmailEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_EmailTemplateType_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_EmailTemplateType__DEFINED)
#define IL2CPP_STRUCT_SentEmailEventData__Fields_DEFINED
struct String;
struct SentEmailEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* Body;
    struct String* EmailName;
    struct String* EmailTemplateId;
    struct String* EmailTemplateName;
    struct Nullable_1_PlayFab_PlayStreamModels_EmailTemplateType_ EmailTemplateType;
    struct String* ErrorMessage;
    struct String* ErrorName;
    struct String* Language;
    struct String* Subject;
    bool Success;
    struct String* TitleId;
    struct String* Token;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SentEmailEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_SentEmailEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SentEmailEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SentEmailEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SentEmailEventData__Fields_FWDDECL)
#include <Modloader/app/structs/SentEmailEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SentEmailEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
