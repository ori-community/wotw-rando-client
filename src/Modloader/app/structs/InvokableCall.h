#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvokableCall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvokableCall_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvokableCall_DEFINED)
#include <Modloader/app/structs/InvokableCall__Fields.h>
#if defined(IL2CPP_STRUCT_InvokableCall__Fields_DEFINED)
#define IL2CPP_STRUCT_InvokableCall_DEFINED
struct InvokableCall__Class;
struct InvokableCall {
    struct InvokableCall__Class* klass;
    MonitorData* monitor;
    struct InvokableCall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvokableCall_FWDDECL)
#define IL2CPP_STRUCT_InvokableCall_FWDDECL
#include <Modloader/app/structs/InvokableCall__Class.h>
#endif
#undef IL2CPP_STRUCT_InvokableCall_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvokableCall_DEFINED) && !defined(IL2CPP_STRUCT_InvokableCall_FWDDECL)
#include <Modloader/app/structs/InvokableCall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvokableCall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
