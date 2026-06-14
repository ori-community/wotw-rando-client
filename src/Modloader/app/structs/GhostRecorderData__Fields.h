#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostRecorderData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostRecorderData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecorderData__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostRecorderData__Fields_DEFINED
struct String;
struct List_1_GhostFrame_;
struct MemoryStream;
struct BinaryReader;
struct Stopwatch;
struct __declspec(align(8)) GhostRecorderData__Fields {
    struct String* FILE_FORMAT_IDENTIFIER;
    struct String* CurrentFormatIdentifier;
    int32_t CurrentVersion;
    struct List_1_GhostFrame_* Frames;
    struct String* CurrentReplayPath;
    float Duration;
    int32_t m_flushedFramesCount;
    struct MemoryStream* m_timesliceLoadMemoryStream;
    struct BinaryReader* m_timesliceLoadBinaryReader;
    bool m_timeslicedLoadSucceeded;
    struct Stopwatch* m_timesliceLoadStopwatch;
};
#endif
#if !defined(IL2CPP_STRUCT_GhostRecorderData__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostRecorderData__Fields_FWDDECL
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/List_1_GhostFrame_.h>
#include <Modloader/app/structs/MemoryStream.h>
#include <Modloader/app/structs/Stopwatch.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GhostRecorderData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecorderData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostRecorderData__Fields_FWDDECL)
#include <Modloader/app/structs/GhostRecorderData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostRecorderData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
