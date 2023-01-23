#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyedHashAlgorithm_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyedHashAlgorithm_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyedHashAlgorithm_DEFINED)
#include <Modloader/app/structs/KeyedHashAlgorithm__Fields.h>
#if defined(IL2CPP_STRUCT_KeyedHashAlgorithm__Fields_DEFINED)
#define IL2CPP_STRUCT_KeyedHashAlgorithm_DEFINED
struct KeyedHashAlgorithm__Class;
struct KeyedHashAlgorithm {
    struct KeyedHashAlgorithm__Class* klass;
    MonitorData* monitor;
    struct KeyedHashAlgorithm__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeyedHashAlgorithm_FWDDECL)
#define IL2CPP_STRUCT_KeyedHashAlgorithm_FWDDECL
#include <Modloader/app/structs/KeyedHashAlgorithm__Class.h>
#endif
#undef IL2CPP_STRUCT_KeyedHashAlgorithm_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyedHashAlgorithm_DEFINED) && !defined(IL2CPP_STRUCT_KeyedHashAlgorithm_FWDDECL)
#include <Modloader/app/structs/KeyedHashAlgorithm.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyedHashAlgorithm.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
