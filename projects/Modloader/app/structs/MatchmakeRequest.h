#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakeRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakeRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakeRequest_DEFINED)
#include <Modloader/app/structs/MatchmakeRequest__Fields.h>
#if defined(IL2CPP_STRUCT_MatchmakeRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakeRequest_DEFINED
struct MatchmakeRequest__Class;
struct MatchmakeRequest {
    struct MatchmakeRequest__Class* klass;
    MonitorData* monitor;
    struct MatchmakeRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchmakeRequest_FWDDECL)
#define IL2CPP_STRUCT_MatchmakeRequest_FWDDECL
#include <Modloader/app/structs/MatchmakeRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_MatchmakeRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakeRequest_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakeRequest_FWDDECL)
#include <Modloader/app/structs/MatchmakeRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakeRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
