#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputCacheManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputCacheManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputCacheManager_DEFINED)
#include <Modloader/app/structs/InputCacheManager__Fields.h>
#if defined(IL2CPP_STRUCT_InputCacheManager__Fields_DEFINED)
#define IL2CPP_STRUCT_InputCacheManager_DEFINED
struct InputCacheManager__Class;
struct InputCacheManager {
    struct InputCacheManager__Class* klass;
    MonitorData* monitor;
    struct InputCacheManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputCacheManager_FWDDECL)
#define IL2CPP_STRUCT_InputCacheManager_FWDDECL
#include <Modloader/app/structs/InputCacheManager__Class.h>
#endif
#undef IL2CPP_STRUCT_InputCacheManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputCacheManager_DEFINED) && !defined(IL2CPP_STRUCT_InputCacheManager_FWDDECL)
#include <Modloader/app/structs/InputCacheManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputCacheManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
