#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicMaterial_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicMaterial_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicMaterial_DEFINED)
#include <Modloader/app/structs/PhysicMaterial__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicMaterial__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicMaterial_DEFINED
struct PhysicMaterial__Class;
struct PhysicMaterial {
    struct PhysicMaterial__Class* klass;
    MonitorData* monitor;
    struct PhysicMaterial__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicMaterial_FWDDECL)
#define IL2CPP_STRUCT_PhysicMaterial_FWDDECL
#include <Modloader/app/structs/PhysicMaterial__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicMaterial_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicMaterial_DEFINED) && !defined(IL2CPP_STRUCT_PhysicMaterial_FWDDECL)
#include <Modloader/app/structs/PhysicMaterial.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicMaterial.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
