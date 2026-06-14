#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceFallbackManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceFallbackManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceFallbackManager_DEFINED)
#include <Modloader/app/structs/ResourceFallbackManager__Fields.h>
#if defined(IL2CPP_STRUCT_ResourceFallbackManager__Fields_DEFINED)
#define IL2CPP_STRUCT_ResourceFallbackManager_DEFINED
struct ResourceFallbackManager__Class;
struct ResourceFallbackManager {
    struct ResourceFallbackManager__Class* klass;
    MonitorData* monitor;
    struct ResourceFallbackManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResourceFallbackManager_FWDDECL)
#define IL2CPP_STRUCT_ResourceFallbackManager_FWDDECL
#include <Modloader/app/structs/ResourceFallbackManager__Class.h>
#endif
#undef IL2CPP_STRUCT_ResourceFallbackManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceFallbackManager_DEFINED) && !defined(IL2CPP_STRUCT_ResourceFallbackManager_FWDDECL)
#include <Modloader/app/structs/ResourceFallbackManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceFallbackManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
