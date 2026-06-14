#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEnumerator_DEFINED)
#define IL2CPP_STRUCT_IEnumerator_DEFINED
struct IEnumerator__Class;
struct IEnumerator {
    struct IEnumerator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEnumerator_FWDDECL)
#define IL2CPP_STRUCT_IEnumerator_FWDDECL
#include <Modloader/app/structs/IEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_IEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_IEnumerator_FWDDECL)
#include <Modloader/app/structs/IEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
