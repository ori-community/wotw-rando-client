#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BugReporter_Attachment_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BugReporter_Attachment_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReporter_Attachment_DEFINED)
#include <Modloader/app/structs/BugReporter_Attachment__Fields.h>
#if defined(IL2CPP_STRUCT_BugReporter_Attachment__Fields_DEFINED)
#define IL2CPP_STRUCT_BugReporter_Attachment_DEFINED
struct BugReporter_Attachment__Class;
struct BugReporter_Attachment {
    struct BugReporter_Attachment__Class* klass;
    MonitorData* monitor;
    struct BugReporter_Attachment__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BugReporter_Attachment_FWDDECL)
#define IL2CPP_STRUCT_BugReporter_Attachment_FWDDECL
#include <Modloader/app/structs/BugReporter_Attachment__Class.h>
#endif
#undef IL2CPP_STRUCT_BugReporter_Attachment_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReporter_Attachment_DEFINED) && !defined(IL2CPP_STRUCT_BugReporter_Attachment_FWDDECL)
#include <Modloader/app/structs/BugReporter_Attachment.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BugReporter_Attachment.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
