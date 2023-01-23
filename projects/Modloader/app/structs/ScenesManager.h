#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManager_DEFINED)
#include <Modloader/app/structs/ScenesManager__Fields.h>
#if defined(IL2CPP_STRUCT_ScenesManager__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenesManager_DEFINED
struct ScenesManager__Class;
struct ScenesManager {
    struct ScenesManager__Class* klass;
    MonitorData* monitor;
    struct ScenesManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenesManager_FWDDECL)
#define IL2CPP_STRUCT_ScenesManager_FWDDECL
#include <Modloader/app/structs/ScenesManager__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenesManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManager_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManager_FWDDECL)
#include <Modloader/app/structs/ScenesManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
