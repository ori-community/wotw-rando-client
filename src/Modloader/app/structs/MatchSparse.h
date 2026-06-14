#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchSparse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchSparse_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchSparse_DEFINED)
#include <Modloader/app/structs/MatchSparse__Fields.h>
#if defined(IL2CPP_STRUCT_MatchSparse__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchSparse_DEFINED
struct MatchSparse__Class;
struct MatchSparse {
    struct MatchSparse__Class* klass;
    MonitorData* monitor;
    struct MatchSparse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchSparse_FWDDECL)
#define IL2CPP_STRUCT_MatchSparse_FWDDECL
#include <Modloader/app/structs/MatchSparse__Class.h>
#endif
#undef IL2CPP_STRUCT_MatchSparse_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchSparse_DEFINED) && !defined(IL2CPP_STRUCT_MatchSparse_FWDDECL)
#include <Modloader/app/structs/MatchSparse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchSparse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
