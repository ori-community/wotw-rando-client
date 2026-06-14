#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_DEFINED
struct GhostRecorder;
struct GhostPlayer;
struct GhostFrame;
struct __declspec(align(8)) IGhostRecorderPlugin__Fields {
    struct GhostRecorder* m_recorder;
    struct GhostPlayer* m_player;
    int32_t CurrentFrameIndex;
    struct GhostFrame* CurrentFrame;
    int32_t NextFrameIndex;
    struct GhostFrame* NextFrame;
    bool NoMoreFrames;
};
#endif
#if !defined(IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_FWDDECL)
#define IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_FWDDECL
#include <Modloader/app/structs/GhostFrame.h>
#include <Modloader/app/structs/GhostPlayer.h>
#include <Modloader/app/structs/GhostRecorder.h>
#endif
#undef IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_FWDDECL)
#include <Modloader/app/structs/IGhostRecorderPlugin__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IGhostRecorderPlugin__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
