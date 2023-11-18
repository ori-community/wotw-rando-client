#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILoopInterested_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILoopInterested_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILoopInterested_DEFINED)
#define IL2CPP_STRUCT_ILoopInterested_DEFINED
struct ILoopInterested__Class;
struct ILoopInterested {
    struct ILoopInterested__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILoopInterested_FWDDECL)
#define IL2CPP_STRUCT_ILoopInterested_FWDDECL
#include <Modloader/app/structs/ILoopInterested__Class.h>
#endif
#undef IL2CPP_STRUCT_ILoopInterested_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILoopInterested_DEFINED) && !defined(IL2CPP_STRUCT_ILoopInterested_FWDDECL)
#include <Modloader/app/structs/ILoopInterested.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILoopInterested.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
