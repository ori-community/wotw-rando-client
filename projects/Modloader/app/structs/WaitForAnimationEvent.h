#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForAnimationEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForAnimationEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForAnimationEvent_DEFINED)
#include <Modloader/app/structs/WaitForAnimationEvent__Fields.h>
#if defined(IL2CPP_STRUCT_WaitForAnimationEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForAnimationEvent_DEFINED
struct WaitForAnimationEvent__Class;
struct WaitForAnimationEvent {
    struct WaitForAnimationEvent__Class* klass;
    MonitorData* monitor;
    struct WaitForAnimationEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForAnimationEvent_FWDDECL)
#define IL2CPP_STRUCT_WaitForAnimationEvent_FWDDECL
#include <Modloader/app/structs/WaitForAnimationEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitForAnimationEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForAnimationEvent_DEFINED) && !defined(IL2CPP_STRUCT_WaitForAnimationEvent_FWDDECL)
#include <Modloader/app/structs/WaitForAnimationEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForAnimationEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
