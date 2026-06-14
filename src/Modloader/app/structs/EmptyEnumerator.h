#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmptyEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmptyEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmptyEnumerator_DEFINED)
#define IL2CPP_STRUCT_EmptyEnumerator_DEFINED
struct EmptyEnumerator__Class;
struct EmptyEnumerator {
    struct EmptyEnumerator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EmptyEnumerator_FWDDECL)
#define IL2CPP_STRUCT_EmptyEnumerator_FWDDECL
#include <Modloader/app/structs/EmptyEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_EmptyEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmptyEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_EmptyEnumerator_FWDDECL)
#include <Modloader/app/structs/EmptyEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmptyEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
