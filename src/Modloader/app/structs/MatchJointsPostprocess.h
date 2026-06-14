#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchJointsPostprocess_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchJointsPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchJointsPostprocess_DEFINED)
#include <Modloader/app/structs/MatchJointsPostprocess__Fields.h>
#if defined(IL2CPP_STRUCT_MatchJointsPostprocess__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchJointsPostprocess_DEFINED
struct MatchJointsPostprocess__Class;
struct MatchJointsPostprocess {
    struct MatchJointsPostprocess__Class* klass;
    MonitorData* monitor;
    struct MatchJointsPostprocess__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchJointsPostprocess_FWDDECL)
#define IL2CPP_STRUCT_MatchJointsPostprocess_FWDDECL
#include <Modloader/app/structs/MatchJointsPostprocess__Class.h>
#endif
#undef IL2CPP_STRUCT_MatchJointsPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchJointsPostprocess_DEFINED) && !defined(IL2CPP_STRUCT_MatchJointsPostprocess_FWDDECL)
#include <Modloader/app/structs/MatchJointsPostprocess.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchJointsPostprocess.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
