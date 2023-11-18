#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RankException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RankException_INITIALIZING
#if !defined(IL2CPP_STRUCT_RankException_DEFINED)
#include <Modloader/app/structs/RankException__Fields.h>
#if defined(IL2CPP_STRUCT_RankException__Fields_DEFINED)
#define IL2CPP_STRUCT_RankException_DEFINED
struct RankException__Class;
struct RankException {
    struct RankException__Class* klass;
    MonitorData* monitor;
    struct RankException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RankException_FWDDECL)
#define IL2CPP_STRUCT_RankException_FWDDECL
#include <Modloader/app/structs/RankException__Class.h>
#endif
#undef IL2CPP_STRUCT_RankException_INITIALIZING
#if !defined(IL2CPP_STRUCT_RankException_DEFINED) && !defined(IL2CPP_STRUCT_RankException_FWDDECL)
#include <Modloader/app/structs/RankException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RankException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
