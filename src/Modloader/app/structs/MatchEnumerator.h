#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchEnumerator_DEFINED)
#include <Modloader/app/structs/MatchEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_MatchEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchEnumerator_DEFINED
struct MatchEnumerator__Class;
struct MatchEnumerator {
    struct MatchEnumerator__Class* klass;
    MonitorData* monitor;
    struct MatchEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchEnumerator_FWDDECL)
#define IL2CPP_STRUCT_MatchEnumerator_FWDDECL
#include <Modloader/app/structs/MatchEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_MatchEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_MatchEnumerator_FWDDECL)
#include <Modloader/app/structs/MatchEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
