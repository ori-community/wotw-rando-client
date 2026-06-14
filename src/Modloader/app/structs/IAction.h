#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAction_DEFINED)
#define IL2CPP_STRUCT_IAction_DEFINED
struct IAction__Class;
struct IAction {
    struct IAction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAction_FWDDECL)
#define IL2CPP_STRUCT_IAction_FWDDECL
#include <Modloader/app/structs/IAction__Class.h>
#endif
#undef IL2CPP_STRUCT_IAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAction_DEFINED) && !defined(IL2CPP_STRUCT_IAction_FWDDECL)
#include <Modloader/app/structs/IAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
