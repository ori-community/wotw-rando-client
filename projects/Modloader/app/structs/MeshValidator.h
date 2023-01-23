#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshValidator_DEFINED)
#define IL2CPP_STRUCT_MeshValidator_DEFINED
struct MeshValidator__Class;
struct MeshValidator {
    struct MeshValidator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MeshValidator_FWDDECL)
#define IL2CPP_STRUCT_MeshValidator_FWDDECL
#include <Modloader/app/structs/MeshValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_MeshValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshValidator_DEFINED) && !defined(IL2CPP_STRUCT_MeshValidator_FWDDECL)
#include <Modloader/app/structs/MeshValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
