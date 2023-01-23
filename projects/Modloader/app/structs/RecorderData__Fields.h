#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderData__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderData__Fields_DEFINED
struct String;
struct List_1_RecorderFrame_;
struct __declspec(align(8)) RecorderData__Fields {
    struct String* FILE_FORMAT_IDENTIFIER;
    struct String* CurrentFormatIdentifier;
    int32_t CurrentVersion;
    struct List_1_RecorderFrame_* Frames;
    struct String* CurrentReplayPath;
    int32_t m_flushedFramesCount;
};
#endif
#if !defined(IL2CPP_STRUCT_RecorderData__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecorderData__Fields_FWDDECL
#include <Modloader/app/structs/List_1_RecorderFrame_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RecorderData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecorderData__Fields_FWDDECL)
#include <Modloader/app/structs/RecorderData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
