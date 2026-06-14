#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateMachineBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateMachineBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMachineBehaviour_DEFINED)
#include <Modloader/app/structs/StateMachineBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_StateMachineBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_StateMachineBehaviour_DEFINED
struct StateMachineBehaviour__Class;
struct StateMachineBehaviour {
    struct StateMachineBehaviour__Class* klass;
    MonitorData* monitor;
    struct StateMachineBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateMachineBehaviour_FWDDECL)
#define IL2CPP_STRUCT_StateMachineBehaviour_FWDDECL
#include <Modloader/app/structs/StateMachineBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_StateMachineBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMachineBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_StateMachineBehaviour_FWDDECL)
#include <Modloader/app/structs/StateMachineBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateMachineBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
