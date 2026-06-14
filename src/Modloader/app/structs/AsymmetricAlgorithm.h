#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsymmetricAlgorithm_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsymmetricAlgorithm_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsymmetricAlgorithm_DEFINED)
#include <Modloader/app/structs/AsymmetricAlgorithm__Fields.h>
#if defined(IL2CPP_STRUCT_AsymmetricAlgorithm__Fields_DEFINED)
#define IL2CPP_STRUCT_AsymmetricAlgorithm_DEFINED
struct AsymmetricAlgorithm__Class;
struct AsymmetricAlgorithm {
    struct AsymmetricAlgorithm__Class* klass;
    MonitorData* monitor;
    struct AsymmetricAlgorithm__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsymmetricAlgorithm_FWDDECL)
#define IL2CPP_STRUCT_AsymmetricAlgorithm_FWDDECL
#include <Modloader/app/structs/AsymmetricAlgorithm__Class.h>
#endif
#undef IL2CPP_STRUCT_AsymmetricAlgorithm_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsymmetricAlgorithm_DEFINED) && !defined(IL2CPP_STRUCT_AsymmetricAlgorithm_FWDDECL)
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
