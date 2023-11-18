#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerPhysicalMaterial_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerPhysicalMaterial_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerPhysicalMaterial_DEFINED)
#define IL2CPP_STRUCT_ServerPhysicalMaterial_DEFINED
struct ServerPhysicalMaterial__Class;
struct ServerPhysicalMaterial {
    struct ServerPhysicalMaterial__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerPhysicalMaterial_FWDDECL)
#define IL2CPP_STRUCT_ServerPhysicalMaterial_FWDDECL
#include <Modloader/app/structs/ServerPhysicalMaterial__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerPhysicalMaterial_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerPhysicalMaterial_DEFINED) && !defined(IL2CPP_STRUCT_ServerPhysicalMaterial_FWDDECL)
#include <Modloader/app/structs/ServerPhysicalMaterial.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerPhysicalMaterial.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
