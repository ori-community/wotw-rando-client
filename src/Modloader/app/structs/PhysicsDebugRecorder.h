#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsDebugRecorder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsDebugRecorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsDebugRecorder_DEFINED)
#include <Modloader/app/structs/PhysicsDebugRecorder__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsDebugRecorder__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsDebugRecorder_DEFINED
struct PhysicsDebugRecorder__Class;
struct PhysicsDebugRecorder {
    struct PhysicsDebugRecorder__Class* klass;
    MonitorData* monitor;
    struct PhysicsDebugRecorder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsDebugRecorder_FWDDECL)
#define IL2CPP_STRUCT_PhysicsDebugRecorder_FWDDECL
#include <Modloader/app/structs/PhysicsDebugRecorder__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsDebugRecorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsDebugRecorder_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsDebugRecorder_FWDDECL)
#include <Modloader/app/structs/PhysicsDebugRecorder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsDebugRecorder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
