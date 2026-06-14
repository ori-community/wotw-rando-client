#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteAction__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteAction__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteAction__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RemoteAction__StaticFields_DEFINED
struct Dictionary_2_System_String_List_1_System_Action_;
struct Thread;
struct RemoteAction__StaticFields {
    int32_t ACTIONS_CHECK_INTERVAL_SECONDS;
    struct Dictionary_2_System_String_List_1_System_Action_* s_remoteActions;
    struct Thread* m_thread;
    bool s_isInited;
};
#endif
#if !defined(IL2CPP_STRUCT_RemoteAction__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RemoteAction__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_List_1_System_Action_.h>
#include <Modloader/app/structs/Thread.h>
#endif
#undef IL2CPP_STRUCT_RemoteAction__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteAction__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RemoteAction__StaticFields_FWDDECL)
#include <Modloader/app/structs/RemoteAction__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteAction__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
