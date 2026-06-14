#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebuggerHiddenAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebuggerHiddenAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggerHiddenAttribute_DEFINED)
#define IL2CPP_STRUCT_DebuggerHiddenAttribute_DEFINED
struct DebuggerHiddenAttribute__Class;
struct DebuggerHiddenAttribute {
    struct DebuggerHiddenAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DebuggerHiddenAttribute_FWDDECL)
#define IL2CPP_STRUCT_DebuggerHiddenAttribute_FWDDECL
#include <Modloader/app/structs/DebuggerHiddenAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DebuggerHiddenAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggerHiddenAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DebuggerHiddenAttribute_FWDDECL)
#include <Modloader/app/structs/DebuggerHiddenAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebuggerHiddenAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
