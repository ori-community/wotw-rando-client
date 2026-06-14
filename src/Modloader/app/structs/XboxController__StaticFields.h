#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxController__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxController__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XboxController__StaticFields_DEFINED
struct Object;
struct Thread;
struct XboxController__Array;
struct XboxController__StaticFields {
    bool keepRunning;
    int32_t updateFrequency;
    int32_t waitTime;
    bool isRunning;
    struct Object* SyncLock;
    struct Thread* pollingThread;
    struct XboxController__Array* Controllers;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxController__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XboxController__StaticFields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Thread.h>
#include <Modloader/app/structs/XboxController__Array.h>
#endif
#undef IL2CPP_STRUCT_XboxController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxController__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XboxController__StaticFields_FWDDECL)
#include <Modloader/app/structs/XboxController__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxController__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
