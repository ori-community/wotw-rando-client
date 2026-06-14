#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Stack_StackDebugView_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Stack_StackDebugView_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stack_StackDebugView_DEFINED)
#include <Modloader/app/structs/Stack_StackDebugView__Fields.h>
#if defined(IL2CPP_STRUCT_Stack_StackDebugView__Fields_DEFINED)
#define IL2CPP_STRUCT_Stack_StackDebugView_DEFINED
struct Stack_StackDebugView__Class;
struct Stack_StackDebugView {
    struct Stack_StackDebugView__Class* klass;
    MonitorData* monitor;
    struct Stack_StackDebugView__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Stack_StackDebugView_FWDDECL)
#define IL2CPP_STRUCT_Stack_StackDebugView_FWDDECL
#include <Modloader/app/structs/Stack_StackDebugView__Class.h>
#endif
#undef IL2CPP_STRUCT_Stack_StackDebugView_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stack_StackDebugView_DEFINED) && !defined(IL2CPP_STRUCT_Stack_StackDebugView_FWDDECL)
#include <Modloader/app/structs/Stack_StackDebugView.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Stack_StackDebugView.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
