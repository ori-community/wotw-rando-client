#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvokableCallList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvokableCallList_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvokableCallList_DEFINED)
#include <Modloader/app/structs/InvokableCallList__Fields.h>
#if defined(IL2CPP_STRUCT_InvokableCallList__Fields_DEFINED)
#define IL2CPP_STRUCT_InvokableCallList_DEFINED
struct InvokableCallList__Class;
struct InvokableCallList {
    struct InvokableCallList__Class* klass;
    MonitorData* monitor;
    struct InvokableCallList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvokableCallList_FWDDECL)
#define IL2CPP_STRUCT_InvokableCallList_FWDDECL
#include <Modloader/app/structs/InvokableCallList__Class.h>
#endif
#undef IL2CPP_STRUCT_InvokableCallList_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvokableCallList_DEFINED) && !defined(IL2CPP_STRUCT_InvokableCallList_FWDDECL)
#include <Modloader/app/structs/InvokableCallList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvokableCallList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
