#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IState_DEFINED)
#define IL2CPP_STRUCT_IState_DEFINED
struct IState__Class;
struct IState {
    struct IState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IState_FWDDECL)
#define IL2CPP_STRUCT_IState_FWDDECL
#include <Modloader/app/structs/IState__Class.h>
#endif
#undef IL2CPP_STRUCT_IState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IState_DEFINED) && !defined(IL2CPP_STRUCT_IState_FWDDECL)
#include <Modloader/app/structs/IState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
