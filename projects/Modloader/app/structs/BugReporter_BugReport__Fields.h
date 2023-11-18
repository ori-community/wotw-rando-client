#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BugReporter_BugReport__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BugReporter_BugReport__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReporter_BugReport__Fields_DEFINED)
#define IL2CPP_STRUCT_BugReporter_BugReport__Fields_DEFINED
struct String;
struct String__Array;
struct __declspec(align(8)) BugReporter_BugReport__Fields {
    struct String* description;
    struct String* detailedDescription;
    struct String* projectName;
    struct String* scene;
    struct String__Array* attachments;
    struct String__Array* dropboxAttachments;
    struct String__Array* directoryAttachments;
    float trimStart;
    float trimEnd;
    bool switchNoHost;
    struct String* buildId;
    struct String* assignee;
    struct String* priority;
    int32_t exceptionHash;
    struct String* topic;
};
#endif
#if !defined(IL2CPP_STRUCT_BugReporter_BugReport__Fields_FWDDECL)
#define IL2CPP_STRUCT_BugReporter_BugReport__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_BugReporter_BugReport__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReporter_BugReport__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BugReporter_BugReport__Fields_FWDDECL)
#include <Modloader/app/structs/BugReporter_BugReport__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BugReporter_BugReport__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
