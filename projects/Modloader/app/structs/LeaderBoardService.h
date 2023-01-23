#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderBoardService_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderBoardService_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderBoardService_DEFINED)
#include <Modloader/app/structs/LeaderBoardService__Fields.h>
#if defined(IL2CPP_STRUCT_LeaderBoardService__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderBoardService_DEFINED
struct LeaderBoardService__Class;
struct LeaderBoardService {
    struct LeaderBoardService__Class* klass;
    MonitorData* monitor;
    struct LeaderBoardService__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderBoardService_FWDDECL)
#define IL2CPP_STRUCT_LeaderBoardService_FWDDECL
#include <Modloader/app/structs/LeaderBoardService__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaderBoardService_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderBoardService_DEFINED) && !defined(IL2CPP_STRUCT_LeaderBoardService_FWDDECL)
#include <Modloader/app/structs/LeaderBoardService.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderBoardService.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
