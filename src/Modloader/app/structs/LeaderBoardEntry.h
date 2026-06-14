#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderBoardEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderBoardEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderBoardEntry_DEFINED)
#include <Modloader/app/structs/LeaderBoardEntry__Fields.h>
#if defined(IL2CPP_STRUCT_LeaderBoardEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderBoardEntry_DEFINED
struct LeaderBoardEntry__Class;
struct LeaderBoardEntry {
    struct LeaderBoardEntry__Class* klass;
    MonitorData* monitor;
    struct LeaderBoardEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderBoardEntry_FWDDECL)
#define IL2CPP_STRUCT_LeaderBoardEntry_FWDDECL
#include <Modloader/app/structs/LeaderBoardEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaderBoardEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderBoardEntry_DEFINED) && !defined(IL2CPP_STRUCT_LeaderBoardEntry_FWDDECL)
#include <Modloader/app/structs/LeaderBoardEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderBoardEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
