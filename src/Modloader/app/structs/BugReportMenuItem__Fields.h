#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BugReportMenuItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BugReportMenuItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReportMenuItem__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BugReportMenuItem__Fields_DEFINED
struct String;
struct Func_1_String_;
struct BugReportMenuItem__Fields {
    struct MonoBehaviour__Fields _;
    struct String* _Text_k__BackingField;
    struct Func_1_String_* _DynamicText_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BugReportMenuItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_BugReportMenuItem__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_BugReportMenuItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReportMenuItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BugReportMenuItem__Fields_FWDDECL)
#include <Modloader/app/structs/BugReportMenuItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BugReportMenuItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
