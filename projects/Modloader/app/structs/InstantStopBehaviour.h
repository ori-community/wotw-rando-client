#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantStopBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantStopBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantStopBehaviour_DEFINED)
#include <Modloader/app/structs/InstantStopBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_InstantStopBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_InstantStopBehaviour_DEFINED
struct InstantStopBehaviour__Class;
struct InstantStopBehaviour {
    struct InstantStopBehaviour__Class* klass;
    MonitorData* monitor;
    struct InstantStopBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantStopBehaviour_FWDDECL)
#define IL2CPP_STRUCT_InstantStopBehaviour_FWDDECL
#include <Modloader/app/structs/InstantStopBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_InstantStopBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantStopBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_InstantStopBehaviour_FWDDECL)
#include <Modloader/app/structs/InstantStopBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantStopBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
