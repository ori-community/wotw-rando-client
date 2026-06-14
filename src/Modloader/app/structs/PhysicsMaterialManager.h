#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsMaterialManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsMaterialManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsMaterialManager_DEFINED)
#include <Modloader/app/structs/PhysicsMaterialManager__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsMaterialManager__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsMaterialManager_DEFINED
struct PhysicsMaterialManager__Class;
struct PhysicsMaterialManager {
    struct PhysicsMaterialManager__Class* klass;
    MonitorData* monitor;
    struct PhysicsMaterialManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsMaterialManager_FWDDECL)
#define IL2CPP_STRUCT_PhysicsMaterialManager_FWDDECL
#include <Modloader/app/structs/PhysicsMaterialManager__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsMaterialManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsMaterialManager_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsMaterialManager_FWDDECL)
#include <Modloader/app/structs/PhysicsMaterialManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsMaterialManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
