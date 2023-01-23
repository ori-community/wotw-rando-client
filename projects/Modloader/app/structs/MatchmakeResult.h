#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakeResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakeResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakeResult_DEFINED)
#include <Modloader/app/structs/MatchmakeResult__Fields.h>
#if defined(IL2CPP_STRUCT_MatchmakeResult__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakeResult_DEFINED
struct MatchmakeResult__Class;
struct MatchmakeResult {
    struct MatchmakeResult__Class* klass;
    MonitorData* monitor;
    struct MatchmakeResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchmakeResult_FWDDECL)
#define IL2CPP_STRUCT_MatchmakeResult_FWDDECL
#include <Modloader/app/structs/MatchmakeResult__Class.h>
#endif
#undef IL2CPP_STRUCT_MatchmakeResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakeResult_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakeResult_FWDDECL)
#include <Modloader/app/structs/MatchmakeResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakeResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
