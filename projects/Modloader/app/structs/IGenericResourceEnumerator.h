#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IGenericResourceEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IGenericResourceEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGenericResourceEnumerator_DEFINED)
#define IL2CPP_STRUCT_IGenericResourceEnumerator_DEFINED
struct IGenericResourceEnumerator__Class;
struct IGenericResourceEnumerator {
    struct IGenericResourceEnumerator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IGenericResourceEnumerator_FWDDECL)
#define IL2CPP_STRUCT_IGenericResourceEnumerator_FWDDECL
#include <Modloader/app/structs/IGenericResourceEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_IGenericResourceEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGenericResourceEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_IGenericResourceEnumerator_FWDDECL)
#include <Modloader/app/structs/IGenericResourceEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IGenericResourceEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
