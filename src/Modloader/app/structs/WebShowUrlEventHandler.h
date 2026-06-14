#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebShowUrlEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebShowUrlEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebShowUrlEventHandler_DEFINED)
#include <Modloader/app/structs/WebShowUrlEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_WebShowUrlEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_WebShowUrlEventHandler_DEFINED
struct WebShowUrlEventHandler__Class;
struct WebShowUrlEventHandler {
    struct WebShowUrlEventHandler__Class* klass;
    MonitorData* monitor;
    struct WebShowUrlEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebShowUrlEventHandler_FWDDECL)
#define IL2CPP_STRUCT_WebShowUrlEventHandler_FWDDECL
#include <Modloader/app/structs/WebShowUrlEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_WebShowUrlEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebShowUrlEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_WebShowUrlEventHandler_FWDDECL)
#include <Modloader/app/structs/WebShowUrlEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebShowUrlEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
