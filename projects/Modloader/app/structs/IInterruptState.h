#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IInterruptState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IInterruptState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInterruptState_DEFINED)
#define IL2CPP_STRUCT_IInterruptState_DEFINED
struct IInterruptState__Class;
struct IInterruptState {
    struct IInterruptState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IInterruptState_FWDDECL)
#define IL2CPP_STRUCT_IInterruptState_FWDDECL
#include <Modloader/app/structs/IInterruptState__Class.h>
#endif
#undef IL2CPP_STRUCT_IInterruptState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInterruptState_DEFINED) && !defined(IL2CPP_STRUCT_IInterruptState_FWDDECL)
#include <Modloader/app/structs/IInterruptState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IInterruptState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
