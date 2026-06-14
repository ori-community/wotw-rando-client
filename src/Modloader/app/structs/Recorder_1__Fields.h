#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Recorder_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Recorder_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Recorder_1__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_Recorder_1__Fields_DEFINED
struct String;
struct List_1_IRecorderPlugin_;
struct RecorderData;
struct BinaryWriter;
struct Recorder_1__Fields {
    struct MonoBehaviour__Fields _;
    int32_t CurrentFrameIndex;
    struct String* CurrentReplayPath;
    struct List_1_IRecorderPlugin_* m_plugins;
    struct RecorderData* RecorderData;
    struct BinaryWriter* RecorderStream;
    bool Strict;
    bool CorrectWrongPositions;
    bool DebugBreakOnErrors;
    bool ForceReloadScene;
    bool Active;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Recorder_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Recorder_1__Fields_FWDDECL
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/List_1_IRecorderPlugin_.h>
#include <Modloader/app/structs/RecorderData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Recorder_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Recorder_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Recorder_1__Fields_FWDDECL)
#include <Modloader/app/structs/Recorder_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Recorder_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
