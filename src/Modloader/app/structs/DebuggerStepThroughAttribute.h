#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebuggerStepThroughAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebuggerStepThroughAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggerStepThroughAttribute_DEFINED)
#define IL2CPP_STRUCT_DebuggerStepThroughAttribute_DEFINED
struct DebuggerStepThroughAttribute__Class;
struct DebuggerStepThroughAttribute {
    struct DebuggerStepThroughAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DebuggerStepThroughAttribute_FWDDECL)
#define IL2CPP_STRUCT_DebuggerStepThroughAttribute_FWDDECL
#include <Modloader/app/structs/DebuggerStepThroughAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DebuggerStepThroughAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggerStepThroughAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DebuggerStepThroughAttribute_FWDDECL)
#include <Modloader/app/structs/DebuggerStepThroughAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebuggerStepThroughAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
