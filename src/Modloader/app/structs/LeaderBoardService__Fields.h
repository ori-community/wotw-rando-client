#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderBoardService__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderBoardService__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderBoardService__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderBoardService__Fields_DEFINED
struct Database;
struct __declspec(align(8)) LeaderBoardService__Fields {
    struct Database* Database;
};
#endif
#if !defined(IL2CPP_STRUCT_LeaderBoardService__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeaderBoardService__Fields_FWDDECL
#include <Modloader/app/structs/Database.h>
#endif
#undef IL2CPP_STRUCT_LeaderBoardService__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderBoardService__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeaderBoardService__Fields_FWDDECL)
#include <Modloader/app/structs/LeaderBoardService__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderBoardService__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
