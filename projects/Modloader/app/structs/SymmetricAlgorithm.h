#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SymmetricAlgorithm_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SymmetricAlgorithm_INITIALIZING
#if !defined(IL2CPP_STRUCT_SymmetricAlgorithm_DEFINED)
#include <Modloader/app/structs/SymmetricAlgorithm__Fields.h>
#if defined(IL2CPP_STRUCT_SymmetricAlgorithm__Fields_DEFINED)
#define IL2CPP_STRUCT_SymmetricAlgorithm_DEFINED
struct SymmetricAlgorithm__Class;
struct SymmetricAlgorithm {
    struct SymmetricAlgorithm__Class* klass;
    MonitorData* monitor;
    struct SymmetricAlgorithm__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SymmetricAlgorithm_FWDDECL)
#define IL2CPP_STRUCT_SymmetricAlgorithm_FWDDECL
#include <Modloader/app/structs/SymmetricAlgorithm__Class.h>
#endif
#undef IL2CPP_STRUCT_SymmetricAlgorithm_INITIALIZING
#if !defined(IL2CPP_STRUCT_SymmetricAlgorithm_DEFINED) && !defined(IL2CPP_STRUCT_SymmetricAlgorithm_FWDDECL)
#include <Modloader/app/structs/SymmetricAlgorithm.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SymmetricAlgorithm.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
