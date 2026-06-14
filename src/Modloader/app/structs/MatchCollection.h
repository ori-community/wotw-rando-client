#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchCollection_DEFINED)
#include <Modloader/app/structs/MatchCollection__Fields.h>
#if defined(IL2CPP_STRUCT_MatchCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchCollection_DEFINED
struct MatchCollection__Class;
struct MatchCollection {
    struct MatchCollection__Class* klass;
    MonitorData* monitor;
    struct MatchCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchCollection_FWDDECL)
#define IL2CPP_STRUCT_MatchCollection_FWDDECL
#include <Modloader/app/structs/MatchCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_MatchCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchCollection_DEFINED) && !defined(IL2CPP_STRUCT_MatchCollection_FWDDECL)
#include <Modloader/app/structs/MatchCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
