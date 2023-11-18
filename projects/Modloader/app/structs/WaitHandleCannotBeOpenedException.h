#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitHandleCannotBeOpenedException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitHandleCannotBeOpenedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitHandleCannotBeOpenedException_DEFINED)
#include <Modloader/app/structs/WaitHandleCannotBeOpenedException__Fields.h>
#if defined(IL2CPP_STRUCT_WaitHandleCannotBeOpenedException__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitHandleCannotBeOpenedException_DEFINED
struct WaitHandleCannotBeOpenedException__Class;
struct WaitHandleCannotBeOpenedException {
    struct WaitHandleCannotBeOpenedException__Class* klass;
    MonitorData* monitor;
    struct WaitHandleCannotBeOpenedException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitHandleCannotBeOpenedException_FWDDECL)
#define IL2CPP_STRUCT_WaitHandleCannotBeOpenedException_FWDDECL
#include <Modloader/app/structs/WaitHandleCannotBeOpenedException__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitHandleCannotBeOpenedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitHandleCannotBeOpenedException_DEFINED) && !defined(IL2CPP_STRUCT_WaitHandleCannotBeOpenedException_FWDDECL)
#include <Modloader/app/structs/WaitHandleCannotBeOpenedException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitHandleCannotBeOpenedException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
