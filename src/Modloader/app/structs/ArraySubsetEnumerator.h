#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArraySubsetEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArraySubsetEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArraySubsetEnumerator_DEFINED)
#include <Modloader/app/structs/ArraySubsetEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_ArraySubsetEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_ArraySubsetEnumerator_DEFINED
struct ArraySubsetEnumerator__Class;
struct ArraySubsetEnumerator {
    struct ArraySubsetEnumerator__Class* klass;
    MonitorData* monitor;
    struct ArraySubsetEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArraySubsetEnumerator_FWDDECL)
#define IL2CPP_STRUCT_ArraySubsetEnumerator_FWDDECL
#include <Modloader/app/structs/ArraySubsetEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_ArraySubsetEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArraySubsetEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_ArraySubsetEnumerator_FWDDECL)
#include <Modloader/app/structs/ArraySubsetEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArraySubsetEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
