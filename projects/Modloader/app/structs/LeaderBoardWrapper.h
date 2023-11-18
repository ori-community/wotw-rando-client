#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderBoardWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderBoardWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderBoardWrapper_DEFINED)
#include <Modloader/app/structs/LeaderBoardWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_LeaderBoardWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderBoardWrapper_DEFINED
struct LeaderBoardWrapper__Class;
struct LeaderBoardWrapper {
    struct LeaderBoardWrapper__Class* klass;
    MonitorData* monitor;
    struct LeaderBoardWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderBoardWrapper_FWDDECL)
#define IL2CPP_STRUCT_LeaderBoardWrapper_FWDDECL
#include <Modloader/app/structs/LeaderBoardWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaderBoardWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderBoardWrapper_DEFINED) && !defined(IL2CPP_STRUCT_LeaderBoardWrapper_FWDDECL)
#include <Modloader/app/structs/LeaderBoardWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderBoardWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
