#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimedDoor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimedDoor_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedDoor_DEFINED)
#include <Modloader/app/structs/TimedDoor__Fields.h>
#if defined(IL2CPP_STRUCT_TimedDoor__Fields_DEFINED)
#define IL2CPP_STRUCT_TimedDoor_DEFINED
struct TimedDoor__Class;
struct TimedDoor {
    struct TimedDoor__Class* klass;
    MonitorData* monitor;
    struct TimedDoor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimedDoor_FWDDECL)
#define IL2CPP_STRUCT_TimedDoor_FWDDECL
#include <Modloader/app/structs/TimedDoor__Class.h>
#endif
#undef IL2CPP_STRUCT_TimedDoor_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedDoor_DEFINED) && !defined(IL2CPP_STRUCT_TimedDoor_FWDDECL)
#include <Modloader/app/structs/TimedDoor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimedDoor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
