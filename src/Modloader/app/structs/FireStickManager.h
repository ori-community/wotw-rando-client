#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FireStickManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FireStickManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_FireStickManager_DEFINED)
#define IL2CPP_STRUCT_FireStickManager_DEFINED
struct FireStickManager__Class;
struct FireStickManager {
    struct FireStickManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FireStickManager_FWDDECL)
#define IL2CPP_STRUCT_FireStickManager_FWDDECL
#include <Modloader/app/structs/FireStickManager__Class.h>
#endif
#undef IL2CPP_STRUCT_FireStickManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_FireStickManager_DEFINED) && !defined(IL2CPP_STRUCT_FireStickManager_FWDDECL)
#include <Modloader/app/structs/FireStickManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FireStickManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
