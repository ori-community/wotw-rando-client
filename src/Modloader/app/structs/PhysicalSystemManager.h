#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicalSystemManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicalSystemManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemManager_DEFINED)
#include <Modloader/app/structs/PhysicalSystemManager__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicalSystemManager__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicalSystemManager_DEFINED
struct PhysicalSystemManager__Class;
struct PhysicalSystemManager {
    struct PhysicalSystemManager__Class* klass;
    MonitorData* monitor;
    struct PhysicalSystemManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicalSystemManager_FWDDECL)
#define IL2CPP_STRUCT_PhysicalSystemManager_FWDDECL
#include <Modloader/app/structs/PhysicalSystemManager__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicalSystemManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemManager_DEFINED) && !defined(IL2CPP_STRUCT_PhysicalSystemManager_FWDDECL)
#include <Modloader/app/structs/PhysicalSystemManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicalSystemManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
