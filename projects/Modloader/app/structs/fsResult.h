#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsResult_DEFINED)
#define IL2CPP_STRUCT_fsResult_DEFINED
struct List_1_System_String_;
struct fsResult {
    bool _success;
    struct List_1_System_String_* _messages;
};
#endif
#if !defined(IL2CPP_STRUCT_fsResult_FWDDECL)
#define IL2CPP_STRUCT_fsResult_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_fsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsResult_DEFINED) && !defined(IL2CPP_STRUCT_fsResult_FWDDECL)
#include <Modloader/app/structs/fsResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
