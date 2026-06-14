#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComponentResourceManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComponentResourceManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComponentResourceManager_DEFINED)
#include <Modloader/app/structs/ComponentResourceManager__Fields.h>
#if defined(IL2CPP_STRUCT_ComponentResourceManager__Fields_DEFINED)
#define IL2CPP_STRUCT_ComponentResourceManager_DEFINED
struct ComponentResourceManager__Class;
struct ComponentResourceManager {
    struct ComponentResourceManager__Class* klass;
    MonitorData* monitor;
    struct ComponentResourceManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComponentResourceManager_FWDDECL)
#define IL2CPP_STRUCT_ComponentResourceManager_FWDDECL
#include <Modloader/app/structs/ComponentResourceManager__Class.h>
#endif
#undef IL2CPP_STRUCT_ComponentResourceManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComponentResourceManager_DEFINED) && !defined(IL2CPP_STRUCT_ComponentResourceManager_FWDDECL)
#include <Modloader/app/structs/ComponentResourceManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComponentResourceManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
