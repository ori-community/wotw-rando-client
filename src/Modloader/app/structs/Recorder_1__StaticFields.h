#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Recorder_1__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Recorder_1__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Recorder_1__StaticFields_DEFINED)
#include <Modloader/app/structs/Recorder_RecorderState__Enum.h>
#if defined(IL2CPP_STRUCT_Recorder_RecorderState__Enum_DEFINED)
#define IL2CPP_STRUCT_Recorder_1__StaticFields_DEFINED
struct Action;
struct Recorder_1;
struct List_1_System_String_;
struct Recorder_1__StaticFields {
    struct Action* OnAwake;
    struct Recorder_1* Instance;
    struct List_1_System_String_* ReplaysQueue;
    bool IsTimelineDriven;
    Recorder_RecorderState__Enum m_state;

    struct Action* OnFinishedReplay;
    struct Action* OnRecordCycle;
    struct Action* OnPlayCycle;
    struct Action* OnPostRenderAction;
    bool _Is4K_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Recorder_1__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Recorder_1__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/Recorder_1.h>
#endif
#undef IL2CPP_STRUCT_Recorder_1__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Recorder_1__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Recorder_1__StaticFields_FWDDECL)
#include <Modloader/app/structs/Recorder_1__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Recorder_1__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
