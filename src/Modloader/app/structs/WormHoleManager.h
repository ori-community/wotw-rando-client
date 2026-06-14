#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WormHoleManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WormHoleManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormHoleManager_DEFINED)
#include <Modloader/app/structs/WormHoleManager__Fields.h>
#if defined(IL2CPP_STRUCT_WormHoleManager__Fields_DEFINED)
#define IL2CPP_STRUCT_WormHoleManager_DEFINED
struct WormHoleManager__Class;
struct WormHoleManager {
    struct WormHoleManager__Class* klass;
    MonitorData* monitor;
    struct WormHoleManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WormHoleManager_FWDDECL)
#define IL2CPP_STRUCT_WormHoleManager_FWDDECL
#include <Modloader/app/structs/WormHoleManager__Class.h>
#endif
#undef IL2CPP_STRUCT_WormHoleManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormHoleManager_DEFINED) && !defined(IL2CPP_STRUCT_WormHoleManager_FWDDECL)
#include <Modloader/app/structs/WormHoleManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WormHoleManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
