#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HashAlgorithm_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HashAlgorithm_INITIALIZING
#if !defined(IL2CPP_STRUCT_HashAlgorithm_DEFINED)
#include <Modloader/app/structs/HashAlgorithm__Fields.h>
#if defined(IL2CPP_STRUCT_HashAlgorithm__Fields_DEFINED)
#define IL2CPP_STRUCT_HashAlgorithm_DEFINED
struct HashAlgorithm__Class;
struct HashAlgorithm {
    struct HashAlgorithm__Class* klass;
    MonitorData* monitor;
    struct HashAlgorithm__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HashAlgorithm_FWDDECL)
#define IL2CPP_STRUCT_HashAlgorithm_FWDDECL
#include <Modloader/app/structs/HashAlgorithm__Class.h>
#endif
#undef IL2CPP_STRUCT_HashAlgorithm_INITIALIZING
#if !defined(IL2CPP_STRUCT_HashAlgorithm_DEFINED) && !defined(IL2CPP_STRUCT_HashAlgorithm_FWDDECL)
#include <Modloader/app/structs/HashAlgorithm.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HashAlgorithm.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
