#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Checkpoint_Events_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Checkpoint_Events_INITIALIZING
#if !defined(IL2CPP_STRUCT_Checkpoint_Events_DEFINED)
#define IL2CPP_STRUCT_Checkpoint_Events_DEFINED
struct Checkpoint_Events__Class;
struct Checkpoint_Events {
    struct Checkpoint_Events__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Checkpoint_Events_FWDDECL)
#define IL2CPP_STRUCT_Checkpoint_Events_FWDDECL
#include <Modloader/app/structs/Checkpoint_Events__Class.h>
#endif
#undef IL2CPP_STRUCT_Checkpoint_Events_INITIALIZING
#if !defined(IL2CPP_STRUCT_Checkpoint_Events_DEFINED) && !defined(IL2CPP_STRUCT_Checkpoint_Events_FWDDECL)
#include <Modloader/app/structs/Checkpoint_Events.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Checkpoint_Events.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
