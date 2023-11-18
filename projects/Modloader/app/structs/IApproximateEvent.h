#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IApproximateEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IApproximateEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IApproximateEvent_DEFINED)
#define IL2CPP_STRUCT_IApproximateEvent_DEFINED
struct IApproximateEvent__Class;
struct IApproximateEvent {
    struct IApproximateEvent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IApproximateEvent_FWDDECL)
#define IL2CPP_STRUCT_IApproximateEvent_FWDDECL
#include <Modloader/app/structs/IApproximateEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_IApproximateEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IApproximateEvent_DEFINED) && !defined(IL2CPP_STRUCT_IApproximateEvent_FWDDECL)
#include <Modloader/app/structs/IApproximateEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IApproximateEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
