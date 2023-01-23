#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceManager_ResourceManagerMediator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceManager_ResourceManagerMediator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceManager_ResourceManagerMediator_DEFINED)
#include <Modloader/app/structs/ResourceManager_ResourceManagerMediator__Fields.h>
#if defined(IL2CPP_STRUCT_ResourceManager_ResourceManagerMediator__Fields_DEFINED)
#define IL2CPP_STRUCT_ResourceManager_ResourceManagerMediator_DEFINED
struct ResourceManager_ResourceManagerMediator__Class;
struct ResourceManager_ResourceManagerMediator {
    struct ResourceManager_ResourceManagerMediator__Class* klass;
    MonitorData* monitor;
    struct ResourceManager_ResourceManagerMediator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResourceManager_ResourceManagerMediator_FWDDECL)
#define IL2CPP_STRUCT_ResourceManager_ResourceManagerMediator_FWDDECL
#include <Modloader/app/structs/ResourceManager_ResourceManagerMediator__Class.h>
#endif
#undef IL2CPP_STRUCT_ResourceManager_ResourceManagerMediator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceManager_ResourceManagerMediator_DEFINED) && !defined(IL2CPP_STRUCT_ResourceManager_ResourceManagerMediator_FWDDECL)
#include <Modloader/app/structs/ResourceManager_ResourceManagerMediator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceManager_ResourceManagerMediator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
