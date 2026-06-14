#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StackFrame_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StackFrame_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackFrame_DEFINED)
#include <Modloader/app/structs/StackFrame__Fields.h>
#if defined(IL2CPP_STRUCT_StackFrame__Fields_DEFINED)
#define IL2CPP_STRUCT_StackFrame_DEFINED
struct StackFrame__Class;
struct StackFrame {
    struct StackFrame__Class* klass;
    MonitorData* monitor;
    struct StackFrame__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StackFrame_FWDDECL)
#define IL2CPP_STRUCT_StackFrame_FWDDECL
#include <Modloader/app/structs/StackFrame__Class.h>
#endif
#undef IL2CPP_STRUCT_StackFrame_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackFrame_DEFINED) && !defined(IL2CPP_STRUCT_StackFrame_FWDDECL)
#include <Modloader/app/structs/StackFrame.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StackFrame.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
