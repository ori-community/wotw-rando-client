#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseInvokableCall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseInvokableCall_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseInvokableCall_DEFINED)
#define IL2CPP_STRUCT_BaseInvokableCall_DEFINED
struct BaseInvokableCall__Class;
struct BaseInvokableCall {
    struct BaseInvokableCall__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BaseInvokableCall_FWDDECL)
#define IL2CPP_STRUCT_BaseInvokableCall_FWDDECL
#include <Modloader/app/structs/BaseInvokableCall__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseInvokableCall_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseInvokableCall_DEFINED) && !defined(IL2CPP_STRUCT_BaseInvokableCall_FWDDECL)
#include <Modloader/app/structs/BaseInvokableCall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseInvokableCall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
