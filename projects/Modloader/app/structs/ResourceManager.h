#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceManager_DEFINED)
#include <Modloader/app/structs/ResourceManager__Fields.h>
#if defined(IL2CPP_STRUCT_ResourceManager__Fields_DEFINED)
#define IL2CPP_STRUCT_ResourceManager_DEFINED
struct ResourceManager__Class;
struct ResourceManager {
    struct ResourceManager__Class* klass;
    MonitorData* monitor;
    struct ResourceManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResourceManager_FWDDECL)
#define IL2CPP_STRUCT_ResourceManager_FWDDECL
#include <Modloader/app/structs/ResourceManager__Class.h>
#endif
#undef IL2CPP_STRUCT_ResourceManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceManager_DEFINED) && !defined(IL2CPP_STRUCT_ResourceManager_FWDDECL)
#include <Modloader/app/structs/ResourceManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
