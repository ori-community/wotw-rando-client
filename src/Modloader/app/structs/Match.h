#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Match_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Match_INITIALIZING
#if !defined(IL2CPP_STRUCT_Match_DEFINED)
#include <Modloader/app/structs/Match__Fields.h>
#if defined(IL2CPP_STRUCT_Match__Fields_DEFINED)
#define IL2CPP_STRUCT_Match_DEFINED
struct Match__Class;
struct Match {
    struct Match__Class* klass;
    MonitorData* monitor;
    struct Match__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Match_FWDDECL)
#define IL2CPP_STRUCT_Match_FWDDECL
#include <Modloader/app/structs/Match__Class.h>
#endif
#undef IL2CPP_STRUCT_Match_INITIALIZING
#if !defined(IL2CPP_STRUCT_Match_DEFINED) && !defined(IL2CPP_STRUCT_Match_FWDDECL)
#include <Modloader/app/structs/Match.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Match.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
