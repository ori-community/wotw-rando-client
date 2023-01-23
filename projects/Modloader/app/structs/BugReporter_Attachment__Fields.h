#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BugReporter_Attachment__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BugReporter_Attachment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReporter_Attachment__Fields_DEFINED)
#define IL2CPP_STRUCT_BugReporter_Attachment__Fields_DEFINED
struct String;
struct __declspec(align(8)) BugReporter_Attachment__Fields {
    struct String* Path;
    bool Included;
};
#endif
#if !defined(IL2CPP_STRUCT_BugReporter_Attachment__Fields_FWDDECL)
#define IL2CPP_STRUCT_BugReporter_Attachment__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_BugReporter_Attachment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReporter_Attachment__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BugReporter_Attachment__Fields_FWDDECL)
#include <Modloader/app/structs/BugReporter_Attachment__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BugReporter_Attachment__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
