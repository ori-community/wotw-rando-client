#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderPlaybackUI__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderPlaybackUI__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUI__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RecorderPlaybackUI__StaticFields_DEFINED
struct RecorderPlaybackUI;
struct Input_InputButtonProcessor;
struct RecorderPlaybackUI__StaticFields {
    struct RecorderPlaybackUI* Instance;
    struct Input_InputButtonProcessor* LeftTrigger;
    struct Input_InputButtonProcessor* RightTrigger;
};
#endif
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUI__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RecorderPlaybackUI__StaticFields_FWDDECL
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/RecorderPlaybackUI.h>
#endif
#undef IL2CPP_STRUCT_RecorderPlaybackUI__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUI__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RecorderPlaybackUI__StaticFields_FWDDECL)
#include <Modloader/app/structs/RecorderPlaybackUI__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderPlaybackUI__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
