#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReportMetadata__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReportMetadata__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportMetadata__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_ReportMetadata__Fields_DEFINED
struct String;
struct String__Array;
struct ReportCommentsContainer;
struct DataBundle;
struct __declspec(align(8)) ReportMetadata__Fields {
    int32_t FormatVersion;
    struct String* BuilderName;
    struct String* Comment;
    struct String* TestType;
    struct String* ProfilingConfig;
    struct String* RevisionDateTimeStr;
    bool HDR;
    bool PotatoMode;
    struct String__Array* CommandlineArgs;
    struct String* ScarlettQuality;
    int32_t SystemMemorySizeMB;
    struct ReportCommentsContainer* CommentsContainer;
    struct Nullable_1_DateTime_ m_revisionDate;
    struct DataBundle* m_dataBundle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReportMetadata__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReportMetadata__Fields_FWDDECL
#include <Modloader/app/structs/DataBundle.h>
#include <Modloader/app/structs/ReportCommentsContainer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_ReportMetadata__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportMetadata__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReportMetadata__Fields_FWDDECL)
#include <Modloader/app/structs/ReportMetadata__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReportMetadata__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
