#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EndPointManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EndPointManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndPointManager_DEFINED)
#define IL2CPP_STRUCT_EndPointManager_DEFINED
struct EndPointManager__Class;
struct EndPointManager {
    struct EndPointManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EndPointManager_FWDDECL)
#define IL2CPP_STRUCT_EndPointManager_FWDDECL
#include <Modloader/app/structs/EndPointManager__Class.h>
#endif
#undef IL2CPP_STRUCT_EndPointManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndPointManager_DEFINED) && !defined(IL2CPP_STRUCT_EndPointManager_FWDDECL)
#include <Modloader/app/structs/EndPointManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EndPointManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
