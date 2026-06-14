#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDesiredUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDesiredUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDesiredUberState_DEFINED)
#define IL2CPP_STRUCT_IDesiredUberState_DEFINED
struct IDesiredUberState__Class;
struct IDesiredUberState {
    struct IDesiredUberState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDesiredUberState_FWDDECL)
#define IL2CPP_STRUCT_IDesiredUberState_FWDDECL
#include <Modloader/app/structs/IDesiredUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_IDesiredUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDesiredUberState_DEFINED) && !defined(IL2CPP_STRUCT_IDesiredUberState_FWDDECL)
#include <Modloader/app/structs/IDesiredUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDesiredUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
